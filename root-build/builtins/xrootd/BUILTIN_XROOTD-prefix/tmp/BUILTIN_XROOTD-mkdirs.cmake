# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD")
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD")
endif()
file(MAKE_DIRECTORY
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/tmp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-stamp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-stamp${cfgdir}") # cfgdir has leading slash
endif()
