# Install script for directory: /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/builtins.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/float.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/inttypes.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/iso646.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/limits.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/module.modulemap"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdalign.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdarg.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg___gnuc_va_list.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg___va_copy.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_header_macro.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_va_arg.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_va_copy.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_va_list.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdatomic.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdbool.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdckdint.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stddef.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_header_macro.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_null.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_nullptr_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_offsetof.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_ptrdiff_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_rsize_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_size_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_unreachable.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_wchar_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_wint_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdint.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tgmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/unwind.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/varargs.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm_acle.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm_cmse.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/armintr.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm64intr.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm_neon_sve_bridge.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_texture_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hexagon_circ_brev_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hexagon_protos.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hexagon_types.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hvx_hexagon_protos.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_stdlib.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/larchintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lasxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lsxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/msa.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/opencl-c.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/opencl-c-base.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/altivec.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/htmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/htmxlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_bitmanip.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_corev_alu.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_crypto.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_ntlh.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sifive_vector.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/s390intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vecintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/velintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/velintrin_gen.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/velintrin_approx.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/adcintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/adxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ammintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxavx512intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxbf16transposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxcomplexintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxcomplextransposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxfp16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxfp16transposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxfp8intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxmovrsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxmovrstransposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxtf32intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxtf32transposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxtransposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512bf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512convertintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512minmaxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512niintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512satcvtdsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512satcvtintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2bf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2convertintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2copyintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2minmaxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2niintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2satcvtdsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2satcvtintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512fp16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlfp16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxifmaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxneconvertintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxvnniint16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxvnniint8intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/bmiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cetintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/clwbintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/clzerointrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cmpccxaddintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/crc32intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/emmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/f16cintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/fma4intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/fmaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/gfniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hresetintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ia32intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/immintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lwpintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mm3dnow.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movdirintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movrs_avx10_2_512intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movrs_avx10_2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movrsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/nmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/pkuintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/pmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/popcntintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/prfchiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ptrauth.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/raointintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/rdpruintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/rtmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/serializeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sgxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sha512intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/shaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sm3intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sm4intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sm4evexintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/smmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tbmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/uintrintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/usermsrintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vaesintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/wmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/x86intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xopintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xtestintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cet.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cpuid.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/gpuintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/nvptxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amdgpuintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/wasm_simd128.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/intrin0.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vadefs.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/yvals_core.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mm_malloc.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_neon.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_fp16.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_sve.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_sme.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_bf16.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_mve.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_cde.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_vector_types.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/cuda_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/cmath"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/cuda_wrappers/bits" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/bits/shared_ptr_base.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/bits/basic_string.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/bits/basic_string.tcc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/ppc_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/nmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/bmiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/bmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/immintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/x86intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/x86gprintrin.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/llvm_libc_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/assert.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/stdio.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/stdlib.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/string.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/ctype.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/inttypes.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_libc_wrappers/time.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/openmp_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/llvm_offload_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_offload_wrappers/__llvm_offload.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_offload_wrappers/__llvm_offload_host.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_offload_wrappers/__llvm_offload_device.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "clang-resource-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/zos_wrappers" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/zos_wrappers/builtins.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "core-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/builtins.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/float.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/inttypes.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/iso646.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/limits.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/module.modulemap"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdalign.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdarg.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg___gnuc_va_list.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg___va_copy.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_header_macro.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_va_arg.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_va_copy.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stdarg_va_list.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdatomic.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdbool.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdckdint.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stddef.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_header_macro.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_null.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_nullptr_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_offsetof.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_ptrdiff_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_rsize_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_size_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_unreachable.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_wchar_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__stddef_wint_t.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdint.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tgmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/unwind.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/varargs.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "arm-common-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm_acle.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_neon.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_fp16.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "arm-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm_cmse.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/armintr.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_mve.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_cde.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "aarch64-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm64intr.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/arm_neon_sve_bridge.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_sve.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_sme.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_bf16.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/arm_vector_types.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "cuda-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/cuda_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/cmath"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "cuda-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/cuda_wrappers/bits" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/bits/shared_ptr_base.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/bits/basic_string.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cuda_wrappers/bits/basic_string.tcc"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "cuda-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_texture_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "hexagon-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hexagon_circ_brev_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hexagon_protos.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hexagon_types.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hvx_hexagon_protos.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "hip-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_stdlib.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "loongarch-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/larchintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lasxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lsxintrin.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "mips-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/msa.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "ppc-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/ppc_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/nmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/bmiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/bmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/immintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/x86intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ppc_wrappers/x86gprintrin.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "ppc-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/altivec.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "ppc-htm-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/htmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/htmxlintrin.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "riscv-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_bitmanip.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_corev_alu.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_crypto.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/riscv_ntlh.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sifive_vector.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "systemz-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/s390intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vecintrin.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "systemz-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/zos_wrappers" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/zos_wrappers/builtins.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "ve-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/velintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/velintrin_gen.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/velintrin_approx.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "webassembly-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/wasm_simd128.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "x86-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/adcintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/adxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ammintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxavx512intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxbf16transposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxcomplexintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxcomplextransposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxfp16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxfp16transposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxfp8intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxmovrsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxmovrstransposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxtf32intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxtf32transposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amxtransposeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512bf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512convertintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512minmaxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512niintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512satcvtdsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2_512satcvtintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2bf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2convertintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2copyintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2minmaxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2niintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2satcvtdsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx10_2satcvtintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512fp16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlfp16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxifmaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxneconvertintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxvnniint16intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxvnniint8intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/bmiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cetintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/clwbintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/clzerointrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cmpccxaddintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/crc32intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/emmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/f16cintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/fma4intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/fmaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/gfniintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hresetintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ia32intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/immintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lwpintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mm3dnow.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movdirintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movrs_avx10_2_512intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movrs_avx10_2intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/movrsintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/nmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/pkuintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/pmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/popcntintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/prfchiintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ptrauth.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/raointintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/rdpruintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/rtmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/serializeintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sgxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sha512intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/shaintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sm3intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sm4intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/sm4evexintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/smmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tbmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/uintrintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/usermsrintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vaesintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/wmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/x86intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xmmintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xopintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/xtestintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cet.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/cpuid.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "gpu-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/gpuintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/nvptxintrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/amdgpuintrin.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "hlsl-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hlsl.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "hlsl-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/hlsl" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hlsl/hlsl_basic_types.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hlsl/hlsl_intrinsics.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/hlsl/hlsl_detail.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "opencl-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/opencl-c.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/opencl-c-base.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "openmp-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/openmp_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "openmp-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include/llvm_offload_wrappers" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_offload_wrappers/__llvm_offload.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_offload_wrappers/__llvm_offload_host.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/llvm_offload_wrappers/__llvm_offload_device.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "utility-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/mm_malloc.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "windows-resource-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/20/include" TYPE FILE FILES
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/intrin0.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/intrin.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/vadefs.h"
    "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/interpreter/llvm-project/clang/lib/Headers/yvals_core.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/interpreter/llvm-project/llvm/tools/clang/lib/Headers/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
