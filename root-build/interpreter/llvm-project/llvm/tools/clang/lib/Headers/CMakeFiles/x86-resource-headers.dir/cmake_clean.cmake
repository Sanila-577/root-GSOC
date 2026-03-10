file(REMOVE_RECURSE
  "arm_bf16.h"
  "arm_cde.h"
  "arm_fp16.h"
  "arm_mve.h"
  "arm_neon.h"
  "arm_sme.h"
  "arm_sve.h"
  "arm_vector_types.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/x86-resource-headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
