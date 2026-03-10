# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/nlohmann/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/pcre/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xxhash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/zstd/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/xrootd/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/builtins/davix/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/" FILES_MATCHING REGEX "/libtbb[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/libvdt.dylib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "extra-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/include/vdt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ui5/distribution/" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ui5/distribution/" FILES_MATCHING REGEX "/[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libraries" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ui5/eve7/rcore/" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ui5/eve7/rcore/" FILES_MATCHING REGEX "/[^/]*$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/gitinfo.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/core/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/math/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/hist/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/tree/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/io/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/net/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/graf2d/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/graf3d/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/gui/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/montecarlo/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/geom/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/rootx/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/misc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/main/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bindings/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/sql/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/tmva/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/roofit/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/include/ROOT.modulemap")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/" FILES_MATCHING REGEX "/[^/]*\\.pcm$" REGEX "/modules\\.idx$" REGEX "/jupyroot$" EXCLUDE REGEX "/jsmva$" EXCLUDE REGEX "/python[^/]*$" EXCLUDE REGEX "/cmake$" EXCLUDE REGEX "/pkgconfig$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "tests" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tutorials" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/tutorials/hsimple.root")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ginclude/RConfigure.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ROOTConfig-version.cmake"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/installtree/ROOTUseFile.cmake"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/installtree/ROOTConfig.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets.cmake"
         "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/ROOTConfig-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/cmake/ROOTConfig-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/ROOTConfig-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/CMakeFiles/Export/272ceadb8458515b2ae4b5630a6029cc/ROOTConfig-targets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/thisroot.sh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/thisroot.csh"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/thisroot.fish"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/setxrd.csh"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/installtree/root-config"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/roots"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/bin/rootssh"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ginclude/RConfigOptions.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/ginclude/compiledata.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/root.mimes"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/system.rootrc"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/system.rootauthrc"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/system.rootdaemonrc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/LICENSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/README")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/etc/" USE_SOURCE_PERMISSIONS REGEX "/notebook\\/jsmva$" EXCLUDE REGEX "/system\\.rootrc$" EXCLUDE REGEX "/system\\.rootauthrc$" EXCLUDE REGEX "/system\\.rootdaemonrc$" EXCLUDE REGEX "/root\\.mimes$" EXCLUDE REGEX "/[^/]*\\.in$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/fonts" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/fonts/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/icons" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/icons/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/macros" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/macros/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/js" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/js/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/ui5" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/ui5/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/man/" REGEX "/h2root\\.1$" EXCLUDE REGEX "/g2root\\.1$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "tests" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tutorials" TYPE DIRECTORY DIR_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/tutorials/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/cmake/modules/RootMacros.cmake"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/cmake/modules/RootTestDriver.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/cmake/modules" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/cmake/modules/FindVdt.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/notebook" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/notebook/jupyter_notebook_config.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/notebook/kernels/root" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/notebook/kernels/root/kernel.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/cling/plugins" TYPE DIRECTORY FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/etc/cling/plugins/")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/install_local_manifest.txt"
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
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
