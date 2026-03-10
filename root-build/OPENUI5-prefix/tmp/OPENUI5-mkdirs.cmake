# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ui5/distribution")
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ui5/distribution")
endif()
file(MAKE_DIRECTORY
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/src/OPENUI5-build"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/tmp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/src/OPENUI5-stamp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/src"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/src/OPENUI5-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/src/OPENUI5-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/OPENUI5-prefix/src/OPENUI5-stamp${cfgdir}") # cfgdir has leading slash
endif()
