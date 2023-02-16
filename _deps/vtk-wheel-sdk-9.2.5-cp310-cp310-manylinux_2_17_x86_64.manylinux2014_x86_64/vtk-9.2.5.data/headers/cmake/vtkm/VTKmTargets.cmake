# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.19)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget vtkm_vectorization_flags vtkm_compiler_flags vtkm_developer_flags vtkmdiympi_nompi vtkmdiy diy_developer_flags vtkm_diy vtkm_lodepng vtkm_loguru vtkm_optionparser vtkm_lcl vtkm_cont vtkm_cont_testing vtkm_worklet vtkm_filter_core vtkm_filter_extra vtkm_filter vtkm_filter_clean_grid vtkm_filter_connected_components vtkm_filter_contour vtkm_filter_density_estimate vtkm_filter_entity_extraction vtkm_filter_image_processing vtkm_filter_field_conversion vtkm_filter_field_transform vtkm_filter_geometry_refinement vtkm_filter_mesh_info vtkm_filter_vector_analysis vtkm_filter_zfp vtkm_io vtkm_source)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target vtkm_vectorization_flags
add_library(vtkm_vectorization_flags INTERFACE IMPORTED)

set_target_properties(vtkm_vectorization_flags PROPERTIES
  INTERFACE_COMPILE_OPTIONS "\$<\$<COMPILE_LANGUAGE:CXX>:>"
)

# Create imported target vtkm_compiler_flags
add_library(vtkm_compiler_flags INTERFACE IMPORTED)

set_target_properties(vtkm_compiler_flags PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_COMPILE_OPTIONS "\$<\$<COMPILE_LANGUAGE:CXX>:-ffunction-sections>"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m"
)

# Create imported target vtkm_developer_flags
add_library(vtkm_developer_flags INTERFACE IMPORTED)

set_target_properties(vtkm_developer_flags PROPERTIES
  INTERFACE_COMPILE_OPTIONS "\$<\$<COMPILE_LANGUAGE:CXX>:-Wall;-Wcast-align;-Wextra;-Wpointer-arith;-Wformat;-Wformat-security;-Wshadow;-Wunused;-fno-common;-Wno-unused-function;-Wchar-subscripts;-Wfloat-conversion;-Wodr>"
)

# Create imported target vtkmdiympi_nompi
add_library(vtkmdiympi_nompi SHARED IMPORTED)

# Create imported target vtkmdiy
add_library(vtkmdiy INTERFACE IMPORTED)

set_target_properties(vtkmdiy PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "VTKMDIY_NO_THREADS;VTKMDIY_MPI_AS_LIB"
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/diy/vtkmdiy/include;${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/diy/vtkmdiy/include/vtkmdiy/mpi"
  INTERFACE_LINK_LIBRARIES "vtkmdiympi_nompi"
  INTERFACE_SYSTEM_INCLUDE_DIRECTORIES "vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/diy/vtkmdiy/include;vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/diy/vtkmdiy/include/vtkmdiy/mpi"
)

# Create imported target diy_developer_flags
add_library(diy_developer_flags INTERFACE IMPORTED)

set_target_properties(diy_developer_flags PROPERTIES
  INTERFACE_COMPILE_OPTIONS "\$<\$<COMPILE_LANGUAGE:CXX>:-Wall;-Wcast-align;-Wchar-subscripts;-Wextra;-Wpointer-arith;-Wformat;-Wformat-security;-Wshadow;-Wunused;-fno-common;-Wfloat-conversion;-Wno-sign-conversion;-Wno-sign-compare;-Wno-cast-align;-Wodr>"
)

# Create imported target vtkm_diy
add_library(vtkm_diy INTERFACE IMPORTED)

set_target_properties(vtkm_diy PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/diy"
  INTERFACE_LINK_LIBRARIES "vtkmdiy;vtkmdiympi_nompi"
)

# Create imported target vtkm_lodepng
add_library(vtkm_lodepng STATIC IMPORTED)

set_target_properties(vtkm_lodepng PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/lodepng"
)

# Create imported target vtkm_loguru
add_library(vtkm_loguru INTERFACE IMPORTED)

set_target_properties(vtkm_loguru PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_11"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/loguru"
  INTERFACE_LINK_LIBRARIES "dl;Threads::Threads"
)

# Create imported target vtkm_optionparser
add_library(vtkm_optionparser INTERFACE IMPORTED)

set_target_properties(vtkm_optionparser PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/optionparser"
)

# Create imported target vtkm_lcl
add_library(vtkm_lcl INTERFACE IMPORTED)

set_target_properties(vtkm_lcl PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_11"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/vtk-9.2.5.data/headers/vtk-9.2/vtkvtkm/vtk-m/vtkm/thirdparty/lcl/vtkmlcl"
)

# Create imported target vtkm_cont
add_library(vtkm_cont SHARED IMPORTED)

set_target_properties(vtkm_cont PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_compiler_flags;Threads::Threads;vtkm_optionparser;vtkm_diy;vtkm_lcl"
)

# Create imported target vtkm_cont_testing
add_library(vtkm_cont_testing SHARED IMPORTED)

set_target_properties(vtkm_cont_testing PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_cont"
)

# Create imported target vtkm_worklet
add_library(vtkm_worklet SHARED IMPORTED)

set_target_properties(vtkm_worklet PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_cont"
)

# Create imported target vtkm_filter_core
add_library(vtkm_filter_core SHARED IMPORTED)

set_target_properties(vtkm_filter_core PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_cont;vtkm_worklet"
)

# Create imported target vtkm_filter_extra
add_library(vtkm_filter_extra SHARED IMPORTED)

set_target_properties(vtkm_filter_extra PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_cont;vtkm_worklet"
)

# Create imported target vtkm_filter
add_library(vtkm_filter INTERFACE IMPORTED)

set_target_properties(vtkm_filter PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_filter_extra;vtkm_filter_core;vtkm_filter_clean_grid;vtkm_filter_connected_components;vtkm_filter_contour;vtkm_filter_density_estimate;vtkm_filter_entity_extraction;vtkm_filter_image_processing;vtkm_filter_field_conversion;vtkm_filter_field_transform;vtkm_filter_geometry_refinement;vtkm_filter_mesh_info;vtkm_filter_vector_analysis;vtkm_filter_zfp"
)

# Create imported target vtkm_filter_clean_grid
add_library(vtkm_filter_clean_grid SHARED IMPORTED)

set_target_properties(vtkm_filter_clean_grid PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_filter_core"
)

# Create imported target vtkm_filter_connected_components
add_library(vtkm_filter_connected_components SHARED IMPORTED)

set_target_properties(vtkm_filter_connected_components PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_filter_core"
)

# Create imported target vtkm_filter_contour
add_library(vtkm_filter_contour SHARED IMPORTED)

set_target_properties(vtkm_filter_contour PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_filter_core;vtkm_filter_vector_analysis"
)

# Create imported target vtkm_filter_density_estimate
add_library(vtkm_filter_density_estimate SHARED IMPORTED)

set_target_properties(vtkm_filter_density_estimate PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_filter_core"
)

# Create imported target vtkm_filter_entity_extraction
add_library(vtkm_filter_entity_extraction SHARED IMPORTED)

set_target_properties(vtkm_filter_entity_extraction PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_filter_core"
)

# Create imported target vtkm_filter_image_processing
add_library(vtkm_filter_image_processing SHARED IMPORTED)

set_target_properties(vtkm_filter_image_processing PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_filter_field_conversion
add_library(vtkm_filter_field_conversion SHARED IMPORTED)

set_target_properties(vtkm_filter_field_conversion PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_filter_field_transform
add_library(vtkm_filter_field_transform SHARED IMPORTED)

set_target_properties(vtkm_filter_field_transform PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_filter_geometry_refinement
add_library(vtkm_filter_geometry_refinement SHARED IMPORTED)

set_target_properties(vtkm_filter_geometry_refinement PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_filter_mesh_info
add_library(vtkm_filter_mesh_info SHARED IMPORTED)

set_target_properties(vtkm_filter_mesh_info PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_filter_vector_analysis
add_library(vtkm_filter_vector_analysis SHARED IMPORTED)

set_target_properties(vtkm_filter_vector_analysis PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_filter_zfp
add_library(vtkm_filter_zfp SHARED IMPORTED)

set_target_properties(vtkm_filter_zfp PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_worklet;vtkm_filter_core"
)

# Create imported target vtkm_io
add_library(vtkm_io SHARED IMPORTED)

set_target_properties(vtkm_io PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_cont"
)

# Create imported target vtkm_source
add_library(vtkm_source SHARED IMPORTED)

set_target_properties(vtkm_source PROPERTIES
  INTERFACE_LINK_LIBRARIES "vtkm_cont;vtkm_filter_field_conversion"
)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/VTKmTargets-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
