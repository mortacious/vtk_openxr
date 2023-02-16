# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/mortacious/Projects/vtk_openxr/_deps/vtk-wheel-sdk-9.2.2-cp310-cp310-manylinux_2_17_x86_64.manylinux2014_x86_64"
  "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-build"
  "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix"
  "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix/tmp"
  "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix/src/vtk-wheel-sdk-populate-stamp"
  "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix/src"
  "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix/src/vtk-wheel-sdk-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix/src/vtk-wheel-sdk-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-subbuild/vtk-wheel-sdk-populate-prefix/src/vtk-wheel-sdk-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
