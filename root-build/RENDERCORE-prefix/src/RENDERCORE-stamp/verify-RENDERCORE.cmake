# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

if("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/rendercore/RenderCore-1.8.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/rendercore/RenderCore-1.8.tar.gz")
  message(FATAL_ERROR "File not found: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/rendercore/RenderCore-1.8.tar.gz")
endif()

if("SHA256" STREQUAL "")
  message(WARNING "File cannot be verified since no URL_HASH specified")
  return()
endif()

if("2ab84800ec1aaf36671e463a09e3befbe97b06b2547f97ec05fe16ef1351c79a" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(VERBOSE "verifying file...
     file='/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/rendercore/RenderCore-1.8.tar.gz'")

file("SHA256" "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/rendercore/RenderCore-1.8.tar.gz" actual_value)

if(NOT "${actual_value}" STREQUAL "2ab84800ec1aaf36671e463a09e3befbe97b06b2547f97ec05fe16ef1351c79a")
  message(FATAL_ERROR "error: SHA256 hash of
  /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/rendercore/RenderCore-1.8.tar.gz
does not match expected value
  expected: '2ab84800ec1aaf36671e463a09e3befbe97b06b2547f97ec05fe16ef1351c79a'
    actual: '${actual_value}'
")
endif()

message(VERBOSE "verifying file... done")
