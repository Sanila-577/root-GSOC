# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ui5/eve7/rcore")
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ui5/eve7/rcore")
endif()
file(MAKE_DIRECTORY
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/src/RENDERCORE-build"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/tmp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/src/RENDERCORE-stamp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/src"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/src/RENDERCORE-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/src/RENDERCORE-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/RENDERCORE-prefix/src/RENDERCORE-stamp${cfgdir}") # cfgdir has leading slash
endif()
