# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.25.2)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(vtk-wheel-sdk-populate NONE)



include(ExternalProject)
ExternalProject_Add(vtk-wheel-sdk-populate
                     "URL" "https://vtk.org/files/wheel-sdks/vtk-wheel-sdk-9.2.2-cp310-cp310-manylinux_2_17_x86_64.manylinux2014_x86_64.tar.xz"
                    SOURCE_DIR          "/home/mortacious/Projects/vtk_openxr/_deps/vtk-wheel-sdk-9.2.2-cp310-cp310-manylinux_2_17_x86_64.manylinux2014_x86_64"
                    BINARY_DIR          "/home/mortacious/Projects/vtk_openxr/vtk-wheel-sdk-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
                    USES_TERMINAL_PATCH     YES
)


