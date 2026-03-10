# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

if("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/pcre/pcre-8.43.tar.bz2" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/pcre/pcre-8.43.tar.bz2")
  message(FATAL_ERROR "File not found: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/pcre/pcre-8.43.tar.bz2")
endif()

if("SHA256" STREQUAL "")
  message(WARNING "File cannot be verified since no URL_HASH specified")
  return()
endif()

if("f1026a7f455b8ba726d6fff94d5f989e55ad55f7b4eb946938803ac2aa41743c" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(VERBOSE "verifying file...
     file='/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/pcre/pcre-8.43.tar.bz2'")

file("SHA256" "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/pcre/pcre-8.43.tar.bz2" actual_value)

if(NOT "${actual_value}" STREQUAL "f1026a7f455b8ba726d6fff94d5f989e55ad55f7b4eb946938803ac2aa41743c")
  message(FATAL_ERROR "error: SHA256 hash of
  /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/builtins/pcre/pcre-8.43.tar.bz2
does not match expected value
  expected: 'f1026a7f455b8ba726d6fff94d5f989e55ad55f7b4eb946938803ac2aa41743c'
    actual: '${actual_value}'
")
endif()

message(VERBOSE "verifying file... done")
