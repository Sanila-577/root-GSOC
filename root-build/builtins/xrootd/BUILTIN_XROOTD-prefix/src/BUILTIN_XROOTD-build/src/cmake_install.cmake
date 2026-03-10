# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdVersion.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XProtocol" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XProtocol/XProtocol.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XProtocol" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XProtocol/XPtypes.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdBuffer.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdJob.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdLink.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdLinkMatch.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdProtocol.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdScheduler.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdTcpMonPin.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNet.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetAddr.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetAddrInfo.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetUtils.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetCmsNotify.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetConnect.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetOpts.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetPMark.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetSockAddr.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetSocket.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucBuffer.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCRC.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCache.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCacheCM.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCacheStats.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCallBack.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucChain.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucDLlist.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucEnv.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucErrInfo.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucGatherConf.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucGMap.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucHash.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucHash.icc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucIOVec.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucLock.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucName2Name.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucPinPath.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucPinObject.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucRash.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucRash.icc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucSFVec.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucStream.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucString.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucTList.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucTable.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucTokenizer.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucTrace.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucUtils.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOuca2x.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucEnum.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCompiler.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosix.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixCache.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixCallBack.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixExtern.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixOsDep.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixXrootd.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixXrootdPath.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSec" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSec/XrdSecAttr.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSec" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSec/XrdSecEntity.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSec" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSec/XrdSecEntityAttr.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSec" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSec/XrdSecEntityPin.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSec" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSec/XrdSecInterface.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysAtomics.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysError.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysFD.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysHeaders.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysLogger.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysLogPI.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysPageSize.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysPlatform.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysPlugin.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysPthread.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysSemWait.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysTimer.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysXAttr.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysXSLock.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdXml" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdXml/XrdXmlReader.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdXrootd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdXrootd/XrdXrootdRedirPI.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdXrootd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdXrootd/XrdXrootdMonData.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdXrootd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdXrootd/XrdXrootdGStream.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdXrootd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdXrootd/XrdXrootdBridge.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdHttp" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdHttp/XrdHttpSecXtractor.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdPoll.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/Xrd" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/Xrd/XrdSendQ.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetPeer.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetBuffer.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdNet" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdNet/XrdNetIF.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdSecsss" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSecsss/XrdSecsssID.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdSys" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdSys/XrdSysPriv.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucCRC32C.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucExport.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucGatherConf.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucPList.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucN2NLoader.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucPinLoader.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucTUtils.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdOuc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdOuc/XrdOucPrivateUtils.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdPosix" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdPosix/XrdPosixMap.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipCDFH.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipDataDescriptor.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipEOCD.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipExtra.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipLFH.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipUtils.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipZIP64EOCD.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdZip" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD/src/XrdZip/XrdZipZIP64EOCDL.hh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdUtils.3.0.0.dylib;/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdUtils.3.dylib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib" TYPE SHARED_LIBRARY FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib/libXrdUtils.3.0.0.dylib"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib/libXrdUtils.3.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdUtils.3.0.0.dylib"
      "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdUtils.3.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "$ORIGIN"
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
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib/libXrdUtils.dylib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib" TYPE SHARED_LIBRARY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/lib/libXrdUtils.dylib")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XProtocol/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/Xrd/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdCks/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdNet/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSut/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSys/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdOuc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdTls/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdRmc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdApps/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdCrypto/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdPosix/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSec/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSecgsi/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSeckrb5/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSecpwd/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSecsss/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSecunix/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdSecztn/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdXml/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdCl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdClHttp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/XrdEc/cmake_install.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/BUILTIN_XROOTD-prefix/src/BUILTIN_XROOTD-build/src/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
