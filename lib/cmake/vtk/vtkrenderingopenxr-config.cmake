include(CMakeFindDependencyMacro)

set("${CMAKE_FIND_PACKAGE_NAME}_CMAKE_MODULE_PATH" "/home/mortacious/Projects/vtk_openxr/_deps/vtk-wheel-sdk-9.2.5-cp310-cp310-manylinux_2_17_x86_64.manylinux2014_x86_64/vtk-9.2.5.data/headers/cmake")

list(INSERT CMAKE_MODULE_PATH 0
  "${CMAKE_CURRENT_LIST_DIR}"
  "${${CMAKE_FIND_PACKAGE_NAME}_CMAKE_MODULE_PATH}"
  )

include("${CMAKE_CURRENT_LIST_DIR}/${CMAKE_FIND_PACKAGE_NAME}-targets.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/${CMAKE_FIND_PACKAGE_NAME}-vtk-module-properties.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/${CMAKE_FIND_PACKAGE_NAME}-vtk-find-package-helpers.cmake" OPTIONAL)

set(_vtk_external_package_depends "")
foreach(_vtk_external_package_depend IN LISTS _vtk_external_package_depends)
  find_dependency(${_vtk_external_package_depend})
endforeach()
unset(_vtk_external_package_depends)

include("${CMAKE_CURRENT_LIST_DIR}/${CMAKE_FIND_PACKAGE_NAME}-vtk-module-find-packages.cmake")

set("${CMAKE_FIND_PACKAGE_NAME}_PYTHON_VERSION" "3")
set("${CMAKE_FIND_PACKAGE_NAME}_WRAP_PYTHON" "ON")
set("${CMAKE_FIND_PACKAGE_NAME}_BUILD_PYTHON_WRAPPERS" "ON")
if (${CMAKE_FIND_PACKAGE_NAME}_WRAP_PYTHON AND ${CMAKE_FIND_PACKAGE_NAME}_BUILD_PYTHON_WRAPPERS)
  include("${CMAKE_CURRENT_LIST_DIR}/vtkmodules-vtk-python-module-properties.cmake")
  set("${CMAKE_FIND_PACKAGE_NAME}_PYTHONPATH" "")
endif ()
