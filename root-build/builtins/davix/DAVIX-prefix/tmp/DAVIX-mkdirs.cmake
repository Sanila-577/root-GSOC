# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX")
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX")
endif()
file(MAKE_DIRECTORY
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/tmp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-stamp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-stamp${cfgdir}") # cfgdir has leading slash
endif()
