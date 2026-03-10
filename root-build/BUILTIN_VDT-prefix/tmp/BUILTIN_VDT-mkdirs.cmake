# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT")
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT")
endif()
file(MAKE_DIRECTORY
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-build"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/tmp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-stamp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-stamp${cfgdir}") # cfgdir has leading slash
endif()
