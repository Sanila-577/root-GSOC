file(REMOVE_RECURSE
  "../../../../lib/libclangInstallAPI.a"
  "../../../../lib/libclangInstallAPI.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangInstallAPI.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
