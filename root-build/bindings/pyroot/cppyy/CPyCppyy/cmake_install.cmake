# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/libCPyCppyy.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCPyCppyy.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCPyCppyy.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/."
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCPyCppyy.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libCPyCppyy.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cppyy" TYPE SHARED_LIBRARY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cppyy/libcppyy.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cppyy/libcppyy.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cppyy/libcppyy.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/.."
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cppyy/libcppyy.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cppyy/libcppyy.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CPyCppyy" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy/include/CPyCppyy/API.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy/include/CPyCppyy/Reflex.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy/include/CPyCppyy/PyResult.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy/include/CPyCppyy/CommonDefs.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy/include/CPyCppyy/PyException.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/bindings/pyroot/cppyy/CPyCppyy/include/CPyCppyy/DispatchPtr.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bindings/pyroot/cppyy/CPyCppyy/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
