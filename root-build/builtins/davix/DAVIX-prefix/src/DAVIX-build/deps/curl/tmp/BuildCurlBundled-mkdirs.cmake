# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX/deps/curl")
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX/deps/curl")
endif()
file(MAKE_DIRECTORY
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl/tmp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl/src/BuildCurlBundled-stamp"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl/src"
  "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl/src/BuildCurlBundled-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl/src/BuildCurlBundled-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/DAVIX-prefix/src/DAVIX-build/deps/curl/src/BuildCurlBundled-stamp${cfgdir}") # cfgdir has leading slash
endif()
