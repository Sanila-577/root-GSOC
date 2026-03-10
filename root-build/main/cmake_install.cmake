# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/main

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootn.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootn.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootn.exe")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootn.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootn.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/roots.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/roots.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/roots.exe")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/roots.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/roots.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/root.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/root.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/root.exe")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/root.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/root.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/hadd")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hadd" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hadd")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hadd")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/hadd")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootnb.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootnb.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootnb.exe")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootnb.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootnb.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootreadspeed")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootreadspeed" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootreadspeed")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootreadspeed")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootreadspeed")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ RENAME "rootdrawtree" FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootdrawtree")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ RENAME "rooteventselector" FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rooteventselector")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ RENAME "rootmkdir" FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootmkdir")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ RENAME "rootmv" FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootmv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ RENAME "rootprint" FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootprint")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ RENAME "rootslimtree" FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootslimtree")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/main/python/cmdLineUtils.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/.venv/bin/python3.12 -m py_compile $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmdLineUtils.py)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/.venv/bin/python3.12 -O -m py_compile $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmdLineUtils.py)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootcling")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcling" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcling")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcling")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcling")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/genreflex")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/genreflex" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/genreflex")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/genreflex")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/genreflex")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootcint")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcint" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcint")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcint")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcint")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootbrowse")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootbrowse" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootbrowse")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootbrowse")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootbrowse")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootcp")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcp" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcp")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcp")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootcp")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootrm")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootrm" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootrm")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootrm")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootrm")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "applications" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootls")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootls" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootls")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/XROOTD-prefix/lib"
      -delete_rpath "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
      -add_rpath "@loader_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootls")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/rootls")
    endif()
  endif()
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/main/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
