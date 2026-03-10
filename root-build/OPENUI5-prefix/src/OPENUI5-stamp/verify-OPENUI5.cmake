# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

if("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/openui5/openui5.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/openui5/openui5.tar.gz")
  message(FATAL_ERROR "File not found: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/openui5/openui5.tar.gz")
endif()

if("SHA256" STREQUAL "")
  message(WARNING "File cannot be verified since no URL_HASH specified")
  return()
endif()

if("b9e6495d8640302d9cf2fe3c99331311335aaab0f48794565ebd69ecc7449e58" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(VERBOSE "verifying file...
     file='/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/openui5/openui5.tar.gz'")

file("SHA256" "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/openui5/openui5.tar.gz" actual_value)

if(NOT "${actual_value}" STREQUAL "b9e6495d8640302d9cf2fe3c99331311335aaab0f48794565ebd69ecc7449e58")
  message(FATAL_ERROR "error: SHA256 hash of
  /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/openui5/openui5.tar.gz
does not match expected value
  expected: 'b9e6495d8640302d9cf2fe3c99331311335aaab0f48794565ebd69ecc7449e58'
    actual: '${actual_value}'
")
endif()

message(VERBOSE "verifying file... done")
