/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64O0PreLegalizerCombinerImpl Combiner Match Table                     *|
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
struct AArch64O0PreLegalizerCombinerImplRuleConfig {
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
  case 9:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "copy_prop", 9) != 0)
      break;
    return 0;	 // "copy_prop"
  case 10:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'm':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ul_to_shl", 9) != 0)
        break;
      return 1;	 // "mul_to_shl"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ub_to_add", 9) != 0)
        break;
      return 2;	 // "sub_to_add"
    }
    break;
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "not_cmp_fold", 12) != 0)
      break;
    return 9;	 // "not_cmp_fold"
  case 13:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "load_and_mask", 13) != 0)
      break;
    return 8;	 // "load_and_mask"
  case 14:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "mul_by_neg_one", 14) != 0)
      break;
    return 4;	 // "mul_by_neg_one"
  case 15:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xtending_loads", 14) != 0)
        break;
      return 7;	 // "extending_loads"
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "dempotent_prop", 14) != 0)
        break;
      return 5;	 // "idempotent_prop"
    }
    break;
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "add_p2i_to_ptradd", 17) != 0)
      break;
    return 3;	 // "add_p2i_to_ptradd"
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "ptr_add_immed_chain", 19) != 0)
      break;
    return 6;	 // "ptr_add_immed_chain"
  case 21:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "combine_concat_vector", 21) != 0)
      break;
    return 11;	 // "combine_concat_vector"
  case 28:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "opt_brcond_by_inverting_cond", 28) != 0)
      break;
    return 10;	 // "opt_brcond_by_inverting_cond"
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
    return {{0, 12}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64O0PreLegalizerCombinerImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64O0PreLegalizerCombinerImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64O0PreLegalizerCombinerOption;
static cl::list<std::string> AArch64O0PreLegalizerCombinerDisableOption(
    "aarch64o0prelegalizercombiner-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64O0PreLegalizerCombiner pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64O0PreLegalizerCombinerOption.push_back(Str);
    }));
static cl::list<std::string> AArch64O0PreLegalizerCombinerOnlyEnableOption(
    "aarch64o0prelegalizercombiner-only-enable-rule",
    cl::desc("Disable all rules in the AArch64O0PreLegalizerCombiner pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64O0PreLegalizerCombinerOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64O0PreLegalizerCombinerOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64O0PreLegalizerCombinerImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64O0PreLegalizerCombinerImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64O0PreLegalizerCombinerOption) {
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
  typedef ComplexRendererFns(AArch64O0PreLegalizerCombinerImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64O0PreLegalizerCombinerImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64O0PreLegalizerCombinerImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64O0PreLegalizerCombinerImpl::CustomRendererFn CustomRenderers[];
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

PredicateBitset AArch64O0PreLegalizerCombinerImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void AArch64O0PreLegalizerCombinerImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64O0PreLegalizerCombinerImpl::
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

AArch64O0PreLegalizerCombinerImpl::ComplexMatcherMemFn
AArch64O0PreLegalizerCombinerImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

bool AArch64O0PreLegalizerCombinerImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64O0PreLegalizerCombinerImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
};

bool AArch64O0PreLegalizerCombinerImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64O0PreLegalizerCombinerImpl::CustomRendererFn
AArch64O0PreLegalizerCombinerImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool AArch64O0PreLegalizerCombinerImpl::tryCombineAllImpl(MachineInstr &I) const {
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
};
bool AArch64O0PreLegalizerCombinerImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
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
    unsigned GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineMulToShl(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineSubToAdd(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFnNoErase(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    std::pair<Register, bool> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineAddP2IToPtrAdd(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    PtrAddChain GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyPtrAddImmedChain(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    PreferredTuple GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineExtendingLoads(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    std::function<void(MachineIRBuilder &)> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineLoadWithAndMask(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyBuildFn(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    SmallVector<Register, 4> GIMatchData_info;
    // Match Patterns
    if(![&](){return Helper.matchNotCmp(*State.MIs[0], GIMatchData_info);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyNotCmp(*State.MIs[0], GIMatchData_info);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    MachineInstr * GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyOptBrCondByInvertingCond(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    SmallVector<Register> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return Helper.matchCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    Helper.applyCombineConcatVectors(*State.MIs[0], GIMatchData_matchinfo);
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
const uint8_t *AArch64O0PreLegalizerCombinerImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(20), GIMT_Encode2(230), /*)*//*default:*//*Label 15*/ GIMT_Encode4(1134),
    /*TargetOpcode::COPY*//*Label 0*/ GIMT_Encode4(850), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ADD*//*Label 1*/ GIMT_Encode4(862),
    /*TargetOpcode::G_SUB*//*Label 2*/ GIMT_Encode4(874),
    /*TargetOpcode::G_MUL*//*Label 3*/ GIMT_Encode4(896), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_AND*//*Label 4*/ GIMT_Encode4(948), GIMT_Encode4(0),
    /*TargetOpcode::G_XOR*//*Label 5*/ GIMT_Encode4(960), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_CONCAT_VECTORS*//*Label 6*/ GIMT_Encode4(972), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FREEZE*//*Label 7*/ GIMT_Encode4(984), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_LOAD*//*Label 8*/ GIMT_Encode4(1014),
    /*TargetOpcode::G_SEXTLOAD*//*Label 9*/ GIMT_Encode4(1026),
    /*TargetOpcode::G_ZEXTLOAD*//*Label 10*/ GIMT_Encode4(1038), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FABS*//*Label 11*/ GIMT_Encode4(1050), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_FCANONICALIZE*//*Label 12*/ GIMT_Encode4(1080), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_PTR_ADD*//*Label 13*/ GIMT_Encode4(1110), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_BR*//*Label 14*/ GIMT_Encode4(1122),
    // Label 0: @850
    GIM_Try, /*On fail goto*//*Label 16*/ GIMT_Encode4(861), // Rule ID 0 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] s
      // No operand predicates
      // Combiner Rule #0: copy_prop
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
    // Label 16: @861
    GIM_Reject,
    // Label 1: @862
    GIM_Try, /*On fail goto*//*Label 17*/ GIMT_Encode4(873), // Rule ID 3 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
      // Combiner Rule #3: add_p2i_to_ptradd; wip_match_opcode 'G_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
    // Label 17: @873
    GIM_Reject,
    // Label 2: @874
    GIM_Try, /*On fail goto*//*Label 18*/ GIMT_Encode4(895), // Rule ID 2 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] op1
      // No operand predicates
      // MIs[0] c
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_CONSTANT),
      // MIs[1] imm
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #2: sub_to_add
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 18: @895
    GIM_Reject,
    // Label 3: @896
    GIM_Try, /*On fail goto*//*Label 19*/ GIMT_Encode4(936), // Rule ID 4 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
      // MIs[0] dst
      GIM_RecordRegType, /*MI*/0, /*Op*/0, /*TempTypeIdx*/uint8_t(-1),
      // MIs[0] x
      // No operand predicates
      // MIs[0] Operand 2
      GIM_CheckConstantInt8, /*MI*/0, /*Op*/2, uint8_t(-1),
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/uint8_t(-1),
      GIR_BuildConstant, /*TempRegID*/0, /*Val*/GIMT_Encode8(0),
      // Combiner Rule #4: mul_by_neg_one
      GIR_BuildRootMI, /*Opcode*/GIMT_Encode2(TargetOpcode::G_SUB),
      GIR_RootToRootCopy, /*OpIdx*/0, // dst
      GIR_AddSimpleTempRegister, /*InsnID*/0, /*TempRegID*/0,
      GIR_RootToRootCopy, /*OpIdx*/1, // x
      GIR_EraseRootFromParent_Done,
    // Label 19: @936
    GIM_Try, /*On fail goto*//*Label 20*/ GIMT_Encode4(947), // Rule ID 1 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
      // MIs[0] d
      // No operand predicates
      // MIs[0] op1
      // No operand predicates
      // MIs[0] op2
      // No operand predicates
      // Combiner Rule #1: mul_to_shl
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 20: @947
    GIM_Reject,
    // Label 4: @948
    GIM_Try, /*On fail goto*//*Label 21*/ GIMT_Encode4(959), // Rule ID 12 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
      // Combiner Rule #8: load_and_mask; wip_match_opcode 'G_AND'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 21: @959
    GIM_Reject,
    // Label 5: @960
    GIM_Try, /*On fail goto*//*Label 22*/ GIMT_Encode4(971), // Rule ID 13 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
      // Combiner Rule #9: not_cmp_fold; wip_match_opcode 'G_XOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 22: @971
    GIM_Reject,
    // Label 6: @972
    GIM_Try, /*On fail goto*//*Label 23*/ GIMT_Encode4(983), // Rule ID 15 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
      // Combiner Rule #11: combine_concat_vector; wip_match_opcode 'G_CONCAT_VECTORS'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
    // Label 23: @983
    GIM_Reject,
    // Label 7: @984
    GIM_Try, /*On fail goto*//*Label 24*/ GIMT_Encode4(1013), // Rule ID 5 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FREEZE),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #5: idempotent_prop @ [__idempotent_prop_match_0[0]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 24: @1013
    GIM_Reject,
    // Label 8: @1014
    GIM_Try, /*On fail goto*//*Label 25*/ GIMT_Encode4(1025), // Rule ID 9 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // Combiner Rule #7: extending_loads; wip_match_opcode 'G_LOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 25: @1025
    GIM_Reject,
    // Label 9: @1026
    GIM_Try, /*On fail goto*//*Label 26*/ GIMT_Encode4(1037), // Rule ID 10 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // Combiner Rule #7: extending_loads; wip_match_opcode 'G_SEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 26: @1037
    GIM_Reject,
    // Label 10: @1038
    GIM_Try, /*On fail goto*//*Label 27*/ GIMT_Encode4(1049), // Rule ID 11 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // Combiner Rule #7: extending_loads; wip_match_opcode 'G_ZEXTLOAD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 27: @1049
    GIM_Reject,
    // Label 11: @1050
    GIM_Try, /*On fail goto*//*Label 28*/ GIMT_Encode4(1079), // Rule ID 6 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FABS),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #5: idempotent_prop @ [__idempotent_prop_match_0[1]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 28: @1079
    GIM_Reject,
    // Label 12: @1080
    GIM_Try, /*On fail goto*//*Label 29*/ GIMT_Encode4(1109), // Rule ID 7 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] src
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_FCANONICALIZE),
      // MIs[1] __idempotent_prop_match_0.x
      // No operand predicates
      GIM_CheckCanReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #5: idempotent_prop @ [__idempotent_prop_match_0[2]]
      GIR_ReplaceReg, /*OldInsnID*/0, /*OldOpIdx*/0, /*NewInsnId*/0, /*NewOpIdx*/1,
      GIR_EraseRootFromParent_Done,
    // Label 29: @1109
    GIM_Reject,
    // Label 13: @1110
    GIM_Try, /*On fail goto*//*Label 30*/ GIMT_Encode4(1121), // Rule ID 8 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
      // Combiner Rule #6: ptr_add_immed_chain; wip_match_opcode 'G_PTR_ADD'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
    // Label 30: @1121
    GIM_Reject,
    // Label 14: @1122
    GIM_Try, /*On fail goto*//*Label 31*/ GIMT_Encode4(1133), // Rule ID 14 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
      // Combiner Rule #10: opt_brcond_by_inverting_cond; wip_match_opcode 'G_BR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 31: @1133
    GIM_Reject,
    // Label 15: @1134
    GIM_Reject,
    }; // Size: 1135 bytes
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

