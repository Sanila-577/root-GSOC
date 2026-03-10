# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdCl" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClAnyObject.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClBuffer.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClConstants.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClCopyProcess.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClDefaultEnv.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClEnv.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFile.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFileSystem.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFileSystemUtils.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClMonitor.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClStatus.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClURL.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClXRootDResponses.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClOptional.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClPlugInInterface.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClPropertyList.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClLog.hh"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdCl" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClJobManager.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClMessage.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClPlugInManager.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClPostMaster.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClPostMasterInterfaces.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClTransportManager.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClResponseJob.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClSyncQueue.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClZipArchive.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClZipCache.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClOperations.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClOperationHandlers.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClOperationTimeout.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClArg.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClCtx.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFwd.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClParallelOperation.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFileOperations.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFileSystemOperations.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClFinalOperation.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClUtils.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClXRootDTransport.hh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdCl/XrdClZipOperations.hh"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdCl.3.0.0.dylib;/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdCl.3.dylib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib" TYPE SHARED_LIBRARY FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib/libXrdCl.3.0.0.dylib"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib/libXrdCl.3.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdCl.3.0.0.dylib"
      "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdCl.3.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib"
        -add_rpath "@loader_path"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" -x "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdCl.dylib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib" TYPE SHARED_LIBRARY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib/libXrdCl.dylib")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdCl/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
