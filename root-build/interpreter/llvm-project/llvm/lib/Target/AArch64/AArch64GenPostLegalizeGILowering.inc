/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AArch64PostLegalizerLoweringImpl Combiner Match Table                      *|
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
struct AArch64PostLegalizerLoweringImplRuleConfig {
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
  case 3:	 // 6 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'd':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "up", 2) != 0)
        break;
      return 0;	 // "dup"
    case 'e':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "xt", 2) != 0)
        break;
      return 2;	 // "ext"
    case 'r':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ev", 2) != 0)
        break;
      return 1;	 // "rev"
    case 't':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "rn", 2) != 0)
        break;
      return 5;	 // "trn"
    case 'u':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "zp", 2) != 0)
        break;
      return 4;	 // "uzp"
    case 'z':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ip", 2) != 0)
        break;
      return 3;	 // "zip"
    }
    break;
  case 7:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "fullrev", 7) != 0)
      break;
    return 6;	 // "fullrev"
  case 10:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "lower_mull", 10) != 0)
      break;
    return 18;	 // "lower_mull"
  case 11:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "shuf_to_ins", 11) != 0)
      break;
    return 8;	 // "shuf_to_ins"
  case 12:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "form_duplane", 12) != 0)
      break;
    return 7;	 // "form_duplane"
  case 15:	 // 3 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "djust_icmp_imm", 14) != 0)
        break;
      return 10;	 // "adjust_icmp_imm"
    case 'f':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "orm_truncstore", 14) != 0)
        break;
      return 15;	 // "form_truncstore"
    case 'v':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "ashr_vlshr_imm", 14) != 0)
        break;
      return 9;	 // "vashr_vlshr_imm"
    }
    break;
  case 17:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "lower_vector_fcmp", 17) != 0)
      break;
    return 14;	 // "lower_vector_fcmp"
  case 18:	 // 2 strings to match.
    switch (RuleIdentifier[0]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "nsertelt_nonconst", 17) != 0)
        break;
      return 20;	 // "insertelt_nonconst"
    case 's':	 // 1 string to match.
      if (memcmp(RuleIdentifier.data()+1, "wap_icmp_operands", 17) != 0)
        break;
      return 11;	 // "swap_icmp_operands"
    }
    break;
  case 19:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "build_vector_to_dup", 19) != 0)
      break;
    return 12;	 // "build_vector_to_dup"
  case 22:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "unmerge_ext_to_unmerge", 22) != 0)
      break;
    return 17;	 // "unmerge_ext_to_unmerge"
  case 23:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "vector_unmerge_lowering", 23) != 0)
      break;
    return 19;	 // "vector_unmerge_lowering"
  case 26:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "vector_sext_inreg_to_shift", 26) != 0)
      break;
    return 16;	 // "vector_sext_inreg_to_shift"
  case 29:	 // 1 string to match.
    if (memcmp(RuleIdentifier.data()+0, "build_vector_to_vector_insert", 29) != 0)
      break;
    return 13;	 // "build_vector_to_vector_insert"
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
    return {{0, 21}};
  }
  const auto I = getRuleIdxForIdentifier(RangePair.first);
  if (!I)
    return std::nullopt;
  return {{*I, *I + 1}};
}

bool AArch64PostLegalizerLoweringImplRuleConfig::setRuleEnabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.reset(I);
  return true;
}

bool AArch64PostLegalizerLoweringImplRuleConfig::setRuleDisabled(StringRef RuleIdentifier) {
  auto MaybeRange = getRuleRangeForIdentifier(RuleIdentifier);
  if (!MaybeRange)
    return false;
  for (auto I = MaybeRange->first; I < MaybeRange->second; ++I)
    DisabledRules.set(I);
  return true;
}

static std::vector<std::string> AArch64PostLegalizerLoweringOption;
static cl::list<std::string> AArch64PostLegalizerLoweringDisableOption(
    "aarch64postlegalizerlowering-disable-rule",
    cl::desc("Disable one or more combiner rules temporarily in the AArch64PostLegalizerLowering pass"),
    cl::CommaSeparated,
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &Str) {
      AArch64PostLegalizerLoweringOption.push_back(Str);
    }));
static cl::list<std::string> AArch64PostLegalizerLoweringOnlyEnableOption(
    "aarch64postlegalizerlowering-only-enable-rule",
    cl::desc("Disable all rules in the AArch64PostLegalizerLowering pass then re-enable the specified ones"),
    cl::Hidden,
    cl::cat(GICombinerOptionCategory),
    cl::callback([](const std::string &CommaSeparatedArg) {
      StringRef Str = CommaSeparatedArg;
      AArch64PostLegalizerLoweringOption.push_back("*");
      do {
        auto X = Str.split(",");
        AArch64PostLegalizerLoweringOption.push_back(("!" + X.first).str());
        Str = X.second;
      } while (!Str.empty());
    }));


bool AArch64PostLegalizerLoweringImplRuleConfig::isRuleEnabled(unsigned RuleID) const {
    return  !DisabledRules.test(RuleID);
}
bool AArch64PostLegalizerLoweringImplRuleConfig::parseCommandLineOption() {
  for (StringRef Identifier : AArch64PostLegalizerLoweringOption) {
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
  typedef ComplexRendererFns(AArch64PostLegalizerLoweringImpl::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AArch64PostLegalizerLoweringImpl::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr &, int) const;
  const ExecInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ExecInfo;
  static AArch64PostLegalizerLoweringImpl::ComplexMatcherMemFn ComplexPredicateFns[];
  static AArch64PostLegalizerLoweringImpl::CustomRendererFn CustomRenderers[];
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

PredicateBitset AArch64PostLegalizerLoweringImpl::
computeAvailableModuleFeatures(const AArch64Subtarget *Subtarget) const {
  PredicateBitset Features{};
  return Features;
}

void AArch64PostLegalizerLoweringImpl::setupGeneratedPerFunctionState(MachineFunction &MF) {
  AvailableFunctionFeatures = computeAvailableFunctionFeatures((const AArch64Subtarget *)&MF.getSubtarget(), &MF);
}
PredicateBitset AArch64PostLegalizerLoweringImpl::
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

AArch64PostLegalizerLoweringImpl::ComplexMatcherMemFn
AArch64PostLegalizerLoweringImpl::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
};

bool AArch64PostLegalizerLoweringImpl::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI, const MatcherState &State) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AArch64PostLegalizerLoweringImpl::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
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
};

bool AArch64PostLegalizerLoweringImpl::testSimplePredicate(unsigned Predicate) const {
    return RuleConfig.isRuleEnabled(Predicate - GICXXPred_Invalid - 1);
}
// Custom renderers.
enum {
  GICR_Invalid,
};
AArch64PostLegalizerLoweringImpl::CustomRendererFn
AArch64PostLegalizerLoweringImpl::CustomRenderers[] = {
  nullptr, // GICR_Invalid
};

bool AArch64PostLegalizerLoweringImpl::tryCombineAll(MachineInstr &I) const {
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
};
bool AArch64PostLegalizerLoweringImpl::runCustomAction(unsigned ApplyID, const MatcherState &State, NewMIVector &OutMIs) const {
  Helper.getBuilder().setInstrAndDebugLoc(*State.MIs[0]);
  switch(ApplyID) {
  case GICXXCustomAction_GICombiner0:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchDup(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner1:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchREV(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner2:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchEXT(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyEXT(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner3:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchZip(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner4:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchUZP(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner5:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchTRN(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyShuffleVectorPseudo(*State.MIs[0], GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner6:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return ShuffleVectorInst::isReverseMask(State.MIs[0]->getOperand(3).getShuffleMask(),
                                                            State.MIs[0]->getOperand(3).getShuffleMask().size());}()) {
      return false;
    }
    // Apply Patterns
    applyFullRev(*State.MIs[0], MRI);
    return true;
  }
  case GICXXCustomAction_GICombiner7:{
    std::pair<unsigned, int> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchDupLane(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyDupLane(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner8:{
    std::tuple<Register, int, Register, int> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchINS(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyINS(*State.MIs[0], MRI, B, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner9:{
    int64_t GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchVAshrLshrImm(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyVAshrLshrImm(*State.MIs[0], MRI, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner10:{
    std::pair<uint64_t, CmpInst::Predicate> GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchAdjustICmpImmAndPred(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyAdjustICmpImmAndPred(*State.MIs[0], GIMatchData_matchinfo, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner11:{
    // Match Patterns
    if(![&](){return trySwapICmpOperands(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applySwapICmpOperands(*State.MIs[0], Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner12:{
    // Match Patterns
    if(![&](){return matchBuildVectorToDup(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyBuildVectorToDup(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner13:{
    // Match Patterns
    if(![&](){return matchLowerBuildToInsertVecElt(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyLowerBuildToInsertVecElt(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner14:{
    // Match Patterns
    if(![&](){return matchLowerVectorFCMP(*State.MIs[0], MRI, B);}()) {
      return false;
    }
    // Apply Patterns
    applyLowerVectorFCMP(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner15:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchFormTruncstore(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyFormTruncstore(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner16:{
    // Match Patterns
    if(![&](){return matchVectorSextInReg(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyVectorSextInReg(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner17:{
    Register GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchUnmergeExtToUnmerge(*State.MIs[0], MRI, GIMatchData_matchinfo);}()) {
      return false;
    }
    // Apply Patterns
    applyUnmergeExtToUnmerge(*State.MIs[0], MRI, B, Observer, GIMatchData_matchinfo);
    return true;
  }
  case GICXXCustomAction_GICombiner18:{
    // Match Patterns
    if(![&](){return matchExtMulToMULL(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyExtMulToMULL(*State.MIs[0], MRI, B, Observer);
    return true;
  }
  case GICXXCustomAction_GICombiner19:{
    // Match Patterns
    if(![&](){return matchScalarizeVectorUnmerge(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyScalarizeVectorUnmerge(*State.MIs[0], MRI, B);
    return true;
  }
  case GICXXCustomAction_GICombiner20:{
    ShuffleVectorPseudo GIMatchData_matchinfo;
    // Match Patterns
    if(![&](){return matchNonConstInsert(*State.MIs[0], MRI);}()) {
      return false;
    }
    // Apply Patterns
    applyNonConstInsert(*State.MIs[0], MRI, B);
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
const uint8_t *AArch64PostLegalizerLoweringImpl::getMatchTable() const {
  constexpr static uint8_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/GIMT_Encode2(55), GIMT_Encode2(237), /*)*//*default:*//*Label 11*/ GIMT_Encode4(1004),
    /*TargetOpcode::G_MUL*//*Label 0*/ GIMT_Encode4(738), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_UNMERGE_VALUES*//*Label 1*/ GIMT_Encode4(750), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_BUILD_VECTOR*//*Label 2*/ GIMT_Encode4(773), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_STORE*//*Label 3*/ GIMT_Encode4(799), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_SEXT_INREG*//*Label 4*/ GIMT_Encode4(811), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_LSHR*//*Label 5*/ GIMT_Encode4(823),
    /*TargetOpcode::G_ASHR*//*Label 6*/ GIMT_Encode4(835), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_ICMP*//*Label 7*/ GIMT_Encode4(847),
    /*TargetOpcode::G_FCMP*//*Label 8*/ GIMT_Encode4(870), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0), GIMT_Encode4(0),
    /*TargetOpcode::G_INSERT_VECTOR_ELT*//*Label 9*/ GIMT_Encode4(882), GIMT_Encode4(0),
    /*TargetOpcode::G_SHUFFLE_VECTOR*//*Label 10*/ GIMT_Encode4(894),
    // Label 0: @738
    GIM_Try, /*On fail goto*//*Label 12*/ GIMT_Encode4(749), // Rule ID 19 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule18Enabled),
      // Combiner Rule #18: lower_mull; wip_match_opcode 'G_MUL'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner18),
    // Label 12: @749
    GIM_Reject,
    // Label 1: @750
    GIM_Try, /*On fail goto*//*Label 13*/ GIMT_Encode4(761), // Rule ID 18 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule17Enabled),
      // Combiner Rule #17: unmerge_ext_to_unmerge; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner17),
    // Label 13: @761
    GIM_Try, /*On fail goto*//*Label 14*/ GIMT_Encode4(772), // Rule ID 20 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule19Enabled),
      // Combiner Rule #19: vector_unmerge_lowering; wip_match_opcode 'G_UNMERGE_VALUES'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner19),
    // Label 14: @772
    GIM_Reject,
    // Label 2: @773
    GIM_Try, /*On fail goto*//*Label 15*/ GIMT_Encode4(784), // Rule ID 13 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule12Enabled),
      // Combiner Rule #12: build_vector_to_dup; wip_match_opcode 'G_BUILD_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner12),
    // Label 15: @784
    GIM_Try, /*On fail goto*//*Label 16*/ GIMT_Encode4(798), // Rule ID 14 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule13Enabled),
      GIM_CheckNumOperandsGE, /*MI*/0, /*Expected*/2,
      // MIs[0] dst
      // No operand predicates
      // MIs[0] unused
      // No operand predicates
      // Combiner Rule #13: build_vector_to_vector_insert
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner13),
    // Label 16: @798
    GIM_Reject,
    // Label 3: @799
    GIM_Try, /*On fail goto*//*Label 17*/ GIMT_Encode4(810), // Rule ID 16 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule15Enabled),
      // MIs[0] src
      // No operand predicates
      // MIs[0] addr
      // No operand predicates
      // Combiner Rule #15: form_truncstore
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner15),
    // Label 17: @810
    GIM_Reject,
    // Label 4: @811
    GIM_Try, /*On fail goto*//*Label 18*/ GIMT_Encode4(822), // Rule ID 17 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule16Enabled),
      // Combiner Rule #16: vector_sext_inreg_to_shift; wip_match_opcode 'G_SEXT_INREG'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner16),
    // Label 18: @822
    GIM_Reject,
    // Label 5: @823
    GIM_Try, /*On fail goto*//*Label 19*/ GIMT_Encode4(834), // Rule ID 10 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
      // Combiner Rule #9: vashr_vlshr_imm; wip_match_opcode 'G_LSHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
    // Label 19: @834
    GIM_Reject,
    // Label 6: @835
    GIM_Try, /*On fail goto*//*Label 20*/ GIMT_Encode4(846), // Rule ID 9 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule9Enabled),
      // Combiner Rule #9: vashr_vlshr_imm; wip_match_opcode 'G_ASHR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner9),
    // Label 20: @846
    GIM_Reject,
    // Label 7: @847
    GIM_Try, /*On fail goto*//*Label 21*/ GIMT_Encode4(858), // Rule ID 11 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule10Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] tst
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #10: adjust_icmp_imm
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner10),
    // Label 21: @858
    GIM_Try, /*On fail goto*//*Label 22*/ GIMT_Encode4(869), // Rule ID 12 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule11Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] tst
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #11: swap_icmp_operands
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner11),
    // Label 22: @869
    GIM_Reject,
    // Label 8: @870
    GIM_Try, /*On fail goto*//*Label 23*/ GIMT_Encode4(881), // Rule ID 15 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule14Enabled),
      // MIs[0] dst
      // No operand predicates
      // MIs[0] tst
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      // No operand predicates
      // Combiner Rule #14: lower_vector_fcmp
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner14),
    // Label 23: @881
    GIM_Reject,
    // Label 9: @882
    GIM_Try, /*On fail goto*//*Label 24*/ GIMT_Encode4(893), // Rule ID 21 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule20Enabled),
      // Combiner Rule #20: insertelt_nonconst; wip_match_opcode 'G_INSERT_VECTOR_ELT'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner20),
    // Label 24: @893
    GIM_Reject,
    // Label 10: @894
    GIM_Try, /*On fail goto*//*Label 25*/ GIMT_Encode4(905), // Rule ID 0 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule0Enabled),
      // Combiner Rule #0: dup; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner0),
    // Label 25: @905
    GIM_Try, /*On fail goto*//*Label 26*/ GIMT_Encode4(916), // Rule ID 1 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule1Enabled),
      // Combiner Rule #1: rev; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner1),
    // Label 26: @916
    GIM_Try, /*On fail goto*//*Label 27*/ GIMT_Encode4(927), // Rule ID 2 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule2Enabled),
      // Combiner Rule #2: ext; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner2),
    // Label 27: @927
    GIM_Try, /*On fail goto*//*Label 28*/ GIMT_Encode4(938), // Rule ID 3 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule3Enabled),
      // Combiner Rule #3: zip; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner3),
    // Label 28: @938
    GIM_Try, /*On fail goto*//*Label 29*/ GIMT_Encode4(949), // Rule ID 4 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule4Enabled),
      // Combiner Rule #4: uzp; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner4),
    // Label 29: @949
    GIM_Try, /*On fail goto*//*Label 30*/ GIMT_Encode4(960), // Rule ID 5 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule5Enabled),
      // Combiner Rule #5: trn; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner5),
    // Label 30: @960
    GIM_Try, /*On fail goto*//*Label 31*/ GIMT_Encode4(971), // Rule ID 7 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule7Enabled),
      // Combiner Rule #7: form_duplane; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner7),
    // Label 31: @971
    GIM_Try, /*On fail goto*//*Label 32*/ GIMT_Encode4(982), // Rule ID 8 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule8Enabled),
      // Combiner Rule #8: shuf_to_ins; wip_match_opcode 'G_SHUFFLE_VECTOR'
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner8),
    // Label 32: @982
    GIM_Try, /*On fail goto*//*Label 33*/ GIMT_Encode4(1003), // Rule ID 6 //
      GIM_CheckSimplePredicate, GIMT_Encode2(GICXXPred_Simple_IsRule6Enabled),
      // MIs[0] src
      // No operand predicates
      // MIs[0] src1
      // No operand predicates
      // MIs[0] src2
      GIM_RecordInsnIgnoreCopies, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, GIMT_Encode2(TargetOpcode::G_IMPLICIT_DEF),
      // MIs[0] mask
      // No operand predicates
      GIM_CheckIsSafeToFold, /*NumInsns*/1,
      // Combiner Rule #6: fullrev
      GIR_DoneWithCustomAction, /*Fn*/GIMT_Encode2(GICXXCustomAction_GICombiner6),
    // Label 33: @1003
    GIM_Reject,
    // Label 11: @1004
    GIM_Reject,
    }; // Size: 1005 bytes
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

