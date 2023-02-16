# Install script for directory: /home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mortacious/Projects/vtk_openxr/_skbuild/linux-x86_64-3.10/cmake-install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtkrenderingopenxr-0.1" TYPE FILE FILES
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRRenderWindow.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRRenderWindowInteractor.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRCamera.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRControlsHelper.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRModel.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRRenderer.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRInteractorStyle.h"
    "/home/mortacious/Projects/vtk_openxr/_skbuild/linux-x86_64-3.10/cmake-build/vtkRenderingOpenXR/vtkRenderingOpenXRModule.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXR.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/XrExtensions.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRUtilities.h"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtkOpenXRManager.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk/hierarchy/vtkRenderingOpenXR" TYPE FILE RENAME "vtkRenderingOpenXR-hierarchy.txt" FILES "/home/mortacious/Projects/vtk_openxr/_skbuild/linux-x86_64-3.10/cmake-build/lib/vtk/hierarchy/vtkRenderingOpenXR/vtkRenderingOpenXR-hierarchy.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtkmodules" TYPE SHARED_LIBRARY FILES
    "/home/mortacious/Projects/vtk_openxr/_skbuild/linux-x86_64-3.10/cmake-build/lib/libvtkRenderingOpenXR.so.0.1.0"
    "/home/mortacious/Projects/vtk_openxr/_skbuild/linux-x86_64-3.10/cmake-build/lib/libvtkRenderingOpenXR.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so.0.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "development" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtkmodules" TYPE SHARED_LIBRARY FILES "/home/mortacious/Projects/vtk_openxr/_skbuild/linux-x86_64-3.10/cmake-build/lib/libvtkRenderingOpenXR.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtk_openxr_actions.json"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtk_openxr_binding_htc_vive_controller.json"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtk_openxr_binding_khr_simple_controller.json"
    "/home/mortacious/Projects/vtk_openxr/_deps/VTK/Rendering/OpenXR/vtk_openxr_binding_knuckles.json"
    )
endif()

