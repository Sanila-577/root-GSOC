/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64PostLegalizerCombinerImpl Combiner Match Table                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GICOMBINER_DEPS
#include "llvm/ADT/SparseBitVector.h"
namespace llvm {
extern cl::OptionCategory GICombinerOptionCategory;
} // end namespace llvm
#endif // ifdef GET_GICOMBINER_DEPS

#ifdef GET_GICOMBINER_TYPES
struct AArch64PostLegalizerCombinerImplRuleConfig {
  SparseBitVector<> DisabledRules;

  bool isRuleEnabled(unsigned RuleID) const;
  bool parseCommandLineOption();
  bool setRuleEnabled(StringRef RuleIdentifier);
  bool setRuleDisabled(StringRef RuleIdentifier);
};

static std::optional<uint64_t> getRuleIdxForIdentifier(StringRef RuleIdentifier) {
  uint64_t I;
  // getAtInteger(...) returns false on success
  bool Parsed = !RuleIdentifier.getAsInteger(0, I);
  if (Parsed)
    return I;

#ifndef NDEBUG
  switch (RuleIdentifier.size()) {
  default: break;
  case 9:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "opy_prop", 8) != 0)
        break;
      return 0;	 // "copy_prop"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_const", 8) != 0)
        break;
      return 23;	 // "mul_const"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "r_to_bsp", 8) != 0)
        break;
      return 84;	 // "or_to_bsp"
    }
    break;
  case 10:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2p_to_p2i", 9) != 0)
        break;
      return 55;	 // "i2p_to_p2i"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "2i_to_i2p", 9) != 0)
        break;
      return 54;	 // "p2i_to_i2p"
    }
    break;
  case 11:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dd_sub_reg", 10) != 0)
        break;
      return 60;	 // "add_sub_reg"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_addos", 10) != 0)
        break;
      return 31;	 // "match_addos"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_cst", 10) != 0)
        break;
      return 41;	 // "unmerge_cst"
    }
    break;
  case 12:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_or", 11) != 0)
        break;
      return 22;	 // "redundant_or"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_sext", 11) != 0)
        break;
      return 6;	 // "sext_of_sext"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_zext", 11) != 0)
        break;
      return 4;	 // "zext_of_zext"
    }
    break;
  case 13:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'l':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "oad_and_mask", 12) != 0)
        break;
      return 15;	 // "load_and_mask"
    case 'm':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tch_selects", 11) != 0)
          break;
        return 36;	 // "match_selects"
      case 'e':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "rge_unmerge", 11) != 0)
          break;
        return 40;	 // "merge_unmerge"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_and", 12) != 0)
        break;
      return 19;	 // "redundant_and"
    case 'u':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_", 7) != 0)
        break;
      switch (RuleIdentifier[8]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "erge", 4) != 0)
          break;
        return 39;	 // "unmerge_merge"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+9, "ndef", 4) != 0)
          break;
        return 42;	 // "unmerge_undef"
      }
      break;
    }
    break;
  case 14:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_", 9) != 0)
        break;
      switch (RuleIdentifier[10]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 10;	 // "anyext_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+11, "ext", 3) != 0)
          break;
        return 9;	 // "anyext_of_zext"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_same_val", 13) != 0)
        break;
      return 51;	 // "binop_same_val"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "neg_fneg_fold", 13) != 0)
        break;
      return 57;	 // "fneg_fneg_fold"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_anyext", 13) != 0)
        break;
      return 7;	 // "sext_of_anyext"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ext_of_anyext", 13) != 0)
        break;
      return 5;	 // "zext_of_anyext"
    }
    break;
  case 15:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 14;	 // "extending_loads"
    case 'o':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "verlapping_and", 14) != 0)
        break;
      return 69;	 // "overlapping_and"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_same_val", 14) != 0)
        break;
      return 49;	 // "select_same_val"
    }
    break;
  case 16:	 // 7 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_of_anyext", 15) != 0)
        break;
      return 8;	 // "anyext_of_anyext"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_mul_cmlt", 15) != 0)
        break;
      return 89;	 // "combine_mul_cmlt"
    case 's':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_", 6) != 0)
        break;
      switch (RuleIdentifier[7]) {
      default: break;
      case 't':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "o_minmax", 8) != 0)
          break;
        return 83;	 // "select_to_minmax"
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+8, "ndef_cmp", 8) != 0)
          break;
        return 33;	 // "select_undef_cmp"
      }
      break;
    case 't':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_", 11) != 0)
        break;
      switch (RuleIdentifier[12]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 2;	 // "truncate_of_sext"
      case 'z':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+13, "ext", 3) != 0)
          break;
        return 1;	 // "truncate_of_zext"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_fp_zero", 15) != 0)
        break;
      return 71;	 // "undef_to_fp_zero"
    }
    break;
  case 17:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nyext_trunc_fold", 16) != 0)
        break;
      return 56;	 // "anyext_trunc_fold"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rase_undef_store", 16) != 0)
        break;
      return 81;	 // "erase_undef_store"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "elect_to_iminmax", 16) != 0)
        break;
      return 35;	 // "select_to_iminmax"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ndef_to_int_zero", 16) != 0)
        break;
      return 72;	 // "undef_to_int_zero"
    }
    break;
  case 18:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_to_zero", 17) != 0)
        break;
      return 52;	 // "binop_left_to_zero"
    case 'f':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ld_merge_to_zext", 16) != 0)
          break;
        return 37;	 // "fold_merge_to_zext"
      case 'p':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "trunc_fpext_fold", 16) != 0)
          break;
        return 65;	 // "fptrunc_fpext_fold"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runcate_of_anyext", 17) != 0)
        break;
      return 3;	 // "truncate_of_anyext"
    }
    break;
  case 19:	 // 10 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_to_zero", 18) != 0)
        break;
      return 53;	 // "binop_right_to_zero"
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_binop", 18) != 0)
        break;
      return 47;	 // "constant_fold_binop"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nteger_of_truncate", 18) != 0)
        break;
      return 12;	 // "integer_of_truncate"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_zero", 18) != 0)
        break;
      return 46;	 // "merge_of_x_and_zero"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "tr_add_immed_chain", 18) != 0)
        break;
      return 68;	 // "ptr_add_immed_chain"
    case 'r':	 // 2 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ght_identity_zero", 17) != 0)
          break;
        return 50;	 // "right_identity_zero"
      case 'o':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "tate_out_of_range", 17) != 0)
          break;
        return 29;	 // "rotate_out_of_range"
      }
      break;
    case 's':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'e')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ect_constant_cmp", 16) != 0)
          break;
        return 34;	 // "select_constant_cmp"
      case 'x':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "t_trunc_sextload", 16) != 0)
          break;
        return 17;	 // "sext_trunc_sextload"
      }
      break;
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nary_undef_to_zero", 18) != 0)
        break;
      return 76;	 // "unary_undef_to_zero"
    }
    break;
  case 20:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itcast_bitcast_fold", 19) != 0)
        break;
      return 64;	 // "bitcast_bitcast_fold"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "erge_of_x_and_undef", 19) != 0)
        break;
      return 45;	 // "merge_of_x_and_undef"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "edundant_sext_inreg", 19) != 0)
        break;
      return 24;	 // "redundant_sext_inreg"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "plit_store_zero_128", 19) != 0)
        break;
      return 70;	 // "split_store_zero_128"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ry_undef_to_undef", 17) != 0)
          break;
        return 77;	 // "unary_undef_to_undef"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_zext_to_zext", 17) != 0)
          break;
        return 44;	 // "unmerge_zext_to_zext"
      }
      break;
    }
    break;
  case 21:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ombine_concat_vector", 20) != 0)
        break;
      return 85;	 // "combine_concat_vector"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "utate_anyext_to_zext", 20) != 0)
        break;
      return 13;	 // "mutate_anyext_to_zext"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_fp", 20) != 0)
        break;
      return 59;	 // "right_identity_one_fp"
    case 'u':	 // 2 strings to match.
      if (RuleIdentifier[1] != 'n')
        break;
      switch (RuleIdentifier[2]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "ef_to_negative_one", 18) != 0)
          break;
        return 73;	 // "undef_to_negative_one"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+3, "erge_dead_to_trunc", 18) != 0)
          break;
        return 43;	 // "unmerge_dead_to_trunc"
      }
      break;
    }
    break;
  case 22:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "onstant_fold_fp_binop", 21) != 0)
        break;
      return 48;	 // "constant_fold_fp_binop"
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "atch_subo_no_overflow", 21) != 0)
        break;
      return 32;	 // "match_subo_no_overflow"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_any_op", 21) != 0)
        break;
      return 78;	 // "propagate_undef_any_op"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_one_int", 21) != 0)
        break;
      return 58;	 // "right_identity_one_int"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_buildvector_fold", 21) != 0)
        break;
      return 62;	 // "trunc_buildvector_fold"
    }
    break;
  case 23:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "uildvector_of_truncate", 22) != 0)
        break;
      return 11;	 // "buildvector_of_truncate"
    case 'p':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ropagate_undef_all_ops", 22) != 0)
        break;
      return 79;	 // "propagate_undef_all_ops"
    }
    break;
  case 24:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_left_undef_to_zero", 23) != 0)
        break;
      return 74;	 // "binop_left_undef_to_zero"
    case 'x':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "or_of_and_with_same_reg", 23) != 0)
        break;
      return 20;	 // "xor_of_and_with_same_reg"
    }
    break;
  case 25:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 3 strings to match.
      switch (RuleIdentifier[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        if (memcmp(RuleIdentifier.data()+2, "tfield_extract_from_", 20) != 0)
          break;
        switch (RuleIdentifier[22]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "nd", 2) != 0)
            break;
          return 26;	 // "bitfield_extract_from_and"
        case 's':	 // 1 string to match.
          if (memcmp(RuleIdentifier.data()+23, "hr", 2) != 0)
            break;
          return 27;	 // "bitfield_extract_from_shr"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+2, "ildvector_identity_fold", 23) != 0)
          break;
        return 61;	 // "buildvector_identity_fold"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_one_fp", 24) != 0)
        break;
      return 67;	 // "right_identity_neg_one_fp"
    }
    break;
  case 26:	 // 5 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "inop_right_undef_to_undef", 25) != 0)
        break;
      return 75;	 // "binop_right_undef_to_undef"
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "om", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ine_indexed_load_store", 22) != 0)
          break;
        return 16;	 // "combine_indexed_load_store"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ute_fp_constant_to_rhs", 22) != 0)
          break;
        return 87;	 // "commute_fp_constant_to_rhs"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtractvecelt_pairwise_add", 25) != 0)
        break;
      return 21;	 // "extractvecelt_pairwise_add"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ight_identity_neg_zero_fp", 25) != 0)
        break;
      return 66;	 // "right_identity_neg_zero_fp"
    }
    break;
  case 27:	 // 4 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (memcmp(RuleIdentifier.data()+1, "om", 2) != 0)
        break;
      switch (RuleIdentifier[3]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ine_use_vector_truncate", 23) != 0)
          break;
        return 90;	 // "combine_use_vector_truncate"
      case 'm':	 // 1 string to match.
        if (memcmp(RuleIdentifier.data()+4, "ute_int_constant_to_rhs", 23) != 0)
          break;
        return 86;	 // "commute_int_constant_to_rhs"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "runc_lshr_buildvector_fold", 26) != 0)
        break;
      return 63;	 // "trunc_lshr_buildvector_fold"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nmerge_anyext_build_vector", 26) != 0)
        break;
      return 38;	 // "unmerge_anyext_build_vector"
    }
    break;
  case 28:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "propagate_undef_shuffle_mask", 28) != 0)
      break;
    return 80;	 // "propagate_undef_shuffle_mask"
  case 29:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "itfield_extract_from_shr_and", 28) != 0)
        break;
      return 28;	 // "bitfield_extract_from_shr_and"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "cmp_to_true_false_known_bits", 28) != 0)
        break;
      return 30;	 // "icmp_to_true_false_known_bits"
    }
    break;
  case 32:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "bitfield_extract_from_sext_inreg", 32) != 0)
      break;
    return 25;	 // "bitfield_extract_from_sext_inreg"
  case 36:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "insert_extract_vec_elt_out_of_bounds", 36) != 0)
      break;
    return 82;	 // "insert_extract_vec_elt_out_of_bounds"
  case 37:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "hoist_logic_op_with_same_opcode_hands", 37) != 0)
      break;
    return 18;	 // "hoist_logic_op_with_same_opcode_hands"
  case 46:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "push_freeze_to_prevent_poison_from_propagating", 46) != 0)
      break;
    return 88;	 // "push_freeze_to_prevent_poison_from_propagating"
  }
#endif // ifndef NDEBUG

  return std::nullopt;
}
static std::optional<std::pair<uint64_t, uint64_t>> getRuleRangeForIdentifier(StringRef RuleIdentifier) {
  std::pair<StringRef, StringRef> RangePair = RuleIdentifier.split('-');
  if (!RangePair.second.empty()) {
    const auto First = getRuleIdxForIdentifier(RangePair.first);
    const auto Last = getRuleIdxForIdentifier(RangePair.second);
    if (!First || !Last)
      return std::nullopt;
    if (First >= Last)
      report_fatal_error("Beginning of range should be before end of range");
    return {{*First, *Last + 1}};
  }
  if (RangePair.first == "*") {
    return {{0, 91}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64PostLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64PostLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64PostLegalizerCombinerOption;
static cl::list<std::string> AArch64PostLegalizerCombinerDisableOption(
    "aarch64postlegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> AArch64PostLegalizerCombinerOnlyEnableOption(
    "aarch64postlegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64PostLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64PostLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerCombinerOption) {
    bool Enabled = Identifier.consume_front("!");
    if (Enabled && !setRuleEnabled(Identifier))
      return false;
    if (!Enabled && !setRuleDisabled(Identifier))
      return false;
  }
  return true;
}

#endif // ifdef GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_TYPES
const unsigned MAX_SUBTARGET_PREDICATES = 0;
using PredicateBitset = llvm::Bitset<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GICOMBINER_TYPES

#ifdef GET_GICOMBINER_CLASS_MEMBERS
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget,
                                 const MachineFunction *MF) const;
void setupGeneratedPerFunctionState(MachineFunction &MF) override;
#endif // ifdef GET_GICOMBINER_CLASS_MEMBERS
#ifdef GET_GICOMBINER_CLASS_MEMBERS
  mutable MatcherState State;
  typedef ComplexRendererFns(AArch64PostLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64PostLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64PostLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64PostLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const uint8_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI, const MatcherState &State) const override;
  bool testSimplePredicate(unsigned PredicateID) const override;
  bool runCustomAction(unsigned FnID, const MatcherState &State, NewMIVector &OutMIs) const override;
#endif // ifdef GET_GICOMBINER_CLASS_MEMBERS

#ifdef GET_GICOMBINER_IMPL
// LLT Objects.
enum {
  GILLT_s1,
};
const static size_t NumTypeObjects = 1;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
};

// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
};

PredicateBitset AArch64PostLegalizerCombinerImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void AArch64PostLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64PostLegalizerCombinerImpl::
computeAvailableFunctionFeatures(const AArch64Subtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features{};
  return Features;
}

// Feature bitsets.
enum {
  GIFBS_Invalid,
};
constexpr static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
};
// See constructor for table contents

AArch64PostLegalizerCombinerImpl::ComplexMatcherMemFn
AArch64PostLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

enum {
  GICXXPred_MI_Predicate_GICombiner0 = GICXXPred_Invalid + 1,
  GICXXPred_MI_Predicate_GICombiner1,
  GICXXPred_MI_Predicate_GICombiner2,
};
bool AArch64PostLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  switch (PredicateID) {
  case GICXXPred_MI_Predicate_GICombiner0: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), 1.0);
  }
  case GICXXPred_MI_Predicate_GICombiner1: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -0.0);
  }
  case GICXXPred_MI_Predicate_GICombiner2: {
    return Helper.matchConstantFPOp(State.MIs[0]->getOperand(2), -1.0);
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
enum {
  GICXXPred_Simple_IsRule0Enabled = GICXXPred_Invalid + 1,
  GICXXPred_Simple_IsRule1Enabled,
  GICXXPred_Simple_IsRule2Enabled,
  GICXXPred_Simple_IsRule3Enabled,
  GICXXPred_Simple_IsRule4Enabled,
  GICXXPred_Simple_IsRule5Enabled,
  GICXXPred_Simple_IsRule6Enabled,
  GICXXPred_Simple_IsRule7Enabled,
  GICXXPred_Simple_IsRule8Enabled,
  GICXXPred_Simple_IsRule9Enabled,
  GICXXPred_Simple_IsRule10Enabled,
  GICXXPred_Simple_IsRule11Enabled,
  GICXXPred_Simple_IsRule12Enabled,
  GICXXPred_Simple_IsRule13Enabled,
  GICXXPred_Simple_IsRule14Enabled,
  GICXXPred_Simple_IsRule15Enabled,
  GICXXPred_Simple_IsRule16Enabled,
  GICXXPred_Simple_IsRule17Enabled,
  GICXXPred_Simple_IsRule18Enabled,
  GICXXPred_Simple_IsRule19Enabled,
  GICXXPred_Simple_IsRule20Enabled,
  GICXXPred_Simple_IsRule21Enabled,
  GICXXPred_Simple_IsRule22Enabled,
  GICXXPred_Simple_IsRule23Enabled,
  GICXXPred_Simple_IsRule24Enabled,
  GICXXPred_Simple_IsRule25Enabled,
  GICXXPred_Simple_IsRule26Enabled,
  GICXXPred_Simple_IsRule27Enabled,
  GICXXPred_Simple_IsRule28Enabled,
  GICXXPred_Simple_IsRule29Enabled,
  GICXXPred_Simple_IsRule30Enabled,
  GICXXPred_Simple_IsRule31Enabled,
  GICXXPred_Simple_IsRule32Enabled,
  GICXXPred_Simple_IsRule33Enabled,
  GICXXPred_Simple_IsRule34Enabled,
  GICXXPred_Simple_IsRule35Enabled,
  GICXXPred_Simple_IsRule36Enabled,
  GICXXPred_Simple_IsRule37Enabled,
  GICXXPred_Simple_IsRule38Enabled,
  GICXXPred_Simple_IsRule39Enabled,
  GICXXPred_Simple_IsRule40Enabled,
  GICXXPred_Simple_IsRule41Enabled,
  GICXXPred_Simple_IsRule42Enabled,
  GICXXPred_Simple_IsRule43Enabled,
  GICXXPred_Simple_IsRule44Enabled,
  GICXXPred_Simple_IsRule45Enabled,
  GICXXPred_Simple_IsRule46Enabled,
  GICXXPred_Simple_IsRule47Enabled,
  GICXXPred_Simple_IsRule48Enabled,
  GICXXPred_Simple_IsRule49Enabled,
  GICXXPred_Simple_IsRule50Enabled,
  GICXXPred_Simple_IsRule51Enabled,
  GICXXPred_Simple_IsRule52Enabled,
  GICXXPred_Simple_IsRule53Enabled,
  GICXXPred_Simple_IsRule54Enabled,
  GICXXPred_Simple_IsRule55Enabled,
  GICXXPred_Simple_IsRule56Enabled,
  GICXXPred_Simple_IsRule57Enabled,
  GICXXPred_Simple_IsRule58Enabled,
  GICXXPred_Simple_IsRule59Enabled,
  GICXXPred_Simple_IsRule60Enabled,
  GICXXPred_Simple_IsRule61Enabled,
  GICXXPred_Simple_IsRule62Enabled,
  GICXXPred_Simple_IsRule63Enabled,
  GICXXPred_Simple_IsRule64Enabled,
  GICXXPred_Simple_IsRule65Enabled,
  GICXXPred_Simple_IsRule66Enabled,
  GICXXPred_Simple_IsRule67Enabled,
  GICXXPred_Simple_IsRule68Enabled,
  GICXXPred_Simple_IsRule69Enabled,
  GICXXPred_Simple_IsRule70Enabled,
  GICXXPred_Simple_IsRule71Enabled,
  GICXXPred_Simple_IsRule72Enabled,
  GICXXPred_Simple_IsRule73Enabled,
  GICXXPred_Simple_IsRule74Enabled,
  GICXXPred_Simple_IsRule75Enabled,
  GICXXPred_Simple_IsRule76Enabled,
  GICXXPred_Simple_IsRule77Enabled,
  GICXXPred_Simple_IsRule78Enabled,
  GICXXPred_Simple_IsRule79Enabled,
  GICXXPred_Simple_IsRule80Enabled,
  GICXXPred_Simple_IsRule81Enabled,
  GICXXPred_Simple_IsRule82Enabled,
  GICXXPred_Simple_IsRule83Enabled,
  GICXXPred_Simple_IsRule84Enabled,
  GICXXPred_Simple_IsRule85Enabled,
  GICXXPred_Simple_IsRule86Enabled,
  GICXXPred_Simple_IsRule87Enabled,
  GICXXPred_Simple_IsRule88Enabled,
  GICXXPred_Simple_IsRule89Enabled,
  GICXXPred_Simple_IsRule90Enabled,
};

bool AArch64PostLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64PostLegalizerCombinerImpl::CustomRendererFn
AArch64PostLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool AArch64PostLegalizerCombinerImpl::tryCombineAll(MachineInstr &I) const {
  const TargetSubtargetInfo &ST = MF.getSubtarget();
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  B.setInstrAndDebugLoc(I);
  State.MIs.clear();
  State.MIs.push_back(&I);
  if (executeMatchTable(*this, State, ExecInfo, B, getMatchTable(), *ST.getInstrInfo(), MRI, *MRI.getTargetRegisterInfo(), *ST.getRegBankInfo(), AvailableFeatures, /*CoverageInfo*/ nullptr)) {
    return true;
  }

  return false;
}

enum {
  GICXXCustomAction_GICombiner0 = GICXXCustomAction_Invalid + 1,
  GICXXCustomAction_GICombiner1,
  GICXXCustomAction_GICombiner2,
  GICXXCustomAction_GICombiner3,
  GICXXCustomAction_GICombiner4,
  GICXXCustomAction_GICombiner5,
  GICXXCustomAction_GICombiner6,
  GICXXCustomAction_GICombiner7,
  GICXXCustomAction_GICombiner8,
  GICXXCustomAction_GICombiner9,
  GICXXCustomAction_GICombiner10,
  GICXXCustomAction_GICombiner11,
  GICXXCustomAction_GICombiner12,
  GICXXCustomAction_GICombiner13,
  GICXXCustomAction_GICombiner14,
  GICXXCustomAction_GICombiner15,
  GICXXCustomAction_GICombiner16,
  GICXXCustomAction_GICombiner17,
  GICXXCustomAction_GICombiner18,
  GICXXCustomAction_GICombiner19,
  GICXXCustomAction_GICombiner20,
  GICXXCustomAction_GICombiner21,
  GICXXCustomAction_GICombiner22,
  GICXXCustomAction_GICombiner23,
  GICXXCustomAction_GICombiner24,
  GICXXCustomAction_GICombiner25,
  GICXXCustomAction_GICombiner26,
  GICXXCustomAction_GICombiner27,
  GICXXCustomAction_GICombiner28,
  GICXXCustomAction_GICombiner29,
  GICXXCustomAction_GICombiner30,
  GICXXCustomAction_GICombiner31,
  GICXXCustomAction_GICombiner32,
  GICXXCustomAction_GICombiner33,
  GICXXCustomAction_GICombiner34,
  GICXXCustomAction_GICombiner35,
  GICXXCustomAction_GICombiner36,
  GICXXCustomAction_GICombiner37,
  GICXXCustomAction_GICombiner38,
  GICXXCustomAction_GICombiner39,
  GICXXCustomAction_GICombiner40,
  GICXXCustomAction_GICombiner41,
  GICXXCustomAction_GICombiner42,
  GICXXCustomAction_GICombiner43,
  GICXXCustomAction_GICombiner44,
  GICXXCustomAction_GICombiner45,
  GICXXCustomAction_GICombiner46,
  GICXXCustomAction_GICombiner47,
  GICXXCustomAction_GICombiner48,
  GICXXCustomAction_GICombiner49,
  GICXXCustomAction_GICombiner50,
  GICXXCustomAction_GICombiner51,
  GICXXCustomAction_GICombiner52,
  GICXXCustomAction_GICombiner53,
  GICXXCustomAction_GICombiner54,
  GICXXCustomAction_GICombiner55,
  GICXXCustomAction_GICombiner56,
  GICXXCustomAction_GICombiner57,
  GICXXCustomAction_GICombiner58,
  GICXXCustomAction_GICombiner59,
  GICXXCustomAction_GICombiner60,
  GICXXCustomAction_GICombiner61,
  GICXXCustomAction_GICombiner62,
  GICXXCustomAction_GICombiner63,
  GICXXCustomAction_GICombiner64,
  GICXXCustomAction_GICombiner65,
  GICXXCustomAction_GICombiner66,
  GICXXCustomAction_GICombiner67,
  GICXXCustomAction_GICombiner68,
  GICXXCustomAction_GICombiner69,
  GICXXCustomAction_GICombiner70,
};
bool AArch64PostLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    // Match Patterns
    if(![&](){return Helper.matchCombineCopy(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineCopy(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncateOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchExtOfExt(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfBuildVector(*State.MIs[0], *State.MIs[1], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCastOfInteger(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    // Match Patterns
    if(![&](){return matchMutateAnyExtToZExt(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyMutateAnyExtToZExt(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    IndexedLoadStoreMatchInfo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineIndexedLoadStore(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineIndexedLoadStore(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    // Match Patterns
    if(![&](){return Helper.matchSextTruncSextLoad(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applySextTruncSextLoad(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    InstructionStepsMatchInfo GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchHoistLogicOpWithSameOpcodeHands(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildInstructionSteps(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantAnd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    std::pair<Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyXorOfAndWithSameReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    std::tuple<unsigned, LLT, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchExtractVecEltPairwiseAdd(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyExtractVecEltPairwiseAdd(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchRedundantOr(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    std::function<void(MachineIRBuilder&, Register)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchAArch64MulConstCombine(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyAArch64MulConstCombine(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    // Match Patterns
    if(![&](){return Helper.matchRedundantSExtInReg(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromSExtInReg(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShr(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchBitfieldExtractFromShrAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner21:{
    // Match Patterns
    if(![&](){return Helper.matchRotateOutOfRange(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyRotateOutOfRange(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner22:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchICmpToTrueFalseKnownBits(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner23:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchAddOverflow(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner24:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSuboCarryOut(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner25:{
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantSelectCmp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner26:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSelectIMinMax(State.MIs[0]->getOperand(0), GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnMO(State.MIs[0]->getOperand(0), GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner27:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchSelect(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner28:{
    // Match Patterns
    if(![&](){return matchFoldMergeToZext(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyFoldMergeToZext(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner29:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUnmergeValuesAnyExtBuildVector(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner30:{
    SmallVector<Register, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeMergeToPlainValues(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner31:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMergeUnmerge(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner32:{
    SmallVector<APInt, 8> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeConstant(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner33:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeUndef(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner34:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeWithDeadLanesToTrunc(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner35:{
    // Match Patterns
    if(![&](){return Helper.matchCombineUnmergeZExtToZExt(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineUnmergeZExtToZExt(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner36:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndUndef(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner37:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchMergeXAndZero(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner38:{
    APInt GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner39:{
    ConstantFP* GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchConstantFoldFPBinOp(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner40:{
    // Match Patterns
    if(![&](){return Helper.matchSelectSameVal(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 2);
    return true;
  }
  case GICXXCustomAction_GICombiner41:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsZero(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithOperand(*State.MIs[0], 1);
    return true;
  }
  case GICXXCustomAction_GICombiner42:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineI2PToP2I(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineI2PToP2I(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner43:{
    Register GIMatchData_info;
    // Match Patterns
    if(![&](){GIMatchData_info = State.MIs[1]->getOperand(1).getReg(); return true;}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineP2IToI2P(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner44:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineAnyExtTrunc(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner45:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchBuildVectorIdentityFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner46:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner47:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchTruncLshrBuildVectorFold(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner48:{
    // Match Patterns
    if(![&](){return MRI.getType(State.MIs[1]->getOperand(1).getReg()) == MRI.getType(State.MIs[0]->getOperand(0).getReg());}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceSingleDefInstWithReg(*State.MIs[0], State.MIs[1]->getOperand(1).getReg());
    return true;
  }
  case GICXXCustomAction_GICombiner49:{
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner50:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchOverlappingAnd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner51:{
    // Match Patterns
    if(![&](){return matchSplitStoreZero128(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applySplitStoreZero128(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner52:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithFConstant(*State.MIs[0], 0.0);
    return true;
  }
  case GICXXCustomAction_GICombiner53:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner54:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], -1);
    return true;
  }
  case GICXXCustomAction_GICombiner55:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 1);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithConstant(*State.MIs[0], 0);
    return true;
  }
  case GICXXCustomAction_GICombiner56:{
    // Match Patterns
    if(![&](){return Helper.matchOperandIsUndef(*State.MIs[0], 2);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner57:{
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]->getOperand(0).getParent());
    return true;
  }
  case GICXXCustomAction_GICombiner58:{
    // Match Patterns
    if(![&](){return Helper.matchAnyExplicitUseIsUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner59:{
    // Match Patterns
    if(![&](){return Helper.matchAllExplicitUsesAreUndef(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner60:{
    // Match Patterns
    if(![&](){return Helper.matchUndefShuffleVectorMask(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner61:{
    // Match Patterns
    if(![&](){return Helper.matchUndefStore(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.eraseInst(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner62:{
    // Match Patterns
    if(![&](){return Helper.matchInsertExtractVecEltOutOfBounds(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.replaceInstWithUndef(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner63:{
    std::function<void(MachineIRBuilder &)> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchSimplifySelectToMinMax(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner64:{
    std::tuple<Register, Register, Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchOrToBSP(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyOrToBSP(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner65:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner66:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner67:{
    // Match Patterns
    if(![&](){return Helper.matchCommuteFPConstantToRHS(*State.MIs[0]);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCommuteBinOpOperands(*State.MIs[0]);
    return true;
  }
  case GICXXCustomAction_GICombiner68:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return !isGuaranteedNotToBePoison(State.MIs[0]->getOperand(1).getReg(), MRI) && Helper.matchFreezeOfSingleMaybePoisonOperand(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner69:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchCombineMulCMLT(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyCombineMulCMLT(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner70:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyUseVectorTruncate(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  }
  llvm_unreachable("Unknown Apply Action");
}
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define GIMT_Encode2(Val) uint8_t(Val), uint8_t((uint16_t)Val >> 8)
#define GIMT_Encode4(Val) uint8_t(Val), uint8_t((uint32_t)Val >> 8), uint8_t((uint32_t)Val >> 16), uint8_t((uint32_t)Val >> 24)
#define GIMT_Encode8(Val) uint8_t(Val), uint8_t((uint64_t)Val >> 8), uint8_t((uint64_t)Val >> 16), uint8_t((uint64_t)Val >> 24),  uint8_t((uint64_t)Val >> 32), uint8_t((uint64_t)Val >> 40), uint8_t((uint64_t)Val >> 48), uint8_t((uint64_t)Val >> 56)
#else
#define GIMT_Encode2(Val) uint8_t((uint16_t)Val >> 8), uint8_t(Val)
#define GIMT_Encode4(Val) uint8_t((uint32_t)Val >> 24), uint8_t((uint32_t)Val >> 16), uint8_t((uint32_t)Val >> 8), uint8_t(Val)
#define GIMT_Encode8(Val) uint8_t((uint64_t)Val >> 56), uint8_t((uint64_t)Val >> 48), uint8_t((uint64_t)Val >> 40), uint8_t((uint64_t)Val >> 32),  uint8_t((uint64_t)Val >> 24), uint8_t((uint64_t)Val >> 16), uint8_t((uint64_t)Val >> 8), uint8_t(Val)
#endif
const uint8_t *AArch64PostLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(237), /*)*//*default:*//*Label 75*/ GIMT_Encode4(3564),
    /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(878), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(890),
    /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(1015),
    /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(1061),
    /*TargetOpcode::G_SDIV*//*Label 4*/ GIMT_Encode4(1163),
    /*TargetOpcode::G_UDIV*//*Label 5*/ GIMT_Encode4(1186),
    /*TargetOpcode::G_SREM*//*Label 6*/ GIMT_Encode4(1220),
    /*TargetOpcode::G_UREM*//*Label 7*/ GIMT_Encode4(1243), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_AND*//*Label 8*/ GIMT_Encode4(1277),
    /*TargetOpcode::G_OR*//*Label 9*/ GIMT_Encode4(1416),
    /*TargetOpcode::G_XOR*//*Label 10*/ GIMT_Encode4(1530), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_UNMERGE_VALUES*//*Label 11*/ GIMT_Encode4(1609), GIMT_Encode4(0),
    /*TargetOpcode::G_MERGE_VALUES*//*Label 12*/ GIMT_Encode4(1676),
    /*TargetOpcode::G_BUILD_VECTOR*//*Label 13*/ GIMT_Encode4(1761),
    /*TargetOpcode::G_BUILD_VECTOR_TRUNC*//*Label 14*/ GIMT_Encode4(1798),
    /*TargetOpcode::G_CONCAT_VECTORS*//*Label 15*/ GIMT_Encode4(1810),
    /*TargetOpcode::G_PTRTOINT*//*Label 16*/ GIMT_Encode4(1822),
    /*TargetOpcode::G_INTTOPTR*//*Label 17*/ GIMT_Encode4(1865),
    /*TargetOpcode::G_BITCAST*//*Label 18*/ GIMT_Encode4(1898),
    /*TargetOpcode::G_FREEZE*//*Label 19*/ GIMT_Encode4(1941), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_LOAD*//*Label 20*/ GIMT_Encode4(1953),
    /*TargetOpcode::G_SEXTLOAD*//*Label 21*/ GIMT_Encode4(1976),
    /*TargetOpcode::G_ZEXTLOAD*//*Label 22*/ GIMT_Encode4(1999), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_STORE*//*Label 23*/ GIMT_Encode4(2022), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ANYEXT*//*Label 24*/ GIMT_Encode4(2056),
    /*TargetOpcode::G_TRUNC*//*Label 25*/ GIMT_Encode4(2163), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SEXT*//*Label 26*/ GIMT_Encode4(2315),
    /*TargetOpcode::G_SEXT_INREG*//*Label 27*/ GIMT_Encode4(2358),
    /*TargetOpcode::G_ZEXT*//*Label 28*/ GIMT_Encode4(2392),
    /*TargetOpcode::G_SHL*//*Label 29*/ GIMT_Encode4(2435),
    /*TargetOpcode::G_LSHR*//*Label 30*/ GIMT_Encode4(2503),
    /*TargetOpcode::G_ASHR*//*Label 31*/ GIMT_Encode4(2582), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ROTR*//*Label 32*/ GIMT_Encode4(2661),
    /*TargetOpcode::G_ROTL*//*Label 33*/ GIMT_Encode4(2696),
    /*TargetOpcode::G_ICMP*//*Label 34*/ GIMT_Encode4(2731), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SELECT*//*Label 35*/ GIMT_Encode4(2743),
    /*TargetOpcode::G_UADDO*//*Label 36*/ GIMT_Encode4(2838), GIMT_Encode4(0),
    /*TargetOpcode::G_USUBO*//*Label 37*/ GIMT_Encode4(2861), GIMT_Encode4(0),
    /*TargetOpcode::G_SADDO*//*Label 38*/ GIMT_Encode4(2873), GIMT_Encode4(0),
    /*TargetOpcode::G_SSUBO*//*Label 39*/ GIMT_Encode4(2896), GIMT_Encode4(0),
    /*TargetOpcode::G_UMULO*//*Label 40*/ GIMT_Encode4(2908),
    /*TargetOpcode::G_SMULO*//*Label 41*/ GIMT_Encode4(2920),
    /*TargetOpcode::G_UMULH*//*Label 42*/ GIMT_Encode4(2932),
    /*TargetOpcode::G_SMULH*//*Label 43*/ GIMT_Encode4(2944),
    /*TargetOpcode::G_UADDSAT*//*Label 44*/ GIMT_Encode4(2956),
    /*TargetOpcode::G_SADDSAT*//*Label 45*/ GIMT_Encode4(2968), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SMULFIX*//*Label 46*/ GIMT_Encode4(2980),
    /*TargetOpcode::G_UMULFIX*//*Label 47*/ GIMT_Encode4(2992),
    /*TargetOpcode::G_SMULFIXSAT*//*Label 48*/ GIMT_Encode4(3004),
    /*TargetOpcode::G_UMULFIXSAT*//*Label 49*/ GIMT_Encode4(3016), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FADD*//*Label 50*/ GIMT_Encode4(3028),
    /*TargetOpcode::G_FSUB*//*Label 51*/ GIMT_Encode4(3074),
    /*TargetOpcode::G_FMUL*//*Label 52*/ GIMT_Encode4(3086), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FDIV*//*Label 53*/ GIMT_Encode4(3152), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FNEG*//*Label 54*/ GIMT_Encode4(3164), GIMT_Encode4(0),
    /*TargetOpcode::G_FPTRUNC*//*Label 55*/ GIMT_Encode4(3194),
    /*TargetOpcode::G_FPTOSI*//*Label 56*/ GIMT_Encode4(3216),
    /*TargetOpcode::G_FPTOUI*//*Label 57*/ GIMT_Encode4(3238),
    /*TargetOpcode::G_SITOFP*//*Label 58*/ GIMT_Encode4(3260),
    /*TargetOpcode::G_UITOFP*//*Label 59*/ GIMT_Encode4(3272), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FMINNUM*//*Label 60*/ GIMT_Encode4(3284),
    /*TargetOpcode::G_FMAXNUM*//*Label 61*/ GIMT_Encode4(3296),
    /*TargetOpcode::G_FMINNUM_IEEE*//*Label 62*/ GIMT_Encode4(3308),
    /*TargetOpcode::G_FMAXNUM_IEEE*//*Label 63*/ GIMT_Encode4(3320),
    /*TargetOpcode::G_FMINIMUM*//*Label 64*/ GIMT_Encode4(3332),
    /*TargetOpcode::G_FMAXIMUM*//*Label 65*/ GIMT_Encode4(3344), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_PTR_ADD*//*Label 66*/ GIMT_Encode4(3356), GIMT_Encode4(0),
    /*TargetOpcode::G_SMIN*//*Label 67*/ GIMT_Encode4(3402),
    /*TargetOpcode::G_SMAX*//*Label 68*/ GIMT_Encode4(3425),
    /*TargetOpcode::G_UMIN*//*Label 69*/ GIMT_Encode4(3448),
    /*TargetOpcode::G_UMAX*//*Label 70*/ GIMT_Encode4(3471),
    /*TargetOpcode::G_ABS*//*Label 71*/ GIMT_Encode4(3494), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 72*/ GIMT_Encode4(3506),
    /*TargetOpcode::G_EXTRACT_VECTOR_ELT*//*Label 73*/ GIMT_Encode4(3518),
    /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 74*/ GIMT_Encode4(3541),
    // Label 0: @878
    GIM_Try, /*On fail goto*//*Label 76*/ GIMT_Encode4(889), // Rule ID 0 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] s
      // No operand predicates
      // Combiner Rule #0: copy_prop
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
    // Label 76: @889
    GIM_Reject,
    // Label 1: @890
    GIM_Try, /*On fail goto*//*Label 77*/ GIMT_Encode4(901), // Rule ID 59 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 77: @901
    GIM_Try, /*On fail goto*//*Label 78*/ GIMT_Encode4(912), // Rule ID 140 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
      // Combiner Rule #78: propagate_undef_any_op; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
    // Label 78: @912
    GIM_Try, /*On fail goto*//*Label 79*/ GIMT_Encode4(923), // Rule ID 152 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 79: @923
    GIM_Try, /*On fail goto*//*Label 80*/ GIMT_Encode4(957), // Rule ID 109 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] src
      // No operand predicates
      // MIs[1] __add_sub_reg_match_0.x
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.x
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #60: add_sub_reg @ [__add_sub_reg_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 80: @957
    GIM_Try, /*On fail goto*//*Label 81*/ GIMT_Encode4(991), // Rule ID 108 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule60Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.x
      // No operand predicates
      // MIs[0] __add_sub_reg_match_0.tmp
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SUB),
      // MIs[1] src
      // No operand predicates
      // MIs[1] __add_sub_reg_match_0.x
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/1, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #60: add_sub_reg @ [__add_sub_reg_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 81: @991
    GIM_Try, /*On fail goto*//*Label 82*/ GIMT_Encode4(1014), // Rule ID 83 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 82: @1014
    GIM_Reject,
    // Label 2: @1015
    GIM_Try, /*On fail goto*//*Label 83*/ GIMT_Encode4(1026), // Rule ID 67 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 83: @1026
    GIM_Try, /*On fail goto*//*Label 84*/ GIMT_Encode4(1037), // Rule ID 141 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
      // Combiner Rule #78: propagate_undef_any_op; wip_match_opcode 'G_SUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
    // Label 84: @1037
    GIM_Try, /*On fail goto*//*Label 85*/ GIMT_Encode4(1060), // Rule ID 82 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 85: @1060
    GIM_Reject,
    // Label 3: @1061
    GIM_Try, /*On fail goto*//*Label 86*/ GIMT_Encode4(1072), // Rule ID 30 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule23Enabled),
      // Combiner Rule #23: mul_const; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
    // Label 86: @1072
    GIM_Try, /*On fail goto*//*Label 87*/ GIMT_Encode4(1083), // Rule ID 64 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 87: @1083
    GIM_Try, /*On fail goto*//*Label 88*/ GIMT_Encode4(1094), // Rule ID 124 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
      // Combiner Rule #72: undef_to_int_zero; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
    // Label 88: @1094
    GIM_Try, /*On fail goto*//*Label 89*/ GIMT_Encode4(1105), // Rule ID 153 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 89: @1105
    GIM_Try, /*On fail goto*//*Label 90*/ GIMT_Encode4(1116), // Rule ID 182 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule89Enabled),
      // Combiner Rule #89: combine_mul_cmlt; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner69),
    // Label 90: @1116
    GIM_Try, /*On fail goto*//*Label 91*/ GIMT_Encode4(1139), // Rule ID 101 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule53Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] zero
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
      // Combiner Rule #53: binop_right_to_zero
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/2,
      GIR_EraseRootFromParent_Done,
    // Label 91: @1139
    GIM_Try, /*On fail goto*//*Label 92*/ GIMT_Encode4(1162), // Rule ID 106 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule58Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #58: right_identity_one_int
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 92: @1162
    GIM_Reject,
    // Label 4: @1163
    GIM_Try, /*On fail goto*//*Label 93*/ GIMT_Encode4(1174), // Rule ID 70 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 93: @1174
    GIM_Try, /*On fail goto*//*Label 94*/ GIMT_Encode4(1185), // Rule ID 97 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_SDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 94: @1185
    GIM_Reject,
    // Label 5: @1186
    GIM_Try, /*On fail goto*//*Label 95*/ GIMT_Encode4(1197), // Rule ID 69 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 95: @1197
    GIM_Try, /*On fail goto*//*Label 96*/ GIMT_Encode4(1208), // Rule ID 98 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 96: @1208
    GIM_Try, /*On fail goto*//*Label 97*/ GIMT_Encode4(1219), // Rule ID 127 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // Combiner Rule #74: binop_left_undef_to_zero; wip_match_opcode 'G_UDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
    // Label 97: @1219
    GIM_Reject,
    // Label 6: @1220
    GIM_Try, /*On fail goto*//*Label 98*/ GIMT_Encode4(1231), // Rule ID 72 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 98: @1231
    GIM_Try, /*On fail goto*//*Label 99*/ GIMT_Encode4(1242), // Rule ID 99 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_SREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 99: @1242
    GIM_Reject,
    // Label 7: @1243
    GIM_Try, /*On fail goto*//*Label 100*/ GIMT_Encode4(1254), // Rule ID 71 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 100: @1254
    GIM_Try, /*On fail goto*//*Label 101*/ GIMT_Encode4(1265), // Rule ID 100 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 101: @1265
    GIM_Try, /*On fail goto*//*Label 102*/ GIMT_Encode4(1276), // Rule ID 128 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // Combiner Rule #74: binop_left_undef_to_zero; wip_match_opcode 'G_UREM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
    // Label 102: @1276
    GIM_Reject,
    // Label 8: @1277
    GIM_Try, /*On fail goto*//*Label 103*/ GIMT_Encode4(1288), // Rule ID 17 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
      // Combiner Rule #15: load_and_mask; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 103: @1288
    GIM_Try, /*On fail goto*//*Label 104*/ GIMT_Encode4(1299), // Rule ID 23 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // Combiner Rule #18: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
    // Label 104: @1299
    GIM_Try, /*On fail goto*//*Label 105*/ GIMT_Encode4(1310), // Rule ID 26 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
      // Combiner Rule #19: redundant_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
    // Label 105: @1310
    GIM_Try, /*On fail goto*//*Label 106*/ GIMT_Encode4(1321), // Rule ID 61 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 106: @1321
    GIM_Try, /*On fail goto*//*Label 107*/ GIMT_Encode4(1332), // Rule ID 119 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule69Enabled),
      // Combiner Rule #69: overlapping_and; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner50),
    // Label 107: @1332
    GIM_Try, /*On fail goto*//*Label 108*/ GIMT_Encode4(1343), // Rule ID 123 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule72Enabled),
      // Combiner Rule #72: undef_to_int_zero; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner53),
    // Label 108: @1343
    GIM_Try, /*On fail goto*//*Label 109*/ GIMT_Encode4(1354), // Rule ID 154 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 109: @1354
    GIM_Try, /*On fail goto*//*Label 110*/ GIMT_Encode4(1391), // Rule ID 33 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule26Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] shift
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_LSHR),
      // MIs[1] x
      // No operand predicates
      // MIs[1] lsb
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[2] imm1
      // No operand predicates
      // MIs[0] mask
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
      GIM_CheckOpcode, /*MI*/3, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[3] imm2
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/3,
      // Combiner Rule #26: bitfield_extract_from_and
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
    // Label 110: @1391
    GIM_Try, /*On fail goto*//*Label 111*/ GIMT_Encode4(1415), // Rule ID 92 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #51: binop_same_val @ [__binop_same_val_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 111: @1415
    GIM_Reject,
    // Label 9: @1416
    GIM_Try, /*On fail goto*//*Label 112*/ GIMT_Encode4(1427), // Rule ID 24 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // Combiner Rule #18: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
    // Label 112: @1427
    GIM_Try, /*On fail goto*//*Label 113*/ GIMT_Encode4(1438), // Rule ID 29 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule22Enabled),
      // Combiner Rule #22: redundant_or; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
    // Label 113: @1438
    GIM_Try, /*On fail goto*//*Label 114*/ GIMT_Encode4(1449), // Rule ID 65 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 114: @1449
    GIM_Try, /*On fail goto*//*Label 115*/ GIMT_Encode4(1460), // Rule ID 125 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule73Enabled),
      // Combiner Rule #73: undef_to_negative_one; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner54),
    // Label 115: @1460
    GIM_Try, /*On fail goto*//*Label 116*/ GIMT_Encode4(1471), // Rule ID 155 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_OR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 116: @1471
    GIM_Try, /*On fail goto*//*Label 117*/ GIMT_Encode4(1495), // Rule ID 93 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule51Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // MIs[0] src
      GIM_CheckIsSameOperandIgnoreCopies, /*MI*/0, /*OpIdx*/2, /*OtherMI*/0, /*OtherOpIdx*/1,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #51: binop_same_val @ [__binop_same_val_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 117: @1495
    GIM_Try, /*On fail goto*//*Label 118*/ GIMT_Encode4(1518), // Rule ID 84 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[2]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 118: @1518
    GIM_Try, /*On fail goto*//*Label 119*/ GIMT_Encode4(1529), // Rule ID 150 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule84Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #84: or_to_bsp
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner64),
    // Label 119: @1529
    GIM_Reject,
    // Label 10: @1530
    GIM_Try, /*On fail goto*//*Label 120*/ GIMT_Encode4(1541), // Rule ID 25 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // Combiner Rule #18: hoist_logic_op_with_same_opcode_hands; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
    // Label 120: @1541
    GIM_Try, /*On fail goto*//*Label 121*/ GIMT_Encode4(1552), // Rule ID 27 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
      // Combiner Rule #20: xor_of_and_with_same_reg; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
    // Label 121: @1552
    GIM_Try, /*On fail goto*//*Label 122*/ GIMT_Encode4(1563), // Rule ID 68 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 122: @1563
    GIM_Try, /*On fail goto*//*Label 123*/ GIMT_Encode4(1574), // Rule ID 142 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule78Enabled),
      // Combiner Rule #78: propagate_undef_any_op; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner58),
    // Label 123: @1574
    GIM_Try, /*On fail goto*//*Label 124*/ GIMT_Encode4(1585), // Rule ID 156 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 124: @1585
    GIM_Try, /*On fail goto*//*Label 125*/ GIMT_Encode4(1608), // Rule ID 85 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[3]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 125: @1608
    GIM_Reject,
    // Label 11: @1609
    GIM_Try, /*On fail goto*//*Label 126*/ GIMT_Encode4(1620), // Rule ID 50 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule38Enabled),
      // Combiner Rule #38: unmerge_anyext_build_vector; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner29),
    // Label 126: @1620
    GIM_Try, /*On fail goto*//*Label 127*/ GIMT_Encode4(1631), // Rule ID 51 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule39Enabled),
      // Combiner Rule #39: unmerge_merge; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner30),
    // Label 127: @1631
    GIM_Try, /*On fail goto*//*Label 128*/ GIMT_Encode4(1642), // Rule ID 53 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule41Enabled),
      // Combiner Rule #41: unmerge_cst; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner32),
    // Label 128: @1642
    GIM_Try, /*On fail goto*//*Label 129*/ GIMT_Encode4(1653), // Rule ID 54 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule42Enabled),
      // Combiner Rule #42: unmerge_undef; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner33),
    // Label 129: @1653
    GIM_Try, /*On fail goto*//*Label 130*/ GIMT_Encode4(1664), // Rule ID 55 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule43Enabled),
      // Combiner Rule #43: unmerge_dead_to_trunc; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner34),
    // Label 130: @1664
    GIM_Try, /*On fail goto*//*Label 131*/ GIMT_Encode4(1675), // Rule ID 56 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule44Enabled),
      // Combiner Rule #44: unmerge_zext_to_zext; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner35),
    // Label 131: @1675
    GIM_Reject,
    // Label 12: @1676
    GIM_Try, /*On fail goto*//*Label 132*/ GIMT_Encode4(1687), // Rule ID 49 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule37Enabled),
      // Combiner Rule #37: fold_merge_to_zext; wip_match_opcode 'G_MERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner28),
    // Label 132: @1687
    GIM_Try, /*On fail goto*//*Label 133*/ GIMT_Encode4(1698), // Rule ID 52 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule40Enabled),
      // Combiner Rule #40: merge_unmerge; wip_match_opcode 'G_MERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner31),
    // Label 133: @1698
    GIM_Try, /*On fail goto*//*Label 134*/ GIMT_Encode4(1760),
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 135*/ GIMT_Encode4(1727), // Rule ID 57 //
        GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule45Enabled),
        // MIs[0] root
        // No operand predicates
        // MIs[0] x
        // No operand predicates
        // MIs[0] undef
        GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
        GIM_CheckIsSafeToFold, /*NumInsns*/1,
        // Combiner Rule #45: merge_of_x_and_undef
        GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner36),
      // Label 135: @1727
      GIM_Try, /*On fail goto*//*Label 136*/ GIMT_Encode4(1759), // Rule ID 58 //
        GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule46Enabled),
        // MIs[0] root
        // No operand predicates
        // MIs[0] x
        // No operand predicates
        // MIs[0] zero
        GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
        // MIs[1] Operand 1
        GIM_CheckLiteralInt, /*MI*/1, /*Op*/1, GIMT_Encode8(0),
        GIM_CheckIsSafeToFold, /*NumInsns*/1,
        // Combiner Rule #46: merge_of_x_and_zero
        GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner37),
      // Label 136: @1759
      GIM_Reject,
    // Label 134: @1760
    GIM_Reject,
    // Label 13: @1761
    GIM_Try, /*On fail goto*//*Label 137*/ GIMT_Encode4(1772), // Rule ID 111 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
      // Combiner Rule #61: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner45),
    // Label 137: @1772
    GIM_Try, /*On fail goto*//*Label 138*/ GIMT_Encode4(1783), // Rule ID 144 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
      // Combiner Rule #79: propagate_undef_all_ops; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 138: @1783
    GIM_Try, /*On fail goto*//*Label 139*/ GIMT_Encode4(1797), // Rule ID 183 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule90Enabled),
      GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
      // MIs[0] dst
      // No operand predicates
      // MIs[0] unused
      // No operand predicates
      // Combiner Rule #90: combine_use_vector_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner70),
    // Label 139: @1797
    GIM_Reject,
    // Label 14: @1798
    GIM_Try, /*On fail goto*//*Label 140*/ GIMT_Encode4(1809), // Rule ID 110 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule61Enabled),
      // Combiner Rule #61: buildvector_identity_fold; wip_match_opcode 'G_BUILD_VECTOR_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner45),
    // Label 140: @1809
    GIM_Reject,
    // Label 15: @1810
    GIM_Try, /*On fail goto*//*Label 141*/ GIMT_Encode4(1821), // Rule ID 151 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule85Enabled),
      // Combiner Rule #85: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner65),
    // Label 141: @1821
    GIM_Reject,
    // Label 16: @1822
    GIM_Try, /*On fail goto*//*Label 142*/ GIMT_Encode4(1843), // Rule ID 103 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule55Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] t
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_INTTOPTR),
      // MIs[1] ptr
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #55: i2p_to_p2i
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner43),
    // Label 142: @1843
    GIM_Try, /*On fail goto*//*Label 143*/ GIMT_Encode4(1864), // Rule ID 136 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[3]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 143: @1864
    GIM_Reject,
    // Label 17: @1865
    GIM_Try, /*On fail goto*//*Label 144*/ GIMT_Encode4(1876), // Rule ID 102 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule54Enabled),
      // Combiner Rule #54: p2i_to_i2p; wip_match_opcode 'G_INTTOPTR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner42),
    // Label 144: @1876
    GIM_Try, /*On fail goto*//*Label 145*/ GIMT_Encode4(1897), // Rule ID 137 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[4]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 145: @1897
    GIM_Reject,
    // Label 18: @1898
    GIM_Try, /*On fail goto*//*Label 146*/ GIMT_Encode4(1919), // Rule ID 114 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule64Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BITCAST),
      // MIs[1] src0
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #64: bitcast_bitcast_fold
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
    // Label 146: @1919
    GIM_Try, /*On fail goto*//*Label 147*/ GIMT_Encode4(1940), // Rule ID 134 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[1]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 147: @1940
    GIM_Reject,
    // Label 19: @1941
    GIM_Try, /*On fail goto*//*Label 148*/ GIMT_Encode4(1952), // Rule ID 181 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule88Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      // No operand predicates
      // Combiner Rule #88: push_freeze_to_prevent_poison_from_propagating
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner68),
    // Label 148: @1952
    GIM_Reject,
    // Label 20: @1953
    GIM_Try, /*On fail goto*//*Label 149*/ GIMT_Encode4(1964), // Rule ID 14 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
      // Combiner Rule #14: extending_loads; wip_match_opcode 'G_LOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 149: @1964
    GIM_Try, /*On fail goto*//*Label 150*/ GIMT_Encode4(1975), // Rule ID 18 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // Combiner Rule #16: combine_indexed_load_store; wip_match_opcode 'G_LOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 150: @1975
    GIM_Reject,
    // Label 21: @1976
    GIM_Try, /*On fail goto*//*Label 151*/ GIMT_Encode4(1987), // Rule ID 15 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
      // Combiner Rule #14: extending_loads; wip_match_opcode 'G_SEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 151: @1987
    GIM_Try, /*On fail goto*//*Label 152*/ GIMT_Encode4(1998), // Rule ID 19 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // Combiner Rule #16: combine_indexed_load_store; wip_match_opcode 'G_SEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 152: @1998
    GIM_Reject,
    // Label 22: @1999
    GIM_Try, /*On fail goto*//*Label 153*/ GIMT_Encode4(2010), // Rule ID 16 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
      // Combiner Rule #14: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 153: @2010
    GIM_Try, /*On fail goto*//*Label 154*/ GIMT_Encode4(2021), // Rule ID 20 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // Combiner Rule #16: combine_indexed_load_store; wip_match_opcode 'G_ZEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 154: @2021
    GIM_Reject,
    // Label 23: @2022
    GIM_Try, /*On fail goto*//*Label 155*/ GIMT_Encode4(2033), // Rule ID 21 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // Combiner Rule #16: combine_indexed_load_store; wip_match_opcode 'G_STORE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 155: @2033
    GIM_Try, /*On fail goto*//*Label 156*/ GIMT_Encode4(2044), // Rule ID 146 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule81Enabled),
      // Combiner Rule #81: erase_undef_store; wip_match_opcode 'G_STORE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner61),
    // Label 156: @2044
    GIM_Try, /*On fail goto*//*Label 157*/ GIMT_Encode4(2055), // Rule ID 120 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule70Enabled),
      // MIs[0] src
      // No operand predicates
      // MIs[0] addr
      // No operand predicates
      // Combiner Rule #70: split_store_zero_128
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner51),
    // Label 157: @2055
    GIM_Reject,
    // Label 24: @2056
    GIM_Try, /*On fail goto*//*Label 158*/ GIMT_Encode4(2067), // Rule ID 13 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
      // Combiner Rule #13: mutate_anyext_to_zext; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 158: @2067
    GIM_Try, /*On fail goto*//*Label 159*/ GIMT_Encode4(2078), // Rule ID 104 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule56Enabled),
      // Combiner Rule #56: anyext_trunc_fold; wip_match_opcode 'G_ANYEXT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner44),
    // Label 159: @2078
    GIM_Try, /*On fail goto*//*Label 160*/ GIMT_Encode4(2099), // Rule ID 8 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #8: anyext_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 160: @2099
    GIM_Try, /*On fail goto*//*Label 161*/ GIMT_Encode4(2120), // Rule ID 10 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #10: anyext_of_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 161: @2120
    GIM_Try, /*On fail goto*//*Label 162*/ GIMT_Encode4(2141), // Rule ID 9 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #9: anyext_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 162: @2141
    GIM_Try, /*On fail goto*//*Label 163*/ GIMT_Encode4(2162), // Rule ID 135 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[2]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 163: @2162
    GIM_Reject,
    // Label 25: @2163
    GIM_Try, /*On fail goto*//*Label 164*/ GIMT_Encode4(2174), // Rule ID 112 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule62Enabled),
      // Combiner Rule #62: trunc_buildvector_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner46),
    // Label 164: @2174
    GIM_Try, /*On fail goto*//*Label 165*/ GIMT_Encode4(2185), // Rule ID 113 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule63Enabled),
      // Combiner Rule #63: trunc_lshr_buildvector_fold; wip_match_opcode 'G_TRUNC'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner47),
    // Label 165: @2185
    GIM_Try, /*On fail goto*//*Label 166*/ GIMT_Encode4(2206), // Rule ID 3 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] ext
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #3: truncate_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 166: @2206
    GIM_Try, /*On fail goto*//*Label 167*/ GIMT_Encode4(2230), // Rule ID 11 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] bv
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_BUILD_VECTOR),
      GIM_CheckNumOperandsGE, /*MI*/1, /*Expected*/2,
      // MIs[1] unused
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #11: buildvector_of_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
    // Label 167: @2230
    GIM_Try, /*On fail goto*//*Label 168*/ GIMT_Encode4(2251), // Rule ID 2 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] ext
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #2: truncate_of_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 168: @2251
    GIM_Try, /*On fail goto*//*Label 169*/ GIMT_Encode4(2272), // Rule ID 1 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] ext
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #1: truncate_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 169: @2272
    GIM_Try, /*On fail goto*//*Label 170*/ GIMT_Encode4(2293), // Rule ID 133 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[0]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 170: @2293
    GIM_Try, /*On fail goto*//*Label 171*/ GIMT_Encode4(2314), // Rule ID 12 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] int
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #12: integer_of_truncate
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
    // Label 171: @2314
    GIM_Reject,
    // Label 26: @2315
    GIM_Try, /*On fail goto*//*Label 172*/ GIMT_Encode4(2336), // Rule ID 7 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #7: sext_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 172: @2336
    GIM_Try, /*On fail goto*//*Label 173*/ GIMT_Encode4(2357), // Rule ID 6 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_SEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #6: sext_of_sext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 173: @2357
    GIM_Reject,
    // Label 27: @2358
    GIM_Try, /*On fail goto*//*Label 174*/ GIMT_Encode4(2369), // Rule ID 22 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
      // Combiner Rule #17: sext_trunc_sextload; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
    // Label 174: @2369
    GIM_Try, /*On fail goto*//*Label 175*/ GIMT_Encode4(2380), // Rule ID 31 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule24Enabled),
      // Combiner Rule #24: redundant_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
    // Label 175: @2380
    GIM_Try, /*On fail goto*//*Label 176*/ GIMT_Encode4(2391), // Rule ID 32 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule25Enabled),
      // Combiner Rule #25: bitfield_extract_from_sext_inreg; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
    // Label 176: @2391
    GIM_Reject,
    // Label 28: @2392
    GIM_Try, /*On fail goto*//*Label 177*/ GIMT_Encode4(2413), // Rule ID 5 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ANYEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #5: zext_of_anyext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 177: @2413
    GIM_Try, /*On fail goto*//*Label 178*/ GIMT_Encode4(2434), // Rule ID 4 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] second
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ZEXT),
      // MIs[1] src
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #4: zext_of_zext
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 178: @2434
    GIM_Reject,
    // Label 29: @2435
    GIM_Try, /*On fail goto*//*Label 179*/ GIMT_Encode4(2446), // Rule ID 66 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 179: @2446
    GIM_Try, /*On fail goto*//*Label 180*/ GIMT_Encode4(2457), // Rule ID 94 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 180: @2457
    GIM_Try, /*On fail goto*//*Label 181*/ GIMT_Encode4(2468), // Rule ID 126 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule74Enabled),
      // Combiner Rule #74: binop_left_undef_to_zero; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
    // Label 181: @2468
    GIM_Try, /*On fail goto*//*Label 182*/ GIMT_Encode4(2479), // Rule ID 129 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
      // Combiner Rule #75: binop_right_undef_to_undef; wip_match_opcode 'G_SHL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 182: @2479
    GIM_Try, /*On fail goto*//*Label 183*/ GIMT_Encode4(2502), // Rule ID 86 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[4]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 183: @2502
    GIM_Reject,
    // Label 30: @2503
    GIM_Try, /*On fail goto*//*Label 184*/ GIMT_Encode4(2514), // Rule ID 35 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
      // Combiner Rule #27: bitfield_extract_from_shr; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
    // Label 184: @2514
    GIM_Try, /*On fail goto*//*Label 185*/ GIMT_Encode4(2525), // Rule ID 37 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
      // Combiner Rule #28: bitfield_extract_from_shr_and; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
    // Label 185: @2525
    GIM_Try, /*On fail goto*//*Label 186*/ GIMT_Encode4(2536), // Rule ID 63 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 186: @2536
    GIM_Try, /*On fail goto*//*Label 187*/ GIMT_Encode4(2547), // Rule ID 95 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 187: @2547
    GIM_Try, /*On fail goto*//*Label 188*/ GIMT_Encode4(2558), // Rule ID 131 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
      // Combiner Rule #75: binop_right_undef_to_undef; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 188: @2558
    GIM_Try, /*On fail goto*//*Label 189*/ GIMT_Encode4(2581), // Rule ID 88 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[6]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 189: @2581
    GIM_Reject,
    // Label 31: @2582
    GIM_Try, /*On fail goto*//*Label 190*/ GIMT_Encode4(2593), // Rule ID 34 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule27Enabled),
      // Combiner Rule #27: bitfield_extract_from_shr; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
    // Label 190: @2593
    GIM_Try, /*On fail goto*//*Label 191*/ GIMT_Encode4(2604), // Rule ID 36 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule28Enabled),
      // Combiner Rule #28: bitfield_extract_from_shr_and; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
    // Label 191: @2604
    GIM_Try, /*On fail goto*//*Label 192*/ GIMT_Encode4(2615), // Rule ID 62 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 192: @2615
    GIM_Try, /*On fail goto*//*Label 193*/ GIMT_Encode4(2626), // Rule ID 96 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule52Enabled),
      // Combiner Rule #52: binop_left_to_zero; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner41),
    // Label 193: @2626
    GIM_Try, /*On fail goto*//*Label 194*/ GIMT_Encode4(2637), // Rule ID 130 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule75Enabled),
      // Combiner Rule #75: binop_right_undef_to_undef; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner56),
    // Label 194: @2637
    GIM_Try, /*On fail goto*//*Label 195*/ GIMT_Encode4(2660), // Rule ID 87 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[5]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 195: @2660
    GIM_Reject,
    // Label 32: @2661
    GIM_Try, /*On fail goto*//*Label 196*/ GIMT_Encode4(2672), // Rule ID 38 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
      // Combiner Rule #29: rotate_out_of_range; wip_match_opcode 'G_ROTR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
    // Label 196: @2672
    GIM_Try, /*On fail goto*//*Label 197*/ GIMT_Encode4(2695), // Rule ID 91 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[9]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 197: @2695
    GIM_Reject,
    // Label 33: @2696
    GIM_Try, /*On fail goto*//*Label 198*/ GIMT_Encode4(2707), // Rule ID 39 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule29Enabled),
      // Combiner Rule #29: rotate_out_of_range; wip_match_opcode 'G_ROTL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner21),
    // Label 198: @2707
    GIM_Try, /*On fail goto*//*Label 199*/ GIMT_Encode4(2730), // Rule ID 90 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[8]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 199: @2730
    GIM_Reject,
    // Label 34: @2731
    GIM_Try, /*On fail goto*//*Label 200*/ GIMT_Encode4(2742), // Rule ID 40 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule30Enabled),
      // Combiner Rule #30: icmp_to_true_false_known_bits; wip_match_opcode 'G_ICMP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner22),
    // Label 200: @2742
    GIM_Reject,
    // Label 35: @2743
    GIM_Try, /*On fail goto*//*Label 201*/ GIMT_Encode4(2754), // Rule ID 46 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule34Enabled),
      // Combiner Rule #34: select_constant_cmp; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner25),
    // Label 201: @2754
    GIM_Try, /*On fail goto*//*Label 202*/ GIMT_Encode4(2765), // Rule ID 48 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule36Enabled),
      // Combiner Rule #36: match_selects; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner27),
    // Label 202: @2765
    GIM_Try, /*On fail goto*//*Label 203*/ GIMT_Encode4(2776), // Rule ID 81 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule49Enabled),
      // Combiner Rule #49: select_same_val; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner40),
    // Label 203: @2776
    GIM_Try, /*On fail goto*//*Label 204*/ GIMT_Encode4(2787), // Rule ID 149 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule83Enabled),
      // Combiner Rule #83: select_to_minmax; wip_match_opcode 'G_SELECT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner63),
    // Label 204: @2787
    GIM_Try, /*On fail goto*//*Label 205*/ GIMT_Encode4(2808), // Rule ID 47 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule35Enabled),
      // MIs[0] root
      // No operand predicates
      // MIs[0] tst
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_ICMP),
      // MIs[1] tst1
      // No operand predicates
      // MIs[1] a
      // No operand predicates
      // MIs[1] b
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #35: select_to_iminmax
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner26),
    // Label 205: @2808
    GIM_Try, /*On fail goto*//*Label 206*/ GIMT_Encode4(2837), // Rule ID 45 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule33Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] undef
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #33: select_undef_cmp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/3,
      GIR_EraseRootFromParent_Done,
    // Label 206: @2837
    GIM_Reject,
    // Label 36: @2838
    GIM_Try, /*On fail goto*//*Label 207*/ GIMT_Encode4(2849), // Rule ID 42 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
      // Combiner Rule #31: match_addos; wip_match_opcode 'G_UADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 207: @2849
    GIM_Try, /*On fail goto*//*Label 208*/ GIMT_Encode4(2860), // Rule ID 161 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 208: @2860
    GIM_Reject,
    // Label 37: @2861
    GIM_Try, /*On fail goto*//*Label 209*/ GIMT_Encode4(2872), // Rule ID 44 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
      // Combiner Rule #32: match_subo_no_overflow; wip_match_opcode 'G_USUBO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
    // Label 209: @2872
    GIM_Reject,
    // Label 38: @2873
    GIM_Try, /*On fail goto*//*Label 210*/ GIMT_Encode4(2884), // Rule ID 41 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule31Enabled),
      // Combiner Rule #31: match_addos; wip_match_opcode 'G_SADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner23),
    // Label 210: @2884
    GIM_Try, /*On fail goto*//*Label 211*/ GIMT_Encode4(2895), // Rule ID 162 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 211: @2895
    GIM_Reject,
    // Label 39: @2896
    GIM_Try, /*On fail goto*//*Label 212*/ GIMT_Encode4(2907), // Rule ID 43 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule32Enabled),
      // Combiner Rule #32: match_subo_no_overflow; wip_match_opcode 'G_SSUBO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner24),
    // Label 212: @2907
    GIM_Reject,
    // Label 40: @2908
    GIM_Try, /*On fail goto*//*Label 213*/ GIMT_Encode4(2919), // Rule ID 163 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 213: @2919
    GIM_Reject,
    // Label 41: @2920
    GIM_Try, /*On fail goto*//*Label 214*/ GIMT_Encode4(2931), // Rule ID 164 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULO'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 214: @2931
    GIM_Reject,
    // Label 42: @2932
    GIM_Try, /*On fail goto*//*Label 215*/ GIMT_Encode4(2943), // Rule ID 165 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 215: @2943
    GIM_Reject,
    // Label 43: @2944
    GIM_Try, /*On fail goto*//*Label 216*/ GIMT_Encode4(2955), // Rule ID 166 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULH'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 216: @2955
    GIM_Reject,
    // Label 44: @2956
    GIM_Try, /*On fail goto*//*Label 217*/ GIMT_Encode4(2967), // Rule ID 167 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UADDSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 217: @2967
    GIM_Reject,
    // Label 45: @2968
    GIM_Try, /*On fail goto*//*Label 218*/ GIMT_Encode4(2979), // Rule ID 168 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SADDSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 218: @2979
    GIM_Reject,
    // Label 46: @2980
    GIM_Try, /*On fail goto*//*Label 219*/ GIMT_Encode4(2991), // Rule ID 169 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 219: @2991
    GIM_Reject,
    // Label 47: @2992
    GIM_Try, /*On fail goto*//*Label 220*/ GIMT_Encode4(3003), // Rule ID 170 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 220: @3003
    GIM_Reject,
    // Label 48: @3004
    GIM_Try, /*On fail goto*//*Label 221*/ GIMT_Encode4(3015), // Rule ID 171 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SMULFIXSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 221: @3015
    GIM_Reject,
    // Label 49: @3016
    GIM_Try, /*On fail goto*//*Label 222*/ GIMT_Encode4(3027), // Rule ID 172 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UMULFIXSAT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 222: @3027
    GIM_Reject,
    // Label 50: @3028
    GIM_Try, /*On fail goto*//*Label 223*/ GIMT_Encode4(3039), // Rule ID 77 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
      // Combiner Rule #48: constant_fold_fp_binop; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 223: @3039
    GIM_Try, /*On fail goto*//*Label 224*/ GIMT_Encode4(3050), // Rule ID 173 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 224: @3050
    GIM_Try, /*On fail goto*//*Label 225*/ GIMT_Encode4(3073), // Rule ID 116 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule66Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner1),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #66: right_identity_neg_zero_fp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 225: @3073
    GIM_Reject,
    // Label 51: @3074
    GIM_Try, /*On fail goto*//*Label 226*/ GIMT_Encode4(3085), // Rule ID 78 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
      // Combiner Rule #48: constant_fold_fp_binop; wip_match_opcode 'G_FSUB'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 226: @3085
    GIM_Reject,
    // Label 52: @3086
    GIM_Try, /*On fail goto*//*Label 227*/ GIMT_Encode4(3097), // Rule ID 79 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
      // Combiner Rule #48: constant_fold_fp_binop; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 227: @3097
    GIM_Try, /*On fail goto*//*Label 228*/ GIMT_Encode4(3108), // Rule ID 174 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 228: @3108
    GIM_Try, /*On fail goto*//*Label 229*/ GIMT_Encode4(3131), // Rule ID 107 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule59Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner0),
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #59: right_identity_one_fp
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 229: @3131
    GIM_Try, /*On fail goto*//*Label 230*/ GIMT_Encode4(3151), // Rule ID 117 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule67Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] x
      // No operand predicates
      // MIs[0] y
      // No operand predicates
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIMT_Encode2(GICXXPred_MI_Predicate_GICombiner2),
      // Combiner Rule #67: right_identity_neg_one_fp
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_FNEG),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_RootToRootCopy, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 230: @3151
    GIM_Reject,
    // Label 53: @3152
    GIM_Try, /*On fail goto*//*Label 231*/ GIMT_Encode4(3163), // Rule ID 80 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule48Enabled),
      // Combiner Rule #48: constant_fold_fp_binop; wip_match_opcode 'G_FDIV'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner39),
    // Label 231: @3163
    GIM_Reject,
    // Label 54: @3164
    GIM_Try, /*On fail goto*//*Label 232*/ GIMT_Encode4(3193), // Rule ID 105 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule57Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] t
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FNEG),
      // MIs[1] src
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #57: fneg_fneg_fold
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/1, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 232: @3193
    GIM_Reject,
    // Label 55: @3194
    GIM_Try, /*On fail goto*//*Label 233*/ GIMT_Encode4(3215), // Rule ID 115 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule65Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src1
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FPEXT),
      // MIs[1] src0
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #65: fptrunc_fpext_fold
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner48),
    // Label 233: @3215
    GIM_Reject,
    // Label 56: @3216
    GIM_Try, /*On fail goto*//*Label 234*/ GIMT_Encode4(3237), // Rule ID 138 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[5]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 234: @3237
    GIM_Reject,
    // Label 57: @3238
    GIM_Try, /*On fail goto*//*Label 235*/ GIMT_Encode4(3259), // Rule ID 139 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule77Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] __unary_undef_to_undef_match_0.x
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #77: unary_undef_to_undef @ [__unary_undef_to_undef_match_0[6]]
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner57),
    // Label 235: @3259
    GIM_Reject,
    // Label 58: @3260
    GIM_Try, /*On fail goto*//*Label 236*/ GIMT_Encode4(3271), // Rule ID 122 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: undef_to_fp_zero; wip_match_opcode 'G_SITOFP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner52),
    // Label 236: @3271
    GIM_Reject,
    // Label 59: @3272
    GIM_Try, /*On fail goto*//*Label 237*/ GIMT_Encode4(3283), // Rule ID 121 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule71Enabled),
      // Combiner Rule #71: undef_to_fp_zero; wip_match_opcode 'G_UITOFP'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner52),
    // Label 237: @3283
    GIM_Reject,
    // Label 60: @3284
    GIM_Try, /*On fail goto*//*Label 238*/ GIMT_Encode4(3295), // Rule ID 175 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 238: @3295
    GIM_Reject,
    // Label 61: @3296
    GIM_Try, /*On fail goto*//*Label 239*/ GIMT_Encode4(3307), // Rule ID 176 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 239: @3307
    GIM_Reject,
    // Label 62: @3308
    GIM_Try, /*On fail goto*//*Label 240*/ GIMT_Encode4(3319), // Rule ID 177 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINNUM_IEEE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 240: @3319
    GIM_Reject,
    // Label 63: @3320
    GIM_Try, /*On fail goto*//*Label 241*/ GIMT_Encode4(3331), // Rule ID 178 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXNUM_IEEE'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 241: @3331
    GIM_Reject,
    // Label 64: @3332
    GIM_Try, /*On fail goto*//*Label 242*/ GIMT_Encode4(3343), // Rule ID 179 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMINIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 242: @3343
    GIM_Reject,
    // Label 65: @3344
    GIM_Try, /*On fail goto*//*Label 243*/ GIMT_Encode4(3355), // Rule ID 180 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule87Enabled),
      // Combiner Rule #87: commute_fp_constant_to_rhs; wip_match_opcode 'G_FMAXIMUM'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner67),
    // Label 243: @3355
    GIM_Reject,
    // Label 66: @3356
    GIM_Try, /*On fail goto*//*Label 244*/ GIMT_Encode4(3367), // Rule ID 60 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 244: @3367
    GIM_Try, /*On fail goto*//*Label 245*/ GIMT_Encode4(3378), // Rule ID 118 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule68Enabled),
      // Combiner Rule #68: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner49),
    // Label 245: @3378
    GIM_Try, /*On fail goto*//*Label 246*/ GIMT_Encode4(3401), // Rule ID 89 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule50Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] lhs
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, 0,
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      // Combiner Rule #50: right_identity_zero @ [__right_identity_zero_match_0[7]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 246: @3401
    GIM_Reject,
    // Label 67: @3402
    GIM_Try, /*On fail goto*//*Label 247*/ GIMT_Encode4(3413), // Rule ID 73 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 247: @3413
    GIM_Try, /*On fail goto*//*Label 248*/ GIMT_Encode4(3424), // Rule ID 157 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 248: @3424
    GIM_Reject,
    // Label 68: @3425
    GIM_Try, /*On fail goto*//*Label 249*/ GIMT_Encode4(3436), // Rule ID 74 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 249: @3436
    GIM_Try, /*On fail goto*//*Label 250*/ GIMT_Encode4(3447), // Rule ID 158 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_SMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 250: @3447
    GIM_Reject,
    // Label 69: @3448
    GIM_Try, /*On fail goto*//*Label 251*/ GIMT_Encode4(3459), // Rule ID 75 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 251: @3459
    GIM_Try, /*On fail goto*//*Label 252*/ GIMT_Encode4(3470), // Rule ID 159 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UMIN'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 252: @3470
    GIM_Reject,
    // Label 70: @3471
    GIM_Try, /*On fail goto*//*Label 253*/ GIMT_Encode4(3482), // Rule ID 76 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule47Enabled),
      // Combiner Rule #47: constant_fold_binop; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner38),
    // Label 253: @3482
    GIM_Try, /*On fail goto*//*Label 254*/ GIMT_Encode4(3493), // Rule ID 160 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule86Enabled),
      // Combiner Rule #86: commute_int_constant_to_rhs; wip_match_opcode 'G_UMAX'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner66),
    // Label 254: @3493
    GIM_Reject,
    // Label 71: @3494
    GIM_Try, /*On fail goto*//*Label 255*/ GIMT_Encode4(3505), // Rule ID 132 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule76Enabled),
      // Combiner Rule #76: unary_undef_to_zero; wip_match_opcode 'G_ABS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner55),
    // Label 255: @3505
    GIM_Reject,
    // Label 72: @3506
    GIM_Try, /*On fail goto*//*Label 256*/ GIMT_Encode4(3517), // Rule ID 147 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
      // Combiner Rule #82: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
    // Label 256: @3517
    GIM_Reject,
    // Label 73: @3518
    GIM_Try, /*On fail goto*//*Label 257*/ GIMT_Encode4(3529), // Rule ID 28 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule21Enabled),
      // Combiner Rule #21: extractvecelt_pairwise_add; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
    // Label 257: @3529
    GIM_Try, /*On fail goto*//*Label 258*/ GIMT_Encode4(3540), // Rule ID 148 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule82Enabled),
      // Combiner Rule #82: insert_extract_vec_elt_out_of_bounds; wip_match_opcode 'G_EXTRACT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner62),
    // Label 258: @3540
    GIM_Reject,
    // Label 74: @3541
    GIM_Try, /*On fail goto*//*Label 259*/ GIMT_Encode4(3552), // Rule ID 143 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule79Enabled),
      // Combiner Rule #79: propagate_undef_all_ops; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner59),
    // Label 259: @3552
    GIM_Try, /*On fail goto*//*Label 260*/ GIMT_Encode4(3563), // Rule ID 145 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule80Enabled),
      // Combiner Rule #80: propagate_undef_shuffle_mask; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner60),
    // Label 260: @3563
    GIM_Reject,
    // Label 75: @3564
    GIM_Reject,
    }; // Size: 3565 bytes
  return MatchTable0;
}
#undef GIMT_Encode2
#undef GIMT_Encode4
#undef GIMT_Encode8

#endif // ifdef GET_GICOMBINER_IMPL

#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
#ifdef GET_GICOMBINER_CONSTRUCTOR_INITS
, State(0),
ExecInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GICOMBINER_CONSTRUCTOR_INITS

