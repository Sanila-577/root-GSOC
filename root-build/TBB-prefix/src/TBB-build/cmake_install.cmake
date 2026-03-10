# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/include/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/include" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBTargets.cmake"
         "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/CMakeFiles/Export/526775fb007aa590f39e32b012264a48/TBBTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBTargets.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/CMakeFiles/Export/526775fb007aa590f39e32b012264a48/TBBTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
     "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBTargets-release.cmake")
    if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
      message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
    endif()
    file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/CMakeFiles/Export/526775fb007aa590f39e32b012264a48/TBBTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBConfig.cmake;/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB/TBBConfigVersion.cmake")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/TBB" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/TBBConfig.cmake"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/TBBConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/TBB" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB/README.md")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/src/tbb/cmake_install.cmake")
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/cmake/post_install/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/install_local_manifest.txt"
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
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/TBB-prefix/src/TBB-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
