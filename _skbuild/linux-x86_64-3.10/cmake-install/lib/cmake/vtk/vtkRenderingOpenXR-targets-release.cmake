#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "VTK::RenderingOpenXR" for configuration "Release"
set_property(TARGET VTK::RenderingOpenXR APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(VTK::RenderingOpenXR PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "VTK::CommonDataModel;VTK::CommonSystem;VTK::CommonTransforms;VTK::FiltersSources;VTK::ImagingSources;VTK::InteractionWidgets;VTK::jsoncpp;VTK::vtksys"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so.0.1.0"
  IMPORTED_SONAME_RELEASE "libvtkRenderingOpenXR.so.1"
  )

list(APPEND _cmake_import_check_targets VTK::RenderingOpenXR )
list(APPEND _cmake_import_check_files_for_VTK::RenderingOpenXR "${_IMPORT_PREFIX}/lib/vtkmodules/libvtkRenderingOpenXR.so.0.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
