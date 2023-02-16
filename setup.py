import os
import re
import sys
from pathlib import Path
import platform
import subprocess
import shutil
from setuptools import setup, find_packages
from skbuild import setup


vtk_version = os.getenv('VTK_WHEEL_SDK_VERSION', None)
if vtk_version is None:
    import vtk
    vtk_version = vtk.__version__

vtk_openxr_module_source_dir = Path(__file__).parent.resolve()

def auto_download_vtk_wheel_sdk():
    # Automatically download the VTK wheel SDK based upon the current platform
    # and python version.
    # If the download location changes, we may need to change the logic here.
    # Returns the path to the unpacked SDK.

    base_url = 'https://vtk.org/files/wheel-sdks/'
    prefix = 'vtk-wheel-sdk'
    default_sdk_version = vtk_version
    # The user can set the sdk version via an environment variable
    sdk_version = os.getenv('VTK_WHEEL_SDK_VERSION', default_sdk_version)
    py_version_short = ''.join(map(str, sys.version_info[:2]))

    py_version = f'cp{py_version_short}-cp{py_version_short}'
    if sys.version_info[:2] < (3, 8):
        # Need to add 'm' at the end
        py_version += 'm'

    platform_suffixes = {
        'linux': 'manylinux_2_17_x86_64.manylinux2014_x86_64',
        'darwin': 'macosx_10_10_x86_64',
        'win32': 'win_amd64',
    }

    if sys.platform not in platform_suffixes:
        raise NotImplementedError(sys.platform)

    platform_suffix = platform_suffixes[sys.platform]

    if sys.platform == 'darwin':
        is_arm = (
            platform.machine() == 'arm64' or
            # ARCHFLAGS: see https://github.com/pypa/cibuildwheel/discussions/997
            os.getenv('ARCHFLAGS') == '-arch arm64'
        )
        if is_arm:
            # It's an arm64 build
            platform_suffix = 'macosx_11_0_arm64'

    dir_name = f'{prefix}-{sdk_version}-{py_version}-{platform_suffix}'
    default_install_path = Path('.').resolve() / f'_deps/{dir_name}'
    install_path = Path(os.getenv('VTK_WHEEL_SDK_INSTALL_PATH',
                                  default_install_path))

    if install_path.exists():
        # It already exists, just return it
        return install_path.as_posix()

    # Need to download it
    full_name = f'{prefix}-{sdk_version}-{py_version}-{platform_suffix}.tar.xz'
    url = f'{base_url}{full_name}'

    script_path = str(vtk_openxr_module_source_dir /
                      'FetchFromUrl.cmake')

    cmd = [
        'cmake',
        f'-DFETCH_FROM_URL_PROJECT_NAME={prefix}',
        f'-DFETCH_FROM_URL_INSTALL_LOCATION={install_path.as_posix()}',
        f'-DFETCH_FROM_URL_URL={url}',
        '-P', script_path,
    ]
    subprocess.check_call(cmd)

    return install_path.as_posix()


def auto_download_vtk_external_module():
    # Automatically download the VTKExternalModule repository.
    # Returns the path to the VTKExternalModule directory.

    external_module_path = Path('.').resolve() / '_deps/VTKExternalModule'
    if external_module_path.exists():
        # It must have already been downloaded. Just return it.
        return external_module_path.as_posix()

    # Run the script to download it
    script_path = str(vtk_openxr_module_source_dir /
                      'FetchVTKExternalModule.cmake')
    cmd = [
        'cmake',
        '-DFETCH_VTKExternalModule_INSTALL_LOCATION=' +
        external_module_path.as_posix(),
        '-P', script_path,
    ]
    subprocess.check_call(cmd)
    return external_module_path.as_posix()


def auto_download_vtk_source_tree():
    # Automatically downloads the vtk source tree corresponding to the installed vtk version

    vtk_source_path = Path('.').resolve() / '_deps/VTK'
    if vtk_source_path.exists():
        # It must have already been downloaded. Just return it.
        return vtk_source_path.as_posix()
    # Run the script to download it
    script_path = str(vtk_openxr_module_source_dir /
                      'FetchVTKSourcetree.cmake')
    cmd = [
        'cmake',
        '-DFETCH_VTK_INSTALL_LOCATION=' +
            vtk_source_path.as_posix(),
        '-DVTK_VERSION=' + str(vtk_version),
        '-P', script_path,
    ]
    subprocess.check_call(cmd)
    return vtk_source_path.as_posix()


vtk_wheel_sdk_path = os.getenv('VTK_WHEEL_SDK_PATH')
if vtk_wheel_sdk_path is None:
    vtk_wheel_sdk_path = auto_download_vtk_wheel_sdk()

# check that vtkRenderingOpenXR is not part of the wheel
cmake_glob = list(Path(vtk_wheel_sdk_path).glob('**/vtkmodules/vtkRenderingOpenXR.pyi'))
if len(cmake_glob) >= 1:
    raise ValueError("RenderingOpenXR is already part of the python wheels for vtk. Aborting.")

# Find the cmake dir
cmake_glob = list(Path(vtk_wheel_sdk_path).glob('**/headers/cmake'))
if len(cmake_glob) != 1:
    raise Exception('Unable to find cmake directory')

vtk_wheel_sdk_cmake_path = cmake_glob[0]

vtk_external_module_path = os.getenv('VTK_EXTERNAL_MODULE_PATH')
if vtk_external_module_path is None:
    # If it was not provided, clone it into a temporary directory
    # Since we are using pyproject.toml, it will get removed automatically
    vtk_external_module_path = auto_download_vtk_external_module()


vtk_source_tree_path = os.getenv('VTK_SOURCE_TREE_PATH')
if vtk_source_tree_path is None:
    # If it was not provided, clone it into a temporary directory
    # Since we are using pyproject.toml, it will get removed automatically
    vtk_source_tree_path = auto_download_vtk_source_tree()

vtk_openxr_sources_path = (Path(vtk_source_tree_path) / "Rendering/OpenXR")


python3_executable = os.getenv('Python3_EXECUTABLE')
if python3_executable is None:
    python3_executable = shutil.which('python')

if python3_executable is None:
    msg = 'Unable find python executable, please set Python3_EXECUTABLE'
    raise Exception(msg)


cmake_args = [
    '-DVTK_MODULE_NAME:STRING=RenderingOpenXR',
    f'-DVTK_MODULE_SOURCE_DIR:PATH={vtk_openxr_sources_path}',
    f'-DVTK_MODULE_CMAKE_MODULE_PATH:PATH={vtk_wheel_sdk_cmake_path}',
    f'-DVTK_DIR:PATH={vtk_wheel_sdk_cmake_path}',
    '-DCMAKE_INSTALL_LIBDIR:STRING=lib',
    f'-DPython3_EXECUTABLE:FILEPATH={python3_executable}',
    '-DVTK_WHEEL_BUILD:BOOL=ON',
    '-S', vtk_external_module_path,
]

setup(
    name="vtk-openxr",
    version=vtk_version,
    author="Felix Igelbrink",
    author_email="felix.igelbrink@uni-osnabrueck.de",
    description="VTK's openXR module built as a separate python package",
    license="MIT",
    classifiers=[
        'Private :: Do Not Upload to pypi server',
    ],
    packages=['vtkmodules', 'vtk_openxr'],
    package_dir={'vtkmodules': 'lib/vtkmodules'},
    install_requires=['numpy'],
    cmake_args=cmake_args,
    zip_safe=False,
)