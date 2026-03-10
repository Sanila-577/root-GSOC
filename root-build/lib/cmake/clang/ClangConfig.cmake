# This file allows users to call find_package(Clang) and pick up our targets.



set(LLVM_VERSION 20.1.8)
find_package(LLVM ${LLVM_VERSION} EXACT REQUIRED CONFIG
             HINTS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/./lib/cmake/llvm")

set(CLANG_EXPORTED_TARGETS "clang-tblgen;clang-resource-headers;clangBasic;clangAPINotes;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangCrossTU;clangSema;clangCodeGen;clangAnalysis;clangAnalysisFlowSensitive;clangAnalysisFlowSensitiveModels;clangEdit;clangExtractAPI;clangRewrite;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangToolingInclusions;clangToolingInclusionsStdlib;clangToolingRefactoring;clangToolingASTDiff;clangToolingSyntax;clangDependencyScanning;clangTransformer;clangTooling;clangDirectoryWatcher;clangIndex;clangIndexSerialization;clangInstallAPI;clangStaticAnalyzerCore;clangStaticAnalyzerCheckers;clangStaticAnalyzerFrontend;clangFormat;clangInterpreter;clangSupport;clang-cpp")
set(CLANG_CMAKE_DIR "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/clang")
set(CLANG_INCLUDE_DIRS "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/include;/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/include")
set(CLANG_LINK_CLANG_DYLIB "OFF")

# Provide all our library targets to users.
include("/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib/cmake/clang/ClangTargets.cmake")

# By creating clang-tablegen-targets here, subprojects that depend on Clang's
# tablegen-generated headers can always depend on this target whether building
# in-tree with Clang or not.
if(NOT TARGET clang-tablegen-targets)
  add_custom_target(clang-tablegen-targets)
endif()
