# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vdt" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/asin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/atan.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/tanh.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/atan2.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/cos.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/exp.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/identity.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/inv.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/log.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/sincos.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/sin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/sqrt.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/tan.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/vdtcore_common.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT/include/vdtMath.h"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-build/src/cmake_install.cmake")
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-build/lib/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-build/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/BUILTIN_VDT-prefix/src/BUILTIN_VDT-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
