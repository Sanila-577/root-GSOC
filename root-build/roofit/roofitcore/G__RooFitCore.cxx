// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooFitCore
#define R__NO_DEPRECATION

/*******************************************************************/
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"

#include <RooFitLegacy/RooCatTypeLegacy.h>
#include <RooLinkedList.h>
#include <TSortedList.h>

// Header files passed as explicit arguments
#include "Roo1DTable.h"
#include "RooAICRegistry.h"
#include "RooAbsAnaConvPdf.h"
#include "RooAbsArg.h"
#include "RooAbsBinning.h"
#include "RooAbsCache.h"
#include "RooAbsCacheElement.h"
#include "RooAbsCachedPdf.h"
#include "RooAbsCachedReal.h"
#include "RooAbsCategory.h"
#include "RooAbsCategoryLValue.h"
#include "RooAbsCollection.h"
#include "RooAbsData.h"
#include "RooAbsDataHelper.h"
#include "RooAbsDataStore.h"
#include "RooAbsFunc.h"
#include "RooAbsGenContext.h"
#include "RooAbsHiddenReal.h"
#include "RooAbsIntegrator.h"
#include "RooAbsLValue.h"
#include "RooAbsMCStudyModule.h"
#include "RooAbsMoment.h"
#include "RooAbsPdf.h"
#include "RooAbsProxy.h"
#include "RooAbsReal.h"
#include "RooAbsRealLValue.h"
#include "RooAbsSelfCachedPdf.h"
#include "RooAbsSelfCachedReal.h"
#include "RooAbsStudy.h"
#include "RooAddGenContext.h"
#include "RooAddModel.h"
#include "RooAddPdf.h"
#include "RooAddition.h"
#include "RooArgList.h"
#include "RooArgProxy.h"
#include "RooArgSet.h"
#include "RooBinSamplingPdf.h"
#include "RooBinWidthFunction.h"
#include "RooBinnedGenContext.h"
#include "RooBinning.h"
#include "RooBinningCategory.h"
#include "RooBrentRootFinder.h"
#include "RooCacheManager.h"
#include "RooCachedPdf.h"
#include "RooCachedReal.h"
#include "RooCategory.h"
#include "RooCategoryProxy.h"
#include "RooChangeTracker.h"
#include "RooClassFactory.h"
#include "RooCmdArg.h"
#include "RooCmdConfig.h"
#include "RooCollectionProxy.h"
#include "RooCompositeDataStore.h"
#include "RooConstVar.h"
#include "RooConstraintSum.h"
#include "RooConvCoefVar.h"
#include "RooConvGenContext.h"
#include "RooCurve.h"
#include "RooCustomizer.h"
#include "RooDLLSignificanceMCSModule.h"
#include "RooDataHist.h"
#include "RooDataHistSliceIter.h"
#include "RooDataProjBinding.h"
#include "RooDataSet.h"
#include "RooDerivative.h"
#include "RooDirItem.h"
#include "RooDouble.h"
#include "RooEffGenContext.h"
#include "RooEffProd.h"
#include "RooEfficiency.h"
#include "RooEllipse.h"
#include "RooErrorHandler.h"
#include "RooErrorVar.h"
#include "RooEvaluatorWrapper.h"
#include "RooExpensiveObjectCache.h"
#include "RooExtendPdf.h"
#include "RooExtendedBinding.h"
#include "RooExtendedTerm.h"
#include "RooFFTConvPdf.h"
#include "RooFactoryWSTool.h"
#include "RooFirstMoment.h"
#include "RooFit.h"
#include "RooFit/CodegenContext.h"
#include "RooFit/Config.h"
#include "RooFit/Detail/MathFuncs.h"
#include "RooFit/Detail/NormalizationHelpers.h"
#include "RooFit/Detail/RooNLLVarNew.h"
#include "RooFit/Detail/RooNormalizedPdf.h"
#include "RooFit/EvalContext.h"
#include "RooFit/Evaluator.h"
#include "RooFit/Floats.h"
#include "RooFit/ModelConfig.h"
#include "RooFit/TestStatistics/LikelihoodGradientWrapper.h"
#include "RooFit/TestStatistics/LikelihoodWrapper.h"
#include "RooFit/TestStatistics/RooAbsL.h"
#include "RooFit/TestStatistics/RooBinnedL.h"
#include "RooFit/TestStatistics/RooRealL.h"
#include "RooFit/TestStatistics/RooSubsidiaryL.h"
#include "RooFit/TestStatistics/RooSumL.h"
#include "RooFit/TestStatistics/RooUnbinnedL.h"
#include "RooFit/TestStatistics/SharedOffset.h"
#include "RooFit/TestStatistics/buildLikelihood.h"
#include "RooFitLegacy/RooCatTypeLegacy.h"
#include "RooFitLegacy/RooCategorySharedProperties.h"
#include "RooFitLegacy/RooTreeData.h"
#include "RooFitResult.h"
#include "RooFormulaVar.h"
#include "RooFracRemainder.h"
#include "RooFunctor.h"
#include "RooGenContext.h"
#include "RooGenFitStudy.h"
#include "RooGenericPdf.h"
#include "RooGlobalFunc.h"
#include "RooHelpers.h"
#include "RooHist.h"
#include "RooHistError.h"
#include "RooHistFunc.h"
#include "RooHistPdf.h"
#include "RooInvTransform.h"
#include "RooLinTransBinning.h"
#include "RooLinearCombination.h"
#include "RooLinearVar.h"
#include "RooLinkedList.h"
#include "RooLinkedListElem.h"
#include "RooLinkedListIter.h"
#include "RooListProxy.h"
#include "RooMCStudy.h"
#include "RooMappedCategory.h"
#include "RooMath.h"
#include "RooMinimizer.h"
#include "RooMoment.h"
#include "RooMsgService.h"
#include "RooMultiCategory.h"
#include "RooMultiPdf.h"
#include "RooMultiReal.h"
#include "RooMultiVarGaussian.h"
#include "RooNameReg.h"
#include "RooNormSetCache.h"
#include "RooNumCdf.h"
#include "RooNumConvPdf.h"
#include "RooNumConvolution.h"
#include "RooNumGenConfig.h"
#include "RooNumIntConfig.h"
#include "RooNumIntFactory.h"
#include "RooNumRunningInt.h"
#include "RooNumber.h"
#include "RooObjCacheManager.h"
#include "RooParamBinning.h"
#include "RooPlot.h"
#include "RooPlotable.h"
#include "RooPolyFunc.h"
#include "RooPolyVar.h"
#include "RooPrintable.h"
#include "RooProdGenContext.h"
#include "RooProdPdf.h"
#include "RooProduct.h"
#include "RooProfileLL.h"
#include "RooProjectedPdf.h"
#include "RooPullVar.h"
#include "RooQuasiRandomGenerator.h"
#include "RooRandom.h"
#include "RooRandomizeParamMCSModule.h"
#include "RooRangeBinning.h"
#include "RooRangeBoolean.h"
#include "RooRatio.h"
#include "RooRealBinding.h"
#include "RooRealConstant.h"
#include "RooRealIntegral.h"
#include "RooRealProxy.h"
#include "RooRealSumFunc.h"
#include "RooRealSumPdf.h"
#include "RooRealVar.h"
#include "RooRealVarSharedProperties.h"
#include "RooRecursiveFraction.h"
#include "RooRefCountList.h"
#include "RooResolutionModel.h"
#include "RooSTLRefCountList.h"
#include "RooSecondMoment.h"
#include "RooSetProxy.h"
#include "RooSharedProperties.h"
#include "RooSimGenContext.h"
#include "RooSimSplitGenContext.h"
#include "RooSimWSTool.h"
#include "RooSimultaneous.h"
#include "RooStreamParser.h"
#include "RooStringVar.h"
#include "RooStringView.h"
#include "RooStudyManager.h"
#include "RooStudyPackage.h"
#include "RooSuperCategory.h"
#include "RooTObjWrap.h"
#include "RooTable.h"
#include "RooTemplateProxy.h"
#include "RooThresholdCategory.h"
#include "RooTrace.h"
#include "RooTreeDataStore.h"
#include "RooTruthModel.h"
#include "RooUniformBinning.h"
#include "RooVectorDataStore.h"
#include "RooWorkspace.h"
#include "RooWorkspaceHandle.h"
#include "RooWrapperPdf.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace RooFitShortHand {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooFitShortHand_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooFitShortHand", 0 /*version*/, "RooArgList.h", 153,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &RooFitShortHand_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooFitShortHand_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *pairlEintcORooLinkedListElemmUgR_Dictionary();
   static void pairlEintcORooLinkedListElemmUgR_TClassManip(TClass*);
   static void *new_pairlEintcORooLinkedListElemmUgR(void *p = nullptr);
   static void *newArray_pairlEintcORooLinkedListElemmUgR(Long_t size, void *p);
   static void delete_pairlEintcORooLinkedListElemmUgR(void *p);
   static void deleteArray_pairlEintcORooLinkedListElemmUgR(void *p);
   static void destruct_pairlEintcORooLinkedListElemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<int,RooLinkedListElem*>*)
   {
      pair<int,RooLinkedListElem*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<int,RooLinkedListElem*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<int,RooLinkedListElem*>", "algorithm", 63,
                  typeid(pair<int,RooLinkedListElem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEintcORooLinkedListElemmUgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<int,RooLinkedListElem*>) );
      instance.SetNew(&new_pairlEintcORooLinkedListElemmUgR);
      instance.SetNewArray(&newArray_pairlEintcORooLinkedListElemmUgR);
      instance.SetDelete(&delete_pairlEintcORooLinkedListElemmUgR);
      instance.SetDeleteArray(&deleteArray_pairlEintcORooLinkedListElemmUgR);
      instance.SetDestructor(&destruct_pairlEintcORooLinkedListElemmUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<int,RooLinkedListElem*>","std::__1::pair<int, RooLinkedListElem*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const pair<int,RooLinkedListElem*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEintcORooLinkedListElemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const pair<int,RooLinkedListElem*>*>(nullptr))->GetClass();
      pairlEintcORooLinkedListElemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEintcORooLinkedListElemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcORooAbsDatamUgR_Dictionary();
   static void pairlEstringcORooAbsDatamUgR_TClassManip(TClass*);
   static void *new_pairlEstringcORooAbsDatamUgR(void *p = nullptr);
   static void *newArray_pairlEstringcORooAbsDatamUgR(Long_t size, void *p);
   static void delete_pairlEstringcORooAbsDatamUgR(void *p);
   static void deleteArray_pairlEstringcORooAbsDatamUgR(void *p);
   static void destruct_pairlEstringcORooAbsDatamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,RooAbsData*>*)
   {
      pair<string,RooAbsData*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,RooAbsData*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,RooAbsData*>", "algorithm", 63,
                  typeid(pair<string,RooAbsData*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcORooAbsDatamUgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<string,RooAbsData*>) );
      instance.SetNew(&new_pairlEstringcORooAbsDatamUgR);
      instance.SetNewArray(&newArray_pairlEstringcORooAbsDatamUgR);
      instance.SetDelete(&delete_pairlEstringcORooAbsDatamUgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcORooAbsDatamUgR);
      instance.SetDestructor(&destruct_pairlEstringcORooAbsDatamUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<string,RooAbsData*>","pair<std::string,RooAbsData*>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<string,RooAbsData*>","std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsData*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const pair<string,RooAbsData*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcORooAbsDatamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const pair<string,RooAbsData*>*>(nullptr))->GetClass();
      pairlEstringcORooAbsDatamUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcORooAbsDatamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR_Dictionary();
   static void stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR_TClassManip(TClass*);
   static void *new_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p = nullptr);
   static void *newArray_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(Long_t size, void *p);
   static void delete_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p);
   static void deleteArray_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p);
   static void destruct_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stack<RooAbsArg*,deque<RooAbsArg*> >*)
   {
      ::stack<RooAbsArg*,deque<RooAbsArg*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::stack<RooAbsArg*,deque<RooAbsArg*> >));
      static ::ROOT::TGenericClassInfo 
         instance("stack<RooAbsArg*,deque<RooAbsArg*> >", "stack", 156,
                  typeid(::stack<RooAbsArg*,deque<RooAbsArg*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::stack<RooAbsArg*,deque<RooAbsArg*> >) );
      instance.SetNew(&new_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR);
      instance.SetNewArray(&newArray_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR);
      instance.SetDelete(&delete_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR);
      instance.SetDestructor(&destruct_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("stack<RooAbsArg*,deque<RooAbsArg*> >","std::__1::stack<RooAbsArg*, std::__1::deque<RooAbsArg*, std::__1::allocator<RooAbsArg*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::stack<RooAbsArg*,deque<RooAbsArg*> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::stack<RooAbsArg*,deque<RooAbsArg*> >*>(nullptr))->GetClass();
      stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooAbsCache(void *p = nullptr);
   static void *newArray_RooAbsCache(Long_t size, void *p);
   static void delete_RooAbsCache(void *p);
   static void deleteArray_RooAbsCache(void *p);
   static void destruct_RooAbsCache(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCache*)
   {
      ::RooAbsCache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCache >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCache", ::RooAbsCache::Class_Version(), "RooAbsCache.h", 27,
                  typeid(::RooAbsCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCache::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCache) );
      instance.SetNew(&new_RooAbsCache);
      instance.SetNewArray(&newArray_RooAbsCache);
      instance.SetDelete(&delete_RooAbsCache);
      instance.SetDeleteArray(&deleteArray_RooAbsCache);
      instance.SetDestructor(&destruct_RooAbsCache);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCache*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLinkedListElem(void *p = nullptr);
   static void *newArray_RooLinkedListElem(Long_t size, void *p);
   static void delete_RooLinkedListElem(void *p);
   static void deleteArray_RooLinkedListElem(void *p);
   static void destruct_RooLinkedListElem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLinkedListElem*)
   {
      ::RooLinkedListElem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLinkedListElem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLinkedListElem", ::RooLinkedListElem::Class_Version(), "RooLinkedListElem.h", 34,
                  typeid(::RooLinkedListElem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLinkedListElem::Dictionary, isa_proxy, 4,
                  sizeof(::RooLinkedListElem) );
      instance.SetNew(&new_RooLinkedListElem);
      instance.SetNewArray(&newArray_RooLinkedListElem);
      instance.SetDelete(&delete_RooLinkedListElem);
      instance.SetDeleteArray(&deleteArray_RooLinkedListElem);
      instance.SetDestructor(&destruct_RooLinkedListElem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLinkedListElem*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLinkedListElem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLinkedListElem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooSTLRefCountListlERooAbsArggR_Dictionary();
   static void RooSTLRefCountListlERooAbsArggR_TClassManip(TClass*);
   static void *new_RooSTLRefCountListlERooAbsArggR(void *p = nullptr);
   static void *newArray_RooSTLRefCountListlERooAbsArggR(Long_t size, void *p);
   static void delete_RooSTLRefCountListlERooAbsArggR(void *p);
   static void deleteArray_RooSTLRefCountListlERooAbsArggR(void *p);
   static void destruct_RooSTLRefCountListlERooAbsArggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSTLRefCountList<RooAbsArg>*)
   {
      ::RooSTLRefCountList<RooAbsArg> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSTLRefCountList<RooAbsArg> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSTLRefCountList<RooAbsArg>", ::RooSTLRefCountList<RooAbsArg>::Class_Version(), "RooSTLRefCountList.h", 42,
                  typeid(::RooSTLRefCountList<RooAbsArg>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooSTLRefCountListlERooAbsArggR_Dictionary, isa_proxy, 4,
                  sizeof(::RooSTLRefCountList<RooAbsArg>) );
      instance.SetNew(&new_RooSTLRefCountListlERooAbsArggR);
      instance.SetNewArray(&newArray_RooSTLRefCountListlERooAbsArggR);
      instance.SetDelete(&delete_RooSTLRefCountListlERooAbsArggR);
      instance.SetDeleteArray(&deleteArray_RooSTLRefCountListlERooAbsArggR);
      instance.SetDestructor(&destruct_RooSTLRefCountListlERooAbsArggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSTLRefCountList<RooAbsArg>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSTLRefCountList<RooAbsArg>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSTLRefCountList<RooAbsArg>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooSTLRefCountListlERooAbsArggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooSTLRefCountList<RooAbsArg>*>(nullptr))->GetClass();
      RooSTLRefCountListlERooAbsArggR_TClassManip(theClass);
   return theClass;
   }

   static void RooSTLRefCountListlERooAbsArggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLinkedList(void *p = nullptr);
   static void *newArray_RooLinkedList(Long_t size, void *p);
   static void delete_RooLinkedList(void *p);
   static void deleteArray_RooLinkedList(void *p);
   static void destruct_RooLinkedList(void *p);
   static void streamer_RooLinkedList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLinkedList*)
   {
      ::RooLinkedList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLinkedList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLinkedList", ::RooLinkedList::Class_Version(), "RooLinkedList.h", 45,
                  typeid(::RooLinkedList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLinkedList::Dictionary, isa_proxy, 17,
                  sizeof(::RooLinkedList) );
      instance.SetNew(&new_RooLinkedList);
      instance.SetNewArray(&newArray_RooLinkedList);
      instance.SetDelete(&delete_RooLinkedList);
      instance.SetDeleteArray(&deleteArray_RooLinkedList);
      instance.SetDestructor(&destruct_RooLinkedList);
      instance.SetStreamerFunc(&streamer_RooLinkedList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLinkedList*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLinkedList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLinkedList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooFIter_Dictionary();
   static void RooFIter_TClassManip(TClass*);
   static void delete_RooFIter(void *p);
   static void deleteArray_RooFIter(void *p);
   static void destruct_RooFIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFIter*)
   {
      ::RooFIter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooFIter));
      static ::ROOT::TGenericClassInfo 
         instance("RooFIter", "RooLinkedListIter.h", 39,
                  typeid(::RooFIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooFIter_Dictionary, isa_proxy, 4,
                  sizeof(::RooFIter) );
      instance.SetDelete(&delete_RooFIter);
      instance.SetDeleteArray(&deleteArray_RooFIter);
      instance.SetDestructor(&destruct_RooFIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFIter*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFIter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFIter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooFIter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooFIter*>(nullptr))->GetClass();
      RooFIter_TClassManip(theClass);
   return theClass;
   }

   static void RooFIter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPrintable(void *p = nullptr);
   static void *newArray_RooPrintable(Long_t size, void *p);
   static void delete_RooPrintable(void *p);
   static void deleteArray_RooPrintable(void *p);
   static void destruct_RooPrintable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPrintable*)
   {
      ::RooPrintable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPrintable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPrintable", ::RooPrintable::Class_Version(), "RooPrintable.h", 25,
                  typeid(::RooPrintable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPrintable::Dictionary, isa_proxy, 4,
                  sizeof(::RooPrintable) );
      instance.SetNew(&new_RooPrintable);
      instance.SetNewArray(&newArray_RooPrintable);
      instance.SetDelete(&delete_RooPrintable);
      instance.SetDeleteArray(&deleteArray_RooPrintable);
      instance.SetDestructor(&destruct_RooPrintable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPrintable*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPrintable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPrintable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCollectionProxylERooArgSetgR_Dictionary();
   static void RooCollectionProxylERooArgSetgR_TClassManip(TClass*);
   static void *new_RooCollectionProxylERooArgSetgR(void *p = nullptr);
   static void *newArray_RooCollectionProxylERooArgSetgR(Long_t size, void *p);
   static void delete_RooCollectionProxylERooArgSetgR(void *p);
   static void deleteArray_RooCollectionProxylERooArgSetgR(void *p);
   static void destruct_RooCollectionProxylERooArgSetgR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCollectionProxy<RooArgSet>*)
   {
      ::RooCollectionProxy<RooArgSet> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCollectionProxy<RooArgSet> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCollectionProxy<RooArgSet>", ::RooCollectionProxy<RooArgSet>::Class_Version(), "RooCollectionProxy.h", 43,
                  typeid(::RooCollectionProxy<RooArgSet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCollectionProxylERooArgSetgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCollectionProxy<RooArgSet>) );
      instance.SetNew(&new_RooCollectionProxylERooArgSetgR);
      instance.SetNewArray(&newArray_RooCollectionProxylERooArgSetgR);
      instance.SetDelete(&delete_RooCollectionProxylERooArgSetgR);
      instance.SetDeleteArray(&deleteArray_RooCollectionProxylERooArgSetgR);
      instance.SetDestructor(&destruct_RooCollectionProxylERooArgSetgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCollectionProxy<RooArgSet>","RooSetProxy"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooSetProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCollectionProxy<RooArgSet>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCollectionProxy<RooArgSet>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCollectionProxy<RooArgSet>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCollectionProxylERooArgSetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCollectionProxy<RooArgSet>*>(nullptr))->GetClass();
      RooCollectionProxylERooArgSetgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCollectionProxylERooArgSetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCollectionProxylERooArgListgR_Dictionary();
   static void RooCollectionProxylERooArgListgR_TClassManip(TClass*);
   static void *new_RooCollectionProxylERooArgListgR(void *p = nullptr);
   static void *newArray_RooCollectionProxylERooArgListgR(Long_t size, void *p);
   static void delete_RooCollectionProxylERooArgListgR(void *p);
   static void deleteArray_RooCollectionProxylERooArgListgR(void *p);
   static void destruct_RooCollectionProxylERooArgListgR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCollectionProxy<RooArgList>*)
   {
      ::RooCollectionProxy<RooArgList> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCollectionProxy<RooArgList> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCollectionProxy<RooArgList>", ::RooCollectionProxy<RooArgList>::Class_Version(), "RooCollectionProxy.h", 43,
                  typeid(::RooCollectionProxy<RooArgList>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCollectionProxylERooArgListgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCollectionProxy<RooArgList>) );
      instance.SetNew(&new_RooCollectionProxylERooArgListgR);
      instance.SetNewArray(&newArray_RooCollectionProxylERooArgListgR);
      instance.SetDelete(&delete_RooCollectionProxylERooArgListgR);
      instance.SetDeleteArray(&deleteArray_RooCollectionProxylERooArgListgR);
      instance.SetDestructor(&destruct_RooCollectionProxylERooArgListgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCollectionProxy<RooArgList>","RooListProxy"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooListProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCollectionProxy<RooArgList>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCollectionProxy<RooArgList>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCollectionProxy<RooArgList>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCollectionProxylERooArgListgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCollectionProxy<RooArgList>*>(nullptr))->GetClass();
      RooCollectionProxylERooArgListgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCollectionProxylERooArgListgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRefArray(void *p = nullptr);
   static void *newArray_RooRefArray(Long_t size, void *p);
   static void delete_RooRefArray(void *p);
   static void deleteArray_RooRefArray(void *p);
   static void destruct_RooRefArray(void *p);
   static void streamer_RooRefArray(TBuffer &buf, void *obj);
   static Long64_t merge_RooRefArray(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRefArray*)
   {
      ::RooRefArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRefArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRefArray", ::RooRefArray::Class_Version(), "RooAbsArg.h", 60,
                  typeid(::RooRefArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRefArray::Dictionary, isa_proxy, 17,
                  sizeof(::RooRefArray) );
      instance.SetNew(&new_RooRefArray);
      instance.SetNewArray(&newArray_RooRefArray);
      instance.SetDelete(&delete_RooRefArray);
      instance.SetDeleteArray(&deleteArray_RooRefArray);
      instance.SetDestructor(&destruct_RooRefArray);
      instance.SetStreamerFunc(&streamer_RooRefArray);
      instance.SetMerge(&merge_RooRefArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRefArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRefArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRefArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsArg(void *p);
   static void deleteArray_RooAbsArg(void *p);
   static void destruct_RooAbsArg(void *p);
   static void streamer_RooAbsArg(TBuffer &buf, void *obj);

   // Schema evolution read functions
   static void read_RooAbsArg_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__proxyList = oldObj->GetId("_proxyList");
#endif
      struct RooAbsArg_Onfile {
         TList &_proxyList;
         RooAbsArg_Onfile(TList &onfile__proxyList ): _proxyList(onfile__proxyList) {}
      };
      static Long_t offset_Onfile_RooAbsArg__proxyList = oldObj->GetClass()->GetDataMemberOffset("_proxyList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsArg_Onfile onfile(
         *(TList*)(onfile_add+offset_Onfile_RooAbsArg__proxyList) );

      static TClassRef cls("RooAbsArg");
      static Long_t offset__proxyList = cls->GetDataMemberOffset("_proxyList");
      RooRefArray& _proxyList = *(RooRefArray*)(target+offset__proxyList);
      RooAbsArg* newObj = (RooAbsArg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      for (TObject * tmpObj : onfile._proxyList) { _proxyList.Add(tmpObj); } 
   }
   static void read_RooAbsArg_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__proxyList = oldObj->GetId("_proxyList");
#endif
      struct RooAbsArg_Onfile {
         TRefArray &_proxyList;
         RooAbsArg_Onfile(TRefArray &onfile__proxyList ): _proxyList(onfile__proxyList) {}
      };
      static Long_t offset_Onfile_RooAbsArg__proxyList = oldObj->GetClass()->GetDataMemberOffset("_proxyList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsArg_Onfile onfile(
         *(TRefArray*)(onfile_add+offset_Onfile_RooAbsArg__proxyList) );

      static TClassRef cls("RooAbsArg");
      static Long_t offset__proxyList = cls->GetDataMemberOffset("_proxyList");
      RooRefArray& _proxyList = *(RooRefArray*)(target+offset__proxyList);
      RooAbsArg* newObj = (RooAbsArg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _proxyList.GetSize() ; if (onfile._proxyList.GetSize()>0) { RooAbsArg::addToIoEvoList(newObj, onfile._proxyList); } 
   }
   static void read_RooAbsArg_2( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__serverList = oldObj->GetId("_serverList");
#endif
      struct RooAbsArg_Onfile {
         RooRefCountList &_serverList;
         RooAbsArg_Onfile(RooRefCountList &onfile__serverList ): _serverList(onfile__serverList) {}
      };
      static Long_t offset_Onfile_RooAbsArg__serverList = oldObj->GetClass()->GetDataMemberOffset("_serverList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsArg_Onfile onfile(
         *(RooRefCountList*)(onfile_add+offset_Onfile_RooAbsArg__serverList) );

      static TClassRef cls("RooAbsArg");
      static Long_t offset__serverList = cls->GetDataMemberOffset("_serverList");
      RooAbsArg::RefCountList_t& _serverList = *(RooAbsArg::RefCountList_t*)(target+offset__serverList);
      RooAbsArg* newObj = (RooAbsArg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _serverList = RooSTLRefCountList<RooAbsArg>::convert(onfile._serverList); 
   }
   static void read_RooAbsArg_3( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__clientList = oldObj->GetId("_clientList");
#endif
      struct RooAbsArg_Onfile {
         RooRefCountList &_clientList;
         RooAbsArg_Onfile(RooRefCountList &onfile__clientList ): _clientList(onfile__clientList) {}
      };
      static Long_t offset_Onfile_RooAbsArg__clientList = oldObj->GetClass()->GetDataMemberOffset("_clientList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsArg_Onfile onfile(
         *(RooRefCountList*)(onfile_add+offset_Onfile_RooAbsArg__clientList) );

      static TClassRef cls("RooAbsArg");
      static Long_t offset__clientList = cls->GetDataMemberOffset("_clientList");
      RooAbsArg::RefCountList_t& _clientList = *(RooAbsArg::RefCountList_t*)(target+offset__clientList);
      RooAbsArg* newObj = (RooAbsArg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _clientList = RooSTLRefCountList<RooAbsArg>::convert(onfile._clientList); 
   }
   static void read_RooAbsArg_4( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__clientListValue = oldObj->GetId("_clientListValue");
#endif
      struct RooAbsArg_Onfile {
         RooRefCountList &_clientListValue;
         RooAbsArg_Onfile(RooRefCountList &onfile__clientListValue ): _clientListValue(onfile__clientListValue) {}
      };
      static Long_t offset_Onfile_RooAbsArg__clientListValue = oldObj->GetClass()->GetDataMemberOffset("_clientListValue");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsArg_Onfile onfile(
         *(RooRefCountList*)(onfile_add+offset_Onfile_RooAbsArg__clientListValue) );

      static TClassRef cls("RooAbsArg");
      static Long_t offset__clientListValue = cls->GetDataMemberOffset("_clientListValue");
      RooAbsArg::RefCountList_t& _clientListValue = *(RooAbsArg::RefCountList_t*)(target+offset__clientListValue);
      RooAbsArg* newObj = (RooAbsArg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _clientListValue = RooSTLRefCountList<RooAbsArg>::convert(onfile._clientListValue); 
   }
   static void read_RooAbsArg_5( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__clientListShape = oldObj->GetId("_clientListShape");
#endif
      struct RooAbsArg_Onfile {
         RooRefCountList &_clientListShape;
         RooAbsArg_Onfile(RooRefCountList &onfile__clientListShape ): _clientListShape(onfile__clientListShape) {}
      };
      static Long_t offset_Onfile_RooAbsArg__clientListShape = oldObj->GetClass()->GetDataMemberOffset("_clientListShape");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsArg_Onfile onfile(
         *(RooRefCountList*)(onfile_add+offset_Onfile_RooAbsArg__clientListShape) );

      static TClassRef cls("RooAbsArg");
      static Long_t offset__clientListShape = cls->GetDataMemberOffset("_clientListShape");
      RooAbsArg::RefCountList_t& _clientListShape = *(RooAbsArg::RefCountList_t*)(target+offset__clientListShape);
      RooAbsArg* newObj = (RooAbsArg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _clientListShape = RooSTLRefCountList<RooAbsArg>::convert(onfile._clientListShape); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsArg*)
   {
      ::RooAbsArg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsArg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsArg", ::RooAbsArg::Class_Version(), "RooAbsArg.h", 76,
                  typeid(::RooAbsArg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsArg::Dictionary, isa_proxy, 17,
                  sizeof(::RooAbsArg) );
      instance.SetDelete(&delete_RooAbsArg);
      instance.SetDeleteArray(&deleteArray_RooAbsArg);
      instance.SetDestructor(&destruct_RooAbsArg);
      instance.SetStreamerFunc(&streamer_RooAbsArg);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(6);
      rule = &readrules[0];
      rule->fSourceClass = "RooAbsArg";
      rule->fTarget      = "_proxyList";
      rule->fSource      = "TList _proxyList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsArg_0);
      rule->fCode        = " for (TObject * tmpObj : onfile._proxyList) { _proxyList.Add(tmpObj); } ";
      rule->fVersion     = "[1-4]";
      rule = &readrules[1];
      rule->fSourceClass = "RooAbsArg";
      rule->fTarget      = "_proxyList";
      rule->fSource      = "TRefArray _proxyList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsArg_1);
      rule->fCode        = " _proxyList.GetSize() ; if (onfile._proxyList.GetSize()>0) { RooAbsArg::addToIoEvoList(newObj, onfile._proxyList); } ";
      rule->fVersion     = "[5]";
      rule = &readrules[2];
      rule->fSourceClass = "RooAbsArg";
      rule->fTarget      = "_serverList";
      rule->fSource      = "RooRefCountList _serverList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsArg_2);
      rule->fCode        = " _serverList = RooSTLRefCountList<RooAbsArg>::convert(onfile._serverList); ";
      rule->fVersion     = "[1-6]";
      rule = &readrules[3];
      rule->fSourceClass = "RooAbsArg";
      rule->fTarget      = "_clientList";
      rule->fSource      = "RooRefCountList _clientList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsArg_3);
      rule->fCode        = " _clientList = RooSTLRefCountList<RooAbsArg>::convert(onfile._clientList); ";
      rule->fVersion     = "[1-6]";
      rule = &readrules[4];
      rule->fSourceClass = "RooAbsArg";
      rule->fTarget      = "_clientListValue";
      rule->fSource      = "RooRefCountList _clientListValue; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsArg_4);
      rule->fCode        = " _clientListValue = RooSTLRefCountList<RooAbsArg>::convert(onfile._clientListValue); ";
      rule->fVersion     = "[1-6]";
      rule = &readrules[5];
      rule->fSourceClass = "RooAbsArg";
      rule->fTarget      = "_clientListShape";
      rule->fSource      = "RooRefCountList _clientListShape; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsArg_5);
      rule->fCode        = " _clientListShape = RooSTLRefCountList<RooAbsArg>::convert(onfile._clientListShape); ";
      rule->fVersion     = "[1-6]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsArg*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsArg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsArg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsCategory(void *p);
   static void deleteArray_RooAbsCategory(void *p);
   static void destruct_RooAbsCategory(void *p);

   // Schema evolution read functions
   static void read_RooAbsCategory_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__types = oldObj->GetId("_types");
#endif
      struct RooAbsCategory_Onfile {
         TObjArray &_types;
         RooAbsCategory_Onfile(TObjArray &onfile__types ): _types(onfile__types) {}
      };
      static Long_t offset_Onfile_RooAbsCategory__types = oldObj->GetClass()->GetDataMemberOffset("_types");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsCategory_Onfile onfile(
         *(TObjArray*)(onfile_add+offset_Onfile_RooAbsCategory__types) );

      static TClassRef cls("RooAbsCategory");
      static Long_t offset__stateNames = cls->GetDataMemberOffset("_stateNames");
      map<string,RooAbsCategory::value_type>& _stateNames = *(map<string,RooAbsCategory::value_type>*)(target+offset__stateNames);
      static Long_t offset__insertionOrder = cls->GetDataMemberOffset("_insertionOrder");
      vector<string>& _insertionOrder = *(vector<string>*)(target+offset__insertionOrder);
      RooAbsCategory* newObj = (RooAbsCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     for (const auto* obj : onfile._types) { \
           auto catType = dynamic_cast<const RooCatType*>(obj); assert(catType); \
           _stateNames[catType->GetName()] = catType->getVal(); \
           _insertionOrder.push_back(catType->GetName()); \
         }
   }
   static void read_RooAbsCategory_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__types = oldObj->GetId("_types");
#endif
      struct RooAbsCategory_Onfile {
         std::vector<RooCatType*> &_types;
         RooAbsCategory_Onfile(std::vector<RooCatType*> &onfile__types ): _types(onfile__types) {}
      };
      static Long_t offset_Onfile_RooAbsCategory__types = oldObj->GetClass()->GetDataMemberOffset("_types");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsCategory_Onfile onfile(
         *(std::vector<RooCatType*>*)(onfile_add+offset_Onfile_RooAbsCategory__types) );

      static TClassRef cls("RooAbsCategory");
      static Long_t offset__stateNames = cls->GetDataMemberOffset("_stateNames");
      map<string,RooAbsCategory::value_type>& _stateNames = *(map<string,RooAbsCategory::value_type>*)(target+offset__stateNames);
      static Long_t offset__insertionOrder = cls->GetDataMemberOffset("_insertionOrder");
      vector<string>& _insertionOrder = *(vector<string>*)(target+offset__insertionOrder);
      RooAbsCategory* newObj = (RooAbsCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     for (const auto catType : onfile._types) { _stateNames[catType->GetName()] = catType->getVal();\
                                                    _insertionOrder.push_back(catType->GetName());\
                                                  } 
   }
   static void read_RooAbsCategory_2( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__value = oldObj->GetId("_value");
#endif
      struct RooAbsCategory_Onfile {
         RooCatType &_value;
         RooAbsCategory_Onfile(RooCatType &onfile__value ): _value(onfile__value) {}
      };
      static Long_t offset_Onfile_RooAbsCategory__value = oldObj->GetClass()->GetDataMemberOffset("_value");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsCategory_Onfile onfile(
         *(RooCatType*)(onfile_add+offset_Onfile_RooAbsCategory__value) );

      static TClassRef cls("RooAbsCategory");
      static Long_t offset__currentIndex = cls->GetDataMemberOffset("_currentIndex");
      RooAbsCategory::value_type& _currentIndex = *(RooAbsCategory::value_type*)(target+offset__currentIndex);
      RooAbsCategory* newObj = (RooAbsCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _currentIndex = onfile._value.getVal(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCategory*)
   {
      ::RooAbsCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCategory", ::RooAbsCategory::Class_Version(), "RooAbsCategory.h", 34,
                  typeid(::RooAbsCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCategory::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCategory) );
      instance.SetDelete(&delete_RooAbsCategory);
      instance.SetDeleteArray(&deleteArray_RooAbsCategory);
      instance.SetDestructor(&destruct_RooAbsCategory);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(3);
      rule = &readrules[0];
      rule->fSourceClass = "RooAbsCategory";
      rule->fTarget      = "_stateNames,_insertionOrder";
      rule->fSource      = "TObjArray _types; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsCategory_0);
      rule->fCode        = "for (const auto* obj : onfile._types) { \\n           auto catType = dynamic_cast<const RooCatType*>(obj); assert(catType); \\n           _stateNames[catType->GetName()] = catType->getVal(); \\n           _insertionOrder.push_back(catType->GetName()); \\n         }";
      rule->fVersion     = "[1]";
      rule->fInclude     = "RooFitLegacy/RooCatTypeLegacy.h";
      rule = &readrules[1];
      rule->fSourceClass = "RooAbsCategory";
      rule->fTarget      = "_stateNames,_insertionOrder";
      rule->fSource      = "vector<RooCatType*> _types; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsCategory_1);
      rule->fCode        = "for (const auto catType : onfile._types) { _stateNames[catType->GetName()] = catType->getVal();\\n                                                    _insertionOrder.push_back(catType->GetName());\\n                                                  } ";
      rule->fVersion     = "[2]";
      rule->fInclude     = "RooFitLegacy/RooCatTypeLegacy.h";
      rule = &readrules[2];
      rule->fSourceClass = "RooAbsCategory";
      rule->fTarget      = "_currentIndex";
      rule->fSource      = "RooCatType _value; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsCategory_2);
      rule->fCode        = " _currentIndex = onfile._value.getVal(); ";
      rule->fVersion     = "[1-2]";
      rule->fInclude     = "RooFitLegacy/RooCatTypeLegacy.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooTable(void *p);
   static void deleteArray_RooTable(void *p);
   static void destruct_RooTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTable*)
   {
      ::RooTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTable", ::RooTable::Class_Version(), "RooTable.h", 32,
                  typeid(::RooTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTable::Dictionary, isa_proxy, 4,
                  sizeof(::RooTable) );
      instance.SetDelete(&delete_RooTable);
      instance.SetDeleteArray(&deleteArray_RooTable);
      instance.SetDestructor(&destruct_RooTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Roo1DTable(void *p = nullptr);
   static void *newArray_Roo1DTable(Long_t size, void *p);
   static void delete_Roo1DTable(void *p);
   static void deleteArray_Roo1DTable(void *p);
   static void destruct_Roo1DTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Roo1DTable*)
   {
      ::Roo1DTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Roo1DTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Roo1DTable", ::Roo1DTable::Class_Version(), "Roo1DTable.h", 23,
                  typeid(::Roo1DTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Roo1DTable::Dictionary, isa_proxy, 4,
                  sizeof(::Roo1DTable) );
      instance.SetNew(&new_Roo1DTable);
      instance.SetNewArray(&newArray_Roo1DTable);
      instance.SetDelete(&delete_Roo1DTable);
      instance.SetDeleteArray(&deleteArray_Roo1DTable);
      instance.SetDestructor(&destruct_Roo1DTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Roo1DTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::Roo1DTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Roo1DTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooAICRegistry(void *p = nullptr);
   static void *newArray_RooAICRegistry(Long_t size, void *p);
   static void delete_RooAICRegistry(void *p);
   static void deleteArray_RooAICRegistry(void *p);
   static void destruct_RooAICRegistry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAICRegistry*)
   {
      ::RooAICRegistry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAICRegistry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAICRegistry", ::RooAICRegistry::Class_Version(), "RooAICRegistry.h", 26,
                  typeid(::RooAICRegistry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAICRegistry::Dictionary, isa_proxy, 4,
                  sizeof(::RooAICRegistry) );
      instance.SetNew(&new_RooAICRegistry);
      instance.SetNewArray(&newArray_RooAICRegistry);
      instance.SetDelete(&delete_RooAICRegistry);
      instance.SetDeleteArray(&deleteArray_RooAICRegistry);
      instance.SetDestructor(&destruct_RooAICRegistry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAICRegistry*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAICRegistry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAICRegistry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCmdArg(void *p = nullptr);
   static void *newArray_RooCmdArg(Long_t size, void *p);
   static void delete_RooCmdArg(void *p);
   static void deleteArray_RooCmdArg(void *p);
   static void destruct_RooCmdArg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCmdArg*)
   {
      ::RooCmdArg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCmdArg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCmdArg", ::RooCmdArg::Class_Version(), "RooCmdArg.h", 26,
                  typeid(::RooCmdArg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCmdArg::Dictionary, isa_proxy, 4,
                  sizeof(::RooCmdArg) );
      instance.SetNew(&new_RooCmdArg);
      instance.SetNewArray(&newArray_RooCmdArg);
      instance.SetDelete(&delete_RooCmdArg);
      instance.SetDeleteArray(&deleteArray_RooCmdArg);
      instance.SetDestructor(&destruct_RooCmdArg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCmdArg*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCmdArg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCmdArg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsCollection(void *p);
   static void deleteArray_RooAbsCollection(void *p);
   static void destruct_RooAbsCollection(void *p);

   // Schema evolution read functions
   static void read_RooAbsCollection_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("RooAbsCollection");
      static Long_t offset__allRRV = cls->GetDataMemberOffset("_allRRV");
      bool& _allRRV = *(bool*)(target+offset__allRRV);
      RooAbsCollection* newObj = (RooAbsCollection*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _allRRV=false ; 
   }
   static void read_RooAbsCollection_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__list = oldObj->GetId("_list");
#endif
      struct RooAbsCollection_Onfile {
         RooLinkedList &_list;
         RooAbsCollection_Onfile(RooLinkedList &onfile__list ): _list(onfile__list) {}
      };
      static Long_t offset_Onfile_RooAbsCollection__list = oldObj->GetClass()->GetDataMemberOffset("_list");
      char *onfile_add = (char*)oldObj->GetObject();
      RooAbsCollection_Onfile onfile(
         *(RooLinkedList*)(onfile_add+offset_Onfile_RooAbsCollection__list) );

      static TClassRef cls("RooAbsCollection");
      static Long_t offset__list = cls->GetDataMemberOffset("_list");
      RooAbsCollection::Storage_t& _list = *(RooAbsCollection::Storage_t*)(target+offset__list);
      RooAbsCollection* newObj = (RooAbsCollection*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      \
    for (RooAbsArg * theArg : static_range_cast<RooAbsArg*>(onfile._list)) {_list.push_back(theArg);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCollection*)
   {
      ::RooAbsCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCollection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCollection", ::RooAbsCollection::Class_Version(), "RooAbsCollection.h", 65,
                  typeid(::RooAbsCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCollection::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCollection) );
      instance.SetDelete(&delete_RooAbsCollection);
      instance.SetDeleteArray(&deleteArray_RooAbsCollection);
      instance.SetDestructor(&destruct_RooAbsCollection);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(2);
      rule = &readrules[0];
      rule->fSourceClass = "RooAbsCollection";
      rule->fTarget      = "_allRRV";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsCollection_0);
      rule->fCode        = " _allRRV=false ; ";
      rule->fVersion     = "[1]";
      rule = &readrules[1];
      rule->fSourceClass = "RooAbsCollection";
      rule->fTarget      = "_list";
      rule->fSource      = "RooLinkedList _list; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooAbsCollection_1);
      rule->fCode        = " \\n    for (RooAbsArg * theArg : static_range_cast<RooAbsArg*>(onfile._list)) {_list.push_back(theArg);} ";
      rule->fVersion     = "[2]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooArgList(void *p = nullptr);
   static void *newArray_RooArgList(Long_t size, void *p);
   static void delete_RooArgList(void *p);
   static void deleteArray_RooArgList(void *p);
   static void destruct_RooArgList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooArgList*)
   {
      ::RooArgList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooArgList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooArgList", ::RooArgList::Class_Version(), "RooArgList.h", 22,
                  typeid(::RooArgList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooArgList::Dictionary, isa_proxy, 4,
                  sizeof(::RooArgList) );
      instance.SetNew(&new_RooArgList);
      instance.SetNewArray(&newArray_RooArgList);
      instance.SetDelete(&delete_RooArgList);
      instance.SetDeleteArray(&deleteArray_RooArgList);
      instance.SetDestructor(&destruct_RooArgList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooArgList*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooArgList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooArgList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsProxy(void *p);
   static void deleteArray_RooAbsProxy(void *p);
   static void destruct_RooAbsProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsProxy*)
   {
      ::RooAbsProxy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsProxy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsProxy", ::RooAbsProxy::Class_Version(), "RooAbsProxy.h", 37,
                  typeid(::RooAbsProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsProxy::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsProxy) );
      instance.SetDelete(&delete_RooAbsProxy);
      instance.SetDeleteArray(&deleteArray_RooAbsProxy);
      instance.SetDestructor(&destruct_RooAbsProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsProxy*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsProxy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsProxy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooArgProxy(void *p = nullptr);
   static void *newArray_RooArgProxy(Long_t size, void *p);
   static void delete_RooArgProxy(void *p);
   static void deleteArray_RooArgProxy(void *p);
   static void destruct_RooArgProxy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooArgProxy*)
   {
      ::RooArgProxy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooArgProxy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooArgProxy", ::RooArgProxy::Class_Version(), "RooArgProxy.h", 24,
                  typeid(::RooArgProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooArgProxy::Dictionary, isa_proxy, 4,
                  sizeof(::RooArgProxy) );
      instance.SetNew(&new_RooArgProxy);
      instance.SetNewArray(&newArray_RooArgProxy);
      instance.SetDelete(&delete_RooArgProxy);
      instance.SetDeleteArray(&deleteArray_RooArgProxy);
      instance.SetDestructor(&destruct_RooArgProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooArgProxy*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooArgProxy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooArgProxy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooArgSet(void *p = nullptr);
   static void *newArray_RooArgSet(Long_t size, void *p);
   static void delete_RooArgSet(void *p);
   static void deleteArray_RooArgSet(void *p);
   static void destruct_RooArgSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooArgSet*)
   {
      ::RooArgSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooArgSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooArgSet", ::RooArgSet::Class_Version(), "RooArgSet.h", 24,
                  typeid(::RooArgSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooArgSet::Dictionary, isa_proxy, 4,
                  sizeof(::RooArgSet) );
      instance.SetNew(&new_RooArgSet);
      instance.SetNewArray(&newArray_RooArgSet);
      instance.SetDelete(&delete_RooArgSet);
      instance.SetDeleteArray(&deleteArray_RooArgSet);
      instance.SetDestructor(&destruct_RooArgSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooArgSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooArgSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooArgSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooPlotable(void *p);
   static void deleteArray_RooPlotable(void *p);
   static void destruct_RooPlotable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPlotable*)
   {
      ::RooPlotable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPlotable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPlotable", ::RooPlotable::Class_Version(), "RooPlotable.h", 26,
                  typeid(::RooPlotable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPlotable::Dictionary, isa_proxy, 4,
                  sizeof(::RooPlotable) );
      instance.SetDelete(&delete_RooPlotable);
      instance.SetDeleteArray(&deleteArray_RooPlotable);
      instance.SetDestructor(&destruct_RooPlotable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPlotable*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPlotable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPlotable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCurve(void *p = nullptr);
   static void *newArray_RooCurve(Long_t size, void *p);
   static void delete_RooCurve(void *p);
   static void deleteArray_RooCurve(void *p);
   static void destruct_RooCurve(void *p);
   static Long64_t merge_RooCurve(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCurve*)
   {
      ::RooCurve *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCurve >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCurve", ::RooCurve::Class_Version(), "RooCurve.h", 36,
                  typeid(::RooCurve), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCurve::Dictionary, isa_proxy, 4,
                  sizeof(::RooCurve) );
      instance.SetNew(&new_RooCurve);
      instance.SetNewArray(&newArray_RooCurve);
      instance.SetDelete(&delete_RooCurve);
      instance.SetDeleteArray(&deleteArray_RooCurve);
      instance.SetDestructor(&destruct_RooCurve);
      instance.SetMerge(&merge_RooCurve);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCurve*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCurve*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCurve*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooAbsRealgR_Dictionary();
   static void RooTemplateProxylERooAbsRealgR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooAbsRealgR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooAbsRealgR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooAbsRealgR(void *p);
   static void deleteArray_RooTemplateProxylERooAbsRealgR(void *p);
   static void destruct_RooTemplateProxylERooAbsRealgR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooAbsReal>*)
   {
      ::RooTemplateProxy<RooAbsReal> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooAbsReal> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooAbsReal>", ::RooTemplateProxy<RooAbsReal>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooAbsReal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooAbsRealgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooAbsReal>) );
      instance.SetNew(&new_RooTemplateProxylERooAbsRealgR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooAbsRealgR);
      instance.SetDelete(&delete_RooTemplateProxylERooAbsRealgR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooAbsRealgR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooAbsRealgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooTemplateProxy<RooAbsReal>","RooRealProxy"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooRealProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooAbsReal>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooAbsReal>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsReal>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooAbsRealgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsReal>*>(nullptr))->GetClass();
      RooTemplateProxylERooAbsRealgR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooAbsRealgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooAbsCategorygR_Dictionary();
   static void RooTemplateProxylERooAbsCategorygR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooAbsCategorygR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooAbsCategorygR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooAbsCategorygR(void *p);
   static void deleteArray_RooTemplateProxylERooAbsCategorygR(void *p);
   static void destruct_RooTemplateProxylERooAbsCategorygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooAbsCategory>*)
   {
      ::RooTemplateProxy<RooAbsCategory> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooAbsCategory> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooAbsCategory>", ::RooTemplateProxy<RooAbsCategory>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooAbsCategory>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooAbsCategorygR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooAbsCategory>) );
      instance.SetNew(&new_RooTemplateProxylERooAbsCategorygR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooAbsCategorygR);
      instance.SetDelete(&delete_RooTemplateProxylERooAbsCategorygR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooAbsCategorygR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooAbsCategorygR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooTemplateProxy<RooAbsCategory>","RooCategoryProxy"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooAbsCategory>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooAbsCategory>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsCategory>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooAbsCategorygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsCategory>*>(nullptr))->GetClass();
      RooTemplateProxylERooAbsCategorygR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooAbsCategorygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooAbsRealLValuegR_Dictionary();
   static void RooTemplateProxylERooAbsRealLValuegR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooAbsRealLValuegR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooAbsRealLValuegR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooAbsRealLValuegR(void *p);
   static void deleteArray_RooTemplateProxylERooAbsRealLValuegR(void *p);
   static void destruct_RooTemplateProxylERooAbsRealLValuegR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooAbsRealLValue>*)
   {
      ::RooTemplateProxy<RooAbsRealLValue> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooAbsRealLValue> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooAbsRealLValue>", ::RooTemplateProxy<RooAbsRealLValue>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooAbsRealLValue>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooAbsRealLValuegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooAbsRealLValue>) );
      instance.SetNew(&new_RooTemplateProxylERooAbsRealLValuegR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooAbsRealLValuegR);
      instance.SetDelete(&delete_RooTemplateProxylERooAbsRealLValuegR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooAbsRealLValuegR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooAbsRealLValuegR);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooRealProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooAbsRealLValue>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooAbsRealLValue>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsRealLValue>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooAbsRealLValuegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsRealLValue>*>(nullptr))->GetClass();
      RooTemplateProxylERooAbsRealLValuegR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooAbsRealLValuegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooAbsPdfgR_Dictionary();
   static void RooTemplateProxylERooAbsPdfgR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooAbsPdfgR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooAbsPdfgR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooAbsPdfgR(void *p);
   static void deleteArray_RooTemplateProxylERooAbsPdfgR(void *p);
   static void destruct_RooTemplateProxylERooAbsPdfgR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooAbsPdf>*)
   {
      ::RooTemplateProxy<RooAbsPdf> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooAbsPdf> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooAbsPdf>", ::RooTemplateProxy<RooAbsPdf>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooAbsPdf>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooAbsPdfgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooAbsPdf>) );
      instance.SetNew(&new_RooTemplateProxylERooAbsPdfgR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooAbsPdfgR);
      instance.SetDelete(&delete_RooTemplateProxylERooAbsPdfgR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooAbsPdfgR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooAbsPdfgR);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooRealProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooAbsPdf>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooAbsPdf>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsPdf>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooAbsPdfgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsPdf>*>(nullptr))->GetClass();
      RooTemplateProxylERooAbsPdfgR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooAbsPdfgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylEconstsPRooHistFuncgR_Dictionary();
   static void RooTemplateProxylEconstsPRooHistFuncgR_TClassManip(TClass*);
   static void *new_RooTemplateProxylEconstsPRooHistFuncgR(void *p = nullptr);
   static void *newArray_RooTemplateProxylEconstsPRooHistFuncgR(Long_t size, void *p);
   static void delete_RooTemplateProxylEconstsPRooHistFuncgR(void *p);
   static void deleteArray_RooTemplateProxylEconstsPRooHistFuncgR(void *p);
   static void destruct_RooTemplateProxylEconstsPRooHistFuncgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<const RooHistFunc>*)
   {
      ::RooTemplateProxy<const RooHistFunc> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<const RooHistFunc> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<const RooHistFunc>", ::RooTemplateProxy<const RooHistFunc>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<const RooHistFunc>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylEconstsPRooHistFuncgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<const RooHistFunc>) );
      instance.SetNew(&new_RooTemplateProxylEconstsPRooHistFuncgR);
      instance.SetNewArray(&newArray_RooTemplateProxylEconstsPRooHistFuncgR);
      instance.SetDelete(&delete_RooTemplateProxylEconstsPRooHistFuncgR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylEconstsPRooHistFuncgR);
      instance.SetDestructor(&destruct_RooTemplateProxylEconstsPRooHistFuncgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooTemplateProxy<const RooHistFunc>","RooTemplateProxy<RooHistFunc const>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<const RooHistFunc>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<const RooHistFunc>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<const RooHistFunc>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylEconstsPRooHistFuncgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<const RooHistFunc>*>(nullptr))->GetClass();
      RooTemplateProxylEconstsPRooHistFuncgR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylEconstsPRooHistFuncgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooRealVargR_Dictionary();
   static void RooTemplateProxylERooRealVargR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooRealVargR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooRealVargR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooRealVargR(void *p);
   static void deleteArray_RooTemplateProxylERooRealVargR(void *p);
   static void destruct_RooTemplateProxylERooRealVargR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooRealVar>*)
   {
      ::RooTemplateProxy<RooRealVar> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooRealVar> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooRealVar>", ::RooTemplateProxy<RooRealVar>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooRealVar>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooRealVargR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooRealVar>) );
      instance.SetNew(&new_RooTemplateProxylERooRealVargR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooRealVargR);
      instance.SetDelete(&delete_RooTemplateProxylERooRealVargR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooRealVargR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooRealVargR);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooRealProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooRealVar>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooRealVar>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooRealVar>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooRealVargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooRealVar>*>(nullptr))->GetClass();
      RooTemplateProxylERooRealVargR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooRealVargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooMultiCategorygR_Dictionary();
   static void RooTemplateProxylERooMultiCategorygR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooMultiCategorygR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooMultiCategorygR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooMultiCategorygR(void *p);
   static void deleteArray_RooTemplateProxylERooMultiCategorygR(void *p);
   static void destruct_RooTemplateProxylERooMultiCategorygR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooMultiCategory>*)
   {
      ::RooTemplateProxy<RooMultiCategory> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooMultiCategory> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooMultiCategory>", ::RooTemplateProxy<RooMultiCategory>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooMultiCategory>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooMultiCategorygR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooMultiCategory>) );
      instance.SetNew(&new_RooTemplateProxylERooMultiCategorygR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooMultiCategorygR);
      instance.SetDelete(&delete_RooTemplateProxylERooMultiCategorygR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooMultiCategorygR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooMultiCategorygR);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooCategoryProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooMultiCategory>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooMultiCategory>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooMultiCategory>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooMultiCategorygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooMultiCategory>*>(nullptr))->GetClass();
      RooTemplateProxylERooMultiCategorygR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooMultiCategorygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooAbsCategoryLValuegR_Dictionary();
   static void RooTemplateProxylERooAbsCategoryLValuegR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooAbsCategoryLValuegR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooAbsCategoryLValuegR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooAbsCategoryLValuegR(void *p);
   static void deleteArray_RooTemplateProxylERooAbsCategoryLValuegR(void *p);
   static void destruct_RooTemplateProxylERooAbsCategoryLValuegR(void *p);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooAbsCategoryLValue>*)
   {
      ::RooTemplateProxy<RooAbsCategoryLValue> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooAbsCategoryLValue> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooAbsCategoryLValue>", ::RooTemplateProxy<RooAbsCategoryLValue>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooAbsCategoryLValue>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooAbsCategoryLValuegR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooAbsCategoryLValue>) );
      instance.SetNew(&new_RooTemplateProxylERooAbsCategoryLValuegR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooAbsCategoryLValuegR);
      instance.SetDelete(&delete_RooTemplateProxylERooAbsCategoryLValuegR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooAbsCategoryLValuegR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooAbsCategoryLValuegR);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooCategoryProxy";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooAbsCategoryLValue>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooAbsCategoryLValue>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsCategoryLValue>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooAbsCategoryLValuegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooAbsCategoryLValue>*>(nullptr))->GetClass();
      RooTemplateProxylERooAbsCategoryLValuegR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooAbsCategoryLValuegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooTemplateProxylERooHistFuncgR_Dictionary();
   static void RooTemplateProxylERooHistFuncgR_TClassManip(TClass*);
   static void *new_RooTemplateProxylERooHistFuncgR(void *p = nullptr);
   static void *newArray_RooTemplateProxylERooHistFuncgR(Long_t size, void *p);
   static void delete_RooTemplateProxylERooHistFuncgR(void *p);
   static void deleteArray_RooTemplateProxylERooHistFuncgR(void *p);
   static void destruct_RooTemplateProxylERooHistFuncgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTemplateProxy<RooHistFunc>*)
   {
      ::RooTemplateProxy<RooHistFunc> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTemplateProxy<RooHistFunc> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTemplateProxy<RooHistFunc>", ::RooTemplateProxy<RooHistFunc>::Class_Version(), "RooTemplateProxy.h", 150,
                  typeid(::RooTemplateProxy<RooHistFunc>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooTemplateProxylERooHistFuncgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooTemplateProxy<RooHistFunc>) );
      instance.SetNew(&new_RooTemplateProxylERooHistFuncgR);
      instance.SetNewArray(&newArray_RooTemplateProxylERooHistFuncgR);
      instance.SetDelete(&delete_RooTemplateProxylERooHistFuncgR);
      instance.SetDeleteArray(&deleteArray_RooTemplateProxylERooHistFuncgR);
      instance.SetDestructor(&destruct_RooTemplateProxylERooHistFuncgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTemplateProxy<RooHistFunc>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTemplateProxy<RooHistFunc>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooHistFunc>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooTemplateProxylERooHistFuncgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooTemplateProxy<RooHistFunc>*>(nullptr))->GetClass();
      RooTemplateProxylERooHistFuncgR_TClassManip(theClass);
   return theClass;
   }

   static void RooTemplateProxylERooHistFuncgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsReal(void *p);
   static void deleteArray_RooAbsReal(void *p);
   static void destruct_RooAbsReal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsReal*)
   {
      ::RooAbsReal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsReal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsReal", ::RooAbsReal::Class_Version(), "RooAbsReal.h", 63,
                  typeid(::RooAbsReal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsReal::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsReal) );
      instance.SetDelete(&delete_RooAbsReal);
      instance.SetDeleteArray(&deleteArray_RooAbsReal);
      instance.SetDestructor(&destruct_RooAbsReal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsReal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsReal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsReal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsData(void *p);
   static void deleteArray_RooAbsData(void *p);
   static void destruct_RooAbsData(void *p);
   static void streamer_RooAbsData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsData*)
   {
      ::RooAbsData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsData", ::RooAbsData::Class_Version(), "RooAbsData.h", 56,
                  typeid(::RooAbsData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsData::Dictionary, isa_proxy, 17,
                  sizeof(::RooAbsData) );
      instance.SetDelete(&delete_RooAbsData);
      instance.SetDeleteArray(&deleteArray_RooAbsData);
      instance.SetDestructor(&destruct_RooAbsData);
      instance.SetStreamerFunc(&streamer_RooAbsData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsData*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDirItem(void *p = nullptr);
   static void *newArray_RooDirItem(Long_t size, void *p);
   static void delete_RooDirItem(void *p);
   static void deleteArray_RooDirItem(void *p);
   static void destruct_RooDirItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDirItem*)
   {
      ::RooDirItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDirItem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDirItem", ::RooDirItem::Class_Version(), "RooDirItem.h", 22,
                  typeid(::RooDirItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDirItem::Dictionary, isa_proxy, 4,
                  sizeof(::RooDirItem) );
      instance.SetNew(&new_RooDirItem);
      instance.SetNewArray(&newArray_RooDirItem);
      instance.SetDelete(&delete_RooDirItem);
      instance.SetDeleteArray(&deleteArray_RooDirItem);
      instance.SetDestructor(&destruct_RooDirItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDirItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDirItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDirItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDataHist(void *p = nullptr);
   static void *newArray_RooDataHist(Long_t size, void *p);
   static void delete_RooDataHist(void *p);
   static void deleteArray_RooDataHist(void *p);
   static void destruct_RooDataHist(void *p);
   static void streamer_RooDataHist(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDataHist*)
   {
      ::RooDataHist *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDataHist >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDataHist", ::RooDataHist::Class_Version(), "RooDataHist.h", 40,
                  typeid(::RooDataHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDataHist::Dictionary, isa_proxy, 17,
                  sizeof(::RooDataHist) );
      instance.SetNew(&new_RooDataHist);
      instance.SetNewArray(&newArray_RooDataHist);
      instance.SetDelete(&delete_RooDataHist);
      instance.SetDeleteArray(&deleteArray_RooDataHist);
      instance.SetDestructor(&destruct_RooDataHist);
      instance.SetStreamerFunc(&streamer_RooDataHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDataHist*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDataHist*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDataHist*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDataSet(void *p = nullptr);
   static void *newArray_RooDataSet(Long_t size, void *p);
   static void delete_RooDataSet(void *p);
   static void deleteArray_RooDataSet(void *p);
   static void destruct_RooDataSet(void *p);
   static void streamer_RooDataSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDataSet*)
   {
      ::RooDataSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDataSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDataSet", ::RooDataSet::Class_Version(), "RooDataSet.h", 32,
                  typeid(::RooDataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDataSet::Dictionary, isa_proxy, 17,
                  sizeof(::RooDataSet) );
      instance.SetNew(&new_RooDataSet);
      instance.SetNewArray(&newArray_RooDataSet);
      instance.SetDelete(&delete_RooDataSet);
      instance.SetDeleteArray(&deleteArray_RooDataSet);
      instance.SetDestructor(&destruct_RooDataSet);
      instance.SetStreamerFunc(&streamer_RooDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDataSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDataSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDataSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsCacheElement(void *p);
   static void deleteArray_RooAbsCacheElement(void *p);
   static void destruct_RooAbsCacheElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCacheElement*)
   {
      ::RooAbsCacheElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCacheElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCacheElement", ::RooAbsCacheElement::Class_Version(), "RooAbsCacheElement.h", 26,
                  typeid(::RooAbsCacheElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCacheElement::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCacheElement) );
      instance.SetDelete(&delete_RooAbsCacheElement);
      instance.SetDeleteArray(&deleteArray_RooAbsCacheElement);
      instance.SetDestructor(&destruct_RooAbsCacheElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCacheElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCacheElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCacheElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooMsgService(void *p);
   static void deleteArray_RooMsgService(void *p);
   static void destruct_RooMsgService(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMsgService*)
   {
      ::RooMsgService *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMsgService >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMsgService", ::RooMsgService::Class_Version(), "RooMsgService.h", 110,
                  typeid(::RooMsgService), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMsgService::Dictionary, isa_proxy, 4,
                  sizeof(::RooMsgService) );
      instance.SetDelete(&delete_RooMsgService);
      instance.SetDeleteArray(&deleteArray_RooMsgService);
      instance.SetDestructor(&destruct_RooMsgService);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMsgService*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMsgService*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMsgService*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooMsgServicecLcLStreamConfig_Dictionary();
   static void RooMsgServicecLcLStreamConfig_TClassManip(TClass*);
   static void *new_RooMsgServicecLcLStreamConfig(void *p = nullptr);
   static void *newArray_RooMsgServicecLcLStreamConfig(Long_t size, void *p);
   static void delete_RooMsgServicecLcLStreamConfig(void *p);
   static void deleteArray_RooMsgServicecLcLStreamConfig(void *p);
   static void destruct_RooMsgServicecLcLStreamConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMsgService::StreamConfig*)
   {
      ::RooMsgService::StreamConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooMsgService::StreamConfig));
      static ::ROOT::TGenericClassInfo 
         instance("RooMsgService::StreamConfig", "RooMsgService.h", 115,
                  typeid(::RooMsgService::StreamConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooMsgServicecLcLStreamConfig_Dictionary, isa_proxy, 4,
                  sizeof(::RooMsgService::StreamConfig) );
      instance.SetNew(&new_RooMsgServicecLcLStreamConfig);
      instance.SetNewArray(&newArray_RooMsgServicecLcLStreamConfig);
      instance.SetDelete(&delete_RooMsgServicecLcLStreamConfig);
      instance.SetDeleteArray(&deleteArray_RooMsgServicecLcLStreamConfig);
      instance.SetDestructor(&destruct_RooMsgServicecLcLStreamConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMsgService::StreamConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMsgService::StreamConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMsgService::StreamConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooMsgServicecLcLStreamConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooMsgService::StreamConfig*>(nullptr))->GetClass();
      RooMsgServicecLcLStreamConfig_TClassManip(theClass);
   return theClass;
   }

   static void RooMsgServicecLcLStreamConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCacheManagerlERooAbsCacheElementgR_Dictionary();
   static void RooCacheManagerlERooAbsCacheElementgR_TClassManip(TClass*);
   static void *new_RooCacheManagerlERooAbsCacheElementgR(void *p = nullptr);
   static void *newArray_RooCacheManagerlERooAbsCacheElementgR(Long_t size, void *p);
   static void delete_RooCacheManagerlERooAbsCacheElementgR(void *p);
   static void deleteArray_RooCacheManagerlERooAbsCacheElementgR(void *p);
   static void destruct_RooCacheManagerlERooAbsCacheElementgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCacheManager<RooAbsCacheElement>*)
   {
      ::RooCacheManager<RooAbsCacheElement> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCacheManager<RooAbsCacheElement> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCacheManager<RooAbsCacheElement>", ::RooCacheManager<RooAbsCacheElement>::Class_Version(), "RooCacheManager.h", 53,
                  typeid(::RooCacheManager<RooAbsCacheElement>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCacheManagerlERooAbsCacheElementgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCacheManager<RooAbsCacheElement>) );
      instance.SetNew(&new_RooCacheManagerlERooAbsCacheElementgR);
      instance.SetNewArray(&newArray_RooCacheManagerlERooAbsCacheElementgR);
      instance.SetDelete(&delete_RooCacheManagerlERooAbsCacheElementgR);
      instance.SetDeleteArray(&deleteArray_RooCacheManagerlERooAbsCacheElementgR);
      instance.SetDestructor(&destruct_RooCacheManagerlERooAbsCacheElementgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCacheManager<RooAbsCacheElement>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCacheManager<RooAbsCacheElement>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCacheManager<RooAbsCacheElement>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCacheManagerlERooAbsCacheElementgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCacheManager<RooAbsCacheElement>*>(nullptr))->GetClass();
      RooCacheManagerlERooAbsCacheElementgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCacheManagerlERooAbsCacheElementgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooCacheManagerlEvectorlEdoublegRsPgR_Dictionary();
   static void RooCacheManagerlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_RooCacheManagerlEvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_RooCacheManagerlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_RooCacheManagerlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_RooCacheManagerlEvectorlEdoublegRsPgR(void *p);
   static void destruct_RooCacheManagerlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCacheManager<vector<double> >*)
   {
      ::RooCacheManager<vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCacheManager<vector<double> > >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCacheManager<vector<double> >", ::RooCacheManager<vector<double> >::Class_Version(), "RooCacheManager.h", 53,
                  typeid(::RooCacheManager<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooCacheManagerlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooCacheManager<vector<double> >) );
      instance.SetNew(&new_RooCacheManagerlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_RooCacheManagerlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_RooCacheManagerlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_RooCacheManagerlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_RooCacheManagerlEvectorlEdoublegRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCacheManager<vector<double> >","RooCacheManager<std::vector<double> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooCacheManager<vector<double> >","RooCacheManager<std::__1::vector<double, std::__1::allocator<double>>>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCacheManager<vector<double> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCacheManager<vector<double> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCacheManager<vector<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooCacheManagerlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooCacheManager<vector<double> >*>(nullptr))->GetClass();
      RooCacheManagerlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void RooCacheManagerlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooObjCacheManager(void *p = nullptr);
   static void *newArray_RooObjCacheManager(Long_t size, void *p);
   static void delete_RooObjCacheManager(void *p);
   static void deleteArray_RooObjCacheManager(void *p);
   static void destruct_RooObjCacheManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooObjCacheManager*)
   {
      ::RooObjCacheManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooObjCacheManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooObjCacheManager", ::RooObjCacheManager::Class_Version(), "RooObjCacheManager.h", 29,
                  typeid(::RooObjCacheManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooObjCacheManager::Dictionary, isa_proxy, 4,
                  sizeof(::RooObjCacheManager) );
      instance.SetNew(&new_RooObjCacheManager);
      instance.SetNewArray(&newArray_RooObjCacheManager);
      instance.SetDelete(&delete_RooObjCacheManager);
      instance.SetDeleteArray(&deleteArray_RooObjCacheManager);
      instance.SetDestructor(&destruct_RooObjCacheManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooObjCacheManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooObjCacheManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooObjCacheManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsPdf(void *p);
   static void deleteArray_RooAbsPdf(void *p);
   static void destruct_RooAbsPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsPdf*)
   {
      ::RooAbsPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsPdf", ::RooAbsPdf::Class_Version(), "RooAbsPdf.h", 32,
                  typeid(::RooAbsPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsPdf) );
      instance.SetDelete(&delete_RooAbsPdf);
      instance.SetDeleteArray(&deleteArray_RooAbsPdf);
      instance.SetDestructor(&destruct_RooAbsPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooAbsPdfcLcLGenSpec(void *p = nullptr);
   static void *newArray_RooAbsPdfcLcLGenSpec(Long_t size, void *p);
   static void delete_RooAbsPdfcLcLGenSpec(void *p);
   static void deleteArray_RooAbsPdfcLcLGenSpec(void *p);
   static void destruct_RooAbsPdfcLcLGenSpec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsPdf::GenSpec*)
   {
      ::RooAbsPdf::GenSpec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsPdf::GenSpec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsPdf::GenSpec", ::RooAbsPdf::GenSpec::Class_Version(), "RooAbsPdf.h", 64,
                  typeid(::RooAbsPdf::GenSpec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsPdf::GenSpec::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsPdf::GenSpec) );
      instance.SetNew(&new_RooAbsPdfcLcLGenSpec);
      instance.SetNewArray(&newArray_RooAbsPdfcLcLGenSpec);
      instance.SetDelete(&delete_RooAbsPdfcLcLGenSpec);
      instance.SetDeleteArray(&deleteArray_RooAbsPdfcLcLGenSpec);
      instance.SetDestructor(&destruct_RooAbsPdfcLcLGenSpec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsPdf::GenSpec*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsPdf::GenSpec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsPdf::GenSpec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsLValue(void *p);
   static void deleteArray_RooAbsLValue(void *p);
   static void destruct_RooAbsLValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsLValue*)
   {
      ::RooAbsLValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsLValue >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsLValue", ::RooAbsLValue::Class_Version(), "RooAbsLValue.h", 26,
                  typeid(::RooAbsLValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsLValue::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsLValue) );
      instance.SetDelete(&delete_RooAbsLValue);
      instance.SetDeleteArray(&deleteArray_RooAbsLValue);
      instance.SetDestructor(&destruct_RooAbsLValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsLValue*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsLValue*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsLValue*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsBinning(void *p);
   static void deleteArray_RooAbsBinning(void *p);
   static void destruct_RooAbsBinning(void *p);
   static void streamer_RooAbsBinning(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsBinning*)
   {
      ::RooAbsBinning *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsBinning >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsBinning", ::RooAbsBinning::Class_Version(), "RooAbsBinning.h", 33,
                  typeid(::RooAbsBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsBinning::Dictionary, isa_proxy, 17,
                  sizeof(::RooAbsBinning) );
      instance.SetDelete(&delete_RooAbsBinning);
      instance.SetDeleteArray(&deleteArray_RooAbsBinning);
      instance.SetDestructor(&destruct_RooAbsBinning);
      instance.SetStreamerFunc(&streamer_RooAbsBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsBinning*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsBinning*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsBinning*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsRealLValue(void *p);
   static void deleteArray_RooAbsRealLValue(void *p);
   static void destruct_RooAbsRealLValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsRealLValue*)
   {
      ::RooAbsRealLValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsRealLValue >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsRealLValue", ::RooAbsRealLValue::Class_Version(), "RooAbsRealLValue.h", 31,
                  typeid(::RooAbsRealLValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsRealLValue::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsRealLValue) );
      instance.SetDelete(&delete_RooAbsRealLValue);
      instance.SetDeleteArray(&deleteArray_RooAbsRealLValue);
      instance.SetDestructor(&destruct_RooAbsRealLValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsRealLValue*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsRealLValue*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsRealLValue*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsAnaConvPdf(void *p);
   static void deleteArray_RooAbsAnaConvPdf(void *p);
   static void destruct_RooAbsAnaConvPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsAnaConvPdf*)
   {
      ::RooAbsAnaConvPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsAnaConvPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsAnaConvPdf", ::RooAbsAnaConvPdf::Class_Version(), "RooAbsAnaConvPdf.h", 32,
                  typeid(::RooAbsAnaConvPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsAnaConvPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsAnaConvPdf) );
      instance.SetDelete(&delete_RooAbsAnaConvPdf);
      instance.SetDeleteArray(&deleteArray_RooAbsAnaConvPdf);
      instance.SetDestructor(&destruct_RooAbsAnaConvPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsAnaConvPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsAnaConvPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsAnaConvPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooHistPdf(void *p = nullptr);
   static void *newArray_RooHistPdf(Long_t size, void *p);
   static void delete_RooHistPdf(void *p);
   static void deleteArray_RooHistPdf(void *p);
   static void destruct_RooHistPdf(void *p);
   static void streamer_RooHistPdf(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooHistPdf*)
   {
      ::RooHistPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooHistPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooHistPdf", ::RooHistPdf::Class_Version(), "RooHistPdf.h", 30,
                  typeid(::RooHistPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooHistPdf::Dictionary, isa_proxy, 17,
                  sizeof(::RooHistPdf) );
      instance.SetNew(&new_RooHistPdf);
      instance.SetNewArray(&newArray_RooHistPdf);
      instance.SetDelete(&delete_RooHistPdf);
      instance.SetDeleteArray(&deleteArray_RooHistPdf);
      instance.SetDestructor(&destruct_RooHistPdf);
      instance.SetStreamerFunc(&streamer_RooHistPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooHistPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooHistPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooHistPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooChangeTracker(void *p = nullptr);
   static void *newArray_RooChangeTracker(Long_t size, void *p);
   static void delete_RooChangeTracker(void *p);
   static void deleteArray_RooChangeTracker(void *p);
   static void destruct_RooChangeTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooChangeTracker*)
   {
      ::RooChangeTracker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooChangeTracker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooChangeTracker", ::RooChangeTracker::Class_Version(), "RooChangeTracker.h", 23,
                  typeid(::RooChangeTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooChangeTracker::Dictionary, isa_proxy, 4,
                  sizeof(::RooChangeTracker) );
      instance.SetNew(&new_RooChangeTracker);
      instance.SetNewArray(&newArray_RooChangeTracker);
      instance.SetDelete(&delete_RooChangeTracker);
      instance.SetDeleteArray(&deleteArray_RooChangeTracker);
      instance.SetDestructor(&destruct_RooChangeTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooChangeTracker*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooChangeTracker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooChangeTracker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsCachedPdf(void *p);
   static void deleteArray_RooAbsCachedPdf(void *p);
   static void destruct_RooAbsCachedPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCachedPdf*)
   {
      ::RooAbsCachedPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCachedPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCachedPdf", ::RooAbsCachedPdf::Class_Version(), "RooAbsCachedPdf.h", 25,
                  typeid(::RooAbsCachedPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCachedPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCachedPdf) );
      instance.SetDelete(&delete_RooAbsCachedPdf);
      instance.SetDeleteArray(&deleteArray_RooAbsCachedPdf);
      instance.SetDestructor(&destruct_RooAbsCachedPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCachedPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCachedPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCachedPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooAbsCachedPdfcLcLPdfCacheElem_Dictionary();
   static void RooAbsCachedPdfcLcLPdfCacheElem_TClassManip(TClass*);
   static void delete_RooAbsCachedPdfcLcLPdfCacheElem(void *p);
   static void deleteArray_RooAbsCachedPdfcLcLPdfCacheElem(void *p);
   static void destruct_RooAbsCachedPdfcLcLPdfCacheElem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCachedPdf::PdfCacheElem*)
   {
      ::RooAbsCachedPdf::PdfCacheElem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooAbsCachedPdf::PdfCacheElem));
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCachedPdf::PdfCacheElem", "RooAbsCachedPdf.h", 62,
                  typeid(::RooAbsCachedPdf::PdfCacheElem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooAbsCachedPdfcLcLPdfCacheElem_Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCachedPdf::PdfCacheElem) );
      instance.SetDelete(&delete_RooAbsCachedPdfcLcLPdfCacheElem);
      instance.SetDeleteArray(&deleteArray_RooAbsCachedPdfcLcLPdfCacheElem);
      instance.SetDestructor(&destruct_RooAbsCachedPdfcLcLPdfCacheElem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCachedPdf::PdfCacheElem*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCachedPdf::PdfCacheElem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCachedPdf::PdfCacheElem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooAbsCachedPdfcLcLPdfCacheElem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooAbsCachedPdf::PdfCacheElem*>(nullptr))->GetClass();
      RooAbsCachedPdfcLcLPdfCacheElem_TClassManip(theClass);
   return theClass;
   }

   static void RooAbsCachedPdfcLcLPdfCacheElem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTrace(void *p = nullptr);
   static void *newArray_RooTrace(Long_t size, void *p);
   static void delete_RooTrace(void *p);
   static void deleteArray_RooTrace(void *p);
   static void destruct_RooTrace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTrace*)
   {
      ::RooTrace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTrace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTrace", ::RooTrace::Class_Version(), "RooTrace.h", 26,
                  typeid(::RooTrace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTrace::Dictionary, isa_proxy, 4,
                  sizeof(::RooTrace) );
      instance.SetNew(&new_RooTrace);
      instance.SetNewArray(&newArray_RooTrace);
      instance.SetDelete(&delete_RooTrace);
      instance.SetDeleteArray(&deleteArray_RooTrace);
      instance.SetDestructor(&destruct_RooTrace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTrace*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTrace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTrace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooHistFunc(void *p = nullptr);
   static void *newArray_RooHistFunc(Long_t size, void *p);
   static void delete_RooHistFunc(void *p);
   static void deleteArray_RooHistFunc(void *p);
   static void destruct_RooHistFunc(void *p);
   static void streamer_RooHistFunc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooHistFunc*)
   {
      ::RooHistFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooHistFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooHistFunc", ::RooHistFunc::Class_Version(), "RooHistFunc.h", 31,
                  typeid(::RooHistFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooHistFunc::Dictionary, isa_proxy, 17,
                  sizeof(::RooHistFunc) );
      instance.SetNew(&new_RooHistFunc);
      instance.SetNewArray(&newArray_RooHistFunc);
      instance.SetDelete(&delete_RooHistFunc);
      instance.SetDeleteArray(&deleteArray_RooHistFunc);
      instance.SetDestructor(&destruct_RooHistFunc);
      instance.SetStreamerFunc(&streamer_RooHistFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooHistFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooHistFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooHistFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsCachedReal(void *p);
   static void deleteArray_RooAbsCachedReal(void *p);
   static void destruct_RooAbsCachedReal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCachedReal*)
   {
      ::RooAbsCachedReal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCachedReal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCachedReal", ::RooAbsCachedReal::Class_Version(), "RooAbsCachedReal.h", 24,
                  typeid(::RooAbsCachedReal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCachedReal::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCachedReal) );
      instance.SetDelete(&delete_RooAbsCachedReal);
      instance.SetDeleteArray(&deleteArray_RooAbsCachedReal);
      instance.SetDestructor(&destruct_RooAbsCachedReal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCachedReal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCachedReal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCachedReal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsCategoryLValue(void *p);
   static void deleteArray_RooAbsCategoryLValue(void *p);
   static void destruct_RooAbsCategoryLValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsCategoryLValue*)
   {
      ::RooAbsCategoryLValue *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsCategoryLValue >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsCategoryLValue", ::RooAbsCategoryLValue::Class_Version(), "RooAbsCategoryLValue.h", 26,
                  typeid(::RooAbsCategoryLValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsCategoryLValue::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsCategoryLValue) );
      instance.SetDelete(&delete_RooAbsCategoryLValue);
      instance.SetDeleteArray(&deleteArray_RooAbsCategoryLValue);
      instance.SetDestructor(&destruct_RooAbsCategoryLValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsCategoryLValue*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsCategoryLValue*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsCategoryLValue*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooSharedProperties(void *p = nullptr);
   static void *newArray_RooSharedProperties(Long_t size, void *p);
   static void delete_RooSharedProperties(void *p);
   static void deleteArray_RooSharedProperties(void *p);
   static void destruct_RooSharedProperties(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSharedProperties*)
   {
      ::RooSharedProperties *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSharedProperties >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSharedProperties", ::RooSharedProperties::Class_Version(), "RooSharedProperties.h", 22,
                  typeid(::RooSharedProperties), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSharedProperties::Dictionary, isa_proxy, 4,
                  sizeof(::RooSharedProperties) );
      instance.SetNew(&new_RooSharedProperties);
      instance.SetNewArray(&newArray_RooSharedProperties);
      instance.SetDelete(&delete_RooSharedProperties);
      instance.SetDeleteArray(&deleteArray_RooSharedProperties);
      instance.SetDestructor(&destruct_RooSharedProperties);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSharedProperties*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSharedProperties*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSharedProperties*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealVar(void *p = nullptr);
   static void *newArray_RooRealVar(Long_t size, void *p);
   static void delete_RooRealVar(void *p);
   static void deleteArray_RooRealVar(void *p);
   static void destruct_RooRealVar(void *p);
   static void streamer_RooRealVar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealVar*)
   {
      ::RooRealVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealVar", ::RooRealVar::Class_Version(), "RooRealVar.h", 37,
                  typeid(::RooRealVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealVar::Dictionary, isa_proxy, 17,
                  sizeof(::RooRealVar) );
      instance.SetNew(&new_RooRealVar);
      instance.SetNewArray(&newArray_RooRealVar);
      instance.SetDelete(&delete_RooRealVar);
      instance.SetDeleteArray(&deleteArray_RooRealVar);
      instance.SetDestructor(&destruct_RooRealVar);
      instance.SetStreamerFunc(&streamer_RooRealVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsDataStore(void *p);
   static void deleteArray_RooAbsDataStore(void *p);
   static void destruct_RooAbsDataStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsDataStore*)
   {
      ::RooAbsDataStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsDataStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsDataStore", ::RooAbsDataStore::Class_Version(), "RooAbsDataStore.h", 34,
                  typeid(::RooAbsDataStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsDataStore::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsDataStore) );
      instance.SetDelete(&delete_RooAbsDataStore);
      instance.SetDeleteArray(&deleteArray_RooAbsDataStore);
      instance.SetDestructor(&destruct_RooAbsDataStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsDataStore*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsDataStore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsDataStore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsFunc(void *p);
   static void deleteArray_RooAbsFunc(void *p);
   static void destruct_RooAbsFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsFunc*)
   {
      ::RooAbsFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsFunc", ::RooAbsFunc::Class_Version(), "RooAbsFunc.h", 27,
                  typeid(::RooAbsFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsFunc) );
      instance.SetDelete(&delete_RooAbsFunc);
      instance.SetDeleteArray(&deleteArray_RooAbsFunc);
      instance.SetDestructor(&destruct_RooAbsFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsGenContext(void *p);
   static void deleteArray_RooAbsGenContext(void *p);
   static void destruct_RooAbsGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsGenContext*)
   {
      ::RooAbsGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsGenContext", ::RooAbsGenContext::Class_Version(), "RooAbsGenContext.h", 26,
                  typeid(::RooAbsGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsGenContext) );
      instance.SetDelete(&delete_RooAbsGenContext);
      instance.SetDeleteArray(&deleteArray_RooAbsGenContext);
      instance.SetDestructor(&destruct_RooAbsGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsHiddenReal(void *p);
   static void deleteArray_RooAbsHiddenReal(void *p);
   static void destruct_RooAbsHiddenReal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsHiddenReal*)
   {
      ::RooAbsHiddenReal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsHiddenReal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsHiddenReal", ::RooAbsHiddenReal::Class_Version(), "RooAbsHiddenReal.h", 25,
                  typeid(::RooAbsHiddenReal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsHiddenReal::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsHiddenReal) );
      instance.SetDelete(&delete_RooAbsHiddenReal);
      instance.SetDeleteArray(&deleteArray_RooAbsHiddenReal);
      instance.SetDestructor(&destruct_RooAbsHiddenReal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsHiddenReal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsHiddenReal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsHiddenReal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCategory(void *p = nullptr);
   static void *newArray_RooCategory(Long_t size, void *p);
   static void delete_RooCategory(void *p);
   static void deleteArray_RooCategory(void *p);
   static void destruct_RooCategory(void *p);
   static void streamer_RooCategory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCategory*)
   {
      ::RooCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCategory", ::RooCategory::Class_Version(), "RooCategory.h", 28,
                  typeid(::RooCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCategory::Dictionary, isa_proxy, 17,
                  sizeof(::RooCategory) );
      instance.SetNew(&new_RooCategory);
      instance.SetNewArray(&newArray_RooCategory);
      instance.SetDelete(&delete_RooCategory);
      instance.SetDeleteArray(&deleteArray_RooCategory);
      instance.SetDestructor(&destruct_RooCategory);
      instance.SetStreamerFunc(&streamer_RooCategory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNumIntConfig(void *p = nullptr);
   static void *newArray_RooNumIntConfig(Long_t size, void *p);
   static void delete_RooNumIntConfig(void *p);
   static void deleteArray_RooNumIntConfig(void *p);
   static void destruct_RooNumIntConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumIntConfig*)
   {
      ::RooNumIntConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumIntConfig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumIntConfig", ::RooNumIntConfig::Class_Version(), "RooNumIntConfig.h", 25,
                  typeid(::RooNumIntConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumIntConfig::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumIntConfig) );
      instance.SetNew(&new_RooNumIntConfig);
      instance.SetNewArray(&newArray_RooNumIntConfig);
      instance.SetDelete(&delete_RooNumIntConfig);
      instance.SetDeleteArray(&deleteArray_RooNumIntConfig);
      instance.SetDestructor(&destruct_RooNumIntConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumIntConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumIntConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumIntConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooMCStudy(void *p);
   static void deleteArray_RooMCStudy(void *p);
   static void destruct_RooMCStudy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMCStudy*)
   {
      ::RooMCStudy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMCStudy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMCStudy", ::RooMCStudy::Class_Version(), "RooMCStudy.h", 32,
                  typeid(::RooMCStudy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMCStudy::Dictionary, isa_proxy, 4,
                  sizeof(::RooMCStudy) );
      instance.SetDelete(&delete_RooMCStudy);
      instance.SetDeleteArray(&deleteArray_RooMCStudy);
      instance.SetDestructor(&destruct_RooMCStudy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMCStudy*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMCStudy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMCStudy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsMCStudyModule(void *p);
   static void deleteArray_RooAbsMCStudyModule(void *p);
   static void destruct_RooAbsMCStudyModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsMCStudyModule*)
   {
      ::RooAbsMCStudyModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsMCStudyModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsMCStudyModule", ::RooAbsMCStudyModule::Class_Version(), "RooAbsMCStudyModule.h", 30,
                  typeid(::RooAbsMCStudyModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsMCStudyModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsMCStudyModule) );
      instance.SetDelete(&delete_RooAbsMCStudyModule);
      instance.SetDeleteArray(&deleteArray_RooAbsMCStudyModule);
      instance.SetDestructor(&destruct_RooAbsMCStudyModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsMCStudyModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsMCStudyModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsMCStudyModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsMoment(void *p);
   static void deleteArray_RooAbsMoment(void *p);
   static void destruct_RooAbsMoment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsMoment*)
   {
      ::RooAbsMoment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsMoment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsMoment", ::RooAbsMoment::Class_Version(), "RooAbsMoment.h", 27,
                  typeid(::RooAbsMoment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsMoment::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsMoment) );
      instance.SetDelete(&delete_RooAbsMoment);
      instance.SetDeleteArray(&deleteArray_RooAbsMoment);
      instance.SetDestructor(&destruct_RooAbsMoment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsMoment*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsMoment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsMoment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooAbsSelfCachedlERooAbsCachedRealgR_Dictionary();
   static void RooAbsSelfCachedlERooAbsCachedRealgR_TClassManip(TClass*);
   static void delete_RooAbsSelfCachedlERooAbsCachedRealgR(void *p);
   static void deleteArray_RooAbsSelfCachedlERooAbsCachedRealgR(void *p);
   static void destruct_RooAbsSelfCachedlERooAbsCachedRealgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsSelfCached<RooAbsCachedReal>*)
   {
      ::RooAbsSelfCached<RooAbsCachedReal> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsSelfCached<RooAbsCachedReal> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsSelfCached<RooAbsCachedReal>", ::RooAbsSelfCached<RooAbsCachedReal>::Class_Version(), "RooAbsSelfCachedReal.h", 42,
                  typeid(::RooAbsSelfCached<RooAbsCachedReal>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooAbsSelfCachedlERooAbsCachedRealgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsSelfCached<RooAbsCachedReal>) );
      instance.SetDelete(&delete_RooAbsSelfCachedlERooAbsCachedRealgR);
      instance.SetDeleteArray(&deleteArray_RooAbsSelfCachedlERooAbsCachedRealgR);
      instance.SetDestructor(&destruct_RooAbsSelfCachedlERooAbsCachedRealgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooAbsSelfCached<RooAbsCachedReal>","RooAbsSelfCachedReal"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsSelfCached<RooAbsCachedReal>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsSelfCached<RooAbsCachedReal>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsSelfCached<RooAbsCachedReal>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooAbsSelfCachedlERooAbsCachedRealgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooAbsSelfCached<RooAbsCachedReal>*>(nullptr))->GetClass();
      RooAbsSelfCachedlERooAbsCachedRealgR_TClassManip(theClass);
   return theClass;
   }

   static void RooAbsSelfCachedlERooAbsCachedRealgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooAbsSelfCachedlERooAbsCachedPdfgR_Dictionary();
   static void RooAbsSelfCachedlERooAbsCachedPdfgR_TClassManip(TClass*);
   static void delete_RooAbsSelfCachedlERooAbsCachedPdfgR(void *p);
   static void deleteArray_RooAbsSelfCachedlERooAbsCachedPdfgR(void *p);
   static void destruct_RooAbsSelfCachedlERooAbsCachedPdfgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsSelfCached<RooAbsCachedPdf>*)
   {
      ::RooAbsSelfCached<RooAbsCachedPdf> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsSelfCached<RooAbsCachedPdf> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsSelfCached<RooAbsCachedPdf>", ::RooAbsSelfCached<RooAbsCachedPdf>::Class_Version(), "RooAbsSelfCachedReal.h", 42,
                  typeid(::RooAbsSelfCached<RooAbsCachedPdf>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooAbsSelfCachedlERooAbsCachedPdfgR_Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsSelfCached<RooAbsCachedPdf>) );
      instance.SetDelete(&delete_RooAbsSelfCachedlERooAbsCachedPdfgR);
      instance.SetDeleteArray(&deleteArray_RooAbsSelfCachedlERooAbsCachedPdfgR);
      instance.SetDestructor(&destruct_RooAbsSelfCachedlERooAbsCachedPdfgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("RooAbsSelfCached<RooAbsCachedPdf>","RooAbsSelfCachedPdf"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsSelfCached<RooAbsCachedPdf>*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsSelfCached<RooAbsCachedPdf>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsSelfCached<RooAbsCachedPdf>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooAbsSelfCachedlERooAbsCachedPdfgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooAbsSelfCached<RooAbsCachedPdf>*>(nullptr))->GetClass();
      RooAbsSelfCachedlERooAbsCachedPdfgR_TClassManip(theClass);
   return theClass;
   }

   static void RooAbsSelfCachedlERooAbsCachedPdfgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAbsStudy(void *p);
   static void deleteArray_RooAbsStudy(void *p);
   static void destruct_RooAbsStudy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAbsStudy*)
   {
      ::RooAbsStudy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAbsStudy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAbsStudy", ::RooAbsStudy::Class_Version(), "RooAbsStudy.h", 33,
                  typeid(::RooAbsStudy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAbsStudy::Dictionary, isa_proxy, 4,
                  sizeof(::RooAbsStudy) );
      instance.SetDelete(&delete_RooAbsStudy);
      instance.SetDeleteArray(&deleteArray_RooAbsStudy);
      instance.SetDestructor(&destruct_RooAbsStudy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAbsStudy*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAbsStudy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAbsStudy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooAddPdf(void *p = nullptr);
   static void *newArray_RooAddPdf(Long_t size, void *p);
   static void delete_RooAddPdf(void *p);
   static void deleteArray_RooAddPdf(void *p);
   static void destruct_RooAddPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAddPdf*)
   {
      ::RooAddPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAddPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAddPdf", ::RooAddPdf::Class_Version(), "RooAddPdf.h", 33,
                  typeid(::RooAddPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAddPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooAddPdf) );
      instance.SetNew(&new_RooAddPdf);
      instance.SetNewArray(&newArray_RooAddPdf);
      instance.SetDelete(&delete_RooAddPdf);
      instance.SetDeleteArray(&deleteArray_RooAddPdf);
      instance.SetDestructor(&destruct_RooAddPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAddPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAddPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAddPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFormulaVar(void *p = nullptr);
   static void *newArray_RooFormulaVar(Long_t size, void *p);
   static void delete_RooFormulaVar(void *p);
   static void deleteArray_RooFormulaVar(void *p);
   static void destruct_RooFormulaVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFormulaVar*)
   {
      ::RooFormulaVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFormulaVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFormulaVar", ::RooFormulaVar::Class_Version(), "RooFormulaVar.h", 30,
                  typeid(::RooFormulaVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFormulaVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooFormulaVar) );
      instance.SetNew(&new_RooFormulaVar);
      instance.SetNewArray(&newArray_RooFormulaVar);
      instance.SetDelete(&delete_RooFormulaVar);
      instance.SetDeleteArray(&deleteArray_RooFormulaVar);
      instance.SetDestructor(&destruct_RooFormulaVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFormulaVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFormulaVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFormulaVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooResolutionModel(void *p);
   static void deleteArray_RooResolutionModel(void *p);
   static void destruct_RooResolutionModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooResolutionModel*)
   {
      ::RooResolutionModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooResolutionModel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooResolutionModel", ::RooResolutionModel::Class_Version(), "RooResolutionModel.h", 26,
                  typeid(::RooResolutionModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooResolutionModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooResolutionModel) );
      instance.SetDelete(&delete_RooResolutionModel);
      instance.SetDeleteArray(&deleteArray_RooResolutionModel);
      instance.SetDestructor(&destruct_RooResolutionModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooResolutionModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooResolutionModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooResolutionModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooAddModel(void *p = nullptr);
   static void *newArray_RooAddModel(Long_t size, void *p);
   static void delete_RooAddModel(void *p);
   static void deleteArray_RooAddModel(void *p);
   static void destruct_RooAddModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAddModel*)
   {
      ::RooAddModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAddModel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAddModel", ::RooAddModel::Class_Version(), "RooAddModel.h", 27,
                  typeid(::RooAddModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAddModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooAddModel) );
      instance.SetNew(&new_RooAddModel);
      instance.SetNewArray(&newArray_RooAddModel);
      instance.SetDelete(&delete_RooAddModel);
      instance.SetDeleteArray(&deleteArray_RooAddModel);
      instance.SetDestructor(&destruct_RooAddModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAddModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAddModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAddModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooGenContext(void *p);
   static void deleteArray_RooGenContext(void *p);
   static void destruct_RooGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGenContext*)
   {
      ::RooGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGenContext", ::RooGenContext::Class_Version(), "RooGenContext.h", 29,
                  typeid(::RooGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooGenContext) );
      instance.SetDelete(&delete_RooGenContext);
      instance.SetDeleteArray(&deleteArray_RooGenContext);
      instance.SetDestructor(&destruct_RooGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooAddGenContext(void *p);
   static void deleteArray_RooAddGenContext(void *p);
   static void destruct_RooAddGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAddGenContext*)
   {
      ::RooAddGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAddGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAddGenContext", ::RooAddGenContext::Class_Version(), "RooAddGenContext.h", 32,
                  typeid(::RooAddGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAddGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooAddGenContext) );
      instance.SetDelete(&delete_RooAddGenContext);
      instance.SetDeleteArray(&deleteArray_RooAddGenContext);
      instance.SetDestructor(&destruct_RooAddGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAddGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAddGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAddGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooAddition(void *p = nullptr);
   static void *newArray_RooAddition(Long_t size, void *p);
   static void delete_RooAddition(void *p);
   static void deleteArray_RooAddition(void *p);
   static void destruct_RooAddition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooAddition*)
   {
      ::RooAddition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooAddition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooAddition", ::RooAddition::Class_Version(), "RooAddition.h", 27,
                  typeid(::RooAddition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooAddition::Dictionary, isa_proxy, 4,
                  sizeof(::RooAddition) );
      instance.SetNew(&new_RooAddition);
      instance.SetNewArray(&newArray_RooAddition);
      instance.SetDelete(&delete_RooAddition);
      instance.SetDeleteArray(&deleteArray_RooAddition);
      instance.SetDestructor(&destruct_RooAddition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooAddition*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooAddition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooAddition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBinSamplingPdf(void *p = nullptr);
   static void *newArray_RooBinSamplingPdf(Long_t size, void *p);
   static void delete_RooBinSamplingPdf(void *p);
   static void deleteArray_RooBinSamplingPdf(void *p);
   static void destruct_RooBinSamplingPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBinSamplingPdf*)
   {
      ::RooBinSamplingPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBinSamplingPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBinSamplingPdf", ::RooBinSamplingPdf::Class_Version(), "RooBinSamplingPdf.h", 28,
                  typeid(::RooBinSamplingPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBinSamplingPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooBinSamplingPdf) );
      instance.SetNew(&new_RooBinSamplingPdf);
      instance.SetNewArray(&newArray_RooBinSamplingPdf);
      instance.SetDelete(&delete_RooBinSamplingPdf);
      instance.SetDeleteArray(&deleteArray_RooBinSamplingPdf);
      instance.SetDestructor(&destruct_RooBinSamplingPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBinSamplingPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBinSamplingPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBinSamplingPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBinWidthFunction(void *p = nullptr);
   static void *newArray_RooBinWidthFunction(Long_t size, void *p);
   static void delete_RooBinWidthFunction(void *p);
   static void deleteArray_RooBinWidthFunction(void *p);
   static void destruct_RooBinWidthFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBinWidthFunction*)
   {
      ::RooBinWidthFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBinWidthFunction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBinWidthFunction", ::RooBinWidthFunction::Class_Version(), "RooBinWidthFunction.h", 25,
                  typeid(::RooBinWidthFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBinWidthFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooBinWidthFunction) );
      instance.SetNew(&new_RooBinWidthFunction);
      instance.SetNewArray(&newArray_RooBinWidthFunction);
      instance.SetDelete(&delete_RooBinWidthFunction);
      instance.SetDeleteArray(&deleteArray_RooBinWidthFunction);
      instance.SetDestructor(&destruct_RooBinWidthFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBinWidthFunction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBinWidthFunction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBinWidthFunction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooBinnedGenContext(void *p);
   static void deleteArray_RooBinnedGenContext(void *p);
   static void destruct_RooBinnedGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBinnedGenContext*)
   {
      ::RooBinnedGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBinnedGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBinnedGenContext", ::RooBinnedGenContext::Class_Version(), "RooBinnedGenContext.h", 26,
                  typeid(::RooBinnedGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBinnedGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooBinnedGenContext) );
      instance.SetDelete(&delete_RooBinnedGenContext);
      instance.SetDeleteArray(&deleteArray_RooBinnedGenContext);
      instance.SetDestructor(&destruct_RooBinnedGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBinnedGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBinnedGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBinnedGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBinning(void *p = nullptr);
   static void *newArray_RooBinning(Long_t size, void *p);
   static void delete_RooBinning(void *p);
   static void deleteArray_RooBinning(void *p);
   static void destruct_RooBinning(void *p);
   static void streamer_RooBinning(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBinning*)
   {
      ::RooBinning *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBinning >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBinning", ::RooBinning::Class_Version(), "RooBinning.h", 27,
                  typeid(::RooBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBinning::Dictionary, isa_proxy, 17,
                  sizeof(::RooBinning) );
      instance.SetNew(&new_RooBinning);
      instance.SetNewArray(&newArray_RooBinning);
      instance.SetDelete(&delete_RooBinning);
      instance.SetDeleteArray(&deleteArray_RooBinning);
      instance.SetDestructor(&destruct_RooBinning);
      instance.SetStreamerFunc(&streamer_RooBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBinning*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBinning*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBinning*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooBinningCategory(void *p = nullptr);
   static void *newArray_RooBinningCategory(Long_t size, void *p);
   static void delete_RooBinningCategory(void *p);
   static void deleteArray_RooBinningCategory(void *p);
   static void destruct_RooBinningCategory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBinningCategory*)
   {
      ::RooBinningCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBinningCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBinningCategory", ::RooBinningCategory::Class_Version(), "RooBinningCategory.h", 23,
                  typeid(::RooBinningCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBinningCategory::Dictionary, isa_proxy, 4,
                  sizeof(::RooBinningCategory) );
      instance.SetNew(&new_RooBinningCategory);
      instance.SetNewArray(&newArray_RooBinningCategory);
      instance.SetDelete(&delete_RooBinningCategory);
      instance.SetDeleteArray(&deleteArray_RooBinningCategory);
      instance.SetDestructor(&destruct_RooBinningCategory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBinningCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBinningCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBinningCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooBrentRootFinder(void *p);
   static void deleteArray_RooBrentRootFinder(void *p);
   static void destruct_RooBrentRootFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooBrentRootFinder*)
   {
      ::RooBrentRootFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooBrentRootFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooBrentRootFinder", ::RooBrentRootFinder::Class_Version(), "RooBrentRootFinder.h", 23,
                  typeid(::RooBrentRootFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooBrentRootFinder::Dictionary, isa_proxy, 4,
                  sizeof(::RooBrentRootFinder) );
      instance.SetDelete(&delete_RooBrentRootFinder);
      instance.SetDeleteArray(&deleteArray_RooBrentRootFinder);
      instance.SetDestructor(&destruct_RooBrentRootFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooBrentRootFinder*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooBrentRootFinder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooBrentRootFinder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCachedPdf(void *p = nullptr);
   static void *newArray_RooCachedPdf(Long_t size, void *p);
   static void delete_RooCachedPdf(void *p);
   static void deleteArray_RooCachedPdf(void *p);
   static void destruct_RooCachedPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCachedPdf*)
   {
      ::RooCachedPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCachedPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCachedPdf", ::RooCachedPdf::Class_Version(), "RooCachedPdf.h", 20,
                  typeid(::RooCachedPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCachedPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooCachedPdf) );
      instance.SetNew(&new_RooCachedPdf);
      instance.SetNewArray(&newArray_RooCachedPdf);
      instance.SetDelete(&delete_RooCachedPdf);
      instance.SetDeleteArray(&deleteArray_RooCachedPdf);
      instance.SetDestructor(&destruct_RooCachedPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCachedPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCachedPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCachedPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCachedReal(void *p = nullptr);
   static void *newArray_RooCachedReal(Long_t size, void *p);
   static void delete_RooCachedReal(void *p);
   static void deleteArray_RooCachedReal(void *p);
   static void destruct_RooCachedReal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCachedReal*)
   {
      ::RooCachedReal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCachedReal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCachedReal", ::RooCachedReal::Class_Version(), "RooCachedReal.h", 20,
                  typeid(::RooCachedReal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCachedReal::Dictionary, isa_proxy, 4,
                  sizeof(::RooCachedReal) );
      instance.SetNew(&new_RooCachedReal);
      instance.SetNewArray(&newArray_RooCachedReal);
      instance.SetDelete(&delete_RooCachedReal);
      instance.SetDeleteArray(&deleteArray_RooCachedReal);
      instance.SetDestructor(&destruct_RooCachedReal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCachedReal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCachedReal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCachedReal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooCmdConfig(void *p);
   static void deleteArray_RooCmdConfig(void *p);
   static void destruct_RooCmdConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCmdConfig*)
   {
      ::RooCmdConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCmdConfig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCmdConfig", ::RooCmdConfig::Class_Version(), "RooCmdConfig.h", 33,
                  typeid(::RooCmdConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCmdConfig::Dictionary, isa_proxy, 4,
                  sizeof(::RooCmdConfig) );
      instance.SetDelete(&delete_RooCmdConfig);
      instance.SetDeleteArray(&deleteArray_RooCmdConfig);
      instance.SetDestructor(&destruct_RooCmdConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCmdConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCmdConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCmdConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCompositeDataStore(void *p = nullptr);
   static void *newArray_RooCompositeDataStore(Long_t size, void *p);
   static void delete_RooCompositeDataStore(void *p);
   static void deleteArray_RooCompositeDataStore(void *p);
   static void destruct_RooCompositeDataStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCompositeDataStore*)
   {
      ::RooCompositeDataStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCompositeDataStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCompositeDataStore", ::RooCompositeDataStore::Class_Version(), "RooCompositeDataStore.h", 33,
                  typeid(::RooCompositeDataStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCompositeDataStore::Dictionary, isa_proxy, 4,
                  sizeof(::RooCompositeDataStore) );
      instance.SetNew(&new_RooCompositeDataStore);
      instance.SetNewArray(&newArray_RooCompositeDataStore);
      instance.SetDelete(&delete_RooCompositeDataStore);
      instance.SetDeleteArray(&deleteArray_RooCompositeDataStore);
      instance.SetDestructor(&destruct_RooCompositeDataStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCompositeDataStore*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCompositeDataStore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCompositeDataStore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooConstVar(void *p = nullptr);
   static void *newArray_RooConstVar(Long_t size, void *p);
   static void delete_RooConstVar(void *p);
   static void deleteArray_RooConstVar(void *p);
   static void destruct_RooConstVar(void *p);

   // Schema evolution read functions
   static void read_RooConstVar_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__value = oldObj->GetId("_value");
#endif
      struct RooConstVar_Onfile {
         double &_value;
         RooConstVar_Onfile(double &onfile__value ): _value(onfile__value) {}
      };
      static Long_t offset_Onfile_RooConstVar__value = oldObj->GetClass()->GetDataMemberOffset("_value");
      char *onfile_add = (char*)oldObj->GetObject();
      RooConstVar_Onfile onfile(
         *(double*)(onfile_add+offset_Onfile_RooConstVar__value) );

      RooConstVar* newObj = (RooConstVar*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      newObj->changeVal(onfile._value); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooConstVar*)
   {
      ::RooConstVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooConstVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooConstVar", ::RooConstVar::Class_Version(), "RooConstVar.h", 23,
                  typeid(::RooConstVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooConstVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooConstVar) );
      instance.SetNew(&new_RooConstVar);
      instance.SetNewArray(&newArray_RooConstVar);
      instance.SetDelete(&delete_RooConstVar);
      instance.SetDeleteArray(&deleteArray_RooConstVar);
      instance.SetDestructor(&destruct_RooConstVar);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooConstVar";
      rule->fTarget      = "";
      rule->fSource      = "double _value; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooConstVar_0);
      rule->fCode        = " newObj->changeVal(onfile._value); ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooConstVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooConstVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooConstVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooConstraintSum(void *p = nullptr);
   static void *newArray_RooConstraintSum(Long_t size, void *p);
   static void delete_RooConstraintSum(void *p);
   static void deleteArray_RooConstraintSum(void *p);
   static void destruct_RooConstraintSum(void *p);

   // Schema evolution read functions
   static void read_RooConstraintSum_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__paramSet = oldObj->GetId("_paramSet");
#endif
      struct RooConstraintSum_Onfile {
         RooSetProxy &_paramSet;
         RooConstraintSum_Onfile(RooSetProxy &onfile__paramSet ): _paramSet(onfile__paramSet) {}
      };
      static Long_t offset_Onfile_RooConstraintSum__paramSet = oldObj->GetClass()->GetDataMemberOffset("_paramSet");
      char *onfile_add = (char*)oldObj->GetObject();
      RooConstraintSum_Onfile onfile(
         *(RooSetProxy*)(onfile_add+offset_Onfile_RooConstraintSum__paramSet) );

      static TClassRef cls("RooConstraintSum");
      static Long_t offset__paramSet = cls->GetDataMemberOffset("_paramSet");
      RooArgSet& _paramSet = *(RooArgSet*)(target+offset__paramSet);
      RooConstraintSum* newObj = (RooConstraintSum*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
                          \
                 for(RooAbsArg * arg : onfile._paramSet) {                                 \
                    _paramSet.add(*arg);                                                   \
                 }                                                                         \
             
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooConstraintSum*)
   {
      ::RooConstraintSum *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooConstraintSum >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooConstraintSum", ::RooConstraintSum::Class_Version(), "RooConstraintSum.h", 27,
                  typeid(::RooConstraintSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooConstraintSum::Dictionary, isa_proxy, 4,
                  sizeof(::RooConstraintSum) );
      instance.SetNew(&new_RooConstraintSum);
      instance.SetNewArray(&newArray_RooConstraintSum);
      instance.SetDelete(&delete_RooConstraintSum);
      instance.SetDeleteArray(&deleteArray_RooConstraintSum);
      instance.SetDestructor(&destruct_RooConstraintSum);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooConstraintSum";
      rule->fTarget      = "_paramSet";
      rule->fSource      = "RooCollectionProxy<RooArgSet> _paramSet; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooConstraintSum_0);
      rule->fCode        = "                     \\n                 for(RooAbsArg * arg : onfile._paramSet) {                                 \\n                    _paramSet.add(*arg);                                                   \\n                 }                                                                         \\n             ";
      rule->fVersion     = "[3]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooConstraintSum*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooConstraintSum*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooConstraintSum*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooConvCoefVar(void *p = nullptr);
   static void *newArray_RooConvCoefVar(Long_t size, void *p);
   static void delete_RooConvCoefVar(void *p);
   static void deleteArray_RooConvCoefVar(void *p);
   static void destruct_RooConvCoefVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooConvCoefVar*)
   {
      ::RooConvCoefVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooConvCoefVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooConvCoefVar", ::RooConvCoefVar::Class_Version(), "RooConvCoefVar.h", 28,
                  typeid(::RooConvCoefVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooConvCoefVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooConvCoefVar) );
      instance.SetNew(&new_RooConvCoefVar);
      instance.SetNewArray(&newArray_RooConvCoefVar);
      instance.SetDelete(&delete_RooConvCoefVar);
      instance.SetDeleteArray(&deleteArray_RooConvCoefVar);
      instance.SetDestructor(&destruct_RooConvCoefVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooConvCoefVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooConvCoefVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooConvCoefVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooConvGenContext(void *p);
   static void deleteArray_RooConvGenContext(void *p);
   static void destruct_RooConvGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooConvGenContext*)
   {
      ::RooConvGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooConvGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooConvGenContext", ::RooConvGenContext::Class_Version(), "RooConvGenContext.h", 31,
                  typeid(::RooConvGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooConvGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooConvGenContext) );
      instance.SetDelete(&delete_RooConvGenContext);
      instance.SetDeleteArray(&deleteArray_RooConvGenContext);
      instance.SetDestructor(&destruct_RooConvGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooConvGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooConvGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooConvGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooDLLSignificanceMCSModule(void *p);
   static void deleteArray_RooDLLSignificanceMCSModule(void *p);
   static void destruct_RooDLLSignificanceMCSModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDLLSignificanceMCSModule*)
   {
      ::RooDLLSignificanceMCSModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDLLSignificanceMCSModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDLLSignificanceMCSModule", ::RooDLLSignificanceMCSModule::Class_Version(), "RooDLLSignificanceMCSModule.h", 23,
                  typeid(::RooDLLSignificanceMCSModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDLLSignificanceMCSModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooDLLSignificanceMCSModule) );
      instance.SetDelete(&delete_RooDLLSignificanceMCSModule);
      instance.SetDeleteArray(&deleteArray_RooDLLSignificanceMCSModule);
      instance.SetDestructor(&destruct_RooDLLSignificanceMCSModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDLLSignificanceMCSModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDLLSignificanceMCSModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDLLSignificanceMCSModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooDataHistSliceIter(void *p);
   static void deleteArray_RooDataHistSliceIter(void *p);
   static void destruct_RooDataHistSliceIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDataHistSliceIter*)
   {
      ::RooDataHistSliceIter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDataHistSliceIter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDataHistSliceIter", ::RooDataHistSliceIter::Class_Version(), "RooDataHistSliceIter.h", 26,
                  typeid(::RooDataHistSliceIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDataHistSliceIter::Dictionary, isa_proxy, 4,
                  sizeof(::RooDataHistSliceIter) );
      instance.SetDelete(&delete_RooDataHistSliceIter);
      instance.SetDeleteArray(&deleteArray_RooDataHistSliceIter);
      instance.SetDestructor(&destruct_RooDataHistSliceIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDataHistSliceIter*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDataHistSliceIter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDataHistSliceIter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooRealBinding(void *p);
   static void deleteArray_RooRealBinding(void *p);
   static void destruct_RooRealBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealBinding*)
   {
      ::RooRealBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealBinding", ::RooRealBinding::Class_Version(), "RooRealBinding.h", 30,
                  typeid(::RooRealBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealBinding) );
      instance.SetDelete(&delete_RooRealBinding);
      instance.SetDeleteArray(&deleteArray_RooRealBinding);
      instance.SetDestructor(&destruct_RooRealBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooDataProjBinding(void *p);
   static void deleteArray_RooDataProjBinding(void *p);
   static void destruct_RooDataProjBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDataProjBinding*)
   {
      ::RooDataProjBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDataProjBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDataProjBinding", ::RooDataProjBinding::Class_Version(), "RooDataProjBinding.h", 25,
                  typeid(::RooDataProjBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDataProjBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooDataProjBinding) );
      instance.SetDelete(&delete_RooDataProjBinding);
      instance.SetDeleteArray(&deleteArray_RooDataProjBinding);
      instance.SetDestructor(&destruct_RooDataProjBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDataProjBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDataProjBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDataProjBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDerivative(void *p = nullptr);
   static void *newArray_RooDerivative(Long_t size, void *p);
   static void delete_RooDerivative(void *p);
   static void deleteArray_RooDerivative(void *p);
   static void destruct_RooDerivative(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDerivative*)
   {
      ::RooDerivative *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDerivative >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDerivative", ::RooDerivative::Class_Version(), "RooDerivative.h", 30,
                  typeid(::RooDerivative), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDerivative::Dictionary, isa_proxy, 4,
                  sizeof(::RooDerivative) );
      instance.SetNew(&new_RooDerivative);
      instance.SetNewArray(&newArray_RooDerivative);
      instance.SetDelete(&delete_RooDerivative);
      instance.SetDeleteArray(&deleteArray_RooDerivative);
      instance.SetDestructor(&destruct_RooDerivative);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDerivative*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDerivative*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDerivative*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooDouble(void *p = nullptr);
   static void *newArray_RooDouble(Long_t size, void *p);
   static void delete_RooDouble(void *p);
   static void deleteArray_RooDouble(void *p);
   static void destruct_RooDouble(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooDouble*)
   {
      ::RooDouble *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooDouble >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooDouble", ::RooDouble::Class_Version(), "RooDouble.h", 22,
                  typeid(::RooDouble), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooDouble::Dictionary, isa_proxy, 4,
                  sizeof(::RooDouble) );
      instance.SetNew(&new_RooDouble);
      instance.SetNewArray(&newArray_RooDouble);
      instance.SetDelete(&delete_RooDouble);
      instance.SetDeleteArray(&deleteArray_RooDouble);
      instance.SetDestructor(&destruct_RooDouble);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooDouble*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooDouble*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooDouble*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooEffGenContext(void *p);
   static void deleteArray_RooEffGenContext(void *p);
   static void destruct_RooEffGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooEffGenContext*)
   {
      ::RooEffGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooEffGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooEffGenContext", ::RooEffGenContext::Class_Version(), "RooEffGenContext.h", 23,
                  typeid(::RooEffGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooEffGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooEffGenContext) );
      instance.SetDelete(&delete_RooEffGenContext);
      instance.SetDeleteArray(&deleteArray_RooEffGenContext);
      instance.SetDestructor(&destruct_RooEffGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooEffGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooEffGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooEffGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooEffProd(void *p = nullptr);
   static void *newArray_RooEffProd(Long_t size, void *p);
   static void delete_RooEffProd(void *p);
   static void deleteArray_RooEffProd(void *p);
   static void destruct_RooEffProd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooEffProd*)
   {
      ::RooEffProd *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooEffProd >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooEffProd", ::RooEffProd::Class_Version(), "RooEffProd.h", 19,
                  typeid(::RooEffProd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooEffProd::Dictionary, isa_proxy, 4,
                  sizeof(::RooEffProd) );
      instance.SetNew(&new_RooEffProd);
      instance.SetNewArray(&newArray_RooEffProd);
      instance.SetDelete(&delete_RooEffProd);
      instance.SetDeleteArray(&deleteArray_RooEffProd);
      instance.SetDestructor(&destruct_RooEffProd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooEffProd*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooEffProd*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooEffProd*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooEfficiency(void *p = nullptr);
   static void *newArray_RooEfficiency(Long_t size, void *p);
   static void delete_RooEfficiency(void *p);
   static void deleteArray_RooEfficiency(void *p);
   static void destruct_RooEfficiency(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooEfficiency*)
   {
      ::RooEfficiency *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooEfficiency >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooEfficiency", ::RooEfficiency::Class_Version(), "RooEfficiency.h", 24,
                  typeid(::RooEfficiency), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooEfficiency::Dictionary, isa_proxy, 4,
                  sizeof(::RooEfficiency) );
      instance.SetNew(&new_RooEfficiency);
      instance.SetNewArray(&newArray_RooEfficiency);
      instance.SetDelete(&delete_RooEfficiency);
      instance.SetDeleteArray(&deleteArray_RooEfficiency);
      instance.SetDestructor(&destruct_RooEfficiency);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooEfficiency*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooEfficiency*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooEfficiency*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooEllipse(void *p = nullptr);
   static void *newArray_RooEllipse(Long_t size, void *p);
   static void delete_RooEllipse(void *p);
   static void deleteArray_RooEllipse(void *p);
   static void destruct_RooEllipse(void *p);
   static Long64_t merge_RooEllipse(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooEllipse*)
   {
      ::RooEllipse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooEllipse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooEllipse", ::RooEllipse::Class_Version(), "RooEllipse.h", 22,
                  typeid(::RooEllipse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooEllipse::Dictionary, isa_proxy, 4,
                  sizeof(::RooEllipse) );
      instance.SetNew(&new_RooEllipse);
      instance.SetNewArray(&newArray_RooEllipse);
      instance.SetDelete(&delete_RooEllipse);
      instance.SetDeleteArray(&deleteArray_RooEllipse);
      instance.SetDestructor(&destruct_RooEllipse);
      instance.SetMerge(&merge_RooEllipse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooEllipse*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooEllipse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooEllipse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooErrorVar(void *p = nullptr);
   static void *newArray_RooErrorVar(Long_t size, void *p);
   static void delete_RooErrorVar(void *p);
   static void deleteArray_RooErrorVar(void *p);
   static void destruct_RooErrorVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooErrorVar*)
   {
      ::RooErrorVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooErrorVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooErrorVar", ::RooErrorVar::Class_Version(), "RooErrorVar.h", 28,
                  typeid(::RooErrorVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooErrorVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooErrorVar) );
      instance.SetNew(&new_RooErrorVar);
      instance.SetNewArray(&newArray_RooErrorVar);
      instance.SetDelete(&delete_RooErrorVar);
      instance.SetDeleteArray(&deleteArray_RooErrorVar);
      instance.SetDestructor(&destruct_RooErrorVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooErrorVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooErrorVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooErrorVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExpensiveObjectCache(void *p = nullptr);
   static void *newArray_RooExpensiveObjectCache(Long_t size, void *p);
   static void delete_RooExpensiveObjectCache(void *p);
   static void deleteArray_RooExpensiveObjectCache(void *p);
   static void destruct_RooExpensiveObjectCache(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExpensiveObjectCache*)
   {
      ::RooExpensiveObjectCache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExpensiveObjectCache >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooExpensiveObjectCache", ::RooExpensiveObjectCache::Class_Version(), "RooExpensiveObjectCache.h", 24,
                  typeid(::RooExpensiveObjectCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExpensiveObjectCache::Dictionary, isa_proxy, 4,
                  sizeof(::RooExpensiveObjectCache) );
      instance.SetNew(&new_RooExpensiveObjectCache);
      instance.SetNewArray(&newArray_RooExpensiveObjectCache);
      instance.SetDelete(&delete_RooExpensiveObjectCache);
      instance.SetDeleteArray(&deleteArray_RooExpensiveObjectCache);
      instance.SetDestructor(&destruct_RooExpensiveObjectCache);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExpensiveObjectCache*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooExpensiveObjectCache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooExpensiveObjectCache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExpensiveObjectCachecLcLExpensiveObject(void *p = nullptr);
   static void *newArray_RooExpensiveObjectCachecLcLExpensiveObject(Long_t size, void *p);
   static void delete_RooExpensiveObjectCachecLcLExpensiveObject(void *p);
   static void deleteArray_RooExpensiveObjectCachecLcLExpensiveObject(void *p);
   static void destruct_RooExpensiveObjectCachecLcLExpensiveObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExpensiveObjectCache::ExpensiveObject*)
   {
      ::RooExpensiveObjectCache::ExpensiveObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExpensiveObjectCache::ExpensiveObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooExpensiveObjectCache::ExpensiveObject", ::RooExpensiveObjectCache::ExpensiveObject::Class_Version(), "RooExpensiveObjectCache.h", 48,
                  typeid(::RooExpensiveObjectCache::ExpensiveObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExpensiveObjectCache::ExpensiveObject::Dictionary, isa_proxy, 4,
                  sizeof(::RooExpensiveObjectCache::ExpensiveObject) );
      instance.SetNew(&new_RooExpensiveObjectCachecLcLExpensiveObject);
      instance.SetNewArray(&newArray_RooExpensiveObjectCachecLcLExpensiveObject);
      instance.SetDelete(&delete_RooExpensiveObjectCachecLcLExpensiveObject);
      instance.SetDeleteArray(&deleteArray_RooExpensiveObjectCachecLcLExpensiveObject);
      instance.SetDestructor(&destruct_RooExpensiveObjectCachecLcLExpensiveObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExpensiveObjectCache::ExpensiveObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooExpensiveObjectCache::ExpensiveObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooExpensiveObjectCache::ExpensiveObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExtendPdf(void *p = nullptr);
   static void *newArray_RooExtendPdf(Long_t size, void *p);
   static void delete_RooExtendPdf(void *p);
   static void deleteArray_RooExtendPdf(void *p);
   static void destruct_RooExtendPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExtendPdf*)
   {
      ::RooExtendPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExtendPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooExtendPdf", ::RooExtendPdf::Class_Version(), "RooExtendPdf.h", 22,
                  typeid(::RooExtendPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExtendPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooExtendPdf) );
      instance.SetNew(&new_RooExtendPdf);
      instance.SetNewArray(&newArray_RooExtendPdf);
      instance.SetDelete(&delete_RooExtendPdf);
      instance.SetDeleteArray(&deleteArray_RooExtendPdf);
      instance.SetDestructor(&destruct_RooExtendPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExtendPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooExtendPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooExtendPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExtendedBinding(void *p = nullptr);
   static void *newArray_RooExtendedBinding(Long_t size, void *p);
   static void delete_RooExtendedBinding(void *p);
   static void deleteArray_RooExtendedBinding(void *p);
   static void destruct_RooExtendedBinding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExtendedBinding*)
   {
      ::RooExtendedBinding *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExtendedBinding >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooExtendedBinding", ::RooExtendedBinding::Class_Version(), "RooExtendedBinding.h", 19,
                  typeid(::RooExtendedBinding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExtendedBinding::Dictionary, isa_proxy, 4,
                  sizeof(::RooExtendedBinding) );
      instance.SetNew(&new_RooExtendedBinding);
      instance.SetNewArray(&newArray_RooExtendedBinding);
      instance.SetDelete(&delete_RooExtendedBinding);
      instance.SetDeleteArray(&deleteArray_RooExtendedBinding);
      instance.SetDestructor(&destruct_RooExtendedBinding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExtendedBinding*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooExtendedBinding*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooExtendedBinding*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooExtendedTerm(void *p = nullptr);
   static void *newArray_RooExtendedTerm(Long_t size, void *p);
   static void delete_RooExtendedTerm(void *p);
   static void deleteArray_RooExtendedTerm(void *p);
   static void destruct_RooExtendedTerm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooExtendedTerm*)
   {
      ::RooExtendedTerm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooExtendedTerm >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooExtendedTerm", ::RooExtendedTerm::Class_Version(), "RooExtendedTerm.h", 22,
                  typeid(::RooExtendedTerm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooExtendedTerm::Dictionary, isa_proxy, 4,
                  sizeof(::RooExtendedTerm) );
      instance.SetNew(&new_RooExtendedTerm);
      instance.SetNewArray(&newArray_RooExtendedTerm);
      instance.SetDelete(&delete_RooExtendedTerm);
      instance.SetDeleteArray(&deleteArray_RooExtendedTerm);
      instance.SetDestructor(&destruct_RooExtendedTerm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooExtendedTerm*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooExtendedTerm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooExtendedTerm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFFTConvPdf(void *p = nullptr);
   static void *newArray_RooFFTConvPdf(Long_t size, void *p);
   static void delete_RooFFTConvPdf(void *p);
   static void deleteArray_RooFFTConvPdf(void *p);
   static void destruct_RooFFTConvPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFFTConvPdf*)
   {
      ::RooFFTConvPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFFTConvPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFFTConvPdf", ::RooFFTConvPdf::Class_Version(), "RooFFTConvPdf.h", 25,
                  typeid(::RooFFTConvPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFFTConvPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooFFTConvPdf) );
      instance.SetNew(&new_RooFFTConvPdf);
      instance.SetNewArray(&newArray_RooFFTConvPdf);
      instance.SetDelete(&delete_RooFFTConvPdf);
      instance.SetDeleteArray(&deleteArray_RooFFTConvPdf);
      instance.SetDestructor(&destruct_RooFFTConvPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFFTConvPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFFTConvPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFFTConvPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooFactoryWSTool(void *p);
   static void deleteArray_RooFactoryWSTool(void *p);
   static void destruct_RooFactoryWSTool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFactoryWSTool*)
   {
      ::RooFactoryWSTool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFactoryWSTool >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFactoryWSTool", ::RooFactoryWSTool::Class_Version(), "RooFactoryWSTool.h", 47,
                  typeid(::RooFactoryWSTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFactoryWSTool::Dictionary, isa_proxy, 4,
                  sizeof(::RooFactoryWSTool) );
      instance.SetDelete(&delete_RooFactoryWSTool);
      instance.SetDeleteArray(&deleteArray_RooFactoryWSTool);
      instance.SetDestructor(&destruct_RooFactoryWSTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFactoryWSTool*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFactoryWSTool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFactoryWSTool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFirstMoment(void *p = nullptr);
   static void *newArray_RooFirstMoment(Long_t size, void *p);
   static void delete_RooFirstMoment(void *p);
   static void deleteArray_RooFirstMoment(void *p);
   static void destruct_RooFirstMoment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFirstMoment*)
   {
      ::RooFirstMoment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFirstMoment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFirstMoment", ::RooFirstMoment::Class_Version(), "RooFirstMoment.h", 26,
                  typeid(::RooFirstMoment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFirstMoment::Dictionary, isa_proxy, 4,
                  sizeof(::RooFirstMoment) );
      instance.SetNew(&new_RooFirstMoment);
      instance.SetNewArray(&newArray_RooFirstMoment);
      instance.SetDelete(&delete_RooFirstMoment);
      instance.SetDeleteArray(&deleteArray_RooFirstMoment);
      instance.SetDestructor(&destruct_RooFirstMoment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFirstMoment*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFirstMoment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFirstMoment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooFitcLcLDetailcLcLRooNLLVarNew(void *p);
   static void deleteArray_RooFitcLcLDetailcLcLRooNLLVarNew(void *p);
   static void destruct_RooFitcLcLDetailcLcLRooNLLVarNew(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::Detail::RooNLLVarNew*)
   {
      ::RooFit::Detail::RooNLLVarNew *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFit::Detail::RooNLLVarNew >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::Detail::RooNLLVarNew", ::RooFit::Detail::RooNLLVarNew::Class_Version(), "RooFit/Detail/RooNLLVarNew.h", 29,
                  typeid(::RooFit::Detail::RooNLLVarNew), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFit::Detail::RooNLLVarNew::Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::Detail::RooNLLVarNew) );
      instance.SetDelete(&delete_RooFitcLcLDetailcLcLRooNLLVarNew);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLDetailcLcLRooNLLVarNew);
      instance.SetDestructor(&destruct_RooFitcLcLDetailcLcLRooNLLVarNew);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::Detail::RooNLLVarNew*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::Detail::RooNLLVarNew*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooNLLVarNew*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooFitcLcLDetailcLcLRooNormalizedPdf(void *p);
   static void deleteArray_RooFitcLcLDetailcLcLRooNormalizedPdf(void *p);
   static void destruct_RooFitcLcLDetailcLcLRooNormalizedPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::Detail::RooNormalizedPdf*)
   {
      ::RooFit::Detail::RooNormalizedPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFit::Detail::RooNormalizedPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::Detail::RooNormalizedPdf", ::RooFit::Detail::RooNormalizedPdf::Class_Version(), "RooFit/Detail/RooNormalizedPdf.h", 21,
                  typeid(::RooFit::Detail::RooNormalizedPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFit::Detail::RooNormalizedPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::Detail::RooNormalizedPdf) );
      instance.SetDelete(&delete_RooFitcLcLDetailcLcLRooNormalizedPdf);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLDetailcLcLRooNormalizedPdf);
      instance.SetDestructor(&destruct_RooFitcLcLDetailcLcLRooNormalizedPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::Detail::RooNormalizedPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::Detail::RooNormalizedPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooNormalizedPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooWorkspace(void *p = nullptr);
   static void *newArray_RooWorkspace(Long_t size, void *p);
   static void delete_RooWorkspace(void *p);
   static void deleteArray_RooWorkspace(void *p);
   static void destruct_RooWorkspace(void *p);
   static void streamer_RooWorkspace(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooWorkspace*)
   {
      ::RooWorkspace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooWorkspace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooWorkspace", ::RooWorkspace::Class_Version(), "RooWorkspace.h", 43,
                  typeid(::RooWorkspace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooWorkspace::Dictionary, isa_proxy, 17,
                  sizeof(::RooWorkspace) );
      instance.SetNew(&new_RooWorkspace);
      instance.SetNewArray(&newArray_RooWorkspace);
      instance.SetDelete(&delete_RooWorkspace);
      instance.SetDeleteArray(&deleteArray_RooWorkspace);
      instance.SetDestructor(&destruct_RooWorkspace);
      instance.SetStreamerFunc(&streamer_RooWorkspace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooWorkspace*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooWorkspace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooWorkspace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooWorkspacecLcLCodeRepo(void *p = nullptr);
   static void *newArray_RooWorkspacecLcLCodeRepo(Long_t size, void *p);
   static void delete_RooWorkspacecLcLCodeRepo(void *p);
   static void deleteArray_RooWorkspacecLcLCodeRepo(void *p);
   static void destruct_RooWorkspacecLcLCodeRepo(void *p);
   static void streamer_RooWorkspacecLcLCodeRepo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooWorkspace::CodeRepo*)
   {
      ::RooWorkspace::CodeRepo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooWorkspace::CodeRepo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooWorkspace::CodeRepo", ::RooWorkspace::CodeRepo::Class_Version(), "RooWorkspace.h", 166,
                  typeid(::RooWorkspace::CodeRepo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooWorkspace::CodeRepo::Dictionary, isa_proxy, 17,
                  sizeof(::RooWorkspace::CodeRepo) );
      instance.SetNew(&new_RooWorkspacecLcLCodeRepo);
      instance.SetNewArray(&newArray_RooWorkspacecLcLCodeRepo);
      instance.SetDelete(&delete_RooWorkspacecLcLCodeRepo);
      instance.SetDeleteArray(&deleteArray_RooWorkspacecLcLCodeRepo);
      instance.SetDestructor(&destruct_RooWorkspacecLcLCodeRepo);
      instance.SetStreamerFunc(&streamer_RooWorkspacecLcLCodeRepo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooWorkspace::CodeRepo*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooWorkspace::CodeRepo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooWorkspace::CodeRepo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooWorkspacecLcLWSDir(void *p);
   static void deleteArray_RooWorkspacecLcLWSDir(void *p);
   static void destruct_RooWorkspacecLcLWSDir(void *p);
   static void reset_RooWorkspacecLcLWSDir(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooWorkspace::WSDir*)
   {
      ::RooWorkspace::WSDir *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooWorkspace::WSDir >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooWorkspace::WSDir", ::RooWorkspace::WSDir::Class_Version(), "RooWorkspace.h", 219,
                  typeid(::RooWorkspace::WSDir), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooWorkspace::WSDir::Dictionary, isa_proxy, 4,
                  sizeof(::RooWorkspace::WSDir) );
      instance.SetDelete(&delete_RooWorkspacecLcLWSDir);
      instance.SetDeleteArray(&deleteArray_RooWorkspacecLcLWSDir);
      instance.SetDestructor(&destruct_RooWorkspacecLcLWSDir);
      instance.SetResetAfterMerge(&reset_RooWorkspacecLcLWSDir);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooWorkspace::WSDir*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooWorkspace::WSDir*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooWorkspace::WSDir*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooWorkspaceHandle(void *p);
   static void deleteArray_RooWorkspaceHandle(void *p);
   static void destruct_RooWorkspaceHandle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooWorkspaceHandle*)
   {
      ::RooWorkspaceHandle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooWorkspaceHandle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooWorkspaceHandle", ::RooWorkspaceHandle::Class_Version(), "RooWorkspaceHandle.h", 21,
                  typeid(::RooWorkspaceHandle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooWorkspaceHandle::Dictionary, isa_proxy, 4,
                  sizeof(::RooWorkspaceHandle) );
      instance.SetDelete(&delete_RooWorkspaceHandle);
      instance.SetDeleteArray(&deleteArray_RooWorkspaceHandle);
      instance.SetDestructor(&destruct_RooWorkspaceHandle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooWorkspaceHandle*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooWorkspaceHandle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooWorkspaceHandle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLModelConfig(void *p = nullptr);
   static void *newArray_RooStatscLcLModelConfig(Long_t size, void *p);
   static void delete_RooStatscLcLModelConfig(void *p);
   static void deleteArray_RooStatscLcLModelConfig(void *p);
   static void destruct_RooStatscLcLModelConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ModelConfig*)
   {
      ::RooStats::ModelConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ModelConfig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ModelConfig", ::RooStats::ModelConfig::Class_Version(), "RooFit/ModelConfig.h", 34,
                  typeid(::RooStats::ModelConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ModelConfig::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ModelConfig) );
      instance.SetNew(&new_RooStatscLcLModelConfig);
      instance.SetNewArray(&newArray_RooStatscLcLModelConfig);
      instance.SetDelete(&delete_RooStatscLcLModelConfig);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLModelConfig);
      instance.SetDestructor(&destruct_RooStatscLcLModelConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ModelConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ModelConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ModelConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooFitcLcLTestStatisticscLcLRooRealL(void *p);
   static void deleteArray_RooFitcLcLTestStatisticscLcLRooRealL(void *p);
   static void destruct_RooFitcLcLTestStatisticscLcLRooRealL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::TestStatistics::RooRealL*)
   {
      ::RooFit::TestStatistics::RooRealL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFit::TestStatistics::RooRealL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::TestStatistics::RooRealL", ::RooFit::TestStatistics::RooRealL::Class_Version(), "RooFit/TestStatistics/RooRealL.h", 28,
                  typeid(::RooFit::TestStatistics::RooRealL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFit::TestStatistics::RooRealL::Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::TestStatistics::RooRealL) );
      instance.SetDelete(&delete_RooFitcLcLTestStatisticscLcLRooRealL);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLTestStatisticscLcLRooRealL);
      instance.SetDestructor(&destruct_RooFitcLcLTestStatisticscLcLRooRealL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::TestStatistics::RooRealL*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::TestStatistics::RooRealL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::TestStatistics::RooRealL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCatType(void *p = nullptr);
   static void *newArray_RooCatType(Long_t size, void *p);
   static void delete_RooCatType(void *p);
   static void deleteArray_RooCatType(void *p);
   static void destruct_RooCatType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCatType*)
   {
      ::RooCatType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCatType >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCatType", ::RooCatType::Class_Version(), "RooFitLegacy/RooCatTypeLegacy.h", 23,
                  typeid(::RooCatType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCatType::Dictionary, isa_proxy, 4,
                  sizeof(::RooCatType) );
      instance.SetNew(&new_RooCatType);
      instance.SetNewArray(&newArray_RooCatType);
      instance.SetDelete(&delete_RooCatType);
      instance.SetDeleteArray(&deleteArray_RooCatType);
      instance.SetDestructor(&destruct_RooCatType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCatType*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCatType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCatType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooCategorySharedProperties(void *p = nullptr);
   static void *newArray_RooCategorySharedProperties(Long_t size, void *p);
   static void delete_RooCategorySharedProperties(void *p);
   static void deleteArray_RooCategorySharedProperties(void *p);
   static void destruct_RooCategorySharedProperties(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooCategorySharedProperties*)
   {
      ::RooCategorySharedProperties *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooCategorySharedProperties >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooCategorySharedProperties", ::RooCategorySharedProperties::Class_Version(), "RooFitLegacy/RooCategorySharedProperties.h", 36,
                  typeid(::RooCategorySharedProperties), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooCategorySharedProperties::Dictionary, isa_proxy, 4,
                  sizeof(::RooCategorySharedProperties) );
      instance.SetNew(&new_RooCategorySharedProperties);
      instance.SetNewArray(&newArray_RooCategorySharedProperties);
      instance.SetDelete(&delete_RooCategorySharedProperties);
      instance.SetDeleteArray(&deleteArray_RooCategorySharedProperties);
      instance.SetDestructor(&destruct_RooCategorySharedProperties);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooCategorySharedProperties*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooCategorySharedProperties*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooCategorySharedProperties*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooTreeData(void *p);
   static void deleteArray_RooTreeData(void *p);
   static void destruct_RooTreeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTreeData*)
   {
      ::RooTreeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTreeData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTreeData", ::RooTreeData::Class_Version(), "RooFitLegacy/RooTreeData.h", 25,
                  typeid(::RooTreeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTreeData::Dictionary, isa_proxy, 4,
                  sizeof(::RooTreeData) );
      instance.SetDelete(&delete_RooTreeData);
      instance.SetDeleteArray(&deleteArray_RooTreeData);
      instance.SetDestructor(&destruct_RooTreeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTreeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTreeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTreeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFitResult(void *p = nullptr);
   static void *newArray_RooFitResult(Long_t size, void *p);
   static void delete_RooFitResult(void *p);
   static void deleteArray_RooFitResult(void *p);
   static void destruct_RooFitResult(void *p);
   static void streamer_RooFitResult(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFitResult*)
   {
      ::RooFitResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFitResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFitResult", ::RooFitResult::Class_Version(), "RooFitResult.h", 38,
                  typeid(::RooFitResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFitResult::Dictionary, isa_proxy, 17,
                  sizeof(::RooFitResult) );
      instance.SetNew(&new_RooFitResult);
      instance.SetNewArray(&newArray_RooFitResult);
      instance.SetDelete(&delete_RooFitResult);
      instance.SetDeleteArray(&deleteArray_RooFitResult);
      instance.SetDestructor(&destruct_RooFitResult);
      instance.SetStreamerFunc(&streamer_RooFitResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFitResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFitResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFitResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooFracRemainder(void *p = nullptr);
   static void *newArray_RooFracRemainder(Long_t size, void *p);
   static void delete_RooFracRemainder(void *p);
   static void deleteArray_RooFracRemainder(void *p);
   static void destruct_RooFracRemainder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFracRemainder*)
   {
      ::RooFracRemainder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFracRemainder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFracRemainder", ::RooFracRemainder::Class_Version(), "RooFracRemainder.h", 25,
                  typeid(::RooFracRemainder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFracRemainder::Dictionary, isa_proxy, 4,
                  sizeof(::RooFracRemainder) );
      instance.SetNew(&new_RooFracRemainder);
      instance.SetNewArray(&newArray_RooFracRemainder);
      instance.SetDelete(&delete_RooFracRemainder);
      instance.SetDeleteArray(&deleteArray_RooFracRemainder);
      instance.SetDestructor(&destruct_RooFracRemainder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFracRemainder*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFracRemainder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFracRemainder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooFunctor(void *p);
   static void deleteArray_RooFunctor(void *p);
   static void destruct_RooFunctor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFunctor*)
   {
      ::RooFunctor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFunctor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFunctor", ::RooFunctor::Class_Version(), "RooFunctor.h", 25,
                  typeid(::RooFunctor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFunctor::Dictionary, isa_proxy, 4,
                  sizeof(::RooFunctor) );
      instance.SetDelete(&delete_RooFunctor);
      instance.SetDeleteArray(&deleteArray_RooFunctor);
      instance.SetDestructor(&destruct_RooFunctor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFunctor*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFunctor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFunctor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGenFitStudy(void *p = nullptr);
   static void *newArray_RooGenFitStudy(Long_t size, void *p);
   static void delete_RooGenFitStudy(void *p);
   static void deleteArray_RooGenFitStudy(void *p);
   static void destruct_RooGenFitStudy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGenFitStudy*)
   {
      ::RooGenFitStudy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGenFitStudy >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGenFitStudy", ::RooGenFitStudy::Class_Version(), "RooGenFitStudy.h", 35,
                  typeid(::RooGenFitStudy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGenFitStudy::Dictionary, isa_proxy, 4,
                  sizeof(::RooGenFitStudy) );
      instance.SetNew(&new_RooGenFitStudy);
      instance.SetNewArray(&newArray_RooGenFitStudy);
      instance.SetDelete(&delete_RooGenFitStudy);
      instance.SetDeleteArray(&deleteArray_RooGenFitStudy);
      instance.SetDestructor(&destruct_RooGenFitStudy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGenFitStudy*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGenFitStudy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGenFitStudy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooGenericPdf(void *p = nullptr);
   static void *newArray_RooGenericPdf(Long_t size, void *p);
   static void delete_RooGenericPdf(void *p);
   static void deleteArray_RooGenericPdf(void *p);
   static void destruct_RooGenericPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooGenericPdf*)
   {
      ::RooGenericPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooGenericPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooGenericPdf", ::RooGenericPdf::Class_Version(), "RooGenericPdf.h", 25,
                  typeid(::RooGenericPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooGenericPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooGenericPdf) );
      instance.SetNew(&new_RooGenericPdf);
      instance.SetNewArray(&newArray_RooGenericPdf);
      instance.SetDelete(&delete_RooGenericPdf);
      instance.SetDeleteArray(&deleteArray_RooGenericPdf);
      instance.SetDestructor(&destruct_RooGenericPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooGenericPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooGenericPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooGenericPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooHist(void *p = nullptr);
   static void *newArray_RooHist(Long_t size, void *p);
   static void delete_RooHist(void *p);
   static void deleteArray_RooHist(void *p);
   static void destruct_RooHist(void *p);
   static Long64_t merge_RooHist(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooHist*)
   {
      ::RooHist *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooHist >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooHist", ::RooHist::Class_Version(), "RooHist.h", 29,
                  typeid(::RooHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooHist::Dictionary, isa_proxy, 4,
                  sizeof(::RooHist) );
      instance.SetNew(&new_RooHist);
      instance.SetNewArray(&newArray_RooHist);
      instance.SetDelete(&delete_RooHist);
      instance.SetDeleteArray(&deleteArray_RooHist);
      instance.SetDestructor(&destruct_RooHist);
      instance.SetMerge(&merge_RooHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooHist*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooHist*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooHist*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooInvTransform(void *p);
   static void deleteArray_RooInvTransform(void *p);
   static void destruct_RooInvTransform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooInvTransform*)
   {
      ::RooInvTransform *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooInvTransform >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooInvTransform", ::RooInvTransform::Class_Version(), "RooInvTransform.h", 21,
                  typeid(::RooInvTransform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooInvTransform::Dictionary, isa_proxy, 4,
                  sizeof(::RooInvTransform) );
      instance.SetDelete(&delete_RooInvTransform);
      instance.SetDeleteArray(&deleteArray_RooInvTransform);
      instance.SetDestructor(&destruct_RooInvTransform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooInvTransform*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooInvTransform*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooInvTransform*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLinTransBinning(void *p = nullptr);
   static void *newArray_RooLinTransBinning(Long_t size, void *p);
   static void delete_RooLinTransBinning(void *p);
   static void deleteArray_RooLinTransBinning(void *p);
   static void destruct_RooLinTransBinning(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLinTransBinning*)
   {
      ::RooLinTransBinning *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLinTransBinning >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLinTransBinning", ::RooLinTransBinning::Class_Version(), "RooLinTransBinning.h", 22,
                  typeid(::RooLinTransBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLinTransBinning::Dictionary, isa_proxy, 4,
                  sizeof(::RooLinTransBinning) );
      instance.SetNew(&new_RooLinTransBinning);
      instance.SetNewArray(&newArray_RooLinTransBinning);
      instance.SetDelete(&delete_RooLinTransBinning);
      instance.SetDeleteArray(&deleteArray_RooLinTransBinning);
      instance.SetDestructor(&destruct_RooLinTransBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLinTransBinning*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLinTransBinning*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLinTransBinning*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLinearCombination(void *p = nullptr);
   static void *newArray_RooLinearCombination(Long_t size, void *p);
   static void delete_RooLinearCombination(void *p);
   static void deleteArray_RooLinearCombination(void *p);
   static void destruct_RooLinearCombination(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLinearCombination*)
   {
      ::RooLinearCombination *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLinearCombination >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLinearCombination", ::RooLinearCombination::Class_Version(), "RooLinearCombination.h", 30,
                  typeid(::RooLinearCombination), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLinearCombination::Dictionary, isa_proxy, 4,
                  sizeof(::RooLinearCombination) );
      instance.SetNew(&new_RooLinearCombination);
      instance.SetNewArray(&newArray_RooLinearCombination);
      instance.SetDelete(&delete_RooLinearCombination);
      instance.SetDeleteArray(&deleteArray_RooLinearCombination);
      instance.SetDestructor(&destruct_RooLinearCombination);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLinearCombination*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLinearCombination*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLinearCombination*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooLinearVar(void *p = nullptr);
   static void *newArray_RooLinearVar(Long_t size, void *p);
   static void delete_RooLinearVar(void *p);
   static void deleteArray_RooLinearVar(void *p);
   static void destruct_RooLinearVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooLinearVar*)
   {
      ::RooLinearVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooLinearVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooLinearVar", ::RooLinearVar::Class_Version(), "RooLinearVar.h", 29,
                  typeid(::RooLinearVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooLinearVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooLinearVar) );
      instance.SetNew(&new_RooLinearVar);
      instance.SetNewArray(&newArray_RooLinearVar);
      instance.SetDelete(&delete_RooLinearVar);
      instance.SetDeleteArray(&deleteArray_RooLinearVar);
      instance.SetDestructor(&destruct_RooLinearVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooLinearVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooLinearVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooLinearVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMappedCategory(void *p = nullptr);
   static void *newArray_RooMappedCategory(Long_t size, void *p);
   static void delete_RooMappedCategory(void *p);
   static void deleteArray_RooMappedCategory(void *p);
   static void destruct_RooMappedCategory(void *p);

   // Schema evolution read functions
   static void read_RooMappedCategory_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__defCat = oldObj->GetId("_defCat");
#endif
      struct RooMappedCategory_Onfile {
         RooCatType* &_defCat;
         RooMappedCategory_Onfile(RooCatType* &onfile__defCat ): _defCat(onfile__defCat) {}
      };
      static Long_t offset_Onfile_RooMappedCategory__defCat = oldObj->GetClass()->GetDataMemberOffset("_defCat");
      char *onfile_add = (char*)oldObj->GetObject();
      RooMappedCategory_Onfile onfile(
         *(RooCatType**)(onfile_add+offset_Onfile_RooMappedCategory__defCat) );

      static TClassRef cls("RooMappedCategory");
      static Long_t offset__defCat = cls->GetDataMemberOffset("_defCat");
      RooAbsCategory::value_type& _defCat = *(RooAbsCategory::value_type*)(target+offset__defCat);
      RooMappedCategory* newObj = (RooMappedCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _defCat = onfile._defCat->getVal(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMappedCategory*)
   {
      ::RooMappedCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMappedCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMappedCategory", ::RooMappedCategory::Class_Version(), "RooMappedCategory.h", 27,
                  typeid(::RooMappedCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMappedCategory::Dictionary, isa_proxy, 4,
                  sizeof(::RooMappedCategory) );
      instance.SetNew(&new_RooMappedCategory);
      instance.SetNewArray(&newArray_RooMappedCategory);
      instance.SetDelete(&delete_RooMappedCategory);
      instance.SetDeleteArray(&deleteArray_RooMappedCategory);
      instance.SetDestructor(&destruct_RooMappedCategory);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooMappedCategory";
      rule->fTarget      = "_defCat";
      rule->fSource      = "RooCatType* _defCat; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooMappedCategory_0);
      rule->fCode        = " _defCat = onfile._defCat->getVal(); ";
      rule->fVersion     = "[1]";
      rule->fInclude     = "RooFitLegacy/RooCatTypeLegacy.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMappedCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMappedCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMappedCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMappedCategorycLcLEntry(void *p = nullptr);
   static void *newArray_RooMappedCategorycLcLEntry(Long_t size, void *p);
   static void delete_RooMappedCategorycLcLEntry(void *p);
   static void deleteArray_RooMappedCategorycLcLEntry(void *p);
   static void destruct_RooMappedCategorycLcLEntry(void *p);

   // Schema evolution read functions
   static void read_RooMappedCategorycLcLEntry_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__cat = oldObj->GetId("_cat");
#endif
      struct RooMappedCategorycLcLEntry_Onfile {
         RooCatType &_cat;
         RooMappedCategorycLcLEntry_Onfile(RooCatType &onfile__cat ): _cat(onfile__cat) {}
      };
      static Long_t offset_Onfile_RooMappedCategorycLcLEntry__cat = oldObj->GetClass()->GetDataMemberOffset("_cat");
      char *onfile_add = (char*)oldObj->GetObject();
      RooMappedCategorycLcLEntry_Onfile onfile(
         *(RooCatType*)(onfile_add+offset_Onfile_RooMappedCategorycLcLEntry__cat) );

      static TClassRef cls("RooMappedCategory::Entry");
      static Long_t offset__catIdx = cls->GetDataMemberOffset("_catIdx");
      RooAbsCategory::value_type& _catIdx = *(RooAbsCategory::value_type*)(target+offset__catIdx);
      RooMappedCategory::Entry* newObj = (RooMappedCategory::Entry*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      _catIdx = onfile._cat.getVal(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMappedCategory::Entry*)
   {
      ::RooMappedCategory::Entry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMappedCategory::Entry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMappedCategory::Entry", ::RooMappedCategory::Entry::Class_Version(), "RooMappedCategory.h", 50,
                  typeid(::RooMappedCategory::Entry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMappedCategory::Entry::Dictionary, isa_proxy, 4,
                  sizeof(::RooMappedCategory::Entry) );
      instance.SetNew(&new_RooMappedCategorycLcLEntry);
      instance.SetNewArray(&newArray_RooMappedCategorycLcLEntry);
      instance.SetDelete(&delete_RooMappedCategorycLcLEntry);
      instance.SetDeleteArray(&deleteArray_RooMappedCategorycLcLEntry);
      instance.SetDestructor(&destruct_RooMappedCategorycLcLEntry);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooMappedCategory::Entry";
      rule->fTarget      = "_catIdx";
      rule->fSource      = "RooCatType _cat; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooMappedCategorycLcLEntry_0);
      rule->fCode        = " _catIdx = onfile._cat.getVal(); ";
      rule->fVersion     = "[1]";
      rule->fInclude     = "RooFitLegacy/RooCatTypeLegacy.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMappedCategory::Entry*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMappedCategory::Entry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMappedCategory::Entry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooMinimizer(void *p);
   static void deleteArray_RooMinimizer(void *p);
   static void destruct_RooMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMinimizer*)
   {
      ::RooMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMinimizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMinimizer", ::RooMinimizer::Class_Version(), "RooMinimizer.h", 46,
                  typeid(::RooMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMinimizer::Dictionary, isa_proxy, 4,
                  sizeof(::RooMinimizer) );
      instance.SetDelete(&delete_RooMinimizer);
      instance.SetDeleteArray(&deleteArray_RooMinimizer);
      instance.SetDestructor(&destruct_RooMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMoment(void *p = nullptr);
   static void *newArray_RooMoment(Long_t size, void *p);
   static void delete_RooMoment(void *p);
   static void deleteArray_RooMoment(void *p);
   static void destruct_RooMoment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMoment*)
   {
      ::RooMoment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMoment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMoment", ::RooMoment::Class_Version(), "RooMoment.h", 26,
                  typeid(::RooMoment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMoment::Dictionary, isa_proxy, 4,
                  sizeof(::RooMoment) );
      instance.SetNew(&new_RooMoment);
      instance.SetNewArray(&newArray_RooMoment);
      instance.SetDelete(&delete_RooMoment);
      instance.SetDeleteArray(&deleteArray_RooMoment);
      instance.SetDestructor(&destruct_RooMoment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMoment*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMoment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMoment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMultiCategory(void *p = nullptr);
   static void *newArray_RooMultiCategory(Long_t size, void *p);
   static void delete_RooMultiCategory(void *p);
   static void deleteArray_RooMultiCategory(void *p);
   static void destruct_RooMultiCategory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiCategory*)
   {
      ::RooMultiCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMultiCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiCategory", ::RooMultiCategory::Class_Version(), "RooMultiCategory.h", 28,
                  typeid(::RooMultiCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMultiCategory::Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiCategory) );
      instance.SetNew(&new_RooMultiCategory);
      instance.SetNewArray(&newArray_RooMultiCategory);
      instance.SetDelete(&delete_RooMultiCategory);
      instance.SetDeleteArray(&deleteArray_RooMultiCategory);
      instance.SetDestructor(&destruct_RooMultiCategory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMultiPdf(void *p = nullptr);
   static void *newArray_RooMultiPdf(Long_t size, void *p);
   static void delete_RooMultiPdf(void *p);
   static void deleteArray_RooMultiPdf(void *p);
   static void destruct_RooMultiPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiPdf*)
   {
      ::RooMultiPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMultiPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiPdf", ::RooMultiPdf::Class_Version(), "RooMultiPdf.h", 9,
                  typeid(::RooMultiPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMultiPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiPdf) );
      instance.SetNew(&new_RooMultiPdf);
      instance.SetNewArray(&newArray_RooMultiPdf);
      instance.SetDelete(&delete_RooMultiPdf);
      instance.SetDeleteArray(&deleteArray_RooMultiPdf);
      instance.SetDestructor(&destruct_RooMultiPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMultiReal(void *p = nullptr);
   static void *newArray_RooMultiReal(Long_t size, void *p);
   static void delete_RooMultiReal(void *p);
   static void deleteArray_RooMultiReal(void *p);
   static void destruct_RooMultiReal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiReal*)
   {
      ::RooMultiReal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMultiReal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiReal", ::RooMultiReal::Class_Version(), "RooMultiReal.h", 9,
                  typeid(::RooMultiReal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMultiReal::Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiReal) );
      instance.SetNew(&new_RooMultiReal);
      instance.SetNewArray(&newArray_RooMultiReal);
      instance.SetDelete(&delete_RooMultiReal);
      instance.SetDeleteArray(&deleteArray_RooMultiReal);
      instance.SetDestructor(&destruct_RooMultiReal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiReal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiReal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiReal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooMultiVarGaussian(void *p = nullptr);
   static void *newArray_RooMultiVarGaussian(Long_t size, void *p);
   static void delete_RooMultiVarGaussian(void *p);
   static void deleteArray_RooMultiVarGaussian(void *p);
   static void destruct_RooMultiVarGaussian(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiVarGaussian*)
   {
      ::RooMultiVarGaussian *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooMultiVarGaussian >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiVarGaussian", ::RooMultiVarGaussian::Class_Version(), "RooMultiVarGaussian.h", 31,
                  typeid(::RooMultiVarGaussian), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooMultiVarGaussian::Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiVarGaussian) );
      instance.SetNew(&new_RooMultiVarGaussian);
      instance.SetNewArray(&newArray_RooMultiVarGaussian);
      instance.SetDelete(&delete_RooMultiVarGaussian);
      instance.SetDeleteArray(&deleteArray_RooMultiVarGaussian);
      instance.SetDestructor(&destruct_RooMultiVarGaussian);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiVarGaussian*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiVarGaussian*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiVarGaussian*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RooMultiVarGaussiancLcLAnaIntData_Dictionary();
   static void RooMultiVarGaussiancLcLAnaIntData_TClassManip(TClass*);
   static void *new_RooMultiVarGaussiancLcLAnaIntData(void *p = nullptr);
   static void *newArray_RooMultiVarGaussiancLcLAnaIntData(Long_t size, void *p);
   static void delete_RooMultiVarGaussiancLcLAnaIntData(void *p);
   static void deleteArray_RooMultiVarGaussiancLcLAnaIntData(void *p);
   static void destruct_RooMultiVarGaussiancLcLAnaIntData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiVarGaussian::AnaIntData*)
   {
      ::RooMultiVarGaussian::AnaIntData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooMultiVarGaussian::AnaIntData));
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiVarGaussian::AnaIntData", "RooMultiVarGaussian.h", 56,
                  typeid(::RooMultiVarGaussian::AnaIntData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooMultiVarGaussiancLcLAnaIntData_Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiVarGaussian::AnaIntData) );
      instance.SetNew(&new_RooMultiVarGaussiancLcLAnaIntData);
      instance.SetNewArray(&newArray_RooMultiVarGaussiancLcLAnaIntData);
      instance.SetDelete(&delete_RooMultiVarGaussiancLcLAnaIntData);
      instance.SetDeleteArray(&deleteArray_RooMultiVarGaussiancLcLAnaIntData);
      instance.SetDestructor(&destruct_RooMultiVarGaussiancLcLAnaIntData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiVarGaussian::AnaIntData*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiVarGaussian::AnaIntData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiVarGaussian::AnaIntData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooMultiVarGaussiancLcLAnaIntData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooMultiVarGaussian::AnaIntData*>(nullptr))->GetClass();
      RooMultiVarGaussiancLcLAnaIntData_TClassManip(theClass);
   return theClass;
   }

   static void RooMultiVarGaussiancLcLAnaIntData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooMultiVarGaussiancLcLGenData_Dictionary();
   static void RooMultiVarGaussiancLcLGenData_TClassManip(TClass*);
   static void *new_RooMultiVarGaussiancLcLGenData(void *p = nullptr);
   static void *newArray_RooMultiVarGaussiancLcLGenData(Long_t size, void *p);
   static void delete_RooMultiVarGaussiancLcLGenData(void *p);
   static void deleteArray_RooMultiVarGaussiancLcLGenData(void *p);
   static void destruct_RooMultiVarGaussiancLcLGenData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooMultiVarGaussian::GenData*)
   {
      ::RooMultiVarGaussian::GenData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooMultiVarGaussian::GenData));
      static ::ROOT::TGenericClassInfo 
         instance("RooMultiVarGaussian::GenData", "RooMultiVarGaussian.h", 64,
                  typeid(::RooMultiVarGaussian::GenData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooMultiVarGaussiancLcLGenData_Dictionary, isa_proxy, 4,
                  sizeof(::RooMultiVarGaussian::GenData) );
      instance.SetNew(&new_RooMultiVarGaussiancLcLGenData);
      instance.SetNewArray(&newArray_RooMultiVarGaussiancLcLGenData);
      instance.SetDelete(&delete_RooMultiVarGaussiancLcLGenData);
      instance.SetDeleteArray(&deleteArray_RooMultiVarGaussiancLcLGenData);
      instance.SetDestructor(&destruct_RooMultiVarGaussiancLcLGenData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooMultiVarGaussian::GenData*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooMultiVarGaussian::GenData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooMultiVarGaussian::GenData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooMultiVarGaussiancLcLGenData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooMultiVarGaussian::GenData*>(nullptr))->GetClass();
      RooMultiVarGaussiancLcLGenData_TClassManip(theClass);
   return theClass;
   }

   static void RooMultiVarGaussiancLcLGenData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_RooNumRunningInt(void *p);
   static void deleteArray_RooNumRunningInt(void *p);
   static void destruct_RooNumRunningInt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumRunningInt*)
   {
      ::RooNumRunningInt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumRunningInt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumRunningInt", ::RooNumRunningInt::Class_Version(), "RooNumRunningInt.h", 22,
                  typeid(::RooNumRunningInt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumRunningInt::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumRunningInt) );
      instance.SetDelete(&delete_RooNumRunningInt);
      instance.SetDeleteArray(&deleteArray_RooNumRunningInt);
      instance.SetDestructor(&destruct_RooNumRunningInt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumRunningInt*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumRunningInt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumRunningInt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooNumCdf(void *p);
   static void deleteArray_RooNumCdf(void *p);
   static void destruct_RooNumCdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumCdf*)
   {
      ::RooNumCdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumCdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumCdf", ::RooNumCdf::Class_Version(), "RooNumCdf.h", 17,
                  typeid(::RooNumCdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumCdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumCdf) );
      instance.SetDelete(&delete_RooNumCdf);
      instance.SetDeleteArray(&deleteArray_RooNumCdf);
      instance.SetDestructor(&destruct_RooNumCdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumCdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumCdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumCdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNumConvolution(void *p = nullptr);
   static void *newArray_RooNumConvolution(Long_t size, void *p);
   static void delete_RooNumConvolution(void *p);
   static void deleteArray_RooNumConvolution(void *p);
   static void destruct_RooNumConvolution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumConvolution*)
   {
      ::RooNumConvolution *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumConvolution >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumConvolution", ::RooNumConvolution::Class_Version(), "RooNumConvolution.h", 29,
                  typeid(::RooNumConvolution), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumConvolution::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumConvolution) );
      instance.SetNew(&new_RooNumConvolution);
      instance.SetNewArray(&newArray_RooNumConvolution);
      instance.SetDelete(&delete_RooNumConvolution);
      instance.SetDeleteArray(&deleteArray_RooNumConvolution);
      instance.SetDestructor(&destruct_RooNumConvolution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumConvolution*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumConvolution*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumConvolution*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNumConvPdf(void *p = nullptr);
   static void *newArray_RooNumConvPdf(Long_t size, void *p);
   static void delete_RooNumConvPdf(void *p);
   static void deleteArray_RooNumConvPdf(void *p);
   static void destruct_RooNumConvPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumConvPdf*)
   {
      ::RooNumConvPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumConvPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumConvPdf", ::RooNumConvPdf::Class_Version(), "RooNumConvPdf.h", 26,
                  typeid(::RooNumConvPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumConvPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumConvPdf) );
      instance.SetNew(&new_RooNumConvPdf);
      instance.SetNewArray(&newArray_RooNumConvPdf);
      instance.SetDelete(&delete_RooNumConvPdf);
      instance.SetDeleteArray(&deleteArray_RooNumConvPdf);
      instance.SetDestructor(&destruct_RooNumConvPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumConvPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumConvPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumConvPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooNumGenConfig(void *p = nullptr);
   static void *newArray_RooNumGenConfig(Long_t size, void *p);
   static void delete_RooNumGenConfig(void *p);
   static void deleteArray_RooNumGenConfig(void *p);
   static void destruct_RooNumGenConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumGenConfig*)
   {
      ::RooNumGenConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumGenConfig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumGenConfig", ::RooNumGenConfig::Class_Version(), "RooNumGenConfig.h", 25,
                  typeid(::RooNumGenConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumGenConfig::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumGenConfig) );
      instance.SetNew(&new_RooNumGenConfig);
      instance.SetNewArray(&newArray_RooNumGenConfig);
      instance.SetDelete(&delete_RooNumGenConfig);
      instance.SetDeleteArray(&deleteArray_RooNumGenConfig);
      instance.SetDestructor(&destruct_RooNumGenConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumGenConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumGenConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumGenConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooNumIntFactory(void *p);
   static void deleteArray_RooNumIntFactory(void *p);
   static void destruct_RooNumIntFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooNumIntFactory*)
   {
      ::RooNumIntFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooNumIntFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooNumIntFactory", ::RooNumIntFactory::Class_Version(), "RooNumIntFactory.h", 33,
                  typeid(::RooNumIntFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooNumIntFactory::Dictionary, isa_proxy, 4,
                  sizeof(::RooNumIntFactory) );
      instance.SetDelete(&delete_RooNumIntFactory);
      instance.SetDeleteArray(&deleteArray_RooNumIntFactory);
      instance.SetDestructor(&destruct_RooNumIntFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooNumIntFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooNumIntFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooNumIntFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooParamBinning(void *p = nullptr);
   static void *newArray_RooParamBinning(Long_t size, void *p);
   static void delete_RooParamBinning(void *p);
   static void deleteArray_RooParamBinning(void *p);
   static void destruct_RooParamBinning(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooParamBinning*)
   {
      ::RooParamBinning *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooParamBinning >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooParamBinning", ::RooParamBinning::Class_Version(), "RooParamBinning.h", 24,
                  typeid(::RooParamBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooParamBinning::Dictionary, isa_proxy, 4,
                  sizeof(::RooParamBinning) );
      instance.SetNew(&new_RooParamBinning);
      instance.SetNewArray(&newArray_RooParamBinning);
      instance.SetDelete(&delete_RooParamBinning);
      instance.SetDeleteArray(&deleteArray_RooParamBinning);
      instance.SetDestructor(&destruct_RooParamBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooParamBinning*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooParamBinning*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooParamBinning*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPlot(void *p = nullptr);
   static void *newArray_RooPlot(Long_t size, void *p);
   static void delete_RooPlot(void *p);
   static void deleteArray_RooPlot(void *p);
   static void destruct_RooPlot(void *p);
   static void streamer_RooPlot(TBuffer &buf, void *obj);

   // Schema evolution read functions
   static void read_RooPlot_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__items = oldObj->GetId("_items");
#endif
      struct RooPlot_Onfile {
         TList &_items;
         RooPlot_Onfile(TList &onfile__items ): _items(onfile__items) {}
      };
      static Long_t offset_Onfile_RooPlot__items = oldObj->GetClass()->GetDataMemberOffset("_items");
      char *onfile_add = (char*)oldObj->GetObject();
      RooPlot_Onfile onfile(
         *(TList*)(onfile_add+offset_Onfile_RooPlot__items) );

      static TClassRef cls("RooPlot");
      static Long_t offset__items = cls->GetDataMemberOffset("_items");
      RooPlot::Items& _items = *(RooPlot::Items*)(target+offset__items);
      RooPlot* newObj = (RooPlot*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
       RooPlot::fillItemsFromTList(_items, onfile._items); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPlot*)
   {
      ::RooPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPlot", ::RooPlot::Class_Version(), "RooPlot.h", 43,
                  typeid(::RooPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPlot::Dictionary, isa_proxy, 17,
                  sizeof(::RooPlot) );
      instance.SetNew(&new_RooPlot);
      instance.SetNewArray(&newArray_RooPlot);
      instance.SetDelete(&delete_RooPlot);
      instance.SetDeleteArray(&deleteArray_RooPlot);
      instance.SetDestructor(&destruct_RooPlot);
      instance.SetStreamerFunc(&streamer_RooPlot);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooPlot";
      rule->fTarget      = "_items";
      rule->fSource      = "TList _items; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooPlot_0);
      rule->fCode        = "  RooPlot::fillItemsFromTList(_items, onfile._items); ";
      rule->fVersion     = "[2]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPolyFunc(void *p = nullptr);
   static void *newArray_RooPolyFunc(Long_t size, void *p);
   static void delete_RooPolyFunc(void *p);
   static void deleteArray_RooPolyFunc(void *p);
   static void destruct_RooPolyFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPolyFunc*)
   {
      ::RooPolyFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPolyFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPolyFunc", ::RooPolyFunc::Class_Version(), "RooPolyFunc.h", 28,
                  typeid(::RooPolyFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPolyFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooPolyFunc) );
      instance.SetNew(&new_RooPolyFunc);
      instance.SetNewArray(&newArray_RooPolyFunc);
      instance.SetDelete(&delete_RooPolyFunc);
      instance.SetDeleteArray(&deleteArray_RooPolyFunc);
      instance.SetDestructor(&destruct_RooPolyFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPolyFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPolyFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPolyFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPolyVar(void *p = nullptr);
   static void *newArray_RooPolyVar(Long_t size, void *p);
   static void delete_RooPolyVar(void *p);
   static void deleteArray_RooPolyVar(void *p);
   static void destruct_RooPolyVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPolyVar*)
   {
      ::RooPolyVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPolyVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPolyVar", ::RooPolyVar::Class_Version(), "RooPolyVar.h", 25,
                  typeid(::RooPolyVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPolyVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooPolyVar) );
      instance.SetNew(&new_RooPolyVar);
      instance.SetNewArray(&newArray_RooPolyVar);
      instance.SetDelete(&delete_RooPolyVar);
      instance.SetDeleteArray(&deleteArray_RooPolyVar);
      instance.SetDestructor(&destruct_RooPolyVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPolyVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPolyVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPolyVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooProdGenContext(void *p);
   static void deleteArray_RooProdGenContext(void *p);
   static void destruct_RooProdGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooProdGenContext*)
   {
      ::RooProdGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooProdGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooProdGenContext", ::RooProdGenContext::Class_Version(), "RooProdGenContext.h", 30,
                  typeid(::RooProdGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooProdGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooProdGenContext) );
      instance.SetDelete(&delete_RooProdGenContext);
      instance.SetDeleteArray(&deleteArray_RooProdGenContext);
      instance.SetDestructor(&destruct_RooProdGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooProdGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooProdGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooProdGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooProdPdf(void *p = nullptr);
   static void *newArray_RooProdPdf(Long_t size, void *p);
   static void delete_RooProdPdf(void *p);
   static void deleteArray_RooProdPdf(void *p);
   static void destruct_RooProdPdf(void *p);

   // Schema evolution read functions
   static void read_RooProdPdf_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__pdfNSetList = oldObj->GetId("_pdfNSetList");
#endif
      struct RooProdPdf_Onfile {
         RooLinkedList &_pdfNSetList;
         RooProdPdf_Onfile(RooLinkedList &onfile__pdfNSetList ): _pdfNSetList(onfile__pdfNSetList) {}
      };
      static Long_t offset_Onfile_RooProdPdf__pdfNSetList = oldObj->GetClass()->GetDataMemberOffset("_pdfNSetList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooProdPdf_Onfile onfile(
         *(RooLinkedList*)(onfile_add+offset_Onfile_RooProdPdf__pdfNSetList) );

      static TClassRef cls("RooProdPdf");
      static Long_t offset__pdfNSetList = cls->GetDataMemberOffset("_pdfNSetList");
      vector<unique_ptr<RooArgSet> >& _pdfNSetList = *(vector<unique_ptr<RooArgSet> >*)(target+offset__pdfNSetList);
      RooProdPdf* newObj = (RooProdPdf*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     for (auto * nset : static_range_cast<RooArgSet*>(onfile._pdfNSetList)) { \
           _pdfNSetList.emplace_back(nset);                                       \
         }                                                                        \
         
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooProdPdf*)
   {
      ::RooProdPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooProdPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooProdPdf", ::RooProdPdf::Class_Version(), "RooProdPdf.h", 36,
                  typeid(::RooProdPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooProdPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooProdPdf) );
      instance.SetNew(&new_RooProdPdf);
      instance.SetNewArray(&newArray_RooProdPdf);
      instance.SetDelete(&delete_RooProdPdf);
      instance.SetDeleteArray(&deleteArray_RooProdPdf);
      instance.SetDestructor(&destruct_RooProdPdf);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooProdPdf";
      rule->fTarget      = "_pdfNSetList";
      rule->fSource      = "RooLinkedList _pdfNSetList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooProdPdf_0);
      rule->fCode        = "for (auto * nset : static_range_cast<RooArgSet*>(onfile._pdfNSetList)) { \\n           _pdfNSetList.emplace_back(nset);                                       \\n         }                                                                        \\n         ";
      rule->fVersion     = "[-5]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooProdPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooProdPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooProdPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooFitcLcLDetailcLcLRooFixedProdPdf(void *p);
   static void deleteArray_RooFitcLcLDetailcLcLRooFixedProdPdf(void *p);
   static void destruct_RooFitcLcLDetailcLcLRooFixedProdPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::Detail::RooFixedProdPdf*)
   {
      ::RooFit::Detail::RooFixedProdPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooFit::Detail::RooFixedProdPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::Detail::RooFixedProdPdf", ::RooFit::Detail::RooFixedProdPdf::Class_Version(), "RooProdPdf.h", 212,
                  typeid(::RooFit::Detail::RooFixedProdPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooFit::Detail::RooFixedProdPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::Detail::RooFixedProdPdf) );
      instance.SetDelete(&delete_RooFitcLcLDetailcLcLRooFixedProdPdf);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLDetailcLcLRooFixedProdPdf);
      instance.SetDestructor(&destruct_RooFitcLcLDetailcLcLRooFixedProdPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::Detail::RooFixedProdPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::Detail::RooFixedProdPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::Detail::RooFixedProdPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooProduct(void *p = nullptr);
   static void *newArray_RooProduct(Long_t size, void *p);
   static void delete_RooProduct(void *p);
   static void deleteArray_RooProduct(void *p);
   static void destruct_RooProduct(void *p);

   // Schema evolution read functions
   static void read_RooProduct_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__compRSet = oldObj->GetId("_compRSet");
      static Int_t id__compCSet = oldObj->GetId("_compCSet");
#endif
      struct RooProduct_Onfile {
         RooSetProxy &_compRSet;
         RooSetProxy &_compCSet;
         RooProduct_Onfile(RooSetProxy &onfile__compRSet, RooSetProxy &onfile__compCSet ): _compRSet(onfile__compRSet), _compCSet(onfile__compCSet) {}
      };
      static Long_t offset_Onfile_RooProduct__compRSet = oldObj->GetClass()->GetDataMemberOffset("_compRSet");
      static Long_t offset_Onfile_RooProduct__compCSet = oldObj->GetClass()->GetDataMemberOffset("_compCSet");
      char *onfile_add = (char*)oldObj->GetObject();
      RooProduct_Onfile onfile(
         *(RooSetProxy*)(onfile_add+offset_Onfile_RooProduct__compRSet),
         *(RooSetProxy*)(onfile_add+offset_Onfile_RooProduct__compCSet) );

      static TClassRef cls("RooProduct");
      static Long_t offset__compRSet = cls->GetDataMemberOffset("_compRSet");
      RooListProxy& _compRSet = *(RooListProxy*)(target+offset__compRSet);
      static Long_t offset__compCSet = cls->GetDataMemberOffset("_compCSet");
      RooListProxy& _compCSet = *(RooListProxy*)(target+offset__compCSet);
      RooProduct* newObj = (RooProduct*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
                                                                                   \
                 _compRSet.initializeAfterIOConstructor(newObj, onfile._compRSet) ;               \
                 _compCSet.initializeAfterIOConstructor(newObj, onfile._compCSet) ;               \
             
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooProduct*)
   {
      ::RooProduct *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooProduct >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooProduct", ::RooProduct::Class_Version(), "RooProduct.h", 29,
                  typeid(::RooProduct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooProduct::Dictionary, isa_proxy, 4,
                  sizeof(::RooProduct) );
      instance.SetNew(&new_RooProduct);
      instance.SetNewArray(&newArray_RooProduct);
      instance.SetDelete(&delete_RooProduct);
      instance.SetDeleteArray(&deleteArray_RooProduct);
      instance.SetDestructor(&destruct_RooProduct);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooProduct";
      rule->fTarget      = "_compRSet, _compCSet";
      rule->fSource      = "RooCollectionProxy<RooArgSet> _compRSet; RooCollectionProxy<RooArgSet> _compCSet; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooProduct_0);
      rule->fCode        = "                                                                              \\n                 _compRSet.initializeAfterIOConstructor(newObj, onfile._compRSet) ;               \\n                 _compCSet.initializeAfterIOConstructor(newObj, onfile._compCSet) ;               \\n             ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooProduct*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooProduct*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooProduct*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooProfileLL(void *p);
   static void deleteArray_RooProfileLL(void *p);
   static void destruct_RooProfileLL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooProfileLL*)
   {
      ::RooProfileLL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooProfileLL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooProfileLL", ::RooProfileLL::Class_Version(), "RooProfileLL.h", 22,
                  typeid(::RooProfileLL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooProfileLL::Dictionary, isa_proxy, 4,
                  sizeof(::RooProfileLL) );
      instance.SetDelete(&delete_RooProfileLL);
      instance.SetDeleteArray(&deleteArray_RooProfileLL);
      instance.SetDestructor(&destruct_RooProfileLL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooProfileLL*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooProfileLL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooProfileLL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooProjectedPdf(void *p = nullptr);
   static void *newArray_RooProjectedPdf(Long_t size, void *p);
   static void delete_RooProjectedPdf(void *p);
   static void deleteArray_RooProjectedPdf(void *p);
   static void destruct_RooProjectedPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooProjectedPdf*)
   {
      ::RooProjectedPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooProjectedPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooProjectedPdf", ::RooProjectedPdf::Class_Version(), "RooProjectedPdf.h", 21,
                  typeid(::RooProjectedPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooProjectedPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooProjectedPdf) );
      instance.SetNew(&new_RooProjectedPdf);
      instance.SetNewArray(&newArray_RooProjectedPdf);
      instance.SetDelete(&delete_RooProjectedPdf);
      instance.SetDeleteArray(&deleteArray_RooProjectedPdf);
      instance.SetDestructor(&destruct_RooProjectedPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooProjectedPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooProjectedPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooProjectedPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooPullVar(void *p = nullptr);
   static void *newArray_RooPullVar(Long_t size, void *p);
   static void delete_RooPullVar(void *p);
   static void deleteArray_RooPullVar(void *p);
   static void destruct_RooPullVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooPullVar*)
   {
      ::RooPullVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooPullVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooPullVar", ::RooPullVar::Class_Version(), "RooPullVar.h", 24,
                  typeid(::RooPullVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooPullVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooPullVar) );
      instance.SetNew(&new_RooPullVar);
      instance.SetNewArray(&newArray_RooPullVar);
      instance.SetDelete(&delete_RooPullVar);
      instance.SetDeleteArray(&deleteArray_RooPullVar);
      instance.SetDestructor(&destruct_RooPullVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooPullVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooPullVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooPullVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooQuasiRandomGenerator(void *p = nullptr);
   static void *newArray_RooQuasiRandomGenerator(Long_t size, void *p);
   static void delete_RooQuasiRandomGenerator(void *p);
   static void deleteArray_RooQuasiRandomGenerator(void *p);
   static void destruct_RooQuasiRandomGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooQuasiRandomGenerator*)
   {
      ::RooQuasiRandomGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooQuasiRandomGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooQuasiRandomGenerator", ::RooQuasiRandomGenerator::Class_Version(), "RooQuasiRandomGenerator.h", 21,
                  typeid(::RooQuasiRandomGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooQuasiRandomGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::RooQuasiRandomGenerator) );
      instance.SetNew(&new_RooQuasiRandomGenerator);
      instance.SetNewArray(&newArray_RooQuasiRandomGenerator);
      instance.SetDelete(&delete_RooQuasiRandomGenerator);
      instance.SetDeleteArray(&deleteArray_RooQuasiRandomGenerator);
      instance.SetDestructor(&destruct_RooQuasiRandomGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooQuasiRandomGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooQuasiRandomGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooQuasiRandomGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooRandom(void *p);
   static void deleteArray_RooRandom(void *p);
   static void destruct_RooRandom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRandom*)
   {
      ::RooRandom *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRandom >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRandom", ::RooRandom::Class_Version(), "RooRandom.h", 24,
                  typeid(::RooRandom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRandom::Dictionary, isa_proxy, 4,
                  sizeof(::RooRandom) );
      instance.SetDelete(&delete_RooRandom);
      instance.SetDeleteArray(&deleteArray_RooRandom);
      instance.SetDestructor(&destruct_RooRandom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRandom*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRandom*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRandom*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRandomizeParamMCSModule(void *p = nullptr);
   static void *newArray_RooRandomizeParamMCSModule(Long_t size, void *p);
   static void delete_RooRandomizeParamMCSModule(void *p);
   static void deleteArray_RooRandomizeParamMCSModule(void *p);
   static void destruct_RooRandomizeParamMCSModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRandomizeParamMCSModule*)
   {
      ::RooRandomizeParamMCSModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRandomizeParamMCSModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRandomizeParamMCSModule", ::RooRandomizeParamMCSModule::Class_Version(), "RooRandomizeParamMCSModule.h", 24,
                  typeid(::RooRandomizeParamMCSModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRandomizeParamMCSModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooRandomizeParamMCSModule) );
      instance.SetNew(&new_RooRandomizeParamMCSModule);
      instance.SetNewArray(&newArray_RooRandomizeParamMCSModule);
      instance.SetDelete(&delete_RooRandomizeParamMCSModule);
      instance.SetDeleteArray(&deleteArray_RooRandomizeParamMCSModule);
      instance.SetDestructor(&destruct_RooRandomizeParamMCSModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRandomizeParamMCSModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRandomizeParamMCSModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRandomizeParamMCSModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRangeBinning(void *p = nullptr);
   static void *newArray_RooRangeBinning(Long_t size, void *p);
   static void delete_RooRangeBinning(void *p);
   static void deleteArray_RooRangeBinning(void *p);
   static void destruct_RooRangeBinning(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRangeBinning*)
   {
      ::RooRangeBinning *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRangeBinning >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRangeBinning", ::RooRangeBinning::Class_Version(), "RooRangeBinning.h", 21,
                  typeid(::RooRangeBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRangeBinning::Dictionary, isa_proxy, 4,
                  sizeof(::RooRangeBinning) );
      instance.SetNew(&new_RooRangeBinning);
      instance.SetNewArray(&newArray_RooRangeBinning);
      instance.SetDelete(&delete_RooRangeBinning);
      instance.SetDeleteArray(&deleteArray_RooRangeBinning);
      instance.SetDestructor(&destruct_RooRangeBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRangeBinning*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRangeBinning*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRangeBinning*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRangeBoolean(void *p = nullptr);
   static void *newArray_RooRangeBoolean(Long_t size, void *p);
   static void delete_RooRangeBoolean(void *p);
   static void deleteArray_RooRangeBoolean(void *p);
   static void destruct_RooRangeBoolean(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRangeBoolean*)
   {
      ::RooRangeBoolean *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRangeBoolean >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRangeBoolean", ::RooRangeBoolean::Class_Version(), "RooRangeBoolean.h", 26,
                  typeid(::RooRangeBoolean), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRangeBoolean::Dictionary, isa_proxy, 4,
                  sizeof(::RooRangeBoolean) );
      instance.SetNew(&new_RooRangeBoolean);
      instance.SetNewArray(&newArray_RooRangeBoolean);
      instance.SetDelete(&delete_RooRangeBoolean);
      instance.SetDeleteArray(&deleteArray_RooRangeBoolean);
      instance.SetDestructor(&destruct_RooRangeBoolean);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRangeBoolean*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRangeBoolean*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRangeBoolean*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRatio(void *p = nullptr);
   static void *newArray_RooRatio(Long_t size, void *p);
   static void delete_RooRatio(void *p);
   static void deleteArray_RooRatio(void *p);
   static void destruct_RooRatio(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRatio*)
   {
      ::RooRatio *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRatio >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRatio", ::RooRatio::Class_Version(), "RooRatio.h", 21,
                  typeid(::RooRatio), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRatio::Dictionary, isa_proxy, 4,
                  sizeof(::RooRatio) );
      instance.SetNew(&new_RooRatio);
      instance.SetNewArray(&newArray_RooRatio);
      instance.SetDelete(&delete_RooRatio);
      instance.SetDeleteArray(&deleteArray_RooRatio);
      instance.SetDestructor(&destruct_RooRatio);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRatio*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRatio*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRatio*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealConstant(void *p = nullptr);
   static void *newArray_RooRealConstant(Long_t size, void *p);
   static void delete_RooRealConstant(void *p);
   static void deleteArray_RooRealConstant(void *p);
   static void destruct_RooRealConstant(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealConstant*)
   {
      ::RooRealConstant *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealConstant >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealConstant", ::RooRealConstant::Class_Version(), "RooRealConstant.h", 25,
                  typeid(::RooRealConstant), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealConstant::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealConstant) );
      instance.SetNew(&new_RooRealConstant);
      instance.SetNewArray(&newArray_RooRealConstant);
      instance.SetDelete(&delete_RooRealConstant);
      instance.SetDeleteArray(&deleteArray_RooRealConstant);
      instance.SetDestructor(&destruct_RooRealConstant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealConstant*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealConstant*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealConstant*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealIntegral(void *p = nullptr);
   static void *newArray_RooRealIntegral(Long_t size, void *p);
   static void delete_RooRealIntegral(void *p);
   static void deleteArray_RooRealIntegral(void *p);
   static void destruct_RooRealIntegral(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealIntegral*)
   {
      ::RooRealIntegral *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealIntegral >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealIntegral", ::RooRealIntegral::Class_Version(), "RooRealIntegral.h", 29,
                  typeid(::RooRealIntegral), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealIntegral::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealIntegral) );
      instance.SetNew(&new_RooRealIntegral);
      instance.SetNewArray(&newArray_RooRealIntegral);
      instance.SetDelete(&delete_RooRealIntegral);
      instance.SetDeleteArray(&deleteArray_RooRealIntegral);
      instance.SetDestructor(&destruct_RooRealIntegral);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealIntegral*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealIntegral*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealIntegral*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealSumFunc(void *p = nullptr);
   static void *newArray_RooRealSumFunc(Long_t size, void *p);
   static void delete_RooRealSumFunc(void *p);
   static void deleteArray_RooRealSumFunc(void *p);
   static void destruct_RooRealSumFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealSumFunc*)
   {
      ::RooRealSumFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealSumFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealSumFunc", ::RooRealSumFunc::Class_Version(), "RooRealSumFunc.h", 26,
                  typeid(::RooRealSumFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealSumFunc::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealSumFunc) );
      instance.SetNew(&new_RooRealSumFunc);
      instance.SetNewArray(&newArray_RooRealSumFunc);
      instance.SetDelete(&delete_RooRealSumFunc);
      instance.SetDeleteArray(&deleteArray_RooRealSumFunc);
      instance.SetDestructor(&destruct_RooRealSumFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealSumFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealSumFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealSumFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealSumPdf(void *p = nullptr);
   static void *newArray_RooRealSumPdf(Long_t size, void *p);
   static void delete_RooRealSumPdf(void *p);
   static void deleteArray_RooRealSumPdf(void *p);
   static void destruct_RooRealSumPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealSumPdf*)
   {
      ::RooRealSumPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealSumPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealSumPdf", ::RooRealSumPdf::Class_Version(), "RooRealSumPdf.h", 24,
                  typeid(::RooRealSumPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealSumPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealSumPdf) );
      instance.SetNew(&new_RooRealSumPdf);
      instance.SetNewArray(&newArray_RooRealSumPdf);
      instance.SetDelete(&delete_RooRealSumPdf);
      instance.SetDeleteArray(&deleteArray_RooRealSumPdf);
      instance.SetDestructor(&destruct_RooRealSumPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealSumPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealSumPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealSumPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRealVarSharedProperties(void *p = nullptr);
   static void *newArray_RooRealVarSharedProperties(Long_t size, void *p);
   static void delete_RooRealVarSharedProperties(void *p);
   static void deleteArray_RooRealVarSharedProperties(void *p);
   static void destruct_RooRealVarSharedProperties(void *p);

   // Schema evolution read functions
   static void read_RooRealVarSharedProperties_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__altBinning = oldObj->GetId("_altBinning");
#endif
      struct RooRealVarSharedProperties_Onfile {
         RooLinkedList &_altBinning;
         RooRealVarSharedProperties_Onfile(RooLinkedList &onfile__altBinning ): _altBinning(onfile__altBinning) {}
      };
      static Long_t offset_Onfile_RooRealVarSharedProperties__altBinning = oldObj->GetClass()->GetDataMemberOffset("_altBinning");
      char *onfile_add = (char*)oldObj->GetObject();
      RooRealVarSharedProperties_Onfile onfile(
         *(RooLinkedList*)(onfile_add+offset_Onfile_RooRealVarSharedProperties__altBinning) );

      static TClassRef cls("RooRealVarSharedProperties");
      static Long_t offset__altBinning = cls->GetDataMemberOffset("_altBinning");
      unordered_map<string,RooAbsBinning*>& _altBinning = *(unordered_map<string,RooAbsBinning*>*)(target+offset__altBinning);
      RooRealVarSharedProperties* newObj = (RooRealVarSharedProperties*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      \
    for (TObject * binning : onfile._altBinning) { _altBinning[binning->GetName()] = static_cast<RooAbsBinning*>(binning); } \
  
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRealVarSharedProperties*)
   {
      ::RooRealVarSharedProperties *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRealVarSharedProperties >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRealVarSharedProperties", ::RooRealVarSharedProperties::Class_Version(), "RooRealVarSharedProperties.h", 39,
                  typeid(::RooRealVarSharedProperties), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRealVarSharedProperties::Dictionary, isa_proxy, 4,
                  sizeof(::RooRealVarSharedProperties) );
      instance.SetNew(&new_RooRealVarSharedProperties);
      instance.SetNewArray(&newArray_RooRealVarSharedProperties);
      instance.SetDelete(&delete_RooRealVarSharedProperties);
      instance.SetDeleteArray(&deleteArray_RooRealVarSharedProperties);
      instance.SetDestructor(&destruct_RooRealVarSharedProperties);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooRealVarSharedProperties";
      rule->fTarget      = "_altBinning";
      rule->fSource      = "RooLinkedList _altBinning; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooRealVarSharedProperties_0);
      rule->fCode        = " \\n    for (TObject * binning : onfile._altBinning) { _altBinning[binning->GetName()] = static_cast<RooAbsBinning*>(binning); } \\n  ";
      rule->fVersion     = "[1]";
      rule->fInclude     = "RooLinkedList.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRealVarSharedProperties*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRealVarSharedProperties*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRealVarSharedProperties*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRecursiveFraction(void *p = nullptr);
   static void *newArray_RooRecursiveFraction(Long_t size, void *p);
   static void delete_RooRecursiveFraction(void *p);
   static void deleteArray_RooRecursiveFraction(void *p);
   static void destruct_RooRecursiveFraction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRecursiveFraction*)
   {
      ::RooRecursiveFraction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRecursiveFraction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRecursiveFraction", ::RooRecursiveFraction::Class_Version(), "RooRecursiveFraction.h", 22,
                  typeid(::RooRecursiveFraction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRecursiveFraction::Dictionary, isa_proxy, 4,
                  sizeof(::RooRecursiveFraction) );
      instance.SetNew(&new_RooRecursiveFraction);
      instance.SetNewArray(&newArray_RooRecursiveFraction);
      instance.SetDelete(&delete_RooRecursiveFraction);
      instance.SetDeleteArray(&deleteArray_RooRecursiveFraction);
      instance.SetDestructor(&destruct_RooRecursiveFraction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRecursiveFraction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRecursiveFraction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRecursiveFraction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooRefCountList(void *p = nullptr);
   static void *newArray_RooRefCountList(Long_t size, void *p);
   static void delete_RooRefCountList(void *p);
   static void deleteArray_RooRefCountList(void *p);
   static void destruct_RooRefCountList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooRefCountList*)
   {
      ::RooRefCountList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooRefCountList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooRefCountList", ::RooRefCountList::Class_Version(), "RooRefCountList.h", 18,
                  typeid(::RooRefCountList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooRefCountList::Dictionary, isa_proxy, 4,
                  sizeof(::RooRefCountList) );
      instance.SetNew(&new_RooRefCountList);
      instance.SetNewArray(&newArray_RooRefCountList);
      instance.SetDelete(&delete_RooRefCountList);
      instance.SetDeleteArray(&deleteArray_RooRefCountList);
      instance.SetDestructor(&destruct_RooRefCountList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooRefCountList*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooRefCountList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooRefCountList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooSecondMoment(void *p = nullptr);
   static void *newArray_RooSecondMoment(Long_t size, void *p);
   static void delete_RooSecondMoment(void *p);
   static void deleteArray_RooSecondMoment(void *p);
   static void destruct_RooSecondMoment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSecondMoment*)
   {
      ::RooSecondMoment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSecondMoment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSecondMoment", ::RooSecondMoment::Class_Version(), "RooSecondMoment.h", 27,
                  typeid(::RooSecondMoment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSecondMoment::Dictionary, isa_proxy, 4,
                  sizeof(::RooSecondMoment) );
      instance.SetNew(&new_RooSecondMoment);
      instance.SetNewArray(&newArray_RooSecondMoment);
      instance.SetDelete(&delete_RooSecondMoment);
      instance.SetDeleteArray(&deleteArray_RooSecondMoment);
      instance.SetDestructor(&destruct_RooSecondMoment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSecondMoment*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSecondMoment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSecondMoment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooSimGenContext(void *p);
   static void deleteArray_RooSimGenContext(void *p);
   static void destruct_RooSimGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSimGenContext*)
   {
      ::RooSimGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSimGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSimGenContext", ::RooSimGenContext::Class_Version(), "RooSimGenContext.h", 27,
                  typeid(::RooSimGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSimGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooSimGenContext) );
      instance.SetDelete(&delete_RooSimGenContext);
      instance.SetDeleteArray(&deleteArray_RooSimGenContext);
      instance.SetDestructor(&destruct_RooSimGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSimGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSimGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSimGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooSimSplitGenContext(void *p);
   static void deleteArray_RooSimSplitGenContext(void *p);
   static void destruct_RooSimSplitGenContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSimSplitGenContext*)
   {
      ::RooSimSplitGenContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSimSplitGenContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSimSplitGenContext", ::RooSimSplitGenContext::Class_Version(), "RooSimSplitGenContext.h", 27,
                  typeid(::RooSimSplitGenContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSimSplitGenContext::Dictionary, isa_proxy, 4,
                  sizeof(::RooSimSplitGenContext) );
      instance.SetDelete(&delete_RooSimSplitGenContext);
      instance.SetDeleteArray(&deleteArray_RooSimSplitGenContext);
      instance.SetDestructor(&destruct_RooSimSplitGenContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSimSplitGenContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSimSplitGenContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSimSplitGenContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooSimultaneous(void *p = nullptr);
   static void *newArray_RooSimultaneous(Long_t size, void *p);
   static void delete_RooSimultaneous(void *p);
   static void deleteArray_RooSimultaneous(void *p);
   static void destruct_RooSimultaneous(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSimultaneous*)
   {
      ::RooSimultaneous *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSimultaneous >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSimultaneous", ::RooSimultaneous::Class_Version(), "RooSimultaneous.h", 41,
                  typeid(::RooSimultaneous), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSimultaneous::Dictionary, isa_proxy, 4,
                  sizeof(::RooSimultaneous) );
      instance.SetNew(&new_RooSimultaneous);
      instance.SetNewArray(&newArray_RooSimultaneous);
      instance.SetDelete(&delete_RooSimultaneous);
      instance.SetDeleteArray(&deleteArray_RooSimultaneous);
      instance.SetDestructor(&destruct_RooSimultaneous);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSimultaneous*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSimultaneous*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSimultaneous*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStreamParser(void *p);
   static void deleteArray_RooStreamParser(void *p);
   static void destruct_RooStreamParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStreamParser*)
   {
      ::RooStreamParser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStreamParser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStreamParser", ::RooStreamParser::Class_Version(), "RooStreamParser.h", 21,
                  typeid(::RooStreamParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStreamParser::Dictionary, isa_proxy, 4,
                  sizeof(::RooStreamParser) );
      instance.SetDelete(&delete_RooStreamParser);
      instance.SetDeleteArray(&deleteArray_RooStreamParser);
      instance.SetDestructor(&destruct_RooStreamParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStreamParser*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStreamParser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStreamParser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStringVar(void *p = nullptr);
   static void *newArray_RooStringVar(Long_t size, void *p);
   static void delete_RooStringVar(void *p);
   static void deleteArray_RooStringVar(void *p);
   static void destruct_RooStringVar(void *p);

   // Schema evolution read functions
   static void read_RooStringVar_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__len = oldObj->GetId("_len");
      static Int_t id__value = oldObj->GetId("_value");
#endif
      struct RooStringVar_Onfile {
         Int_t &_len;
         char* &_value;
         RooStringVar_Onfile(Int_t &onfile__len, char* &onfile__value ): _len(onfile__len), _value(onfile__value) {}
      };
      static Long_t offset_Onfile_RooStringVar__len = oldObj->GetClass()->GetDataMemberOffset("_len");
      static Long_t offset_Onfile_RooStringVar__value = oldObj->GetClass()->GetDataMemberOffset("_value");
      char *onfile_add = (char*)oldObj->GetObject();
      RooStringVar_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_RooStringVar__len),
         *(char**)(onfile_add+offset_Onfile_RooStringVar__value) );

      static TClassRef cls("RooStringVar");
      static Long_t offset__string = cls->GetDataMemberOffset("_string");
      string& _string = *(string*)(target+offset__string);
      RooStringVar* newObj = (RooStringVar*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     _string.assign(onfile._value, onfile._len);
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStringVar*)
   {
      ::RooStringVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStringVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStringVar", ::RooStringVar::Class_Version(), "RooStringVar.h", 23,
                  typeid(::RooStringVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStringVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooStringVar) );
      instance.SetNew(&new_RooStringVar);
      instance.SetNewArray(&newArray_RooStringVar);
      instance.SetDelete(&delete_RooStringVar);
      instance.SetDeleteArray(&deleteArray_RooStringVar);
      instance.SetDestructor(&destruct_RooStringVar);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooAbsString";
      rule->fTarget      = "_string";
      rule->fSource      = "int _len; char* _value; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooStringVar_0);
      rule->fCode        = "_string.assign(onfile._value, onfile._len);";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStringVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStringVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStringVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStudyPackage(void *p = nullptr);
   static void *newArray_RooStudyPackage(Long_t size, void *p);
   static void delete_RooStudyPackage(void *p);
   static void deleteArray_RooStudyPackage(void *p);
   static void destruct_RooStudyPackage(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStudyPackage*)
   {
      ::RooStudyPackage *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStudyPackage >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStudyPackage", ::RooStudyPackage::Class_Version(), "RooStudyPackage.h", 26,
                  typeid(::RooStudyPackage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStudyPackage::Dictionary, isa_proxy, 4,
                  sizeof(::RooStudyPackage) );
      instance.SetNew(&new_RooStudyPackage);
      instance.SetNewArray(&newArray_RooStudyPackage);
      instance.SetDelete(&delete_RooStudyPackage);
      instance.SetDeleteArray(&deleteArray_RooStudyPackage);
      instance.SetDestructor(&destruct_RooStudyPackage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStudyPackage*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStudyPackage*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStudyPackage*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStudyManager(void *p);
   static void deleteArray_RooStudyManager(void *p);
   static void destruct_RooStudyManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStudyManager*)
   {
      ::RooStudyManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStudyManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStudyManager", ::RooStudyManager::Class_Version(), "RooStudyManager.h", 33,
                  typeid(::RooStudyManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStudyManager::Dictionary, isa_proxy, 4,
                  sizeof(::RooStudyManager) );
      instance.SetDelete(&delete_RooStudyManager);
      instance.SetDeleteArray(&deleteArray_RooStudyManager);
      instance.SetDestructor(&destruct_RooStudyManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStudyManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStudyManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStudyManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooSuperCategory(void *p = nullptr);
   static void *newArray_RooSuperCategory(Long_t size, void *p);
   static void delete_RooSuperCategory(void *p);
   static void deleteArray_RooSuperCategory(void *p);
   static void destruct_RooSuperCategory(void *p);

   // Schema evolution read functions
   static void read_RooSuperCategory_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__catSet = oldObj->GetId("_catSet");
#endif
      struct RooSuperCategory_Onfile {
         RooSetProxy &_catSet;
         RooSuperCategory_Onfile(RooSetProxy &onfile__catSet ): _catSet(onfile__catSet) {}
      };
      static Long_t offset_Onfile_RooSuperCategory__catSet = oldObj->GetClass()->GetDataMemberOffset("_catSet");
      char *onfile_add = (char*)oldObj->GetObject();
      RooSuperCategory_Onfile onfile(
         *(RooSetProxy*)(onfile_add+offset_Onfile_RooSuperCategory__catSet) );

      static TClassRef cls("RooSuperCategory");
      static Long_t offset__multiCat = cls->GetDataMemberOffset("_multiCat");
      RooTemplateProxy<RooMultiCategory>& _multiCat = *(RooTemplateProxy<RooMultiCategory>*)(target+offset__multiCat);
      RooSuperCategory* newObj = (RooSuperCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     auto newArg = new RooMultiCategory((std::string(newObj->GetName()) + "_internalMultiCat").c_str(), newObj->GetTitle(), onfile._catSet); \
         _multiCat.setArg(*newArg); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooSuperCategory*)
   {
      ::RooSuperCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooSuperCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooSuperCategory", ::RooSuperCategory::Class_Version(), "RooSuperCategory.h", 27,
                  typeid(::RooSuperCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooSuperCategory::Dictionary, isa_proxy, 4,
                  sizeof(::RooSuperCategory) );
      instance.SetNew(&new_RooSuperCategory);
      instance.SetNewArray(&newArray_RooSuperCategory);
      instance.SetDelete(&delete_RooSuperCategory);
      instance.SetDeleteArray(&deleteArray_RooSuperCategory);
      instance.SetDestructor(&destruct_RooSuperCategory);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooSuperCategory";
      rule->fTarget      = "_multiCat";
      rule->fSource      = "RooCollectionProxy<RooArgSet> _catSet; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooSuperCategory_0);
      rule->fCode        = "auto newArg = new RooMultiCategory((std::string(newObj->GetName()) + \"_internalMultiCat\").c_str(), newObj->GetTitle(), onfile._catSet); \\n         _multiCat.setArg(*newArg); ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooSuperCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooSuperCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooSuperCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTObjWrap(void *p = nullptr);
   static void *newArray_RooTObjWrap(Long_t size, void *p);
   static void delete_RooTObjWrap(void *p);
   static void deleteArray_RooTObjWrap(void *p);
   static void destruct_RooTObjWrap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTObjWrap*)
   {
      ::RooTObjWrap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTObjWrap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTObjWrap", ::RooTObjWrap::Class_Version(), "RooTObjWrap.h", 26,
                  typeid(::RooTObjWrap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTObjWrap::Dictionary, isa_proxy, 4,
                  sizeof(::RooTObjWrap) );
      instance.SetNew(&new_RooTObjWrap);
      instance.SetNewArray(&newArray_RooTObjWrap);
      instance.SetDelete(&delete_RooTObjWrap);
      instance.SetDeleteArray(&deleteArray_RooTObjWrap);
      instance.SetDestructor(&destruct_RooTObjWrap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTObjWrap*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTObjWrap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTObjWrap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooThresholdCategory(void *p = nullptr);
   static void *newArray_RooThresholdCategory(Long_t size, void *p);
   static void delete_RooThresholdCategory(void *p);
   static void deleteArray_RooThresholdCategory(void *p);
   static void destruct_RooThresholdCategory(void *p);

   // Schema evolution read functions
   static void read_RooThresholdCategory_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__defCat = oldObj->GetId("_defCat");
      static Int_t id__threshList = oldObj->GetId("_threshList");
#endif
      struct RooThresholdCategory_Onfile {
         RooCatType* &_defCat;
         TSortedList &_threshList;
         RooThresholdCategory_Onfile(RooCatType* &onfile__defCat, TSortedList &onfile__threshList ): _defCat(onfile__defCat), _threshList(onfile__threshList) {}
      };
      static Long_t offset_Onfile_RooThresholdCategory__defCat = oldObj->GetClass()->GetDataMemberOffset("_defCat");
      static Long_t offset_Onfile_RooThresholdCategory__threshList = oldObj->GetClass()->GetDataMemberOffset("_threshList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooThresholdCategory_Onfile onfile(
         *(RooCatType**)(onfile_add+offset_Onfile_RooThresholdCategory__defCat),
         *(TSortedList*)(onfile_add+offset_Onfile_RooThresholdCategory__threshList) );

      static TClassRef cls("RooThresholdCategory");
      static Long_t offset__defIndex = cls->GetDataMemberOffset("_defIndex");
      const RooAbsCategory::value_type& _defIndex = *(const RooAbsCategory::value_type*)(target+offset__defIndex);
      static Long_t offset__threshList = cls->GetDataMemberOffset("_threshList");
      vector<pair<double,RooAbsCategory::value_type> >& _threshList = *(vector<pair<double,RooAbsCategory::value_type> >*)(target+offset__threshList);
      RooThresholdCategory* newObj = (RooThresholdCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     const_cast<int&>(_defIndex) = onfile._defCat->getVal(); \
         class RooThreshEntry : public TObject { public: double _thresh; RooCatType _cat;}; \
         for(auto * te : static_range_cast<RooThreshEntry*>(onfile._threshList)) { \
           _threshList.emplace_back(te->_thresh, te->_cat.getVal()); \
         }\
         
   }
   static void read_RooThresholdCategory_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__defCat = oldObj->GetId("_defCat");
      static Int_t id__threshList = oldObj->GetId("_threshList");
#endif
      struct RooThresholdCategory_Onfile {
         RooCatType* &_defCat;
         std::vector<std::pair<double,RooCatType>> &_threshList;
         RooThresholdCategory_Onfile(RooCatType* &onfile__defCat, std::vector<std::pair<double,RooCatType>> &onfile__threshList ): _defCat(onfile__defCat), _threshList(onfile__threshList) {}
      };
      static Long_t offset_Onfile_RooThresholdCategory__defCat = oldObj->GetClass()->GetDataMemberOffset("_defCat");
      static Long_t offset_Onfile_RooThresholdCategory__threshList = oldObj->GetClass()->GetDataMemberOffset("_threshList");
      char *onfile_add = (char*)oldObj->GetObject();
      RooThresholdCategory_Onfile onfile(
         *(RooCatType**)(onfile_add+offset_Onfile_RooThresholdCategory__defCat),
         *(std::vector<std::pair<double,RooCatType>>*)(onfile_add+offset_Onfile_RooThresholdCategory__threshList) );

      static TClassRef cls("RooThresholdCategory");
      static Long_t offset__defIndex = cls->GetDataMemberOffset("_defIndex");
      const RooAbsCategory::value_type& _defIndex = *(const RooAbsCategory::value_type*)(target+offset__defIndex);
      static Long_t offset__threshList = cls->GetDataMemberOffset("_threshList");
      vector<pair<double,RooAbsCategory::value_type> >& _threshList = *(vector<pair<double,RooAbsCategory::value_type> >*)(target+offset__threshList);
      RooThresholdCategory* newObj = (RooThresholdCategory*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     const_cast<int&>(_defIndex) = onfile._defCat->getVal(); \
         for (const auto& threshCatPair : onfile._threshList) { \
           _threshList.emplace_back(threshCatPair.first, threshCatPair.second.getVal()); \
         }\
         
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooThresholdCategory*)
   {
      ::RooThresholdCategory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooThresholdCategory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooThresholdCategory", ::RooThresholdCategory::Class_Version(), "RooThresholdCategory.h", 24,
                  typeid(::RooThresholdCategory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooThresholdCategory::Dictionary, isa_proxy, 4,
                  sizeof(::RooThresholdCategory) );
      instance.SetNew(&new_RooThresholdCategory);
      instance.SetNewArray(&newArray_RooThresholdCategory);
      instance.SetDelete(&delete_RooThresholdCategory);
      instance.SetDeleteArray(&deleteArray_RooThresholdCategory);
      instance.SetDestructor(&destruct_RooThresholdCategory);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(2);
      rule = &readrules[0];
      rule->fSourceClass = "RooThresholdCategory";
      rule->fTarget      = "_defIndex,_threshList";
      rule->fSource      = "RooCatType* _defCat; TSortedList _threshList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooThresholdCategory_0);
      rule->fCode        = "const_cast<int&>(_defIndex) = onfile._defCat->getVal(); \\n         class RooThreshEntry : public TObject { public: double _thresh; RooCatType _cat;}; \\n         for(auto * te : static_range_cast<RooThreshEntry*>(onfile._threshList)) { \\n           _threshList.emplace_back(te->_thresh, te->_cat.getVal()); \\n         }\\n         ";
      rule->fVersion     = "[1]";
      rule->fInclude     = "TSortedList.h";
      rule = &readrules[1];
      rule->fSourceClass = "RooThresholdCategory";
      rule->fTarget      = "_defIndex,_threshList";
      rule->fSource      = "RooCatType* _defCat; vector<pair<double,RooCatType> > _threshList; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooThresholdCategory_1);
      rule->fCode        = "const_cast<int&>(_defIndex) = onfile._defCat->getVal(); \\n         for (const auto& threshCatPair : onfile._threshList) { \\n           _threshList.emplace_back(threshCatPair.first, threshCatPair.second.getVal()); \\n         }\\n         ";
      rule->fVersion     = "[2]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooThresholdCategory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooThresholdCategory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooThresholdCategory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTreeDataStore(void *p = nullptr);
   static void *newArray_RooTreeDataStore(Long_t size, void *p);
   static void delete_RooTreeDataStore(void *p);
   static void deleteArray_RooTreeDataStore(void *p);
   static void destruct_RooTreeDataStore(void *p);
   static void streamer_RooTreeDataStore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTreeDataStore*)
   {
      ::RooTreeDataStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTreeDataStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTreeDataStore", ::RooTreeDataStore::Class_Version(), "RooTreeDataStore.h", 34,
                  typeid(::RooTreeDataStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTreeDataStore::Dictionary, isa_proxy, 17,
                  sizeof(::RooTreeDataStore) );
      instance.SetNew(&new_RooTreeDataStore);
      instance.SetNewArray(&newArray_RooTreeDataStore);
      instance.SetDelete(&delete_RooTreeDataStore);
      instance.SetDeleteArray(&deleteArray_RooTreeDataStore);
      instance.SetDestructor(&destruct_RooTreeDataStore);
      instance.SetStreamerFunc(&streamer_RooTreeDataStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTreeDataStore*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTreeDataStore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTreeDataStore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooTruthModel(void *p = nullptr);
   static void *newArray_RooTruthModel(Long_t size, void *p);
   static void delete_RooTruthModel(void *p);
   static void deleteArray_RooTruthModel(void *p);
   static void destruct_RooTruthModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooTruthModel*)
   {
      ::RooTruthModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooTruthModel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooTruthModel", ::RooTruthModel::Class_Version(), "RooTruthModel.h", 21,
                  typeid(::RooTruthModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooTruthModel::Dictionary, isa_proxy, 4,
                  sizeof(::RooTruthModel) );
      instance.SetNew(&new_RooTruthModel);
      instance.SetNewArray(&newArray_RooTruthModel);
      instance.SetDelete(&delete_RooTruthModel);
      instance.SetDeleteArray(&deleteArray_RooTruthModel);
      instance.SetDestructor(&destruct_RooTruthModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooTruthModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooTruthModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooTruthModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooUniformBinning(void *p = nullptr);
   static void *newArray_RooUniformBinning(Long_t size, void *p);
   static void delete_RooUniformBinning(void *p);
   static void deleteArray_RooUniformBinning(void *p);
   static void destruct_RooUniformBinning(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooUniformBinning*)
   {
      ::RooUniformBinning *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooUniformBinning >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooUniformBinning", ::RooUniformBinning::Class_Version(), "RooUniformBinning.h", 22,
                  typeid(::RooUniformBinning), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooUniformBinning::Dictionary, isa_proxy, 4,
                  sizeof(::RooUniformBinning) );
      instance.SetNew(&new_RooUniformBinning);
      instance.SetNewArray(&newArray_RooUniformBinning);
      instance.SetDelete(&delete_RooUniformBinning);
      instance.SetDeleteArray(&deleteArray_RooUniformBinning);
      instance.SetDestructor(&destruct_RooUniformBinning);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooUniformBinning*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooUniformBinning*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooUniformBinning*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooVectorDataStore(void *p = nullptr);
   static void *newArray_RooVectorDataStore(Long_t size, void *p);
   static void delete_RooVectorDataStore(void *p);
   static void deleteArray_RooVectorDataStore(void *p);
   static void destruct_RooVectorDataStore(void *p);
   static void streamer_RooVectorDataStore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooVectorDataStore*)
   {
      ::RooVectorDataStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooVectorDataStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooVectorDataStore", ::RooVectorDataStore::Class_Version(), "RooVectorDataStore.h", 41,
                  typeid(::RooVectorDataStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooVectorDataStore::Dictionary, isa_proxy, 17,
                  sizeof(::RooVectorDataStore) );
      instance.SetNew(&new_RooVectorDataStore);
      instance.SetNewArray(&newArray_RooVectorDataStore);
      instance.SetDelete(&delete_RooVectorDataStore);
      instance.SetDeleteArray(&deleteArray_RooVectorDataStore);
      instance.SetDestructor(&destruct_RooVectorDataStore);
      instance.SetStreamerFunc(&streamer_RooVectorDataStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooVectorDataStore*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooVectorDataStore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooVectorDataStore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooVectorDataStorecLcLRealVector(void *p = nullptr);
   static void *newArray_RooVectorDataStorecLcLRealVector(Long_t size, void *p);
   static void delete_RooVectorDataStorecLcLRealVector(void *p);
   static void deleteArray_RooVectorDataStorecLcLRealVector(void *p);
   static void destruct_RooVectorDataStorecLcLRealVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooVectorDataStore::RealVector*)
   {
      ::RooVectorDataStore::RealVector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooVectorDataStore::RealVector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooVectorDataStore::RealVector", ::RooVectorDataStore::RealVector::Class_Version(), "RooVectorDataStore.h", 194,
                  typeid(::RooVectorDataStore::RealVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooVectorDataStore::RealVector::Dictionary, isa_proxy, 4,
                  sizeof(::RooVectorDataStore::RealVector) );
      instance.SetNew(&new_RooVectorDataStorecLcLRealVector);
      instance.SetNewArray(&newArray_RooVectorDataStorecLcLRealVector);
      instance.SetDelete(&delete_RooVectorDataStorecLcLRealVector);
      instance.SetDeleteArray(&deleteArray_RooVectorDataStorecLcLRealVector);
      instance.SetDestructor(&destruct_RooVectorDataStorecLcLRealVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooVectorDataStore::RealVector*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooVectorDataStore::RealVector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooVectorDataStore::RealVector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooVectorDataStorecLcLRealFullVector(void *p = nullptr);
   static void *newArray_RooVectorDataStorecLcLRealFullVector(Long_t size, void *p);
   static void delete_RooVectorDataStorecLcLRealFullVector(void *p);
   static void deleteArray_RooVectorDataStorecLcLRealFullVector(void *p);
   static void destruct_RooVectorDataStorecLcLRealFullVector(void *p);

   // Schema evolution read functions
   static void read_RooVectorDataStorecLcLRealFullVector_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__vecE = oldObj->GetId("_vecE");
      static Int_t id__vecEL = oldObj->GetId("_vecEL");
      static Int_t id__vecEH = oldObj->GetId("_vecEH");
#endif
      struct RooVectorDataStorecLcLRealFullVector_Onfile {
         std::vector<double>* &_vecE;
         std::vector<double>* &_vecEL;
         std::vector<double>* &_vecEH;
         RooVectorDataStorecLcLRealFullVector_Onfile(std::vector<double>* &onfile__vecE, std::vector<double>* &onfile__vecEL, std::vector<double>* &onfile__vecEH ): _vecE(onfile__vecE), _vecEL(onfile__vecEL), _vecEH(onfile__vecEH) {}
      };
      static Long_t offset_Onfile_RooVectorDataStorecLcLRealFullVector__vecE = oldObj->GetClass()->GetDataMemberOffset("_vecE");
      static Long_t offset_Onfile_RooVectorDataStorecLcLRealFullVector__vecEL = oldObj->GetClass()->GetDataMemberOffset("_vecEL");
      static Long_t offset_Onfile_RooVectorDataStorecLcLRealFullVector__vecEH = oldObj->GetClass()->GetDataMemberOffset("_vecEH");
      char *onfile_add = (char*)oldObj->GetObject();
      RooVectorDataStorecLcLRealFullVector_Onfile onfile(
         *(std::vector<double>**)(onfile_add+offset_Onfile_RooVectorDataStorecLcLRealFullVector__vecE),
         *(std::vector<double>**)(onfile_add+offset_Onfile_RooVectorDataStorecLcLRealFullVector__vecEL),
         *(std::vector<double>**)(onfile_add+offset_Onfile_RooVectorDataStorecLcLRealFullVector__vecEH) );

      static TClassRef cls("RooVectorDataStore::RealFullVector");
      static Long_t offset__vecE = cls->GetDataMemberOffset("_vecE");
      vector<double>& _vecE = *(vector<double>*)(target+offset__vecE);
      static Long_t offset__vecEL = cls->GetDataMemberOffset("_vecEL");
      vector<double>& _vecEL = *(vector<double>*)(target+offset__vecEL);
      static Long_t offset__vecEH = cls->GetDataMemberOffset("_vecEH");
      vector<double>& _vecEH = *(vector<double>*)(target+offset__vecEH);
      RooVectorDataStore::RealFullVector* newObj = (RooVectorDataStore::RealFullVector*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      if(onfile._vecE) { _vecE = *onfile._vecE; }     \
          if(onfile._vecEL) { _vecEL = *onfile._vecEL; }  \
          if(onfile._vecEH) { _vecEH = *onfile._vecEH; }  
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooVectorDataStore::RealFullVector*)
   {
      ::RooVectorDataStore::RealFullVector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooVectorDataStore::RealFullVector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooVectorDataStore::RealFullVector", ::RooVectorDataStore::RealFullVector::Class_Version(), "RooVectorDataStore.h", 340,
                  typeid(::RooVectorDataStore::RealFullVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooVectorDataStore::RealFullVector::Dictionary, isa_proxy, 4,
                  sizeof(::RooVectorDataStore::RealFullVector) );
      instance.SetNew(&new_RooVectorDataStorecLcLRealFullVector);
      instance.SetNewArray(&newArray_RooVectorDataStorecLcLRealFullVector);
      instance.SetDelete(&delete_RooVectorDataStorecLcLRealFullVector);
      instance.SetDeleteArray(&deleteArray_RooVectorDataStorecLcLRealFullVector);
      instance.SetDestructor(&destruct_RooVectorDataStorecLcLRealFullVector);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooVectorDataStore::RealFullVector";
      rule->fTarget      = "_vecE, _vecEL, _vecEH";
      rule->fSource      = "vector<double>* _vecE; vector<double>* _vecEL; vector<double>* _vecEH; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooVectorDataStorecLcLRealFullVector_0);
      rule->fCode        = " if(onfile._vecE) { _vecE = *onfile._vecE; }     \\n          if(onfile._vecEL) { _vecEL = *onfile._vecEL; }  \\n          if(onfile._vecEH) { _vecEH = *onfile._vecEH; }  ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooVectorDataStore::RealFullVector*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooVectorDataStore::RealFullVector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooVectorDataStore::RealFullVector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooVectorDataStorecLcLCatVector(void *p = nullptr);
   static void *newArray_RooVectorDataStorecLcLCatVector(Long_t size, void *p);
   static void delete_RooVectorDataStorecLcLCatVector(void *p);
   static void deleteArray_RooVectorDataStorecLcLCatVector(void *p);
   static void destruct_RooVectorDataStorecLcLCatVector(void *p);

   // Schema evolution read functions
   static void read_RooVectorDataStorecLcLCatVector_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id__vec = oldObj->GetId("_vec");
#endif
      struct RooVectorDataStorecLcLCatVector_Onfile {
         std::vector<RooCatType> &_vec;
         RooVectorDataStorecLcLCatVector_Onfile(std::vector<RooCatType> &onfile__vec ): _vec(onfile__vec) {}
      };
      static Long_t offset_Onfile_RooVectorDataStorecLcLCatVector__vec = oldObj->GetClass()->GetDataMemberOffset("_vec");
      char *onfile_add = (char*)oldObj->GetObject();
      RooVectorDataStorecLcLCatVector_Onfile onfile(
         *(std::vector<RooCatType>*)(onfile_add+offset_Onfile_RooVectorDataStorecLcLCatVector__vec) );

      static TClassRef cls("RooVectorDataStore::CatVector");
      static Long_t offset__vec = cls->GetDataMemberOffset("_vec");
      vector<RooAbsCategory::value_type>& _vec = *(vector<RooAbsCategory::value_type>*)(target+offset__vec);
      RooVectorDataStore::CatVector* newObj = (RooVectorDataStore::CatVector*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     _vec.reserve(onfile._vec.size()); for (const auto& cat : onfile._vec) { _vec.push_back(cat.getVal()); } 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooVectorDataStore::CatVector*)
   {
      ::RooVectorDataStore::CatVector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooVectorDataStore::CatVector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooVectorDataStore::CatVector", ::RooVectorDataStore::CatVector::Class_Version(), "RooVectorDataStore.h", 430,
                  typeid(::RooVectorDataStore::CatVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooVectorDataStore::CatVector::Dictionary, isa_proxy, 4,
                  sizeof(::RooVectorDataStore::CatVector) );
      instance.SetNew(&new_RooVectorDataStorecLcLCatVector);
      instance.SetNewArray(&newArray_RooVectorDataStorecLcLCatVector);
      instance.SetDelete(&delete_RooVectorDataStorecLcLCatVector);
      instance.SetDeleteArray(&deleteArray_RooVectorDataStorecLcLCatVector);
      instance.SetDestructor(&destruct_RooVectorDataStorecLcLCatVector);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooVectorDataStore::CatVector";
      rule->fTarget      = "_vec";
      rule->fSource      = "vector<RooCatType> _vec; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooVectorDataStorecLcLCatVector_0);
      rule->fCode        = "_vec.reserve(onfile._vec.size()); for (const auto& cat : onfile._vec) { _vec.push_back(cat.getVal()); } ";
      rule->fVersion     = "[1]";
      rule->fInclude     = "RooFitLegacy/RooCatTypeLegacy.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooVectorDataStore::CatVector*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooVectorDataStore::CatVector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooVectorDataStore::CatVector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooWrapperPdf(void *p = nullptr);
   static void *newArray_RooWrapperPdf(Long_t size, void *p);
   static void delete_RooWrapperPdf(void *p);
   static void deleteArray_RooWrapperPdf(void *p);
   static void destruct_RooWrapperPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooWrapperPdf*)
   {
      ::RooWrapperPdf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooWrapperPdf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooWrapperPdf", ::RooWrapperPdf::Class_Version(), "RooWrapperPdf.h", 24,
                  typeid(::RooWrapperPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooWrapperPdf::Dictionary, isa_proxy, 4,
                  sizeof(::RooWrapperPdf) );
      instance.SetNew(&new_RooWrapperPdf);
      instance.SetNewArray(&newArray_RooWrapperPdf);
      instance.SetDelete(&delete_RooWrapperPdf);
      instance.SetDeleteArray(&deleteArray_RooWrapperPdf);
      instance.SetDestructor(&destruct_RooWrapperPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooWrapperPdf*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooWrapperPdf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooWrapperPdf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCache::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCache::Class_Name()
{
   return "RooAbsCache";
}

//______________________________________________________________________________
const char *RooAbsCache::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCache*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCache::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCache*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCache::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCache*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCache::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCache*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLinkedListElem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLinkedListElem::Class_Name()
{
   return "RooLinkedListElem";
}

//______________________________________________________________________________
const char *RooLinkedListElem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedListElem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLinkedListElem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedListElem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLinkedListElem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedListElem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLinkedListElem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedListElem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooSTLRefCountList<RooAbsArg>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooSTLRefCountList<RooAbsArg>::Class_Name()
{
   return "RooSTLRefCountList<RooAbsArg>";
}

//______________________________________________________________________________
template <> const char *RooSTLRefCountList<RooAbsArg>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSTLRefCountList<RooAbsArg>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooSTLRefCountList<RooAbsArg>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSTLRefCountList<RooAbsArg>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooSTLRefCountList<RooAbsArg>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSTLRefCountList<RooAbsArg>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooSTLRefCountList<RooAbsArg>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSTLRefCountList<RooAbsArg>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLinkedList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLinkedList::Class_Name()
{
   return "RooLinkedList";
}

//______________________________________________________________________________
const char *RooLinkedList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLinkedList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLinkedList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLinkedList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinkedList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPrintable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPrintable::Class_Name()
{
   return "RooPrintable";
}

//______________________________________________________________________________
const char *RooPrintable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPrintable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPrintable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPrintable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPrintable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPrintable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPrintable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPrintable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCollectionProxy<RooArgSet>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCollectionProxy<RooArgSet>::Class_Name()
{
   return "RooCollectionProxy<RooArgSet>";
}

//______________________________________________________________________________
template <> const char *RooCollectionProxy<RooArgSet>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgSet>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCollectionProxy<RooArgSet>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgSet>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCollectionProxy<RooArgSet>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgSet>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCollectionProxy<RooArgSet>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgSet>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCollectionProxy<RooArgList>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCollectionProxy<RooArgList>::Class_Name()
{
   return "RooCollectionProxy<RooArgList>";
}

//______________________________________________________________________________
template <> const char *RooCollectionProxy<RooArgList>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgList>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCollectionProxy<RooArgList>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgList>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCollectionProxy<RooArgList>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgList>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCollectionProxy<RooArgList>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCollectionProxy<RooArgList>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRefArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRefArray::Class_Name()
{
   return "RooRefArray";
}

//______________________________________________________________________________
const char *RooRefArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRefArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRefArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRefArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRefArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRefArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRefArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRefArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsArg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsArg::Class_Name()
{
   return "RooAbsArg";
}

//______________________________________________________________________________
const char *RooAbsArg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsArg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsArg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsArg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsArg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsArg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsArg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCategory::Class_Name()
{
   return "RooAbsCategory";
}

//______________________________________________________________________________
const char *RooAbsCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTable::Class_Name()
{
   return "RooTable";
}

//______________________________________________________________________________
const char *RooTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Roo1DTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Roo1DTable::Class_Name()
{
   return "Roo1DTable";
}

//______________________________________________________________________________
const char *Roo1DTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo1DTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Roo1DTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Roo1DTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Roo1DTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo1DTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Roo1DTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Roo1DTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAICRegistry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAICRegistry::Class_Name()
{
   return "RooAICRegistry";
}

//______________________________________________________________________________
const char *RooAICRegistry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAICRegistry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAICRegistry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAICRegistry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAICRegistry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAICRegistry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAICRegistry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAICRegistry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCmdArg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCmdArg::Class_Name()
{
   return "RooCmdArg";
}

//______________________________________________________________________________
const char *RooCmdArg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCmdArg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCmdArg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCmdArg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCmdArg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCmdArg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCmdArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCmdArg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCollection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCollection::Class_Name()
{
   return "RooAbsCollection";
}

//______________________________________________________________________________
const char *RooAbsCollection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCollection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCollection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCollection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCollection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCollection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCollection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCollection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooArgList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooArgList::Class_Name()
{
   return "RooArgList";
}

//______________________________________________________________________________
const char *RooArgList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooArgList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooArgList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooArgList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsProxy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsProxy::Class_Name()
{
   return "RooAbsProxy";
}

//______________________________________________________________________________
const char *RooAbsProxy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsProxy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsProxy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsProxy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsProxy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsProxy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsProxy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsProxy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooArgProxy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooArgProxy::Class_Name()
{
   return "RooArgProxy";
}

//______________________________________________________________________________
const char *RooArgProxy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgProxy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooArgProxy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgProxy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooArgProxy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgProxy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooArgProxy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgProxy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooArgSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooArgSet::Class_Name()
{
   return "RooArgSet";
}

//______________________________________________________________________________
const char *RooArgSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooArgSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooArgSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooArgSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooArgSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooArgSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPlotable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPlotable::Class_Name()
{
   return "RooPlotable";
}

//______________________________________________________________________________
const char *RooPlotable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPlotable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPlotable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPlotable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPlotable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPlotable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPlotable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPlotable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCurve::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCurve::Class_Name()
{
   return "RooCurve";
}

//______________________________________________________________________________
const char *RooCurve::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCurve*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCurve::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCurve*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCurve::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCurve*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCurve::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCurve*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooAbsReal>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsReal>::Class_Name()
{
   return "RooTemplateProxy<RooAbsReal>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsReal>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsReal>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooAbsReal>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsReal>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsReal>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsReal>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsReal>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsReal>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooAbsCategory>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsCategory>::Class_Name()
{
   return "RooTemplateProxy<RooAbsCategory>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsCategory>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategory>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooAbsCategory>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategory>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsCategory>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategory>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsCategory>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategory>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooAbsRealLValue>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsRealLValue>::Class_Name()
{
   return "RooTemplateProxy<RooAbsRealLValue>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsRealLValue>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsRealLValue>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooAbsRealLValue>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsRealLValue>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsRealLValue>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsRealLValue>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsRealLValue>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsRealLValue>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooAbsPdf>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsPdf>::Class_Name()
{
   return "RooTemplateProxy<RooAbsPdf>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsPdf>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsPdf>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooAbsPdf>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsPdf>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsPdf>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsPdf>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsPdf>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsPdf>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<const RooHistFunc>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<const RooHistFunc>::Class_Name()
{
   return "RooTemplateProxy<const RooHistFunc>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<const RooHistFunc>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<const RooHistFunc>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<const RooHistFunc>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<const RooHistFunc>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<const RooHistFunc>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<const RooHistFunc>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<const RooHistFunc>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<const RooHistFunc>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooRealVar>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooRealVar>::Class_Name()
{
   return "RooTemplateProxy<RooRealVar>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooRealVar>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooRealVar>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooRealVar>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooRealVar>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooRealVar>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooRealVar>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooRealVar>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooRealVar>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooMultiCategory>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooMultiCategory>::Class_Name()
{
   return "RooTemplateProxy<RooMultiCategory>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooMultiCategory>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooMultiCategory>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooMultiCategory>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooMultiCategory>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooMultiCategory>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooMultiCategory>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooMultiCategory>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooMultiCategory>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooAbsCategoryLValue>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsCategoryLValue>::Class_Name()
{
   return "RooTemplateProxy<RooAbsCategoryLValue>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooAbsCategoryLValue>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategoryLValue>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooAbsCategoryLValue>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategoryLValue>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsCategoryLValue>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategoryLValue>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooAbsCategoryLValue>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooAbsCategoryLValue>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooTemplateProxy<RooHistFunc>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooHistFunc>::Class_Name()
{
   return "RooTemplateProxy<RooHistFunc>";
}

//______________________________________________________________________________
template <> const char *RooTemplateProxy<RooHistFunc>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooHistFunc>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooTemplateProxy<RooHistFunc>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooHistFunc>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooHistFunc>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooHistFunc>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooTemplateProxy<RooHistFunc>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTemplateProxy<RooHistFunc>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsReal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsReal::Class_Name()
{
   return "RooAbsReal";
}

//______________________________________________________________________________
const char *RooAbsReal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsReal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsReal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsReal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsReal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsReal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsReal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsReal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsData::Class_Name()
{
   return "RooAbsData";
}

//______________________________________________________________________________
const char *RooAbsData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDirItem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDirItem::Class_Name()
{
   return "RooDirItem";
}

//______________________________________________________________________________
const char *RooDirItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDirItem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDirItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDirItem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDirItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDirItem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDirItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDirItem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDataHist::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDataHist::Class_Name()
{
   return "RooDataHist";
}

//______________________________________________________________________________
const char *RooDataHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataHist*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDataHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataHist*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDataHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataHist*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDataHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataHist*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDataSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDataSet::Class_Name()
{
   return "RooDataSet";
}

//______________________________________________________________________________
const char *RooDataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCacheElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCacheElement::Class_Name()
{
   return "RooAbsCacheElement";
}

//______________________________________________________________________________
const char *RooAbsCacheElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCacheElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCacheElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCacheElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCacheElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCacheElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCacheElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCacheElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMsgService::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMsgService::Class_Name()
{
   return "RooMsgService";
}

//______________________________________________________________________________
const char *RooMsgService::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMsgService*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMsgService::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMsgService*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMsgService::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMsgService*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMsgService::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMsgService*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCacheManager<RooAbsCacheElement>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCacheManager<RooAbsCacheElement>::Class_Name()
{
   return "RooCacheManager<RooAbsCacheElement>";
}

//______________________________________________________________________________
template <> const char *RooCacheManager<RooAbsCacheElement>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<RooAbsCacheElement>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCacheManager<RooAbsCacheElement>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<RooAbsCacheElement>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCacheManager<RooAbsCacheElement>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<RooAbsCacheElement>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCacheManager<RooAbsCacheElement>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<RooAbsCacheElement>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooCacheManager<vector<double> >::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooCacheManager<vector<double> >::Class_Name()
{
   return "RooCacheManager<vector<double> >";
}

//______________________________________________________________________________
template <> const char *RooCacheManager<vector<double> >::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<vector<double> >*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooCacheManager<vector<double> >::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<vector<double> >*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooCacheManager<vector<double> >::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<vector<double> >*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooCacheManager<vector<double> >::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCacheManager<vector<double> >*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooObjCacheManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooObjCacheManager::Class_Name()
{
   return "RooObjCacheManager";
}

//______________________________________________________________________________
const char *RooObjCacheManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooObjCacheManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooObjCacheManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooObjCacheManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooObjCacheManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooObjCacheManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooObjCacheManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooObjCacheManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsPdf::Class_Name()
{
   return "RooAbsPdf";
}

//______________________________________________________________________________
const char *RooAbsPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsPdf::GenSpec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsPdf::GenSpec::Class_Name()
{
   return "RooAbsPdf::GenSpec";
}

//______________________________________________________________________________
const char *RooAbsPdf::GenSpec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf::GenSpec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsPdf::GenSpec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf::GenSpec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsPdf::GenSpec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf::GenSpec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsPdf::GenSpec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsPdf::GenSpec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsLValue::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsLValue::Class_Name()
{
   return "RooAbsLValue";
}

//______________________________________________________________________________
const char *RooAbsLValue::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsLValue*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsLValue::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsLValue*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsLValue::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsLValue*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsLValue::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsLValue*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsBinning::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsBinning::Class_Name()
{
   return "RooAbsBinning";
}

//______________________________________________________________________________
const char *RooAbsBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsBinning*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsBinning*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsBinning*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsBinning*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsRealLValue::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsRealLValue::Class_Name()
{
   return "RooAbsRealLValue";
}

//______________________________________________________________________________
const char *RooAbsRealLValue::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsRealLValue*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsRealLValue::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsRealLValue*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsRealLValue::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsRealLValue*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsRealLValue::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsRealLValue*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsAnaConvPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsAnaConvPdf::Class_Name()
{
   return "RooAbsAnaConvPdf";
}

//______________________________________________________________________________
const char *RooAbsAnaConvPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsAnaConvPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsAnaConvPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsAnaConvPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsAnaConvPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsAnaConvPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsAnaConvPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsAnaConvPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooHistPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooHistPdf::Class_Name()
{
   return "RooHistPdf";
}

//______________________________________________________________________________
const char *RooHistPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooHistPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooHistPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooHistPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooChangeTracker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooChangeTracker::Class_Name()
{
   return "RooChangeTracker";
}

//______________________________________________________________________________
const char *RooChangeTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChangeTracker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooChangeTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooChangeTracker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooChangeTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChangeTracker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooChangeTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooChangeTracker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCachedPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCachedPdf::Class_Name()
{
   return "RooAbsCachedPdf";
}

//______________________________________________________________________________
const char *RooAbsCachedPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCachedPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCachedPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCachedPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTrace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTrace::Class_Name()
{
   return "RooTrace";
}

//______________________________________________________________________________
const char *RooTrace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTrace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTrace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTrace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTrace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTrace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTrace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTrace*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooHistFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooHistFunc::Class_Name()
{
   return "RooHistFunc";
}

//______________________________________________________________________________
const char *RooHistFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooHistFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHistFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooHistFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooHistFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHistFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCachedReal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCachedReal::Class_Name()
{
   return "RooAbsCachedReal";
}

//______________________________________________________________________________
const char *RooAbsCachedReal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedReal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCachedReal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedReal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCachedReal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedReal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCachedReal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCachedReal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsCategoryLValue::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsCategoryLValue::Class_Name()
{
   return "RooAbsCategoryLValue";
}

//______________________________________________________________________________
const char *RooAbsCategoryLValue::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategoryLValue*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsCategoryLValue::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategoryLValue*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsCategoryLValue::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategoryLValue*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsCategoryLValue::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsCategoryLValue*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSharedProperties::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSharedProperties::Class_Name()
{
   return "RooSharedProperties";
}

//______________________________________________________________________________
const char *RooSharedProperties::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSharedProperties*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSharedProperties::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSharedProperties*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSharedProperties::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSharedProperties*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSharedProperties::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSharedProperties*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealVar::Class_Name()
{
   return "RooRealVar";
}

//______________________________________________________________________________
const char *RooRealVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsDataStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsDataStore::Class_Name()
{
   return "RooAbsDataStore";
}

//______________________________________________________________________________
const char *RooAbsDataStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsDataStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsDataStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsDataStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsDataStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsDataStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsDataStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsDataStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsFunc::Class_Name()
{
   return "RooAbsFunc";
}

//______________________________________________________________________________
const char *RooAbsFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsGenContext::Class_Name()
{
   return "RooAbsGenContext";
}

//______________________________________________________________________________
const char *RooAbsGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsHiddenReal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsHiddenReal::Class_Name()
{
   return "RooAbsHiddenReal";
}

//______________________________________________________________________________
const char *RooAbsHiddenReal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsHiddenReal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsHiddenReal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsHiddenReal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsHiddenReal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsHiddenReal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsHiddenReal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsHiddenReal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCategory::Class_Name()
{
   return "RooCategory";
}

//______________________________________________________________________________
const char *RooCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumIntConfig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumIntConfig::Class_Name()
{
   return "RooNumIntConfig";
}

//______________________________________________________________________________
const char *RooNumIntConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntConfig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumIntConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntConfig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumIntConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntConfig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumIntConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntConfig*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMCStudy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMCStudy::Class_Name()
{
   return "RooMCStudy";
}

//______________________________________________________________________________
const char *RooMCStudy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMCStudy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMCStudy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMCStudy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMCStudy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMCStudy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMCStudy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMCStudy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsMCStudyModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsMCStudyModule::Class_Name()
{
   return "RooAbsMCStudyModule";
}

//______________________________________________________________________________
const char *RooAbsMCStudyModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMCStudyModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsMCStudyModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMCStudyModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsMCStudyModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMCStudyModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsMCStudyModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMCStudyModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsMoment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsMoment::Class_Name()
{
   return "RooAbsMoment";
}

//______________________________________________________________________________
const char *RooAbsMoment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMoment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsMoment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMoment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsMoment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMoment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsMoment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsMoment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooAbsSelfCached<RooAbsCachedReal>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooAbsSelfCached<RooAbsCachedReal>::Class_Name()
{
   return "RooAbsSelfCached<RooAbsCachedReal>";
}

//______________________________________________________________________________
template <> const char *RooAbsSelfCached<RooAbsCachedReal>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedReal>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooAbsSelfCached<RooAbsCachedReal>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedReal>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooAbsSelfCached<RooAbsCachedReal>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedReal>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooAbsSelfCached<RooAbsCachedReal>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedReal>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RooAbsSelfCached<RooAbsCachedPdf>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RooAbsSelfCached<RooAbsCachedPdf>::Class_Name()
{
   return "RooAbsSelfCached<RooAbsCachedPdf>";
}

//______________________________________________________________________________
template <> const char *RooAbsSelfCached<RooAbsCachedPdf>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedPdf>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RooAbsSelfCached<RooAbsCachedPdf>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedPdf>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RooAbsSelfCached<RooAbsCachedPdf>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedPdf>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RooAbsSelfCached<RooAbsCachedPdf>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsSelfCached<RooAbsCachedPdf>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAbsStudy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAbsStudy::Class_Name()
{
   return "RooAbsStudy";
}

//______________________________________________________________________________
const char *RooAbsStudy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsStudy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAbsStudy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAbsStudy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAbsStudy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsStudy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAbsStudy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAbsStudy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAddPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAddPdf::Class_Name()
{
   return "RooAddPdf";
}

//______________________________________________________________________________
const char *RooAddPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAddPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAddPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAddPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFormulaVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFormulaVar::Class_Name()
{
   return "RooFormulaVar";
}

//______________________________________________________________________________
const char *RooFormulaVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFormulaVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFormulaVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFormulaVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFormulaVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFormulaVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFormulaVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFormulaVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooResolutionModel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooResolutionModel::Class_Name()
{
   return "RooResolutionModel";
}

//______________________________________________________________________________
const char *RooResolutionModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooResolutionModel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooResolutionModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooResolutionModel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooResolutionModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooResolutionModel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooResolutionModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooResolutionModel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAddModel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAddModel::Class_Name()
{
   return "RooAddModel";
}

//______________________________________________________________________________
const char *RooAddModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddModel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAddModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddModel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAddModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddModel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAddModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddModel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGenContext::Class_Name()
{
   return "RooGenContext";
}

//______________________________________________________________________________
const char *RooGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAddGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAddGenContext::Class_Name()
{
   return "RooAddGenContext";
}

//______________________________________________________________________________
const char *RooAddGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAddGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAddGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAddGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooAddition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooAddition::Class_Name()
{
   return "RooAddition";
}

//______________________________________________________________________________
const char *RooAddition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooAddition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooAddition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooAddition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooAddition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooAddition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBinSamplingPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBinSamplingPdf::Class_Name()
{
   return "RooBinSamplingPdf";
}

//______________________________________________________________________________
const char *RooBinSamplingPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinSamplingPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBinSamplingPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinSamplingPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBinSamplingPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinSamplingPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBinSamplingPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinSamplingPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBinWidthFunction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBinWidthFunction::Class_Name()
{
   return "RooBinWidthFunction";
}

//______________________________________________________________________________
const char *RooBinWidthFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinWidthFunction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBinWidthFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinWidthFunction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBinWidthFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinWidthFunction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBinWidthFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinWidthFunction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBinnedGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBinnedGenContext::Class_Name()
{
   return "RooBinnedGenContext";
}

//______________________________________________________________________________
const char *RooBinnedGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinnedGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBinnedGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinnedGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBinnedGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinnedGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBinnedGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinnedGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBinning::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBinning::Class_Name()
{
   return "RooBinning";
}

//______________________________________________________________________________
const char *RooBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinning*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinning*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinning*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinning*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBinningCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBinningCategory::Class_Name()
{
   return "RooBinningCategory";
}

//______________________________________________________________________________
const char *RooBinningCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinningCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBinningCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBinningCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBinningCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinningCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBinningCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBinningCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooBrentRootFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBrentRootFinder::Class_Name()
{
   return "RooBrentRootFinder";
}

//______________________________________________________________________________
const char *RooBrentRootFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBrentRootFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBrentRootFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooBrentRootFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBrentRootFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBrentRootFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBrentRootFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooBrentRootFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCachedPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCachedPdf::Class_Name()
{
   return "RooCachedPdf";
}

//______________________________________________________________________________
const char *RooCachedPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCachedPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCachedPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCachedPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCachedPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCachedPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCachedPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCachedPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCachedReal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCachedReal::Class_Name()
{
   return "RooCachedReal";
}

//______________________________________________________________________________
const char *RooCachedReal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCachedReal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCachedReal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCachedReal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCachedReal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCachedReal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCachedReal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCachedReal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCmdConfig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCmdConfig::Class_Name()
{
   return "RooCmdConfig";
}

//______________________________________________________________________________
const char *RooCmdConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCmdConfig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCmdConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCmdConfig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCmdConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCmdConfig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCmdConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCmdConfig*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCompositeDataStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCompositeDataStore::Class_Name()
{
   return "RooCompositeDataStore";
}

//______________________________________________________________________________
const char *RooCompositeDataStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCompositeDataStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCompositeDataStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCompositeDataStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCompositeDataStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCompositeDataStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCompositeDataStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCompositeDataStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooConstVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooConstVar::Class_Name()
{
   return "RooConstVar";
}

//______________________________________________________________________________
const char *RooConstVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConstVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooConstVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConstVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooConstVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConstVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooConstVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConstVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooConstraintSum::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooConstraintSum::Class_Name()
{
   return "RooConstraintSum";
}

//______________________________________________________________________________
const char *RooConstraintSum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConstraintSum*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooConstraintSum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConstraintSum*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooConstraintSum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConstraintSum*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooConstraintSum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConstraintSum*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooConvCoefVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooConvCoefVar::Class_Name()
{
   return "RooConvCoefVar";
}

//______________________________________________________________________________
const char *RooConvCoefVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConvCoefVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooConvCoefVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConvCoefVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooConvCoefVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConvCoefVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooConvCoefVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConvCoefVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooConvGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooConvGenContext::Class_Name()
{
   return "RooConvGenContext";
}

//______________________________________________________________________________
const char *RooConvGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConvGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooConvGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooConvGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooConvGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConvGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooConvGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooConvGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDLLSignificanceMCSModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDLLSignificanceMCSModule::Class_Name()
{
   return "RooDLLSignificanceMCSModule";
}

//______________________________________________________________________________
const char *RooDLLSignificanceMCSModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDLLSignificanceMCSModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDLLSignificanceMCSModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDLLSignificanceMCSModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDLLSignificanceMCSModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDLLSignificanceMCSModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDLLSignificanceMCSModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDLLSignificanceMCSModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDataHistSliceIter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDataHistSliceIter::Class_Name()
{
   return "RooDataHistSliceIter";
}

//______________________________________________________________________________
const char *RooDataHistSliceIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataHistSliceIter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDataHistSliceIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataHistSliceIter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDataHistSliceIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataHistSliceIter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDataHistSliceIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataHistSliceIter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealBinding::Class_Name()
{
   return "RooRealBinding";
}

//______________________________________________________________________________
const char *RooRealBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDataProjBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDataProjBinding::Class_Name()
{
   return "RooDataProjBinding";
}

//______________________________________________________________________________
const char *RooDataProjBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataProjBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDataProjBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDataProjBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDataProjBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataProjBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDataProjBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDataProjBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDerivative::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDerivative::Class_Name()
{
   return "RooDerivative";
}

//______________________________________________________________________________
const char *RooDerivative::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDerivative*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDerivative::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDerivative*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDerivative::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDerivative*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDerivative::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDerivative*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooDouble::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooDouble::Class_Name()
{
   return "RooDouble";
}

//______________________________________________________________________________
const char *RooDouble::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDouble*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooDouble::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooDouble*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooDouble::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDouble*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooDouble::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooDouble*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooEffGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooEffGenContext::Class_Name()
{
   return "RooEffGenContext";
}

//______________________________________________________________________________
const char *RooEffGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEffGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooEffGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEffGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooEffGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEffGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooEffGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEffGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooEffProd::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooEffProd::Class_Name()
{
   return "RooEffProd";
}

//______________________________________________________________________________
const char *RooEffProd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEffProd*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooEffProd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEffProd*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooEffProd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEffProd*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooEffProd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEffProd*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooEfficiency::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooEfficiency::Class_Name()
{
   return "RooEfficiency";
}

//______________________________________________________________________________
const char *RooEfficiency::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEfficiency*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooEfficiency::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEfficiency*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooEfficiency::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEfficiency*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooEfficiency::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEfficiency*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooEllipse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooEllipse::Class_Name()
{
   return "RooEllipse";
}

//______________________________________________________________________________
const char *RooEllipse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEllipse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooEllipse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooEllipse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooEllipse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEllipse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooEllipse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooEllipse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooErrorVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooErrorVar::Class_Name()
{
   return "RooErrorVar";
}

//______________________________________________________________________________
const char *RooErrorVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooErrorVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooErrorVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooErrorVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooErrorVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooErrorVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooErrorVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooErrorVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExpensiveObjectCache::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExpensiveObjectCache::Class_Name()
{
   return "RooExpensiveObjectCache";
}

//______________________________________________________________________________
const char *RooExpensiveObjectCache::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooExpensiveObjectCache::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExpensiveObjectCache::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExpensiveObjectCache::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExpensiveObjectCache::ExpensiveObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExpensiveObjectCache::ExpensiveObject::Class_Name()
{
   return "RooExpensiveObjectCache::ExpensiveObject";
}

//______________________________________________________________________________
const char *RooExpensiveObjectCache::ExpensiveObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache::ExpensiveObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooExpensiveObjectCache::ExpensiveObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache::ExpensiveObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExpensiveObjectCache::ExpensiveObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache::ExpensiveObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExpensiveObjectCache::ExpensiveObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExpensiveObjectCache::ExpensiveObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExtendPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExtendPdf::Class_Name()
{
   return "RooExtendPdf";
}

//______________________________________________________________________________
const char *RooExtendPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExtendPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooExtendPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExtendPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExtendPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExtendPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExtendPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExtendPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExtendedBinding::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExtendedBinding::Class_Name()
{
   return "RooExtendedBinding";
}

//______________________________________________________________________________
const char *RooExtendedBinding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedBinding*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooExtendedBinding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedBinding*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExtendedBinding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedBinding*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExtendedBinding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedBinding*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooExtendedTerm::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooExtendedTerm::Class_Name()
{
   return "RooExtendedTerm";
}

//______________________________________________________________________________
const char *RooExtendedTerm::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedTerm*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooExtendedTerm::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedTerm*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooExtendedTerm::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedTerm*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooExtendedTerm::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooExtendedTerm*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFFTConvPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFFTConvPdf::Class_Name()
{
   return "RooFFTConvPdf";
}

//______________________________________________________________________________
const char *RooFFTConvPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFFTConvPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFFTConvPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFFTConvPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFFTConvPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFFTConvPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFFTConvPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFFTConvPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFactoryWSTool::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFactoryWSTool::Class_Name()
{
   return "RooFactoryWSTool";
}

//______________________________________________________________________________
const char *RooFactoryWSTool::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFactoryWSTool*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFactoryWSTool::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFactoryWSTool*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFactoryWSTool::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFactoryWSTool*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFactoryWSTool::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFactoryWSTool*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFirstMoment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFirstMoment::Class_Name()
{
   return "RooFirstMoment";
}

//______________________________________________________________________________
const char *RooFirstMoment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFirstMoment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFirstMoment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFirstMoment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFirstMoment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFirstMoment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFirstMoment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFirstMoment*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
atomic_TClass_ptr RooNLLVarNew::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNLLVarNew::Class_Name()
{
   return "RooFit::Detail::RooNLLVarNew";
}

//______________________________________________________________________________
const char *RooNLLVarNew::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNLLVarNew*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNLLVarNew::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNLLVarNew*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNLLVarNew::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNLLVarNew*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNLLVarNew::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNLLVarNew*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
atomic_TClass_ptr RooNormalizedPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNormalizedPdf::Class_Name()
{
   return "RooFit::Detail::RooNormalizedPdf";
}

//______________________________________________________________________________
const char *RooNormalizedPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNormalizedPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNormalizedPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNormalizedPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNormalizedPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNormalizedPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNormalizedPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooNormalizedPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
//______________________________________________________________________________
atomic_TClass_ptr RooWorkspace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooWorkspace::Class_Name()
{
   return "RooWorkspace";
}

//______________________________________________________________________________
const char *RooWorkspace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooWorkspace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooWorkspace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooWorkspace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooWorkspace::CodeRepo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooWorkspace::CodeRepo::Class_Name()
{
   return "RooWorkspace::CodeRepo";
}

//______________________________________________________________________________
const char *RooWorkspace::CodeRepo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::CodeRepo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooWorkspace::CodeRepo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::CodeRepo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooWorkspace::CodeRepo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::CodeRepo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooWorkspace::CodeRepo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::CodeRepo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooWorkspace::WSDir::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooWorkspace::WSDir::Class_Name()
{
   return "RooWorkspace::WSDir";
}

//______________________________________________________________________________
const char *RooWorkspace::WSDir::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::WSDir*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooWorkspace::WSDir::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::WSDir*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooWorkspace::WSDir::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::WSDir*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooWorkspace::WSDir::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspace::WSDir*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooWorkspaceHandle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooWorkspaceHandle::Class_Name()
{
   return "RooWorkspaceHandle";
}

//______________________________________________________________________________
const char *RooWorkspaceHandle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspaceHandle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooWorkspaceHandle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspaceHandle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooWorkspaceHandle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspaceHandle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooWorkspaceHandle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWorkspaceHandle*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ModelConfig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ModelConfig::Class_Name()
{
   return "RooStats::ModelConfig";
}

//______________________________________________________________________________
const char *ModelConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ModelConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ModelConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ModelConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ModelConfig*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooFit {
   namespace TestStatistics {
//______________________________________________________________________________
atomic_TClass_ptr RooRealL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealL::Class_Name()
{
   return "RooFit::TestStatistics::RooRealL";
}

//______________________________________________________________________________
const char *RooRealL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::TestStatistics::RooRealL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::TestStatistics::RooRealL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::TestStatistics::RooRealL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::TestStatistics::RooRealL*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooFit::TestStatistics
} // namespace RooFit::TestStatistics
//______________________________________________________________________________
atomic_TClass_ptr RooCatType::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCatType::Class_Name()
{
   return "RooCatType";
}

//______________________________________________________________________________
const char *RooCatType::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCatType*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCatType::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCatType*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCatType::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCatType*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCatType::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCatType*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooCategorySharedProperties::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooCategorySharedProperties::Class_Name()
{
   return "RooCategorySharedProperties";
}

//______________________________________________________________________________
const char *RooCategorySharedProperties::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCategorySharedProperties*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooCategorySharedProperties::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooCategorySharedProperties*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooCategorySharedProperties::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCategorySharedProperties*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooCategorySharedProperties::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooCategorySharedProperties*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTreeData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTreeData::Class_Name()
{
   return "RooTreeData";
}

//______________________________________________________________________________
const char *RooTreeData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTreeData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTreeData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTreeData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTreeData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTreeData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTreeData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTreeData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFitResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFitResult::Class_Name()
{
   return "RooFitResult";
}

//______________________________________________________________________________
const char *RooFitResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFitResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFitResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFitResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFitResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFitResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFitResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFitResult*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFracRemainder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFracRemainder::Class_Name()
{
   return "RooFracRemainder";
}

//______________________________________________________________________________
const char *RooFracRemainder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFracRemainder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFracRemainder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFracRemainder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFracRemainder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFracRemainder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFracRemainder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFracRemainder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooFunctor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFunctor::Class_Name()
{
   return "RooFunctor";
}

//______________________________________________________________________________
const char *RooFunctor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFunctor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFunctor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFunctor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFunctor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGenFitStudy::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGenFitStudy::Class_Name()
{
   return "RooGenFitStudy";
}

//______________________________________________________________________________
const char *RooGenFitStudy::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGenFitStudy*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGenFitStudy::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGenFitStudy*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGenFitStudy::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGenFitStudy*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGenFitStudy::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGenFitStudy*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooGenericPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooGenericPdf::Class_Name()
{
   return "RooGenericPdf";
}

//______________________________________________________________________________
const char *RooGenericPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGenericPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooGenericPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooGenericPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooGenericPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGenericPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooGenericPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooGenericPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooHist::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooHist::Class_Name()
{
   return "RooHist";
}

//______________________________________________________________________________
const char *RooHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHist*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooHist*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHist*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooHist*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooInvTransform::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooInvTransform::Class_Name()
{
   return "RooInvTransform";
}

//______________________________________________________________________________
const char *RooInvTransform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooInvTransform*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooInvTransform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooInvTransform*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooInvTransform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooInvTransform*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooInvTransform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooInvTransform*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLinTransBinning::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLinTransBinning::Class_Name()
{
   return "RooLinTransBinning";
}

//______________________________________________________________________________
const char *RooLinTransBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinTransBinning*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLinTransBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinTransBinning*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLinTransBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinTransBinning*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLinTransBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinTransBinning*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLinearCombination::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLinearCombination::Class_Name()
{
   return "RooLinearCombination";
}

//______________________________________________________________________________
const char *RooLinearCombination::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinearCombination*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLinearCombination::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinearCombination*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLinearCombination::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinearCombination*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLinearCombination::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinearCombination*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooLinearVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooLinearVar::Class_Name()
{
   return "RooLinearVar";
}

//______________________________________________________________________________
const char *RooLinearVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinearVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooLinearVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooLinearVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooLinearVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinearVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooLinearVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooLinearVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMappedCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMappedCategory::Class_Name()
{
   return "RooMappedCategory";
}

//______________________________________________________________________________
const char *RooMappedCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMappedCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMappedCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMappedCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMappedCategory::Entry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMappedCategory::Entry::Class_Name()
{
   return "RooMappedCategory::Entry";
}

//______________________________________________________________________________
const char *RooMappedCategory::Entry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory::Entry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMappedCategory::Entry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory::Entry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMappedCategory::Entry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory::Entry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMappedCategory::Entry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMappedCategory::Entry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMinimizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMinimizer::Class_Name()
{
   return "RooMinimizer";
}

//______________________________________________________________________________
const char *RooMinimizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMinimizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMinimizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMinimizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMinimizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMinimizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMinimizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMinimizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMoment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMoment::Class_Name()
{
   return "RooMoment";
}

//______________________________________________________________________________
const char *RooMoment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMoment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMoment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMoment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMoment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMoment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMoment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMoment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMultiCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMultiCategory::Class_Name()
{
   return "RooMultiCategory";
}

//______________________________________________________________________________
const char *RooMultiCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMultiCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMultiCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMultiCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMultiPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMultiPdf::Class_Name()
{
   return "RooMultiPdf";
}

//______________________________________________________________________________
const char *RooMultiPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMultiPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMultiPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMultiPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMultiReal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMultiReal::Class_Name()
{
   return "RooMultiReal";
}

//______________________________________________________________________________
const char *RooMultiReal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiReal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMultiReal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiReal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMultiReal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiReal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMultiReal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiReal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooMultiVarGaussian::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooMultiVarGaussian::Class_Name()
{
   return "RooMultiVarGaussian";
}

//______________________________________________________________________________
const char *RooMultiVarGaussian::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiVarGaussian*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooMultiVarGaussian::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooMultiVarGaussian*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooMultiVarGaussian::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiVarGaussian*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooMultiVarGaussian::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooMultiVarGaussian*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumRunningInt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumRunningInt::Class_Name()
{
   return "RooNumRunningInt";
}

//______________________________________________________________________________
const char *RooNumRunningInt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumRunningInt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumRunningInt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumRunningInt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumRunningInt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumRunningInt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumRunningInt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumRunningInt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumCdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumCdf::Class_Name()
{
   return "RooNumCdf";
}

//______________________________________________________________________________
const char *RooNumCdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumCdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumCdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumCdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumCdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumCdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumCdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumCdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumConvolution::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumConvolution::Class_Name()
{
   return "RooNumConvolution";
}

//______________________________________________________________________________
const char *RooNumConvolution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvolution*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumConvolution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvolution*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumConvolution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvolution*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumConvolution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvolution*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumConvPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumConvPdf::Class_Name()
{
   return "RooNumConvPdf";
}

//______________________________________________________________________________
const char *RooNumConvPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumConvPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumConvPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumConvPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumConvPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumGenConfig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumGenConfig::Class_Name()
{
   return "RooNumGenConfig";
}

//______________________________________________________________________________
const char *RooNumGenConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumGenConfig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumGenConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumGenConfig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumGenConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumGenConfig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumGenConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumGenConfig*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooNumIntFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooNumIntFactory::Class_Name()
{
   return "RooNumIntFactory";
}

//______________________________________________________________________________
const char *RooNumIntFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooNumIntFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooNumIntFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooNumIntFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooNumIntFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooParamBinning::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooParamBinning::Class_Name()
{
   return "RooParamBinning";
}

//______________________________________________________________________________
const char *RooParamBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParamBinning*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooParamBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooParamBinning*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooParamBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParamBinning*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooParamBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooParamBinning*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPlot::Class_Name()
{
   return "RooPlot";
}

//______________________________________________________________________________
const char *RooPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPolyFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPolyFunc::Class_Name()
{
   return "RooPolyFunc";
}

//______________________________________________________________________________
const char *RooPolyFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolyFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPolyFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolyFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPolyFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolyFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPolyFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolyFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPolyVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPolyVar::Class_Name()
{
   return "RooPolyVar";
}

//______________________________________________________________________________
const char *RooPolyVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolyVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPolyVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPolyVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPolyVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolyVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPolyVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPolyVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooProdGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooProdGenContext::Class_Name()
{
   return "RooProdGenContext";
}

//______________________________________________________________________________
const char *RooProdGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProdGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooProdGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProdGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooProdGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProdGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooProdGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProdGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooProdPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooProdPdf::Class_Name()
{
   return "RooProdPdf";
}

//______________________________________________________________________________
const char *RooProdPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProdPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooProdPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProdPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooProdPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProdPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooProdPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProdPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
atomic_TClass_ptr RooFixedProdPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooFixedProdPdf::Class_Name()
{
   return "RooFit::Detail::RooFixedProdPdf";
}

//______________________________________________________________________________
const char *RooFixedProdPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooFixedProdPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooFixedProdPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooFixedProdPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooFixedProdPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooFixedProdPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooFixedProdPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooFit::Detail::RooFixedProdPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
//______________________________________________________________________________
atomic_TClass_ptr RooProduct::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooProduct::Class_Name()
{
   return "RooProduct";
}

//______________________________________________________________________________
const char *RooProduct::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProduct*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooProduct::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProduct*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooProduct::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProduct*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooProduct::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProduct*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooProfileLL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooProfileLL::Class_Name()
{
   return "RooProfileLL";
}

//______________________________________________________________________________
const char *RooProfileLL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProfileLL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooProfileLL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProfileLL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooProfileLL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProfileLL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooProfileLL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProfileLL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooProjectedPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooProjectedPdf::Class_Name()
{
   return "RooProjectedPdf";
}

//______________________________________________________________________________
const char *RooProjectedPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProjectedPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooProjectedPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooProjectedPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooProjectedPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProjectedPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooProjectedPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooProjectedPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooPullVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooPullVar::Class_Name()
{
   return "RooPullVar";
}

//______________________________________________________________________________
const char *RooPullVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPullVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooPullVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooPullVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooPullVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPullVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooPullVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooPullVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooQuasiRandomGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooQuasiRandomGenerator::Class_Name()
{
   return "RooQuasiRandomGenerator";
}

//______________________________________________________________________________
const char *RooQuasiRandomGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooQuasiRandomGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooQuasiRandomGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooQuasiRandomGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooQuasiRandomGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooQuasiRandomGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooQuasiRandomGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooQuasiRandomGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRandom::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRandom::Class_Name()
{
   return "RooRandom";
}

//______________________________________________________________________________
const char *RooRandom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRandom*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRandom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRandom*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRandom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRandom*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRandom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRandom*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRandomizeParamMCSModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRandomizeParamMCSModule::Class_Name()
{
   return "RooRandomizeParamMCSModule";
}

//______________________________________________________________________________
const char *RooRandomizeParamMCSModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRandomizeParamMCSModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRandomizeParamMCSModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRandomizeParamMCSModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRandomizeParamMCSModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRandomizeParamMCSModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRandomizeParamMCSModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRandomizeParamMCSModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRangeBinning::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRangeBinning::Class_Name()
{
   return "RooRangeBinning";
}

//______________________________________________________________________________
const char *RooRangeBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBinning*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRangeBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBinning*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRangeBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBinning*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRangeBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBinning*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRangeBoolean::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRangeBoolean::Class_Name()
{
   return "RooRangeBoolean";
}

//______________________________________________________________________________
const char *RooRangeBoolean::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBoolean*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRangeBoolean::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBoolean*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRangeBoolean::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBoolean*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRangeBoolean::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRangeBoolean*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRatio::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRatio::Class_Name()
{
   return "RooRatio";
}

//______________________________________________________________________________
const char *RooRatio::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRatio*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRatio::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRatio*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRatio::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRatio*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRatio::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRatio*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealConstant::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealConstant::Class_Name()
{
   return "RooRealConstant";
}

//______________________________________________________________________________
const char *RooRealConstant::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstant*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealConstant::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstant*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealConstant::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstant*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealConstant::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealConstant*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealIntegral::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealIntegral::Class_Name()
{
   return "RooRealIntegral";
}

//______________________________________________________________________________
const char *RooRealIntegral::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealIntegral*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealIntegral::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealIntegral*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealIntegral::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealIntegral*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealIntegral::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealIntegral*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealSumFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealSumFunc::Class_Name()
{
   return "RooRealSumFunc";
}

//______________________________________________________________________________
const char *RooRealSumFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealSumFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealSumFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealSumFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealSumPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealSumPdf::Class_Name()
{
   return "RooRealSumPdf";
}

//______________________________________________________________________________
const char *RooRealSumPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealSumPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealSumPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealSumPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealSumPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRealVarSharedProperties::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRealVarSharedProperties::Class_Name()
{
   return "RooRealVarSharedProperties";
}

//______________________________________________________________________________
const char *RooRealVarSharedProperties::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealVarSharedProperties*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRealVarSharedProperties::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRealVarSharedProperties*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRealVarSharedProperties::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealVarSharedProperties*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRealVarSharedProperties::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRealVarSharedProperties*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRecursiveFraction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRecursiveFraction::Class_Name()
{
   return "RooRecursiveFraction";
}

//______________________________________________________________________________
const char *RooRecursiveFraction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRecursiveFraction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRecursiveFraction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRecursiveFraction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRecursiveFraction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRecursiveFraction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRecursiveFraction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRecursiveFraction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooRefCountList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooRefCountList::Class_Name()
{
   return "RooRefCountList";
}

//______________________________________________________________________________
const char *RooRefCountList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRefCountList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooRefCountList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooRefCountList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooRefCountList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRefCountList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooRefCountList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooRefCountList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSecondMoment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSecondMoment::Class_Name()
{
   return "RooSecondMoment";
}

//______________________________________________________________________________
const char *RooSecondMoment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSecondMoment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSecondMoment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSecondMoment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSecondMoment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSecondMoment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSecondMoment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSecondMoment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSimGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSimGenContext::Class_Name()
{
   return "RooSimGenContext";
}

//______________________________________________________________________________
const char *RooSimGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSimGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSimGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSimGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSimGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSimGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSimGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSimGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSimSplitGenContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSimSplitGenContext::Class_Name()
{
   return "RooSimSplitGenContext";
}

//______________________________________________________________________________
const char *RooSimSplitGenContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSimSplitGenContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSimSplitGenContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSimSplitGenContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSimSplitGenContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSimSplitGenContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSimSplitGenContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSimSplitGenContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSimultaneous::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSimultaneous::Class_Name()
{
   return "RooSimultaneous";
}

//______________________________________________________________________________
const char *RooSimultaneous::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSimultaneous*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSimultaneous::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSimultaneous*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSimultaneous::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSimultaneous*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSimultaneous::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSimultaneous*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStreamParser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStreamParser::Class_Name()
{
   return "RooStreamParser";
}

//______________________________________________________________________________
const char *RooStreamParser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStreamParser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooStreamParser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStreamParser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStreamParser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStreamParser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStreamParser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStreamParser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStringVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStringVar::Class_Name()
{
   return "RooStringVar";
}

//______________________________________________________________________________
const char *RooStringVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStringVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooStringVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStringVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStringVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStringVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStringVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStringVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStudyPackage::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStudyPackage::Class_Name()
{
   return "RooStudyPackage";
}

//______________________________________________________________________________
const char *RooStudyPackage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStudyPackage*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooStudyPackage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStudyPackage*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStudyPackage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStudyPackage*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStudyPackage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStudyPackage*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooStudyManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooStudyManager::Class_Name()
{
   return "RooStudyManager";
}

//______________________________________________________________________________
const char *RooStudyManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStudyManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooStudyManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStudyManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooStudyManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStudyManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooStudyManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStudyManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooSuperCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooSuperCategory::Class_Name()
{
   return "RooSuperCategory";
}

//______________________________________________________________________________
const char *RooSuperCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSuperCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooSuperCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooSuperCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooSuperCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSuperCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooSuperCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooSuperCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTObjWrap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTObjWrap::Class_Name()
{
   return "RooTObjWrap";
}

//______________________________________________________________________________
const char *RooTObjWrap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTObjWrap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTObjWrap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTObjWrap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTObjWrap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTObjWrap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTObjWrap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTObjWrap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooThresholdCategory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooThresholdCategory::Class_Name()
{
   return "RooThresholdCategory";
}

//______________________________________________________________________________
const char *RooThresholdCategory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooThresholdCategory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooThresholdCategory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooThresholdCategory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooThresholdCategory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooThresholdCategory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooThresholdCategory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooThresholdCategory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTreeDataStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTreeDataStore::Class_Name()
{
   return "RooTreeDataStore";
}

//______________________________________________________________________________
const char *RooTreeDataStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTreeDataStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTreeDataStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTreeDataStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTreeDataStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTreeDataStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTreeDataStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTreeDataStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooTruthModel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooTruthModel::Class_Name()
{
   return "RooTruthModel";
}

//______________________________________________________________________________
const char *RooTruthModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTruthModel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooTruthModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooTruthModel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooTruthModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTruthModel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooTruthModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooTruthModel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooUniformBinning::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooUniformBinning::Class_Name()
{
   return "RooUniformBinning";
}

//______________________________________________________________________________
const char *RooUniformBinning::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUniformBinning*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooUniformBinning::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooUniformBinning*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooUniformBinning::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUniformBinning*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooUniformBinning::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooUniformBinning*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooVectorDataStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooVectorDataStore::Class_Name()
{
   return "RooVectorDataStore";
}

//______________________________________________________________________________
const char *RooVectorDataStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooVectorDataStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooVectorDataStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooVectorDataStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooVectorDataStore::RealVector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooVectorDataStore::RealVector::Class_Name()
{
   return "RooVectorDataStore::RealVector";
}

//______________________________________________________________________________
const char *RooVectorDataStore::RealVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealVector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooVectorDataStore::RealVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealVector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooVectorDataStore::RealVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealVector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooVectorDataStore::RealVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealVector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooVectorDataStore::RealFullVector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooVectorDataStore::RealFullVector::Class_Name()
{
   return "RooVectorDataStore::RealFullVector";
}

//______________________________________________________________________________
const char *RooVectorDataStore::RealFullVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealFullVector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooVectorDataStore::RealFullVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealFullVector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooVectorDataStore::RealFullVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealFullVector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooVectorDataStore::RealFullVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::RealFullVector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooVectorDataStore::CatVector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooVectorDataStore::CatVector::Class_Name()
{
   return "RooVectorDataStore::CatVector";
}

//______________________________________________________________________________
const char *RooVectorDataStore::CatVector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::CatVector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooVectorDataStore::CatVector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::CatVector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooVectorDataStore::CatVector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::CatVector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooVectorDataStore::CatVector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooVectorDataStore::CatVector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RooWrapperPdf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooWrapperPdf::Class_Name()
{
   return "RooWrapperPdf";
}

//______________________________________________________________________________
const char *RooWrapperPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWrapperPdf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooWrapperPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooWrapperPdf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooWrapperPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWrapperPdf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooWrapperPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooWrapperPdf*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEintcORooLinkedListElemmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<int,RooLinkedListElem*> : new pair<int,RooLinkedListElem*>;
   }
   static void *newArray_pairlEintcORooLinkedListElemmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<int,RooLinkedListElem*>[nElements] : new pair<int,RooLinkedListElem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEintcORooLinkedListElemmUgR(void *p) {
      delete (static_cast<pair<int,RooLinkedListElem*>*>(p));
   }
   static void deleteArray_pairlEintcORooLinkedListElemmUgR(void *p) {
      delete [] (static_cast<pair<int,RooLinkedListElem*>*>(p));
   }
   static void destruct_pairlEintcORooLinkedListElemmUgR(void *p) {
      typedef pair<int,RooLinkedListElem*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class pair<int,RooLinkedListElem*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcORooAbsDatamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<string,RooAbsData*> : new pair<string,RooAbsData*>;
   }
   static void *newArray_pairlEstringcORooAbsDatamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<string,RooAbsData*>[nElements] : new pair<string,RooAbsData*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcORooAbsDatamUgR(void *p) {
      delete (static_cast<pair<string,RooAbsData*>*>(p));
   }
   static void deleteArray_pairlEstringcORooAbsDatamUgR(void *p) {
      delete [] (static_cast<pair<string,RooAbsData*>*>(p));
   }
   static void destruct_pairlEstringcORooAbsDatamUgR(void *p) {
      typedef pair<string,RooAbsData*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class pair<string,RooAbsData*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::stack<RooAbsArg*,deque<RooAbsArg*> > : new ::stack<RooAbsArg*,deque<RooAbsArg*> >;
   }
   static void *newArray_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::stack<RooAbsArg*,deque<RooAbsArg*> >[nElements] : new ::stack<RooAbsArg*,deque<RooAbsArg*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p) {
      delete (static_cast<::stack<RooAbsArg*,deque<RooAbsArg*> >*>(p));
   }
   static void deleteArray_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p) {
      delete [] (static_cast<::stack<RooAbsArg*,deque<RooAbsArg*> >*>(p));
   }
   static void destruct_stacklERooAbsArgmUcOdequelERooAbsArgmUgRsPgR(void *p) {
      typedef ::stack<RooAbsArg*,deque<RooAbsArg*> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::stack<RooAbsArg*,deque<RooAbsArg*> >

//______________________________________________________________________________
void RooAbsCache::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCache.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCache::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCache::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooAbsCache(void *p) {
      return  p ? new(p) ::RooAbsCache : new ::RooAbsCache;
   }
   static void *newArray_RooAbsCache(Long_t nElements, void *p) {
      return p ? new(p) ::RooAbsCache[nElements] : new ::RooAbsCache[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooAbsCache(void *p) {
      delete (static_cast<::RooAbsCache*>(p));
   }
   static void deleteArray_RooAbsCache(void *p) {
      delete [] (static_cast<::RooAbsCache*>(p));
   }
   static void destruct_RooAbsCache(void *p) {
      typedef ::RooAbsCache current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCache

//______________________________________________________________________________
void RooLinkedListElem::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLinkedListElem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLinkedListElem::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLinkedListElem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLinkedListElem(void *p) {
      return  p ? new(p) ::RooLinkedListElem : new ::RooLinkedListElem;
   }
   static void *newArray_RooLinkedListElem(Long_t nElements, void *p) {
      return p ? new(p) ::RooLinkedListElem[nElements] : new ::RooLinkedListElem[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLinkedListElem(void *p) {
      delete (static_cast<::RooLinkedListElem*>(p));
   }
   static void deleteArray_RooLinkedListElem(void *p) {
      delete [] (static_cast<::RooLinkedListElem*>(p));
   }
   static void destruct_RooLinkedListElem(void *p) {
      typedef ::RooLinkedListElem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLinkedListElem

//______________________________________________________________________________
template <> void RooSTLRefCountList<RooAbsArg>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSTLRefCountList<RooAbsArg>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSTLRefCountList<RooAbsArg>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSTLRefCountList<RooAbsArg>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSTLRefCountListlERooAbsArggR(void *p) {
      return  p ? new(p) ::RooSTLRefCountList<RooAbsArg> : new ::RooSTLRefCountList<RooAbsArg>;
   }
   static void *newArray_RooSTLRefCountListlERooAbsArggR(Long_t nElements, void *p) {
      return p ? new(p) ::RooSTLRefCountList<RooAbsArg>[nElements] : new ::RooSTLRefCountList<RooAbsArg>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSTLRefCountListlERooAbsArggR(void *p) {
      delete (static_cast<::RooSTLRefCountList<RooAbsArg>*>(p));
   }
   static void deleteArray_RooSTLRefCountListlERooAbsArggR(void *p) {
      delete [] (static_cast<::RooSTLRefCountList<RooAbsArg>*>(p));
   }
   static void destruct_RooSTLRefCountListlERooAbsArggR(void *p) {
      typedef ::RooSTLRefCountList<RooAbsArg> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSTLRefCountList<RooAbsArg>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLinkedList(void *p) {
      return  p ? new(p) ::RooLinkedList : new ::RooLinkedList;
   }
   static void *newArray_RooLinkedList(Long_t nElements, void *p) {
      return p ? new(p) ::RooLinkedList[nElements] : new ::RooLinkedList[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLinkedList(void *p) {
      delete (static_cast<::RooLinkedList*>(p));
   }
   static void deleteArray_RooLinkedList(void *p) {
      delete [] (static_cast<::RooLinkedList*>(p));
   }
   static void destruct_RooLinkedList(void *p) {
      typedef ::RooLinkedList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooLinkedList(TBuffer &buf, void *obj) {
      ((::RooLinkedList*)obj)->::RooLinkedList::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooLinkedList

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFIter(void *p) {
      delete (static_cast<::RooFIter*>(p));
   }
   static void deleteArray_RooFIter(void *p) {
      delete [] (static_cast<::RooFIter*>(p));
   }
   static void destruct_RooFIter(void *p) {
      typedef ::RooFIter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFIter

//______________________________________________________________________________
void RooPrintable::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPrintable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPrintable::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPrintable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPrintable(void *p) {
      return  p ? new(p) ::RooPrintable : new ::RooPrintable;
   }
   static void *newArray_RooPrintable(Long_t nElements, void *p) {
      return p ? new(p) ::RooPrintable[nElements] : new ::RooPrintable[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPrintable(void *p) {
      delete (static_cast<::RooPrintable*>(p));
   }
   static void deleteArray_RooPrintable(void *p) {
      delete [] (static_cast<::RooPrintable*>(p));
   }
   static void destruct_RooPrintable(void *p) {
      typedef ::RooPrintable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPrintable

//______________________________________________________________________________
template <> void RooCollectionProxy<RooArgSet>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCollectionProxy<RooArgSet>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCollectionProxy<RooArgSet>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCollectionProxy<RooArgSet>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCollectionProxylERooArgSetgR(void *p) {
      return  p ? new(p) ::RooCollectionProxy<RooArgSet> : new ::RooCollectionProxy<RooArgSet>;
   }
   static void *newArray_RooCollectionProxylERooArgSetgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCollectionProxy<RooArgSet>[nElements] : new ::RooCollectionProxy<RooArgSet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCollectionProxylERooArgSetgR(void *p) {
      delete (static_cast<::RooCollectionProxy<RooArgSet>*>(p));
   }
   static void deleteArray_RooCollectionProxylERooArgSetgR(void *p) {
      delete [] (static_cast<::RooCollectionProxy<RooArgSet>*>(p));
   }
   static void destruct_RooCollectionProxylERooArgSetgR(void *p) {
      typedef ::RooCollectionProxy<RooArgSet> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCollectionProxy<RooArgSet>

//______________________________________________________________________________
template <> void RooCollectionProxy<RooArgList>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCollectionProxy<RooArgList>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCollectionProxy<RooArgList>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCollectionProxy<RooArgList>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCollectionProxylERooArgListgR(void *p) {
      return  p ? new(p) ::RooCollectionProxy<RooArgList> : new ::RooCollectionProxy<RooArgList>;
   }
   static void *newArray_RooCollectionProxylERooArgListgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCollectionProxy<RooArgList>[nElements] : new ::RooCollectionProxy<RooArgList>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCollectionProxylERooArgListgR(void *p) {
      delete (static_cast<::RooCollectionProxy<RooArgList>*>(p));
   }
   static void deleteArray_RooCollectionProxylERooArgListgR(void *p) {
      delete [] (static_cast<::RooCollectionProxy<RooArgList>*>(p));
   }
   static void destruct_RooCollectionProxylERooArgListgR(void *p) {
      typedef ::RooCollectionProxy<RooArgList> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCollectionProxy<RooArgList>

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRefArray(void *p) {
      return  p ? new(p) ::RooRefArray : new ::RooRefArray;
   }
   static void *newArray_RooRefArray(Long_t nElements, void *p) {
      return p ? new(p) ::RooRefArray[nElements] : new ::RooRefArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRefArray(void *p) {
      delete (static_cast<::RooRefArray*>(p));
   }
   static void deleteArray_RooRefArray(void *p) {
      delete [] (static_cast<::RooRefArray*>(p));
   }
   static void destruct_RooRefArray(void *p) {
      typedef ::RooRefArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooRefArray(TBuffer &buf, void *obj) {
      ((::RooRefArray*)obj)->::RooRefArray::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_RooRefArray(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::RooRefArray*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::RooRefArray

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsArg(void *p) {
      delete (static_cast<::RooAbsArg*>(p));
   }
   static void deleteArray_RooAbsArg(void *p) {
      delete [] (static_cast<::RooAbsArg*>(p));
   }
   static void destruct_RooAbsArg(void *p) {
      typedef ::RooAbsArg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooAbsArg(TBuffer &buf, void *obj) {
      ((::RooAbsArg*)obj)->::RooAbsArg::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooAbsArg

//______________________________________________________________________________
void RooAbsCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCategory::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCategory(void *p) {
      delete (static_cast<::RooAbsCategory*>(p));
   }
   static void deleteArray_RooAbsCategory(void *p) {
      delete [] (static_cast<::RooAbsCategory*>(p));
   }
   static void destruct_RooAbsCategory(void *p) {
      typedef ::RooAbsCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCategory

//______________________________________________________________________________
void RooTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooTable(void *p) {
      delete (static_cast<::RooTable*>(p));
   }
   static void deleteArray_RooTable(void *p) {
      delete [] (static_cast<::RooTable*>(p));
   }
   static void destruct_RooTable(void *p) {
      typedef ::RooTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTable

//______________________________________________________________________________
void Roo1DTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class Roo1DTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Roo1DTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(Roo1DTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Roo1DTable(void *p) {
      return  p ? new(p) ::Roo1DTable : new ::Roo1DTable;
   }
   static void *newArray_Roo1DTable(Long_t nElements, void *p) {
      return p ? new(p) ::Roo1DTable[nElements] : new ::Roo1DTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_Roo1DTable(void *p) {
      delete (static_cast<::Roo1DTable*>(p));
   }
   static void deleteArray_Roo1DTable(void *p) {
      delete [] (static_cast<::Roo1DTable*>(p));
   }
   static void destruct_Roo1DTable(void *p) {
      typedef ::Roo1DTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Roo1DTable

//______________________________________________________________________________
void RooAICRegistry::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAICRegistry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAICRegistry::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAICRegistry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooAICRegistry(void *p) {
      return  p ? new(p) ::RooAICRegistry : new ::RooAICRegistry;
   }
   static void *newArray_RooAICRegistry(Long_t nElements, void *p) {
      return p ? new(p) ::RooAICRegistry[nElements] : new ::RooAICRegistry[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooAICRegistry(void *p) {
      delete (static_cast<::RooAICRegistry*>(p));
   }
   static void deleteArray_RooAICRegistry(void *p) {
      delete [] (static_cast<::RooAICRegistry*>(p));
   }
   static void destruct_RooAICRegistry(void *p) {
      typedef ::RooAICRegistry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAICRegistry

//______________________________________________________________________________
void RooCmdArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCmdArg.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCmdArg::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCmdArg::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCmdArg(void *p) {
      return  p ? new(p) ::RooCmdArg : new ::RooCmdArg;
   }
   static void *newArray_RooCmdArg(Long_t nElements, void *p) {
      return p ? new(p) ::RooCmdArg[nElements] : new ::RooCmdArg[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCmdArg(void *p) {
      delete (static_cast<::RooCmdArg*>(p));
   }
   static void deleteArray_RooCmdArg(void *p) {
      delete [] (static_cast<::RooCmdArg*>(p));
   }
   static void destruct_RooCmdArg(void *p) {
      typedef ::RooCmdArg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCmdArg

//______________________________________________________________________________
void RooAbsCollection::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCollection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCollection::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCollection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCollection(void *p) {
      delete (static_cast<::RooAbsCollection*>(p));
   }
   static void deleteArray_RooAbsCollection(void *p) {
      delete [] (static_cast<::RooAbsCollection*>(p));
   }
   static void destruct_RooAbsCollection(void *p) {
      typedef ::RooAbsCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCollection

//______________________________________________________________________________
void RooArgList::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooArgList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooArgList::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooArgList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooArgList(void *p) {
      return  p ? new(p) ::RooArgList : new ::RooArgList;
   }
   static void *newArray_RooArgList(Long_t nElements, void *p) {
      return p ? new(p) ::RooArgList[nElements] : new ::RooArgList[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooArgList(void *p) {
      delete (static_cast<::RooArgList*>(p));
   }
   static void deleteArray_RooArgList(void *p) {
      delete [] (static_cast<::RooArgList*>(p));
   }
   static void destruct_RooArgList(void *p) {
      typedef ::RooArgList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooArgList

//______________________________________________________________________________
void RooAbsProxy::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsProxy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsProxy::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsProxy::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsProxy(void *p) {
      delete (static_cast<::RooAbsProxy*>(p));
   }
   static void deleteArray_RooAbsProxy(void *p) {
      delete [] (static_cast<::RooAbsProxy*>(p));
   }
   static void destruct_RooAbsProxy(void *p) {
      typedef ::RooAbsProxy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsProxy

//______________________________________________________________________________
void RooArgProxy::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooArgProxy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooArgProxy::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooArgProxy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooArgProxy(void *p) {
      return  p ? new(p) ::RooArgProxy : new ::RooArgProxy;
   }
   static void *newArray_RooArgProxy(Long_t nElements, void *p) {
      return p ? new(p) ::RooArgProxy[nElements] : new ::RooArgProxy[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooArgProxy(void *p) {
      delete (static_cast<::RooArgProxy*>(p));
   }
   static void deleteArray_RooArgProxy(void *p) {
      delete [] (static_cast<::RooArgProxy*>(p));
   }
   static void destruct_RooArgProxy(void *p) {
      typedef ::RooArgProxy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooArgProxy

//______________________________________________________________________________
void RooArgSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooArgSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooArgSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooArgSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooArgSet(void *p) {
      return  p ? new(p) ::RooArgSet : new ::RooArgSet;
   }
   static void *newArray_RooArgSet(Long_t nElements, void *p) {
      return p ? new(p) ::RooArgSet[nElements] : new ::RooArgSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooArgSet(void *p) {
      delete (static_cast<::RooArgSet*>(p));
   }
   static void deleteArray_RooArgSet(void *p) {
      delete [] (static_cast<::RooArgSet*>(p));
   }
   static void destruct_RooArgSet(void *p) {
      typedef ::RooArgSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooArgSet

//______________________________________________________________________________
void RooPlotable::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPlotable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPlotable::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPlotable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooPlotable(void *p) {
      delete (static_cast<::RooPlotable*>(p));
   }
   static void deleteArray_RooPlotable(void *p) {
      delete [] (static_cast<::RooPlotable*>(p));
   }
   static void destruct_RooPlotable(void *p) {
      typedef ::RooPlotable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPlotable

//______________________________________________________________________________
void RooCurve::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCurve.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCurve::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCurve::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCurve(void *p) {
      return  p ? new(p) ::RooCurve : new ::RooCurve;
   }
   static void *newArray_RooCurve(Long_t nElements, void *p) {
      return p ? new(p) ::RooCurve[nElements] : new ::RooCurve[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCurve(void *p) {
      delete (static_cast<::RooCurve*>(p));
   }
   static void deleteArray_RooCurve(void *p) {
      delete [] (static_cast<::RooCurve*>(p));
   }
   static void destruct_RooCurve(void *p) {
      typedef ::RooCurve current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_RooCurve(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::RooCurve*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::RooCurve

//______________________________________________________________________________
template <> void RooTemplateProxy<RooAbsReal>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooAbsReal>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooAbsReal>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooAbsReal>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooAbsRealgR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooAbsReal> : new ::RooTemplateProxy<RooAbsReal>;
   }
   static void *newArray_RooTemplateProxylERooAbsRealgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooAbsReal>[nElements] : new ::RooTemplateProxy<RooAbsReal>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooAbsRealgR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooAbsReal>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooAbsRealgR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooAbsReal>*>(p));
   }
   static void destruct_RooTemplateProxylERooAbsRealgR(void *p) {
      typedef ::RooTemplateProxy<RooAbsReal> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooAbsReal>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooAbsCategory>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooAbsCategory>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooAbsCategory>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooAbsCategory>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooAbsCategorygR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooAbsCategory> : new ::RooTemplateProxy<RooAbsCategory>;
   }
   static void *newArray_RooTemplateProxylERooAbsCategorygR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooAbsCategory>[nElements] : new ::RooTemplateProxy<RooAbsCategory>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooAbsCategorygR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooAbsCategory>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooAbsCategorygR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooAbsCategory>*>(p));
   }
   static void destruct_RooTemplateProxylERooAbsCategorygR(void *p) {
      typedef ::RooTemplateProxy<RooAbsCategory> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooAbsCategory>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooAbsRealLValue>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooAbsRealLValue>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooAbsRealLValue>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooAbsRealLValue>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooAbsRealLValuegR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooAbsRealLValue> : new ::RooTemplateProxy<RooAbsRealLValue>;
   }
   static void *newArray_RooTemplateProxylERooAbsRealLValuegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooAbsRealLValue>[nElements] : new ::RooTemplateProxy<RooAbsRealLValue>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooAbsRealLValuegR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooAbsRealLValue>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooAbsRealLValuegR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooAbsRealLValue>*>(p));
   }
   static void destruct_RooTemplateProxylERooAbsRealLValuegR(void *p) {
      typedef ::RooTemplateProxy<RooAbsRealLValue> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooAbsRealLValue>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooAbsPdf>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooAbsPdf>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooAbsPdf>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooAbsPdf>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooAbsPdfgR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooAbsPdf> : new ::RooTemplateProxy<RooAbsPdf>;
   }
   static void *newArray_RooTemplateProxylERooAbsPdfgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooAbsPdf>[nElements] : new ::RooTemplateProxy<RooAbsPdf>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooAbsPdfgR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooAbsPdf>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooAbsPdfgR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooAbsPdf>*>(p));
   }
   static void destruct_RooTemplateProxylERooAbsPdfgR(void *p) {
      typedef ::RooTemplateProxy<RooAbsPdf> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooAbsPdf>

//______________________________________________________________________________
template <> void RooTemplateProxy<const RooHistFunc>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<const RooHistFunc>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<const RooHistFunc>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<const RooHistFunc>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylEconstsPRooHistFuncgR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<const RooHistFunc> : new ::RooTemplateProxy<const RooHistFunc>;
   }
   static void *newArray_RooTemplateProxylEconstsPRooHistFuncgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<const RooHistFunc>[nElements] : new ::RooTemplateProxy<const RooHistFunc>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylEconstsPRooHistFuncgR(void *p) {
      delete (static_cast<::RooTemplateProxy<const RooHistFunc>*>(p));
   }
   static void deleteArray_RooTemplateProxylEconstsPRooHistFuncgR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<const RooHistFunc>*>(p));
   }
   static void destruct_RooTemplateProxylEconstsPRooHistFuncgR(void *p) {
      typedef ::RooTemplateProxy<const RooHistFunc> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<const RooHistFunc>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooRealVar>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooRealVar>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooRealVar>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooRealVar>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooRealVargR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooRealVar> : new ::RooTemplateProxy<RooRealVar>;
   }
   static void *newArray_RooTemplateProxylERooRealVargR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooRealVar>[nElements] : new ::RooTemplateProxy<RooRealVar>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooRealVargR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooRealVar>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooRealVargR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooRealVar>*>(p));
   }
   static void destruct_RooTemplateProxylERooRealVargR(void *p) {
      typedef ::RooTemplateProxy<RooRealVar> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooRealVar>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooMultiCategory>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooMultiCategory>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooMultiCategory>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooMultiCategory>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooMultiCategorygR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooMultiCategory> : new ::RooTemplateProxy<RooMultiCategory>;
   }
   static void *newArray_RooTemplateProxylERooMultiCategorygR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooMultiCategory>[nElements] : new ::RooTemplateProxy<RooMultiCategory>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooMultiCategorygR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooMultiCategory>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooMultiCategorygR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooMultiCategory>*>(p));
   }
   static void destruct_RooTemplateProxylERooMultiCategorygR(void *p) {
      typedef ::RooTemplateProxy<RooMultiCategory> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooMultiCategory>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooAbsCategoryLValue>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooAbsCategoryLValue>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooAbsCategoryLValue>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooAbsCategoryLValue>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooAbsCategoryLValuegR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooAbsCategoryLValue> : new ::RooTemplateProxy<RooAbsCategoryLValue>;
   }
   static void *newArray_RooTemplateProxylERooAbsCategoryLValuegR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooAbsCategoryLValue>[nElements] : new ::RooTemplateProxy<RooAbsCategoryLValue>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooAbsCategoryLValuegR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooAbsCategoryLValue>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooAbsCategoryLValuegR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooAbsCategoryLValue>*>(p));
   }
   static void destruct_RooTemplateProxylERooAbsCategoryLValuegR(void *p) {
      typedef ::RooTemplateProxy<RooAbsCategoryLValue> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooAbsCategoryLValue>

//______________________________________________________________________________
template <> void RooTemplateProxy<RooHistFunc>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTemplateProxy<RooHistFunc>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTemplateProxy<RooHistFunc>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTemplateProxy<RooHistFunc>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTemplateProxylERooHistFuncgR(void *p) {
      return  p ? new(p) ::RooTemplateProxy<RooHistFunc> : new ::RooTemplateProxy<RooHistFunc>;
   }
   static void *newArray_RooTemplateProxylERooHistFuncgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooTemplateProxy<RooHistFunc>[nElements] : new ::RooTemplateProxy<RooHistFunc>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTemplateProxylERooHistFuncgR(void *p) {
      delete (static_cast<::RooTemplateProxy<RooHistFunc>*>(p));
   }
   static void deleteArray_RooTemplateProxylERooHistFuncgR(void *p) {
      delete [] (static_cast<::RooTemplateProxy<RooHistFunc>*>(p));
   }
   static void destruct_RooTemplateProxylERooHistFuncgR(void *p) {
      typedef ::RooTemplateProxy<RooHistFunc> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTemplateProxy<RooHistFunc>

//______________________________________________________________________________
void RooAbsReal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsReal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsReal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsReal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsReal(void *p) {
      delete (static_cast<::RooAbsReal*>(p));
   }
   static void deleteArray_RooAbsReal(void *p) {
      delete [] (static_cast<::RooAbsReal*>(p));
   }
   static void destruct_RooAbsReal(void *p) {
      typedef ::RooAbsReal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsReal

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsData(void *p) {
      delete (static_cast<::RooAbsData*>(p));
   }
   static void deleteArray_RooAbsData(void *p) {
      delete [] (static_cast<::RooAbsData*>(p));
   }
   static void destruct_RooAbsData(void *p) {
      typedef ::RooAbsData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooAbsData(TBuffer &buf, void *obj) {
      ((::RooAbsData*)obj)->::RooAbsData::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooAbsData

//______________________________________________________________________________
void RooDirItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDirItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDirItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDirItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDirItem(void *p) {
      return  p ? new(p) ::RooDirItem : new ::RooDirItem;
   }
   static void *newArray_RooDirItem(Long_t nElements, void *p) {
      return p ? new(p) ::RooDirItem[nElements] : new ::RooDirItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDirItem(void *p) {
      delete (static_cast<::RooDirItem*>(p));
   }
   static void deleteArray_RooDirItem(void *p) {
      delete [] (static_cast<::RooDirItem*>(p));
   }
   static void destruct_RooDirItem(void *p) {
      typedef ::RooDirItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDirItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDataHist(void *p) {
      return  p ? new(p) ::RooDataHist : new ::RooDataHist;
   }
   static void *newArray_RooDataHist(Long_t nElements, void *p) {
      return p ? new(p) ::RooDataHist[nElements] : new ::RooDataHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDataHist(void *p) {
      delete (static_cast<::RooDataHist*>(p));
   }
   static void deleteArray_RooDataHist(void *p) {
      delete [] (static_cast<::RooDataHist*>(p));
   }
   static void destruct_RooDataHist(void *p) {
      typedef ::RooDataHist current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooDataHist(TBuffer &buf, void *obj) {
      ((::RooDataHist*)obj)->::RooDataHist::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooDataHist

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDataSet(void *p) {
      return  p ? new(p) ::RooDataSet : new ::RooDataSet;
   }
   static void *newArray_RooDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::RooDataSet[nElements] : new ::RooDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDataSet(void *p) {
      delete (static_cast<::RooDataSet*>(p));
   }
   static void deleteArray_RooDataSet(void *p) {
      delete [] (static_cast<::RooDataSet*>(p));
   }
   static void destruct_RooDataSet(void *p) {
      typedef ::RooDataSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooDataSet(TBuffer &buf, void *obj) {
      ((::RooDataSet*)obj)->::RooDataSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooDataSet

//______________________________________________________________________________
void RooAbsCacheElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCacheElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCacheElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCacheElement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCacheElement(void *p) {
      delete (static_cast<::RooAbsCacheElement*>(p));
   }
   static void deleteArray_RooAbsCacheElement(void *p) {
      delete [] (static_cast<::RooAbsCacheElement*>(p));
   }
   static void destruct_RooAbsCacheElement(void *p) {
      typedef ::RooAbsCacheElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCacheElement

//______________________________________________________________________________
void RooMsgService::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMsgService.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMsgService::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMsgService::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooMsgService(void *p) {
      delete (static_cast<::RooMsgService*>(p));
   }
   static void deleteArray_RooMsgService(void *p) {
      delete [] (static_cast<::RooMsgService*>(p));
   }
   static void destruct_RooMsgService(void *p) {
      typedef ::RooMsgService current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMsgService

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMsgServicecLcLStreamConfig(void *p) {
      return  p ? new(p) ::RooMsgService::StreamConfig : new ::RooMsgService::StreamConfig;
   }
   static void *newArray_RooMsgServicecLcLStreamConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RooMsgService::StreamConfig[nElements] : new ::RooMsgService::StreamConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMsgServicecLcLStreamConfig(void *p) {
      delete (static_cast<::RooMsgService::StreamConfig*>(p));
   }
   static void deleteArray_RooMsgServicecLcLStreamConfig(void *p) {
      delete [] (static_cast<::RooMsgService::StreamConfig*>(p));
   }
   static void destruct_RooMsgServicecLcLStreamConfig(void *p) {
      typedef ::RooMsgService::StreamConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMsgService::StreamConfig

//______________________________________________________________________________
template <> void RooCacheManager<RooAbsCacheElement>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCacheManager<RooAbsCacheElement>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCacheManager<RooAbsCacheElement>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCacheManager<RooAbsCacheElement>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCacheManagerlERooAbsCacheElementgR(void *p) {
      return  p ? new(p) ::RooCacheManager<RooAbsCacheElement> : new ::RooCacheManager<RooAbsCacheElement>;
   }
   static void *newArray_RooCacheManagerlERooAbsCacheElementgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCacheManager<RooAbsCacheElement>[nElements] : new ::RooCacheManager<RooAbsCacheElement>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCacheManagerlERooAbsCacheElementgR(void *p) {
      delete (static_cast<::RooCacheManager<RooAbsCacheElement>*>(p));
   }
   static void deleteArray_RooCacheManagerlERooAbsCacheElementgR(void *p) {
      delete [] (static_cast<::RooCacheManager<RooAbsCacheElement>*>(p));
   }
   static void destruct_RooCacheManagerlERooAbsCacheElementgR(void *p) {
      typedef ::RooCacheManager<RooAbsCacheElement> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCacheManager<RooAbsCacheElement>

//______________________________________________________________________________
template <> void RooCacheManager<vector<double> >::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCacheManager<vector<double> >.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCacheManager<vector<double> >::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCacheManager<vector<double> >::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCacheManagerlEvectorlEdoublegRsPgR(void *p) {
      return  p ? new(p) ::RooCacheManager<vector<double> > : new ::RooCacheManager<vector<double> >;
   }
   static void *newArray_RooCacheManagerlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? new(p) ::RooCacheManager<vector<double> >[nElements] : new ::RooCacheManager<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCacheManagerlEvectorlEdoublegRsPgR(void *p) {
      delete (static_cast<::RooCacheManager<vector<double> >*>(p));
   }
   static void deleteArray_RooCacheManagerlEvectorlEdoublegRsPgR(void *p) {
      delete [] (static_cast<::RooCacheManager<vector<double> >*>(p));
   }
   static void destruct_RooCacheManagerlEvectorlEdoublegRsPgR(void *p) {
      typedef ::RooCacheManager<vector<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCacheManager<vector<double> >

//______________________________________________________________________________
void RooObjCacheManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooObjCacheManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooObjCacheManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooObjCacheManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooObjCacheManager(void *p) {
      return  p ? new(p) ::RooObjCacheManager : new ::RooObjCacheManager;
   }
   static void *newArray_RooObjCacheManager(Long_t nElements, void *p) {
      return p ? new(p) ::RooObjCacheManager[nElements] : new ::RooObjCacheManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooObjCacheManager(void *p) {
      delete (static_cast<::RooObjCacheManager*>(p));
   }
   static void deleteArray_RooObjCacheManager(void *p) {
      delete [] (static_cast<::RooObjCacheManager*>(p));
   }
   static void destruct_RooObjCacheManager(void *p) {
      typedef ::RooObjCacheManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooObjCacheManager

//______________________________________________________________________________
void RooAbsPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsPdf(void *p) {
      delete (static_cast<::RooAbsPdf*>(p));
   }
   static void deleteArray_RooAbsPdf(void *p) {
      delete [] (static_cast<::RooAbsPdf*>(p));
   }
   static void destruct_RooAbsPdf(void *p) {
      typedef ::RooAbsPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsPdf

//______________________________________________________________________________
void RooAbsPdf::GenSpec::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsPdf::GenSpec.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsPdf::GenSpec::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsPdf::GenSpec::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooAbsPdfcLcLGenSpec(void *p) {
      return  p ? new(p) ::RooAbsPdf::GenSpec : new ::RooAbsPdf::GenSpec;
   }
   static void *newArray_RooAbsPdfcLcLGenSpec(Long_t nElements, void *p) {
      return p ? new(p) ::RooAbsPdf::GenSpec[nElements] : new ::RooAbsPdf::GenSpec[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooAbsPdfcLcLGenSpec(void *p) {
      delete (static_cast<::RooAbsPdf::GenSpec*>(p));
   }
   static void deleteArray_RooAbsPdfcLcLGenSpec(void *p) {
      delete [] (static_cast<::RooAbsPdf::GenSpec*>(p));
   }
   static void destruct_RooAbsPdfcLcLGenSpec(void *p) {
      typedef ::RooAbsPdf::GenSpec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsPdf::GenSpec

//______________________________________________________________________________
void RooAbsLValue::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsLValue.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsLValue::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsLValue::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsLValue(void *p) {
      delete (static_cast<::RooAbsLValue*>(p));
   }
   static void deleteArray_RooAbsLValue(void *p) {
      delete [] (static_cast<::RooAbsLValue*>(p));
   }
   static void destruct_RooAbsLValue(void *p) {
      typedef ::RooAbsLValue current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsLValue

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsBinning(void *p) {
      delete (static_cast<::RooAbsBinning*>(p));
   }
   static void deleteArray_RooAbsBinning(void *p) {
      delete [] (static_cast<::RooAbsBinning*>(p));
   }
   static void destruct_RooAbsBinning(void *p) {
      typedef ::RooAbsBinning current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooAbsBinning(TBuffer &buf, void *obj) {
      ((::RooAbsBinning*)obj)->::RooAbsBinning::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooAbsBinning

//______________________________________________________________________________
void RooAbsRealLValue::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsRealLValue.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsRealLValue::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsRealLValue::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsRealLValue(void *p) {
      delete (static_cast<::RooAbsRealLValue*>(p));
   }
   static void deleteArray_RooAbsRealLValue(void *p) {
      delete [] (static_cast<::RooAbsRealLValue*>(p));
   }
   static void destruct_RooAbsRealLValue(void *p) {
      typedef ::RooAbsRealLValue current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsRealLValue

//______________________________________________________________________________
void RooAbsAnaConvPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsAnaConvPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsAnaConvPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsAnaConvPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsAnaConvPdf(void *p) {
      delete (static_cast<::RooAbsAnaConvPdf*>(p));
   }
   static void deleteArray_RooAbsAnaConvPdf(void *p) {
      delete [] (static_cast<::RooAbsAnaConvPdf*>(p));
   }
   static void destruct_RooAbsAnaConvPdf(void *p) {
      typedef ::RooAbsAnaConvPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsAnaConvPdf

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooHistPdf(void *p) {
      return  p ? new(p) ::RooHistPdf : new ::RooHistPdf;
   }
   static void *newArray_RooHistPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooHistPdf[nElements] : new ::RooHistPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooHistPdf(void *p) {
      delete (static_cast<::RooHistPdf*>(p));
   }
   static void deleteArray_RooHistPdf(void *p) {
      delete [] (static_cast<::RooHistPdf*>(p));
   }
   static void destruct_RooHistPdf(void *p) {
      typedef ::RooHistPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooHistPdf(TBuffer &buf, void *obj) {
      ((::RooHistPdf*)obj)->::RooHistPdf::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooHistPdf

//______________________________________________________________________________
void RooChangeTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooChangeTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooChangeTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooChangeTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooChangeTracker(void *p) {
      return  p ? new(p) ::RooChangeTracker : new ::RooChangeTracker;
   }
   static void *newArray_RooChangeTracker(Long_t nElements, void *p) {
      return p ? new(p) ::RooChangeTracker[nElements] : new ::RooChangeTracker[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooChangeTracker(void *p) {
      delete (static_cast<::RooChangeTracker*>(p));
   }
   static void deleteArray_RooChangeTracker(void *p) {
      delete [] (static_cast<::RooChangeTracker*>(p));
   }
   static void destruct_RooChangeTracker(void *p) {
      typedef ::RooChangeTracker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooChangeTracker

//______________________________________________________________________________
void RooAbsCachedPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCachedPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCachedPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCachedPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCachedPdf(void *p) {
      delete (static_cast<::RooAbsCachedPdf*>(p));
   }
   static void deleteArray_RooAbsCachedPdf(void *p) {
      delete [] (static_cast<::RooAbsCachedPdf*>(p));
   }
   static void destruct_RooAbsCachedPdf(void *p) {
      typedef ::RooAbsCachedPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCachedPdf

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCachedPdfcLcLPdfCacheElem(void *p) {
      delete (static_cast<::RooAbsCachedPdf::PdfCacheElem*>(p));
   }
   static void deleteArray_RooAbsCachedPdfcLcLPdfCacheElem(void *p) {
      delete [] (static_cast<::RooAbsCachedPdf::PdfCacheElem*>(p));
   }
   static void destruct_RooAbsCachedPdfcLcLPdfCacheElem(void *p) {
      typedef ::RooAbsCachedPdf::PdfCacheElem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCachedPdf::PdfCacheElem

//______________________________________________________________________________
void RooTrace::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTrace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTrace::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTrace::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTrace(void *p) {
      return  p ? new(p) ::RooTrace : new ::RooTrace;
   }
   static void *newArray_RooTrace(Long_t nElements, void *p) {
      return p ? new(p) ::RooTrace[nElements] : new ::RooTrace[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTrace(void *p) {
      delete (static_cast<::RooTrace*>(p));
   }
   static void deleteArray_RooTrace(void *p) {
      delete [] (static_cast<::RooTrace*>(p));
   }
   static void destruct_RooTrace(void *p) {
      typedef ::RooTrace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTrace

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooHistFunc(void *p) {
      return  p ? new(p) ::RooHistFunc : new ::RooHistFunc;
   }
   static void *newArray_RooHistFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooHistFunc[nElements] : new ::RooHistFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooHistFunc(void *p) {
      delete (static_cast<::RooHistFunc*>(p));
   }
   static void deleteArray_RooHistFunc(void *p) {
      delete [] (static_cast<::RooHistFunc*>(p));
   }
   static void destruct_RooHistFunc(void *p) {
      typedef ::RooHistFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooHistFunc(TBuffer &buf, void *obj) {
      ((::RooHistFunc*)obj)->::RooHistFunc::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooHistFunc

//______________________________________________________________________________
void RooAbsCachedReal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCachedReal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCachedReal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCachedReal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCachedReal(void *p) {
      delete (static_cast<::RooAbsCachedReal*>(p));
   }
   static void deleteArray_RooAbsCachedReal(void *p) {
      delete [] (static_cast<::RooAbsCachedReal*>(p));
   }
   static void destruct_RooAbsCachedReal(void *p) {
      typedef ::RooAbsCachedReal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCachedReal

//______________________________________________________________________________
void RooAbsCategoryLValue::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsCategoryLValue.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsCategoryLValue::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsCategoryLValue::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsCategoryLValue(void *p) {
      delete (static_cast<::RooAbsCategoryLValue*>(p));
   }
   static void deleteArray_RooAbsCategoryLValue(void *p) {
      delete [] (static_cast<::RooAbsCategoryLValue*>(p));
   }
   static void destruct_RooAbsCategoryLValue(void *p) {
      typedef ::RooAbsCategoryLValue current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsCategoryLValue

//______________________________________________________________________________
void RooSharedProperties::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSharedProperties.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSharedProperties::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSharedProperties::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSharedProperties(void *p) {
      return  p ? new(p) ::RooSharedProperties : new ::RooSharedProperties;
   }
   static void *newArray_RooSharedProperties(Long_t nElements, void *p) {
      return p ? new(p) ::RooSharedProperties[nElements] : new ::RooSharedProperties[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSharedProperties(void *p) {
      delete (static_cast<::RooSharedProperties*>(p));
   }
   static void deleteArray_RooSharedProperties(void *p) {
      delete [] (static_cast<::RooSharedProperties*>(p));
   }
   static void destruct_RooSharedProperties(void *p) {
      typedef ::RooSharedProperties current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSharedProperties

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealVar(void *p) {
      return  p ? new(p) ::RooRealVar : new ::RooRealVar;
   }
   static void *newArray_RooRealVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealVar[nElements] : new ::RooRealVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealVar(void *p) {
      delete (static_cast<::RooRealVar*>(p));
   }
   static void deleteArray_RooRealVar(void *p) {
      delete [] (static_cast<::RooRealVar*>(p));
   }
   static void destruct_RooRealVar(void *p) {
      typedef ::RooRealVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooRealVar(TBuffer &buf, void *obj) {
      ((::RooRealVar*)obj)->::RooRealVar::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooRealVar

//______________________________________________________________________________
void RooAbsDataStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsDataStore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsDataStore::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsDataStore::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsDataStore(void *p) {
      delete (static_cast<::RooAbsDataStore*>(p));
   }
   static void deleteArray_RooAbsDataStore(void *p) {
      delete [] (static_cast<::RooAbsDataStore*>(p));
   }
   static void destruct_RooAbsDataStore(void *p) {
      typedef ::RooAbsDataStore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsDataStore

//______________________________________________________________________________
void RooAbsFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsFunc(void *p) {
      delete (static_cast<::RooAbsFunc*>(p));
   }
   static void deleteArray_RooAbsFunc(void *p) {
      delete [] (static_cast<::RooAbsFunc*>(p));
   }
   static void destruct_RooAbsFunc(void *p) {
      typedef ::RooAbsFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsFunc

//______________________________________________________________________________
void RooAbsGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsGenContext(void *p) {
      delete (static_cast<::RooAbsGenContext*>(p));
   }
   static void deleteArray_RooAbsGenContext(void *p) {
      delete [] (static_cast<::RooAbsGenContext*>(p));
   }
   static void destruct_RooAbsGenContext(void *p) {
      typedef ::RooAbsGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsGenContext

//______________________________________________________________________________
void RooAbsHiddenReal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsHiddenReal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsHiddenReal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsHiddenReal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsHiddenReal(void *p) {
      delete (static_cast<::RooAbsHiddenReal*>(p));
   }
   static void deleteArray_RooAbsHiddenReal(void *p) {
      delete [] (static_cast<::RooAbsHiddenReal*>(p));
   }
   static void destruct_RooAbsHiddenReal(void *p) {
      typedef ::RooAbsHiddenReal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsHiddenReal

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCategory(void *p) {
      return  p ? new(p) ::RooCategory : new ::RooCategory;
   }
   static void *newArray_RooCategory(Long_t nElements, void *p) {
      return p ? new(p) ::RooCategory[nElements] : new ::RooCategory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCategory(void *p) {
      delete (static_cast<::RooCategory*>(p));
   }
   static void deleteArray_RooCategory(void *p) {
      delete [] (static_cast<::RooCategory*>(p));
   }
   static void destruct_RooCategory(void *p) {
      typedef ::RooCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooCategory(TBuffer &buf, void *obj) {
      ((::RooCategory*)obj)->::RooCategory::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooCategory

//______________________________________________________________________________
void RooNumIntConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumIntConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumIntConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumIntConfig::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNumIntConfig(void *p) {
      return  p ? new(p) ::RooNumIntConfig : new ::RooNumIntConfig;
   }
   static void *newArray_RooNumIntConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RooNumIntConfig[nElements] : new ::RooNumIntConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNumIntConfig(void *p) {
      delete (static_cast<::RooNumIntConfig*>(p));
   }
   static void deleteArray_RooNumIntConfig(void *p) {
      delete [] (static_cast<::RooNumIntConfig*>(p));
   }
   static void destruct_RooNumIntConfig(void *p) {
      typedef ::RooNumIntConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumIntConfig

//______________________________________________________________________________
void RooMCStudy::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMCStudy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMCStudy::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMCStudy::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooMCStudy(void *p) {
      delete (static_cast<::RooMCStudy*>(p));
   }
   static void deleteArray_RooMCStudy(void *p) {
      delete [] (static_cast<::RooMCStudy*>(p));
   }
   static void destruct_RooMCStudy(void *p) {
      typedef ::RooMCStudy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMCStudy

//______________________________________________________________________________
void RooAbsMCStudyModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsMCStudyModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsMCStudyModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsMCStudyModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsMCStudyModule(void *p) {
      delete (static_cast<::RooAbsMCStudyModule*>(p));
   }
   static void deleteArray_RooAbsMCStudyModule(void *p) {
      delete [] (static_cast<::RooAbsMCStudyModule*>(p));
   }
   static void destruct_RooAbsMCStudyModule(void *p) {
      typedef ::RooAbsMCStudyModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsMCStudyModule

//______________________________________________________________________________
void RooAbsMoment::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsMoment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsMoment::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsMoment::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsMoment(void *p) {
      delete (static_cast<::RooAbsMoment*>(p));
   }
   static void deleteArray_RooAbsMoment(void *p) {
      delete [] (static_cast<::RooAbsMoment*>(p));
   }
   static void destruct_RooAbsMoment(void *p) {
      typedef ::RooAbsMoment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsMoment

//______________________________________________________________________________
template <> void RooAbsSelfCached<RooAbsCachedReal>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsSelfCached<RooAbsCachedReal>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsSelfCached<RooAbsCachedReal>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsSelfCached<RooAbsCachedReal>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsSelfCachedlERooAbsCachedRealgR(void *p) {
      delete (static_cast<::RooAbsSelfCached<RooAbsCachedReal>*>(p));
   }
   static void deleteArray_RooAbsSelfCachedlERooAbsCachedRealgR(void *p) {
      delete [] (static_cast<::RooAbsSelfCached<RooAbsCachedReal>*>(p));
   }
   static void destruct_RooAbsSelfCachedlERooAbsCachedRealgR(void *p) {
      typedef ::RooAbsSelfCached<RooAbsCachedReal> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsSelfCached<RooAbsCachedReal>

//______________________________________________________________________________
template <> void RooAbsSelfCached<RooAbsCachedPdf>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsSelfCached<RooAbsCachedPdf>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsSelfCached<RooAbsCachedPdf>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsSelfCached<RooAbsCachedPdf>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsSelfCachedlERooAbsCachedPdfgR(void *p) {
      delete (static_cast<::RooAbsSelfCached<RooAbsCachedPdf>*>(p));
   }
   static void deleteArray_RooAbsSelfCachedlERooAbsCachedPdfgR(void *p) {
      delete [] (static_cast<::RooAbsSelfCached<RooAbsCachedPdf>*>(p));
   }
   static void destruct_RooAbsSelfCachedlERooAbsCachedPdfgR(void *p) {
      typedef ::RooAbsSelfCached<RooAbsCachedPdf> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsSelfCached<RooAbsCachedPdf>

//______________________________________________________________________________
void RooAbsStudy::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAbsStudy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAbsStudy::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAbsStudy::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAbsStudy(void *p) {
      delete (static_cast<::RooAbsStudy*>(p));
   }
   static void deleteArray_RooAbsStudy(void *p) {
      delete [] (static_cast<::RooAbsStudy*>(p));
   }
   static void destruct_RooAbsStudy(void *p) {
      typedef ::RooAbsStudy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAbsStudy

//______________________________________________________________________________
void RooAddPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAddPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAddPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAddPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooAddPdf(void *p) {
      return  p ? new(p) ::RooAddPdf : new ::RooAddPdf;
   }
   static void *newArray_RooAddPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooAddPdf[nElements] : new ::RooAddPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooAddPdf(void *p) {
      delete (static_cast<::RooAddPdf*>(p));
   }
   static void deleteArray_RooAddPdf(void *p) {
      delete [] (static_cast<::RooAddPdf*>(p));
   }
   static void destruct_RooAddPdf(void *p) {
      typedef ::RooAddPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAddPdf

//______________________________________________________________________________
void RooFormulaVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFormulaVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFormulaVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFormulaVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFormulaVar(void *p) {
      return  p ? new(p) ::RooFormulaVar : new ::RooFormulaVar;
   }
   static void *newArray_RooFormulaVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooFormulaVar[nElements] : new ::RooFormulaVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFormulaVar(void *p) {
      delete (static_cast<::RooFormulaVar*>(p));
   }
   static void deleteArray_RooFormulaVar(void *p) {
      delete [] (static_cast<::RooFormulaVar*>(p));
   }
   static void destruct_RooFormulaVar(void *p) {
      typedef ::RooFormulaVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFormulaVar

//______________________________________________________________________________
void RooResolutionModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooResolutionModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooResolutionModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooResolutionModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooResolutionModel(void *p) {
      delete (static_cast<::RooResolutionModel*>(p));
   }
   static void deleteArray_RooResolutionModel(void *p) {
      delete [] (static_cast<::RooResolutionModel*>(p));
   }
   static void destruct_RooResolutionModel(void *p) {
      typedef ::RooResolutionModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooResolutionModel

//______________________________________________________________________________
void RooAddModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAddModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAddModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAddModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooAddModel(void *p) {
      return  p ? new(p) ::RooAddModel : new ::RooAddModel;
   }
   static void *newArray_RooAddModel(Long_t nElements, void *p) {
      return p ? new(p) ::RooAddModel[nElements] : new ::RooAddModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooAddModel(void *p) {
      delete (static_cast<::RooAddModel*>(p));
   }
   static void deleteArray_RooAddModel(void *p) {
      delete [] (static_cast<::RooAddModel*>(p));
   }
   static void destruct_RooAddModel(void *p) {
      typedef ::RooAddModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAddModel

//______________________________________________________________________________
void RooGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooGenContext(void *p) {
      delete (static_cast<::RooGenContext*>(p));
   }
   static void deleteArray_RooGenContext(void *p) {
      delete [] (static_cast<::RooGenContext*>(p));
   }
   static void destruct_RooGenContext(void *p) {
      typedef ::RooGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGenContext

//______________________________________________________________________________
void RooAddGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAddGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAddGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAddGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooAddGenContext(void *p) {
      delete (static_cast<::RooAddGenContext*>(p));
   }
   static void deleteArray_RooAddGenContext(void *p) {
      delete [] (static_cast<::RooAddGenContext*>(p));
   }
   static void destruct_RooAddGenContext(void *p) {
      typedef ::RooAddGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAddGenContext

//______________________________________________________________________________
void RooAddition::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooAddition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooAddition::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooAddition::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooAddition(void *p) {
      return  p ? new(p) ::RooAddition : new ::RooAddition;
   }
   static void *newArray_RooAddition(Long_t nElements, void *p) {
      return p ? new(p) ::RooAddition[nElements] : new ::RooAddition[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooAddition(void *p) {
      delete (static_cast<::RooAddition*>(p));
   }
   static void deleteArray_RooAddition(void *p) {
      delete [] (static_cast<::RooAddition*>(p));
   }
   static void destruct_RooAddition(void *p) {
      typedef ::RooAddition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooAddition

//______________________________________________________________________________
void RooBinSamplingPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBinSamplingPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBinSamplingPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBinSamplingPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBinSamplingPdf(void *p) {
      return  p ? new(p) ::RooBinSamplingPdf : new ::RooBinSamplingPdf;
   }
   static void *newArray_RooBinSamplingPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooBinSamplingPdf[nElements] : new ::RooBinSamplingPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBinSamplingPdf(void *p) {
      delete (static_cast<::RooBinSamplingPdf*>(p));
   }
   static void deleteArray_RooBinSamplingPdf(void *p) {
      delete [] (static_cast<::RooBinSamplingPdf*>(p));
   }
   static void destruct_RooBinSamplingPdf(void *p) {
      typedef ::RooBinSamplingPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBinSamplingPdf

//______________________________________________________________________________
void RooBinWidthFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBinWidthFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBinWidthFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBinWidthFunction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBinWidthFunction(void *p) {
      return  p ? new(p) ::RooBinWidthFunction : new ::RooBinWidthFunction;
   }
   static void *newArray_RooBinWidthFunction(Long_t nElements, void *p) {
      return p ? new(p) ::RooBinWidthFunction[nElements] : new ::RooBinWidthFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBinWidthFunction(void *p) {
      delete (static_cast<::RooBinWidthFunction*>(p));
   }
   static void deleteArray_RooBinWidthFunction(void *p) {
      delete [] (static_cast<::RooBinWidthFunction*>(p));
   }
   static void destruct_RooBinWidthFunction(void *p) {
      typedef ::RooBinWidthFunction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBinWidthFunction

//______________________________________________________________________________
void RooBinnedGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBinnedGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBinnedGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBinnedGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooBinnedGenContext(void *p) {
      delete (static_cast<::RooBinnedGenContext*>(p));
   }
   static void deleteArray_RooBinnedGenContext(void *p) {
      delete [] (static_cast<::RooBinnedGenContext*>(p));
   }
   static void destruct_RooBinnedGenContext(void *p) {
      typedef ::RooBinnedGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBinnedGenContext

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBinning(void *p) {
      return  p ? new(p) ::RooBinning : new ::RooBinning;
   }
   static void *newArray_RooBinning(Long_t nElements, void *p) {
      return p ? new(p) ::RooBinning[nElements] : new ::RooBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBinning(void *p) {
      delete (static_cast<::RooBinning*>(p));
   }
   static void deleteArray_RooBinning(void *p) {
      delete [] (static_cast<::RooBinning*>(p));
   }
   static void destruct_RooBinning(void *p) {
      typedef ::RooBinning current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooBinning(TBuffer &buf, void *obj) {
      ((::RooBinning*)obj)->::RooBinning::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooBinning

//______________________________________________________________________________
void RooBinningCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBinningCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBinningCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBinningCategory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooBinningCategory(void *p) {
      return  p ? new(p) ::RooBinningCategory : new ::RooBinningCategory;
   }
   static void *newArray_RooBinningCategory(Long_t nElements, void *p) {
      return p ? new(p) ::RooBinningCategory[nElements] : new ::RooBinningCategory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooBinningCategory(void *p) {
      delete (static_cast<::RooBinningCategory*>(p));
   }
   static void deleteArray_RooBinningCategory(void *p) {
      delete [] (static_cast<::RooBinningCategory*>(p));
   }
   static void destruct_RooBinningCategory(void *p) {
      typedef ::RooBinningCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBinningCategory

//______________________________________________________________________________
void RooBrentRootFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooBrentRootFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooBrentRootFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooBrentRootFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooBrentRootFinder(void *p) {
      delete (static_cast<::RooBrentRootFinder*>(p));
   }
   static void deleteArray_RooBrentRootFinder(void *p) {
      delete [] (static_cast<::RooBrentRootFinder*>(p));
   }
   static void destruct_RooBrentRootFinder(void *p) {
      typedef ::RooBrentRootFinder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooBrentRootFinder

//______________________________________________________________________________
void RooCachedPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCachedPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCachedPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCachedPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCachedPdf(void *p) {
      return  p ? new(p) ::RooCachedPdf : new ::RooCachedPdf;
   }
   static void *newArray_RooCachedPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooCachedPdf[nElements] : new ::RooCachedPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCachedPdf(void *p) {
      delete (static_cast<::RooCachedPdf*>(p));
   }
   static void deleteArray_RooCachedPdf(void *p) {
      delete [] (static_cast<::RooCachedPdf*>(p));
   }
   static void destruct_RooCachedPdf(void *p) {
      typedef ::RooCachedPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCachedPdf

//______________________________________________________________________________
void RooCachedReal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCachedReal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCachedReal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCachedReal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCachedReal(void *p) {
      return  p ? new(p) ::RooCachedReal : new ::RooCachedReal;
   }
   static void *newArray_RooCachedReal(Long_t nElements, void *p) {
      return p ? new(p) ::RooCachedReal[nElements] : new ::RooCachedReal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCachedReal(void *p) {
      delete (static_cast<::RooCachedReal*>(p));
   }
   static void deleteArray_RooCachedReal(void *p) {
      delete [] (static_cast<::RooCachedReal*>(p));
   }
   static void destruct_RooCachedReal(void *p) {
      typedef ::RooCachedReal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCachedReal

//______________________________________________________________________________
void RooCmdConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCmdConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCmdConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCmdConfig::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooCmdConfig(void *p) {
      delete (static_cast<::RooCmdConfig*>(p));
   }
   static void deleteArray_RooCmdConfig(void *p) {
      delete [] (static_cast<::RooCmdConfig*>(p));
   }
   static void destruct_RooCmdConfig(void *p) {
      typedef ::RooCmdConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCmdConfig

//______________________________________________________________________________
void RooCompositeDataStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCompositeDataStore.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCompositeDataStore::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCompositeDataStore::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCompositeDataStore(void *p) {
      return  p ? new(p) ::RooCompositeDataStore : new ::RooCompositeDataStore;
   }
   static void *newArray_RooCompositeDataStore(Long_t nElements, void *p) {
      return p ? new(p) ::RooCompositeDataStore[nElements] : new ::RooCompositeDataStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCompositeDataStore(void *p) {
      delete (static_cast<::RooCompositeDataStore*>(p));
   }
   static void deleteArray_RooCompositeDataStore(void *p) {
      delete [] (static_cast<::RooCompositeDataStore*>(p));
   }
   static void destruct_RooCompositeDataStore(void *p) {
      typedef ::RooCompositeDataStore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCompositeDataStore

//______________________________________________________________________________
void RooConstVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooConstVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooConstVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooConstVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooConstVar(void *p) {
      return  p ? new(p) ::RooConstVar : new ::RooConstVar;
   }
   static void *newArray_RooConstVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooConstVar[nElements] : new ::RooConstVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooConstVar(void *p) {
      delete (static_cast<::RooConstVar*>(p));
   }
   static void deleteArray_RooConstVar(void *p) {
      delete [] (static_cast<::RooConstVar*>(p));
   }
   static void destruct_RooConstVar(void *p) {
      typedef ::RooConstVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooConstVar

//______________________________________________________________________________
void RooConstraintSum::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooConstraintSum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooConstraintSum::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooConstraintSum::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooConstraintSum(void *p) {
      return  p ? new(p) ::RooConstraintSum : new ::RooConstraintSum;
   }
   static void *newArray_RooConstraintSum(Long_t nElements, void *p) {
      return p ? new(p) ::RooConstraintSum[nElements] : new ::RooConstraintSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooConstraintSum(void *p) {
      delete (static_cast<::RooConstraintSum*>(p));
   }
   static void deleteArray_RooConstraintSum(void *p) {
      delete [] (static_cast<::RooConstraintSum*>(p));
   }
   static void destruct_RooConstraintSum(void *p) {
      typedef ::RooConstraintSum current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooConstraintSum

//______________________________________________________________________________
void RooConvCoefVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooConvCoefVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooConvCoefVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooConvCoefVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooConvCoefVar(void *p) {
      return  p ? new(p) ::RooConvCoefVar : new ::RooConvCoefVar;
   }
   static void *newArray_RooConvCoefVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooConvCoefVar[nElements] : new ::RooConvCoefVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooConvCoefVar(void *p) {
      delete (static_cast<::RooConvCoefVar*>(p));
   }
   static void deleteArray_RooConvCoefVar(void *p) {
      delete [] (static_cast<::RooConvCoefVar*>(p));
   }
   static void destruct_RooConvCoefVar(void *p) {
      typedef ::RooConvCoefVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooConvCoefVar

//______________________________________________________________________________
void RooConvGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooConvGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooConvGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooConvGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooConvGenContext(void *p) {
      delete (static_cast<::RooConvGenContext*>(p));
   }
   static void deleteArray_RooConvGenContext(void *p) {
      delete [] (static_cast<::RooConvGenContext*>(p));
   }
   static void destruct_RooConvGenContext(void *p) {
      typedef ::RooConvGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooConvGenContext

//______________________________________________________________________________
void RooDLLSignificanceMCSModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDLLSignificanceMCSModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDLLSignificanceMCSModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDLLSignificanceMCSModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooDLLSignificanceMCSModule(void *p) {
      delete (static_cast<::RooDLLSignificanceMCSModule*>(p));
   }
   static void deleteArray_RooDLLSignificanceMCSModule(void *p) {
      delete [] (static_cast<::RooDLLSignificanceMCSModule*>(p));
   }
   static void destruct_RooDLLSignificanceMCSModule(void *p) {
      typedef ::RooDLLSignificanceMCSModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDLLSignificanceMCSModule

//______________________________________________________________________________
void RooDataHistSliceIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDataHistSliceIter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDataHistSliceIter::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDataHistSliceIter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooDataHistSliceIter(void *p) {
      delete (static_cast<::RooDataHistSliceIter*>(p));
   }
   static void deleteArray_RooDataHistSliceIter(void *p) {
      delete [] (static_cast<::RooDataHistSliceIter*>(p));
   }
   static void destruct_RooDataHistSliceIter(void *p) {
      typedef ::RooDataHistSliceIter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDataHistSliceIter

//______________________________________________________________________________
void RooRealBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooRealBinding(void *p) {
      delete (static_cast<::RooRealBinding*>(p));
   }
   static void deleteArray_RooRealBinding(void *p) {
      delete [] (static_cast<::RooRealBinding*>(p));
   }
   static void destruct_RooRealBinding(void *p) {
      typedef ::RooRealBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealBinding

//______________________________________________________________________________
void RooDataProjBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDataProjBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDataProjBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDataProjBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooDataProjBinding(void *p) {
      delete (static_cast<::RooDataProjBinding*>(p));
   }
   static void deleteArray_RooDataProjBinding(void *p) {
      delete [] (static_cast<::RooDataProjBinding*>(p));
   }
   static void destruct_RooDataProjBinding(void *p) {
      typedef ::RooDataProjBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDataProjBinding

//______________________________________________________________________________
void RooDerivative::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDerivative.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDerivative::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDerivative::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDerivative(void *p) {
      return  p ? new(p) ::RooDerivative : new ::RooDerivative;
   }
   static void *newArray_RooDerivative(Long_t nElements, void *p) {
      return p ? new(p) ::RooDerivative[nElements] : new ::RooDerivative[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDerivative(void *p) {
      delete (static_cast<::RooDerivative*>(p));
   }
   static void deleteArray_RooDerivative(void *p) {
      delete [] (static_cast<::RooDerivative*>(p));
   }
   static void destruct_RooDerivative(void *p) {
      typedef ::RooDerivative current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDerivative

//______________________________________________________________________________
void RooDouble::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooDouble.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooDouble::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooDouble::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooDouble(void *p) {
      return  p ? new(p) ::RooDouble : new ::RooDouble;
   }
   static void *newArray_RooDouble(Long_t nElements, void *p) {
      return p ? new(p) ::RooDouble[nElements] : new ::RooDouble[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooDouble(void *p) {
      delete (static_cast<::RooDouble*>(p));
   }
   static void deleteArray_RooDouble(void *p) {
      delete [] (static_cast<::RooDouble*>(p));
   }
   static void destruct_RooDouble(void *p) {
      typedef ::RooDouble current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooDouble

//______________________________________________________________________________
void RooEffGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooEffGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooEffGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooEffGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooEffGenContext(void *p) {
      delete (static_cast<::RooEffGenContext*>(p));
   }
   static void deleteArray_RooEffGenContext(void *p) {
      delete [] (static_cast<::RooEffGenContext*>(p));
   }
   static void destruct_RooEffGenContext(void *p) {
      typedef ::RooEffGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooEffGenContext

//______________________________________________________________________________
void RooEffProd::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooEffProd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooEffProd::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooEffProd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooEffProd(void *p) {
      return  p ? new(p) ::RooEffProd : new ::RooEffProd;
   }
   static void *newArray_RooEffProd(Long_t nElements, void *p) {
      return p ? new(p) ::RooEffProd[nElements] : new ::RooEffProd[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooEffProd(void *p) {
      delete (static_cast<::RooEffProd*>(p));
   }
   static void deleteArray_RooEffProd(void *p) {
      delete [] (static_cast<::RooEffProd*>(p));
   }
   static void destruct_RooEffProd(void *p) {
      typedef ::RooEffProd current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooEffProd

//______________________________________________________________________________
void RooEfficiency::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooEfficiency.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooEfficiency::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooEfficiency::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooEfficiency(void *p) {
      return  p ? new(p) ::RooEfficiency : new ::RooEfficiency;
   }
   static void *newArray_RooEfficiency(Long_t nElements, void *p) {
      return p ? new(p) ::RooEfficiency[nElements] : new ::RooEfficiency[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooEfficiency(void *p) {
      delete (static_cast<::RooEfficiency*>(p));
   }
   static void deleteArray_RooEfficiency(void *p) {
      delete [] (static_cast<::RooEfficiency*>(p));
   }
   static void destruct_RooEfficiency(void *p) {
      typedef ::RooEfficiency current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooEfficiency

//______________________________________________________________________________
void RooEllipse::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooEllipse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooEllipse::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooEllipse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooEllipse(void *p) {
      return  p ? new(p) ::RooEllipse : new ::RooEllipse;
   }
   static void *newArray_RooEllipse(Long_t nElements, void *p) {
      return p ? new(p) ::RooEllipse[nElements] : new ::RooEllipse[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooEllipse(void *p) {
      delete (static_cast<::RooEllipse*>(p));
   }
   static void deleteArray_RooEllipse(void *p) {
      delete [] (static_cast<::RooEllipse*>(p));
   }
   static void destruct_RooEllipse(void *p) {
      typedef ::RooEllipse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_RooEllipse(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::RooEllipse*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::RooEllipse

//______________________________________________________________________________
void RooErrorVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooErrorVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooErrorVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooErrorVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooErrorVar(void *p) {
      return  p ? new(p) ::RooErrorVar : new ::RooErrorVar;
   }
   static void *newArray_RooErrorVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooErrorVar[nElements] : new ::RooErrorVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooErrorVar(void *p) {
      delete (static_cast<::RooErrorVar*>(p));
   }
   static void deleteArray_RooErrorVar(void *p) {
      delete [] (static_cast<::RooErrorVar*>(p));
   }
   static void destruct_RooErrorVar(void *p) {
      typedef ::RooErrorVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooErrorVar

//______________________________________________________________________________
void RooExpensiveObjectCache::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExpensiveObjectCache.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExpensiveObjectCache::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExpensiveObjectCache::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExpensiveObjectCache(void *p) {
      return  p ? new(p) ::RooExpensiveObjectCache : new ::RooExpensiveObjectCache;
   }
   static void *newArray_RooExpensiveObjectCache(Long_t nElements, void *p) {
      return p ? new(p) ::RooExpensiveObjectCache[nElements] : new ::RooExpensiveObjectCache[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExpensiveObjectCache(void *p) {
      delete (static_cast<::RooExpensiveObjectCache*>(p));
   }
   static void deleteArray_RooExpensiveObjectCache(void *p) {
      delete [] (static_cast<::RooExpensiveObjectCache*>(p));
   }
   static void destruct_RooExpensiveObjectCache(void *p) {
      typedef ::RooExpensiveObjectCache current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooExpensiveObjectCache

//______________________________________________________________________________
void RooExpensiveObjectCache::ExpensiveObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExpensiveObjectCache::ExpensiveObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExpensiveObjectCache::ExpensiveObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExpensiveObjectCache::ExpensiveObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExpensiveObjectCachecLcLExpensiveObject(void *p) {
      return  p ? new(p) ::RooExpensiveObjectCache::ExpensiveObject : new ::RooExpensiveObjectCache::ExpensiveObject;
   }
   static void *newArray_RooExpensiveObjectCachecLcLExpensiveObject(Long_t nElements, void *p) {
      return p ? new(p) ::RooExpensiveObjectCache::ExpensiveObject[nElements] : new ::RooExpensiveObjectCache::ExpensiveObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExpensiveObjectCachecLcLExpensiveObject(void *p) {
      delete (static_cast<::RooExpensiveObjectCache::ExpensiveObject*>(p));
   }
   static void deleteArray_RooExpensiveObjectCachecLcLExpensiveObject(void *p) {
      delete [] (static_cast<::RooExpensiveObjectCache::ExpensiveObject*>(p));
   }
   static void destruct_RooExpensiveObjectCachecLcLExpensiveObject(void *p) {
      typedef ::RooExpensiveObjectCache::ExpensiveObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooExpensiveObjectCache::ExpensiveObject

//______________________________________________________________________________
void RooExtendPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExtendPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExtendPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExtendPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExtendPdf(void *p) {
      return  p ? new(p) ::RooExtendPdf : new ::RooExtendPdf;
   }
   static void *newArray_RooExtendPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooExtendPdf[nElements] : new ::RooExtendPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExtendPdf(void *p) {
      delete (static_cast<::RooExtendPdf*>(p));
   }
   static void deleteArray_RooExtendPdf(void *p) {
      delete [] (static_cast<::RooExtendPdf*>(p));
   }
   static void destruct_RooExtendPdf(void *p) {
      typedef ::RooExtendPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooExtendPdf

//______________________________________________________________________________
void RooExtendedBinding::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExtendedBinding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExtendedBinding::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExtendedBinding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExtendedBinding(void *p) {
      return  p ? new(p) ::RooExtendedBinding : new ::RooExtendedBinding;
   }
   static void *newArray_RooExtendedBinding(Long_t nElements, void *p) {
      return p ? new(p) ::RooExtendedBinding[nElements] : new ::RooExtendedBinding[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExtendedBinding(void *p) {
      delete (static_cast<::RooExtendedBinding*>(p));
   }
   static void deleteArray_RooExtendedBinding(void *p) {
      delete [] (static_cast<::RooExtendedBinding*>(p));
   }
   static void destruct_RooExtendedBinding(void *p) {
      typedef ::RooExtendedBinding current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooExtendedBinding

//______________________________________________________________________________
void RooExtendedTerm::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooExtendedTerm.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooExtendedTerm::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooExtendedTerm::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooExtendedTerm(void *p) {
      return  p ? new(p) ::RooExtendedTerm : new ::RooExtendedTerm;
   }
   static void *newArray_RooExtendedTerm(Long_t nElements, void *p) {
      return p ? new(p) ::RooExtendedTerm[nElements] : new ::RooExtendedTerm[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooExtendedTerm(void *p) {
      delete (static_cast<::RooExtendedTerm*>(p));
   }
   static void deleteArray_RooExtendedTerm(void *p) {
      delete [] (static_cast<::RooExtendedTerm*>(p));
   }
   static void destruct_RooExtendedTerm(void *p) {
      typedef ::RooExtendedTerm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooExtendedTerm

//______________________________________________________________________________
void RooFFTConvPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFFTConvPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFFTConvPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFFTConvPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFFTConvPdf(void *p) {
      return  p ? new(p) ::RooFFTConvPdf : new ::RooFFTConvPdf;
   }
   static void *newArray_RooFFTConvPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooFFTConvPdf[nElements] : new ::RooFFTConvPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFFTConvPdf(void *p) {
      delete (static_cast<::RooFFTConvPdf*>(p));
   }
   static void deleteArray_RooFFTConvPdf(void *p) {
      delete [] (static_cast<::RooFFTConvPdf*>(p));
   }
   static void destruct_RooFFTConvPdf(void *p) {
      typedef ::RooFFTConvPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFFTConvPdf

//______________________________________________________________________________
void RooFactoryWSTool::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFactoryWSTool.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFactoryWSTool::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFactoryWSTool::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFactoryWSTool(void *p) {
      delete (static_cast<::RooFactoryWSTool*>(p));
   }
   static void deleteArray_RooFactoryWSTool(void *p) {
      delete [] (static_cast<::RooFactoryWSTool*>(p));
   }
   static void destruct_RooFactoryWSTool(void *p) {
      typedef ::RooFactoryWSTool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFactoryWSTool

//______________________________________________________________________________
void RooFirstMoment::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFirstMoment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFirstMoment::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFirstMoment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFirstMoment(void *p) {
      return  p ? new(p) ::RooFirstMoment : new ::RooFirstMoment;
   }
   static void *newArray_RooFirstMoment(Long_t nElements, void *p) {
      return p ? new(p) ::RooFirstMoment[nElements] : new ::RooFirstMoment[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFirstMoment(void *p) {
      delete (static_cast<::RooFirstMoment*>(p));
   }
   static void deleteArray_RooFirstMoment(void *p) {
      delete [] (static_cast<::RooFirstMoment*>(p));
   }
   static void destruct_RooFirstMoment(void *p) {
      typedef ::RooFirstMoment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFirstMoment

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
void RooNLLVarNew::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFit::Detail::RooNLLVarNew.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFit::Detail::RooNLLVarNew::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFit::Detail::RooNLLVarNew::Class(),this);
   }
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLDetailcLcLRooNLLVarNew(void *p) {
      delete (static_cast<::RooFit::Detail::RooNLLVarNew*>(p));
   }
   static void deleteArray_RooFitcLcLDetailcLcLRooNLLVarNew(void *p) {
      delete [] (static_cast<::RooFit::Detail::RooNLLVarNew*>(p));
   }
   static void destruct_RooFitcLcLDetailcLcLRooNLLVarNew(void *p) {
      typedef ::RooFit::Detail::RooNLLVarNew current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::Detail::RooNLLVarNew

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
void RooNormalizedPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFit::Detail::RooNormalizedPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFit::Detail::RooNormalizedPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFit::Detail::RooNormalizedPdf::Class(),this);
   }
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLDetailcLcLRooNormalizedPdf(void *p) {
      delete (static_cast<::RooFit::Detail::RooNormalizedPdf*>(p));
   }
   static void deleteArray_RooFitcLcLDetailcLcLRooNormalizedPdf(void *p) {
      delete [] (static_cast<::RooFit::Detail::RooNormalizedPdf*>(p));
   }
   static void destruct_RooFitcLcLDetailcLcLRooNormalizedPdf(void *p) {
      typedef ::RooFit::Detail::RooNormalizedPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::Detail::RooNormalizedPdf

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooWorkspace(void *p) {
      return  p ? new(p) ::RooWorkspace : new ::RooWorkspace;
   }
   static void *newArray_RooWorkspace(Long_t nElements, void *p) {
      return p ? new(p) ::RooWorkspace[nElements] : new ::RooWorkspace[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooWorkspace(void *p) {
      delete (static_cast<::RooWorkspace*>(p));
   }
   static void deleteArray_RooWorkspace(void *p) {
      delete [] (static_cast<::RooWorkspace*>(p));
   }
   static void destruct_RooWorkspace(void *p) {
      typedef ::RooWorkspace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooWorkspace(TBuffer &buf, void *obj) {
      ((::RooWorkspace*)obj)->::RooWorkspace::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooWorkspace

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooWorkspacecLcLCodeRepo(void *p) {
      return  p ? new(p) ::RooWorkspace::CodeRepo : new ::RooWorkspace::CodeRepo;
   }
   static void *newArray_RooWorkspacecLcLCodeRepo(Long_t nElements, void *p) {
      return p ? new(p) ::RooWorkspace::CodeRepo[nElements] : new ::RooWorkspace::CodeRepo[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooWorkspacecLcLCodeRepo(void *p) {
      delete (static_cast<::RooWorkspace::CodeRepo*>(p));
   }
   static void deleteArray_RooWorkspacecLcLCodeRepo(void *p) {
      delete [] (static_cast<::RooWorkspace::CodeRepo*>(p));
   }
   static void destruct_RooWorkspacecLcLCodeRepo(void *p) {
      typedef ::RooWorkspace::CodeRepo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooWorkspacecLcLCodeRepo(TBuffer &buf, void *obj) {
      ((::RooWorkspace::CodeRepo*)obj)->::RooWorkspace::CodeRepo::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooWorkspace::CodeRepo

//______________________________________________________________________________
void RooWorkspace::WSDir::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooWorkspace::WSDir.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooWorkspace::WSDir::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooWorkspace::WSDir::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooWorkspacecLcLWSDir(void *p) {
      delete (static_cast<::RooWorkspace::WSDir*>(p));
   }
   static void deleteArray_RooWorkspacecLcLWSDir(void *p) {
      delete [] (static_cast<::RooWorkspace::WSDir*>(p));
   }
   static void destruct_RooWorkspacecLcLWSDir(void *p) {
      typedef ::RooWorkspace::WSDir current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_RooWorkspacecLcLWSDir(void *obj,TFileMergeInfo *info) {
      ((::RooWorkspace::WSDir*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::RooWorkspace::WSDir

//______________________________________________________________________________
void RooWorkspaceHandle::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooWorkspaceHandle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooWorkspaceHandle::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooWorkspaceHandle::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooWorkspaceHandle(void *p) {
      delete (static_cast<::RooWorkspaceHandle*>(p));
   }
   static void deleteArray_RooWorkspaceHandle(void *p) {
      delete [] (static_cast<::RooWorkspaceHandle*>(p));
   }
   static void destruct_RooWorkspaceHandle(void *p) {
      typedef ::RooWorkspaceHandle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooWorkspaceHandle

namespace RooStats {
//______________________________________________________________________________
void ModelConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ModelConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ModelConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ModelConfig::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLModelConfig(void *p) {
      return  p ? new(p) ::RooStats::ModelConfig : new ::RooStats::ModelConfig;
   }
   static void *newArray_RooStatscLcLModelConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ModelConfig[nElements] : new ::RooStats::ModelConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLModelConfig(void *p) {
      delete (static_cast<::RooStats::ModelConfig*>(p));
   }
   static void deleteArray_RooStatscLcLModelConfig(void *p) {
      delete [] (static_cast<::RooStats::ModelConfig*>(p));
   }
   static void destruct_RooStatscLcLModelConfig(void *p) {
      typedef ::RooStats::ModelConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ModelConfig

namespace RooFit {
   namespace TestStatistics {
//______________________________________________________________________________
void RooRealL::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFit::TestStatistics::RooRealL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFit::TestStatistics::RooRealL::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFit::TestStatistics::RooRealL::Class(),this);
   }
}

} // namespace RooFit::TestStatistics
} // namespace RooFit::TestStatistics
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLTestStatisticscLcLRooRealL(void *p) {
      delete (static_cast<::RooFit::TestStatistics::RooRealL*>(p));
   }
   static void deleteArray_RooFitcLcLTestStatisticscLcLRooRealL(void *p) {
      delete [] (static_cast<::RooFit::TestStatistics::RooRealL*>(p));
   }
   static void destruct_RooFitcLcLTestStatisticscLcLRooRealL(void *p) {
      typedef ::RooFit::TestStatistics::RooRealL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::TestStatistics::RooRealL

//______________________________________________________________________________
void RooCatType::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCatType.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCatType::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCatType::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCatType(void *p) {
      return  p ? new(p) ::RooCatType : new ::RooCatType;
   }
   static void *newArray_RooCatType(Long_t nElements, void *p) {
      return p ? new(p) ::RooCatType[nElements] : new ::RooCatType[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCatType(void *p) {
      delete (static_cast<::RooCatType*>(p));
   }
   static void deleteArray_RooCatType(void *p) {
      delete [] (static_cast<::RooCatType*>(p));
   }
   static void destruct_RooCatType(void *p) {
      typedef ::RooCatType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCatType

//______________________________________________________________________________
void RooCategorySharedProperties::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooCategorySharedProperties.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooCategorySharedProperties::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooCategorySharedProperties::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooCategorySharedProperties(void *p) {
      return  p ? new(p) ::RooCategorySharedProperties : new ::RooCategorySharedProperties;
   }
   static void *newArray_RooCategorySharedProperties(Long_t nElements, void *p) {
      return p ? new(p) ::RooCategorySharedProperties[nElements] : new ::RooCategorySharedProperties[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooCategorySharedProperties(void *p) {
      delete (static_cast<::RooCategorySharedProperties*>(p));
   }
   static void deleteArray_RooCategorySharedProperties(void *p) {
      delete [] (static_cast<::RooCategorySharedProperties*>(p));
   }
   static void destruct_RooCategorySharedProperties(void *p) {
      typedef ::RooCategorySharedProperties current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooCategorySharedProperties

//______________________________________________________________________________
void RooTreeData::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTreeData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTreeData::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTreeData::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooTreeData(void *p) {
      delete (static_cast<::RooTreeData*>(p));
   }
   static void deleteArray_RooTreeData(void *p) {
      delete [] (static_cast<::RooTreeData*>(p));
   }
   static void destruct_RooTreeData(void *p) {
      typedef ::RooTreeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTreeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFitResult(void *p) {
      return  p ? new(p) ::RooFitResult : new ::RooFitResult;
   }
   static void *newArray_RooFitResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooFitResult[nElements] : new ::RooFitResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFitResult(void *p) {
      delete (static_cast<::RooFitResult*>(p));
   }
   static void deleteArray_RooFitResult(void *p) {
      delete [] (static_cast<::RooFitResult*>(p));
   }
   static void destruct_RooFitResult(void *p) {
      typedef ::RooFitResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooFitResult(TBuffer &buf, void *obj) {
      ((::RooFitResult*)obj)->::RooFitResult::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooFitResult

//______________________________________________________________________________
void RooFracRemainder::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFracRemainder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFracRemainder::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFracRemainder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFracRemainder(void *p) {
      return  p ? new(p) ::RooFracRemainder : new ::RooFracRemainder;
   }
   static void *newArray_RooFracRemainder(Long_t nElements, void *p) {
      return p ? new(p) ::RooFracRemainder[nElements] : new ::RooFracRemainder[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFracRemainder(void *p) {
      delete (static_cast<::RooFracRemainder*>(p));
   }
   static void deleteArray_RooFracRemainder(void *p) {
      delete [] (static_cast<::RooFracRemainder*>(p));
   }
   static void destruct_RooFracRemainder(void *p) {
      typedef ::RooFracRemainder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFracRemainder

//______________________________________________________________________________
void RooFunctor::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFunctor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFunctor::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFunctor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFunctor(void *p) {
      delete (static_cast<::RooFunctor*>(p));
   }
   static void deleteArray_RooFunctor(void *p) {
      delete [] (static_cast<::RooFunctor*>(p));
   }
   static void destruct_RooFunctor(void *p) {
      typedef ::RooFunctor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFunctor

//______________________________________________________________________________
void RooGenFitStudy::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGenFitStudy.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGenFitStudy::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGenFitStudy::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGenFitStudy(void *p) {
      return  p ? new(p) ::RooGenFitStudy : new ::RooGenFitStudy;
   }
   static void *newArray_RooGenFitStudy(Long_t nElements, void *p) {
      return p ? new(p) ::RooGenFitStudy[nElements] : new ::RooGenFitStudy[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGenFitStudy(void *p) {
      delete (static_cast<::RooGenFitStudy*>(p));
   }
   static void deleteArray_RooGenFitStudy(void *p) {
      delete [] (static_cast<::RooGenFitStudy*>(p));
   }
   static void destruct_RooGenFitStudy(void *p) {
      typedef ::RooGenFitStudy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGenFitStudy

//______________________________________________________________________________
void RooGenericPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooGenericPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooGenericPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooGenericPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooGenericPdf(void *p) {
      return  p ? new(p) ::RooGenericPdf : new ::RooGenericPdf;
   }
   static void *newArray_RooGenericPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooGenericPdf[nElements] : new ::RooGenericPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooGenericPdf(void *p) {
      delete (static_cast<::RooGenericPdf*>(p));
   }
   static void deleteArray_RooGenericPdf(void *p) {
      delete [] (static_cast<::RooGenericPdf*>(p));
   }
   static void destruct_RooGenericPdf(void *p) {
      typedef ::RooGenericPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooGenericPdf

//______________________________________________________________________________
void RooHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooHist(void *p) {
      return  p ? new(p) ::RooHist : new ::RooHist;
   }
   static void *newArray_RooHist(Long_t nElements, void *p) {
      return p ? new(p) ::RooHist[nElements] : new ::RooHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooHist(void *p) {
      delete (static_cast<::RooHist*>(p));
   }
   static void deleteArray_RooHist(void *p) {
      delete [] (static_cast<::RooHist*>(p));
   }
   static void destruct_RooHist(void *p) {
      typedef ::RooHist current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_RooHist(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::RooHist*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::RooHist

//______________________________________________________________________________
void RooInvTransform::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooInvTransform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooInvTransform::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooInvTransform::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooInvTransform(void *p) {
      delete (static_cast<::RooInvTransform*>(p));
   }
   static void deleteArray_RooInvTransform(void *p) {
      delete [] (static_cast<::RooInvTransform*>(p));
   }
   static void destruct_RooInvTransform(void *p) {
      typedef ::RooInvTransform current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooInvTransform

//______________________________________________________________________________
void RooLinTransBinning::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLinTransBinning.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLinTransBinning::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLinTransBinning::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLinTransBinning(void *p) {
      return  p ? new(p) ::RooLinTransBinning : new ::RooLinTransBinning;
   }
   static void *newArray_RooLinTransBinning(Long_t nElements, void *p) {
      return p ? new(p) ::RooLinTransBinning[nElements] : new ::RooLinTransBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLinTransBinning(void *p) {
      delete (static_cast<::RooLinTransBinning*>(p));
   }
   static void deleteArray_RooLinTransBinning(void *p) {
      delete [] (static_cast<::RooLinTransBinning*>(p));
   }
   static void destruct_RooLinTransBinning(void *p) {
      typedef ::RooLinTransBinning current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLinTransBinning

//______________________________________________________________________________
void RooLinearCombination::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLinearCombination.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLinearCombination::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLinearCombination::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLinearCombination(void *p) {
      return  p ? new(p) ::RooLinearCombination : new ::RooLinearCombination;
   }
   static void *newArray_RooLinearCombination(Long_t nElements, void *p) {
      return p ? new(p) ::RooLinearCombination[nElements] : new ::RooLinearCombination[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLinearCombination(void *p) {
      delete (static_cast<::RooLinearCombination*>(p));
   }
   static void deleteArray_RooLinearCombination(void *p) {
      delete [] (static_cast<::RooLinearCombination*>(p));
   }
   static void destruct_RooLinearCombination(void *p) {
      typedef ::RooLinearCombination current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLinearCombination

//______________________________________________________________________________
void RooLinearVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooLinearVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooLinearVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooLinearVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooLinearVar(void *p) {
      return  p ? new(p) ::RooLinearVar : new ::RooLinearVar;
   }
   static void *newArray_RooLinearVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooLinearVar[nElements] : new ::RooLinearVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooLinearVar(void *p) {
      delete (static_cast<::RooLinearVar*>(p));
   }
   static void deleteArray_RooLinearVar(void *p) {
      delete [] (static_cast<::RooLinearVar*>(p));
   }
   static void destruct_RooLinearVar(void *p) {
      typedef ::RooLinearVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooLinearVar

//______________________________________________________________________________
void RooMappedCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMappedCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMappedCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMappedCategory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMappedCategory(void *p) {
      return  p ? new(p) ::RooMappedCategory : new ::RooMappedCategory;
   }
   static void *newArray_RooMappedCategory(Long_t nElements, void *p) {
      return p ? new(p) ::RooMappedCategory[nElements] : new ::RooMappedCategory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMappedCategory(void *p) {
      delete (static_cast<::RooMappedCategory*>(p));
   }
   static void deleteArray_RooMappedCategory(void *p) {
      delete [] (static_cast<::RooMappedCategory*>(p));
   }
   static void destruct_RooMappedCategory(void *p) {
      typedef ::RooMappedCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMappedCategory

//______________________________________________________________________________
void RooMappedCategory::Entry::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMappedCategory::Entry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMappedCategory::Entry::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMappedCategory::Entry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMappedCategorycLcLEntry(void *p) {
      return  p ? new(p) ::RooMappedCategory::Entry : new ::RooMappedCategory::Entry;
   }
   static void *newArray_RooMappedCategorycLcLEntry(Long_t nElements, void *p) {
      return p ? new(p) ::RooMappedCategory::Entry[nElements] : new ::RooMappedCategory::Entry[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMappedCategorycLcLEntry(void *p) {
      delete (static_cast<::RooMappedCategory::Entry*>(p));
   }
   static void deleteArray_RooMappedCategorycLcLEntry(void *p) {
      delete [] (static_cast<::RooMappedCategory::Entry*>(p));
   }
   static void destruct_RooMappedCategorycLcLEntry(void *p) {
      typedef ::RooMappedCategory::Entry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMappedCategory::Entry

//______________________________________________________________________________
void RooMinimizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMinimizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMinimizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMinimizer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooMinimizer(void *p) {
      delete (static_cast<::RooMinimizer*>(p));
   }
   static void deleteArray_RooMinimizer(void *p) {
      delete [] (static_cast<::RooMinimizer*>(p));
   }
   static void destruct_RooMinimizer(void *p) {
      typedef ::RooMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMinimizer

//______________________________________________________________________________
void RooMoment::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMoment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMoment::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMoment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMoment(void *p) {
      return  p ? new(p) ::RooMoment : new ::RooMoment;
   }
   static void *newArray_RooMoment(Long_t nElements, void *p) {
      return p ? new(p) ::RooMoment[nElements] : new ::RooMoment[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMoment(void *p) {
      delete (static_cast<::RooMoment*>(p));
   }
   static void deleteArray_RooMoment(void *p) {
      delete [] (static_cast<::RooMoment*>(p));
   }
   static void destruct_RooMoment(void *p) {
      typedef ::RooMoment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMoment

//______________________________________________________________________________
void RooMultiCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMultiCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMultiCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMultiCategory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiCategory(void *p) {
      return  p ? new(p) ::RooMultiCategory : new ::RooMultiCategory;
   }
   static void *newArray_RooMultiCategory(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiCategory[nElements] : new ::RooMultiCategory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiCategory(void *p) {
      delete (static_cast<::RooMultiCategory*>(p));
   }
   static void deleteArray_RooMultiCategory(void *p) {
      delete [] (static_cast<::RooMultiCategory*>(p));
   }
   static void destruct_RooMultiCategory(void *p) {
      typedef ::RooMultiCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiCategory

//______________________________________________________________________________
void RooMultiPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMultiPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMultiPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMultiPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiPdf(void *p) {
      return  p ? new(p) ::RooMultiPdf : new ::RooMultiPdf;
   }
   static void *newArray_RooMultiPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiPdf[nElements] : new ::RooMultiPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiPdf(void *p) {
      delete (static_cast<::RooMultiPdf*>(p));
   }
   static void deleteArray_RooMultiPdf(void *p) {
      delete [] (static_cast<::RooMultiPdf*>(p));
   }
   static void destruct_RooMultiPdf(void *p) {
      typedef ::RooMultiPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiPdf

//______________________________________________________________________________
void RooMultiReal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMultiReal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMultiReal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMultiReal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiReal(void *p) {
      return  p ? new(p) ::RooMultiReal : new ::RooMultiReal;
   }
   static void *newArray_RooMultiReal(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiReal[nElements] : new ::RooMultiReal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiReal(void *p) {
      delete (static_cast<::RooMultiReal*>(p));
   }
   static void deleteArray_RooMultiReal(void *p) {
      delete [] (static_cast<::RooMultiReal*>(p));
   }
   static void destruct_RooMultiReal(void *p) {
      typedef ::RooMultiReal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiReal

//______________________________________________________________________________
void RooMultiVarGaussian::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooMultiVarGaussian.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooMultiVarGaussian::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooMultiVarGaussian::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiVarGaussian(void *p) {
      return  p ? new(p) ::RooMultiVarGaussian : new ::RooMultiVarGaussian;
   }
   static void *newArray_RooMultiVarGaussian(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiVarGaussian[nElements] : new ::RooMultiVarGaussian[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiVarGaussian(void *p) {
      delete (static_cast<::RooMultiVarGaussian*>(p));
   }
   static void deleteArray_RooMultiVarGaussian(void *p) {
      delete [] (static_cast<::RooMultiVarGaussian*>(p));
   }
   static void destruct_RooMultiVarGaussian(void *p) {
      typedef ::RooMultiVarGaussian current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiVarGaussian

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiVarGaussiancLcLAnaIntData(void *p) {
      return  p ? new(p) ::RooMultiVarGaussian::AnaIntData : new ::RooMultiVarGaussian::AnaIntData;
   }
   static void *newArray_RooMultiVarGaussiancLcLAnaIntData(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiVarGaussian::AnaIntData[nElements] : new ::RooMultiVarGaussian::AnaIntData[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiVarGaussiancLcLAnaIntData(void *p) {
      delete (static_cast<::RooMultiVarGaussian::AnaIntData*>(p));
   }
   static void deleteArray_RooMultiVarGaussiancLcLAnaIntData(void *p) {
      delete [] (static_cast<::RooMultiVarGaussian::AnaIntData*>(p));
   }
   static void destruct_RooMultiVarGaussiancLcLAnaIntData(void *p) {
      typedef ::RooMultiVarGaussian::AnaIntData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiVarGaussian::AnaIntData

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooMultiVarGaussiancLcLGenData(void *p) {
      return  p ? new(p) ::RooMultiVarGaussian::GenData : new ::RooMultiVarGaussian::GenData;
   }
   static void *newArray_RooMultiVarGaussiancLcLGenData(Long_t nElements, void *p) {
      return p ? new(p) ::RooMultiVarGaussian::GenData[nElements] : new ::RooMultiVarGaussian::GenData[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooMultiVarGaussiancLcLGenData(void *p) {
      delete (static_cast<::RooMultiVarGaussian::GenData*>(p));
   }
   static void deleteArray_RooMultiVarGaussiancLcLGenData(void *p) {
      delete [] (static_cast<::RooMultiVarGaussian::GenData*>(p));
   }
   static void destruct_RooMultiVarGaussiancLcLGenData(void *p) {
      typedef ::RooMultiVarGaussian::GenData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooMultiVarGaussian::GenData

//______________________________________________________________________________
void RooNumRunningInt::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumRunningInt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumRunningInt::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumRunningInt::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooNumRunningInt(void *p) {
      delete (static_cast<::RooNumRunningInt*>(p));
   }
   static void deleteArray_RooNumRunningInt(void *p) {
      delete [] (static_cast<::RooNumRunningInt*>(p));
   }
   static void destruct_RooNumRunningInt(void *p) {
      typedef ::RooNumRunningInt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumRunningInt

//______________________________________________________________________________
void RooNumCdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumCdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumCdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumCdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooNumCdf(void *p) {
      delete (static_cast<::RooNumCdf*>(p));
   }
   static void deleteArray_RooNumCdf(void *p) {
      delete [] (static_cast<::RooNumCdf*>(p));
   }
   static void destruct_RooNumCdf(void *p) {
      typedef ::RooNumCdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumCdf

//______________________________________________________________________________
void RooNumConvolution::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumConvolution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumConvolution::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumConvolution::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNumConvolution(void *p) {
      return  p ? new(p) ::RooNumConvolution : new ::RooNumConvolution;
   }
   static void *newArray_RooNumConvolution(Long_t nElements, void *p) {
      return p ? new(p) ::RooNumConvolution[nElements] : new ::RooNumConvolution[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNumConvolution(void *p) {
      delete (static_cast<::RooNumConvolution*>(p));
   }
   static void deleteArray_RooNumConvolution(void *p) {
      delete [] (static_cast<::RooNumConvolution*>(p));
   }
   static void destruct_RooNumConvolution(void *p) {
      typedef ::RooNumConvolution current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumConvolution

//______________________________________________________________________________
void RooNumConvPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumConvPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumConvPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumConvPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNumConvPdf(void *p) {
      return  p ? new(p) ::RooNumConvPdf : new ::RooNumConvPdf;
   }
   static void *newArray_RooNumConvPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooNumConvPdf[nElements] : new ::RooNumConvPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNumConvPdf(void *p) {
      delete (static_cast<::RooNumConvPdf*>(p));
   }
   static void deleteArray_RooNumConvPdf(void *p) {
      delete [] (static_cast<::RooNumConvPdf*>(p));
   }
   static void destruct_RooNumConvPdf(void *p) {
      typedef ::RooNumConvPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumConvPdf

//______________________________________________________________________________
void RooNumGenConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumGenConfig.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumGenConfig::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumGenConfig::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooNumGenConfig(void *p) {
      return  p ? new(p) ::RooNumGenConfig : new ::RooNumGenConfig;
   }
   static void *newArray_RooNumGenConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RooNumGenConfig[nElements] : new ::RooNumGenConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooNumGenConfig(void *p) {
      delete (static_cast<::RooNumGenConfig*>(p));
   }
   static void deleteArray_RooNumGenConfig(void *p) {
      delete [] (static_cast<::RooNumGenConfig*>(p));
   }
   static void destruct_RooNumGenConfig(void *p) {
      typedef ::RooNumGenConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumGenConfig

//______________________________________________________________________________
void RooNumIntFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooNumIntFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooNumIntFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooNumIntFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooNumIntFactory(void *p) {
      delete (static_cast<::RooNumIntFactory*>(p));
   }
   static void deleteArray_RooNumIntFactory(void *p) {
      delete [] (static_cast<::RooNumIntFactory*>(p));
   }
   static void destruct_RooNumIntFactory(void *p) {
      typedef ::RooNumIntFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooNumIntFactory

//______________________________________________________________________________
void RooParamBinning::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooParamBinning.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooParamBinning::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooParamBinning::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooParamBinning(void *p) {
      return  p ? new(p) ::RooParamBinning : new ::RooParamBinning;
   }
   static void *newArray_RooParamBinning(Long_t nElements, void *p) {
      return p ? new(p) ::RooParamBinning[nElements] : new ::RooParamBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooParamBinning(void *p) {
      delete (static_cast<::RooParamBinning*>(p));
   }
   static void deleteArray_RooParamBinning(void *p) {
      delete [] (static_cast<::RooParamBinning*>(p));
   }
   static void destruct_RooParamBinning(void *p) {
      typedef ::RooParamBinning current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooParamBinning

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPlot(void *p) {
      return  p ? new(p) ::RooPlot : new ::RooPlot;
   }
   static void *newArray_RooPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooPlot[nElements] : new ::RooPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPlot(void *p) {
      delete (static_cast<::RooPlot*>(p));
   }
   static void deleteArray_RooPlot(void *p) {
      delete [] (static_cast<::RooPlot*>(p));
   }
   static void destruct_RooPlot(void *p) {
      typedef ::RooPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooPlot(TBuffer &buf, void *obj) {
      ((::RooPlot*)obj)->::RooPlot::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooPlot

//______________________________________________________________________________
void RooPolyFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPolyFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPolyFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPolyFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPolyFunc(void *p) {
      return  p ? new(p) ::RooPolyFunc : new ::RooPolyFunc;
   }
   static void *newArray_RooPolyFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooPolyFunc[nElements] : new ::RooPolyFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPolyFunc(void *p) {
      delete (static_cast<::RooPolyFunc*>(p));
   }
   static void deleteArray_RooPolyFunc(void *p) {
      delete [] (static_cast<::RooPolyFunc*>(p));
   }
   static void destruct_RooPolyFunc(void *p) {
      typedef ::RooPolyFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPolyFunc

//______________________________________________________________________________
void RooPolyVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPolyVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPolyVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPolyVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPolyVar(void *p) {
      return  p ? new(p) ::RooPolyVar : new ::RooPolyVar;
   }
   static void *newArray_RooPolyVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooPolyVar[nElements] : new ::RooPolyVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPolyVar(void *p) {
      delete (static_cast<::RooPolyVar*>(p));
   }
   static void deleteArray_RooPolyVar(void *p) {
      delete [] (static_cast<::RooPolyVar*>(p));
   }
   static void destruct_RooPolyVar(void *p) {
      typedef ::RooPolyVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPolyVar

//______________________________________________________________________________
void RooProdGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooProdGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooProdGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooProdGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooProdGenContext(void *p) {
      delete (static_cast<::RooProdGenContext*>(p));
   }
   static void deleteArray_RooProdGenContext(void *p) {
      delete [] (static_cast<::RooProdGenContext*>(p));
   }
   static void destruct_RooProdGenContext(void *p) {
      typedef ::RooProdGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooProdGenContext

//______________________________________________________________________________
void RooProdPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooProdPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooProdPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooProdPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooProdPdf(void *p) {
      return  p ? new(p) ::RooProdPdf : new ::RooProdPdf;
   }
   static void *newArray_RooProdPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooProdPdf[nElements] : new ::RooProdPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooProdPdf(void *p) {
      delete (static_cast<::RooProdPdf*>(p));
   }
   static void deleteArray_RooProdPdf(void *p) {
      delete [] (static_cast<::RooProdPdf*>(p));
   }
   static void destruct_RooProdPdf(void *p) {
      typedef ::RooProdPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooProdPdf

namespace RooFit {
   namespace Detail {
//______________________________________________________________________________
void RooFixedProdPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooFit::Detail::RooFixedProdPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooFit::Detail::RooFixedProdPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooFit::Detail::RooFixedProdPdf::Class(),this);
   }
}

} // namespace RooFit::Detail
} // namespace RooFit::Detail
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLDetailcLcLRooFixedProdPdf(void *p) {
      delete (static_cast<::RooFit::Detail::RooFixedProdPdf*>(p));
   }
   static void deleteArray_RooFitcLcLDetailcLcLRooFixedProdPdf(void *p) {
      delete [] (static_cast<::RooFit::Detail::RooFixedProdPdf*>(p));
   }
   static void destruct_RooFitcLcLDetailcLcLRooFixedProdPdf(void *p) {
      typedef ::RooFit::Detail::RooFixedProdPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::Detail::RooFixedProdPdf

//______________________________________________________________________________
void RooProduct::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooProduct.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooProduct::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooProduct::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooProduct(void *p) {
      return  p ? new(p) ::RooProduct : new ::RooProduct;
   }
   static void *newArray_RooProduct(Long_t nElements, void *p) {
      return p ? new(p) ::RooProduct[nElements] : new ::RooProduct[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooProduct(void *p) {
      delete (static_cast<::RooProduct*>(p));
   }
   static void deleteArray_RooProduct(void *p) {
      delete [] (static_cast<::RooProduct*>(p));
   }
   static void destruct_RooProduct(void *p) {
      typedef ::RooProduct current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooProduct

//______________________________________________________________________________
void RooProfileLL::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooProfileLL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooProfileLL::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooProfileLL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooProfileLL(void *p) {
      delete (static_cast<::RooProfileLL*>(p));
   }
   static void deleteArray_RooProfileLL(void *p) {
      delete [] (static_cast<::RooProfileLL*>(p));
   }
   static void destruct_RooProfileLL(void *p) {
      typedef ::RooProfileLL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooProfileLL

//______________________________________________________________________________
void RooProjectedPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooProjectedPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooProjectedPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooProjectedPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooProjectedPdf(void *p) {
      return  p ? new(p) ::RooProjectedPdf : new ::RooProjectedPdf;
   }
   static void *newArray_RooProjectedPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooProjectedPdf[nElements] : new ::RooProjectedPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooProjectedPdf(void *p) {
      delete (static_cast<::RooProjectedPdf*>(p));
   }
   static void deleteArray_RooProjectedPdf(void *p) {
      delete [] (static_cast<::RooProjectedPdf*>(p));
   }
   static void destruct_RooProjectedPdf(void *p) {
      typedef ::RooProjectedPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooProjectedPdf

//______________________________________________________________________________
void RooPullVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooPullVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooPullVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooPullVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooPullVar(void *p) {
      return  p ? new(p) ::RooPullVar : new ::RooPullVar;
   }
   static void *newArray_RooPullVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooPullVar[nElements] : new ::RooPullVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooPullVar(void *p) {
      delete (static_cast<::RooPullVar*>(p));
   }
   static void deleteArray_RooPullVar(void *p) {
      delete [] (static_cast<::RooPullVar*>(p));
   }
   static void destruct_RooPullVar(void *p) {
      typedef ::RooPullVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooPullVar

//______________________________________________________________________________
void RooQuasiRandomGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooQuasiRandomGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooQuasiRandomGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooQuasiRandomGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooQuasiRandomGenerator(void *p) {
      return  p ? new(p) ::RooQuasiRandomGenerator : new ::RooQuasiRandomGenerator;
   }
   static void *newArray_RooQuasiRandomGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::RooQuasiRandomGenerator[nElements] : new ::RooQuasiRandomGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooQuasiRandomGenerator(void *p) {
      delete (static_cast<::RooQuasiRandomGenerator*>(p));
   }
   static void deleteArray_RooQuasiRandomGenerator(void *p) {
      delete [] (static_cast<::RooQuasiRandomGenerator*>(p));
   }
   static void destruct_RooQuasiRandomGenerator(void *p) {
      typedef ::RooQuasiRandomGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooQuasiRandomGenerator

//______________________________________________________________________________
void RooRandom::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRandom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRandom::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRandom::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooRandom(void *p) {
      delete (static_cast<::RooRandom*>(p));
   }
   static void deleteArray_RooRandom(void *p) {
      delete [] (static_cast<::RooRandom*>(p));
   }
   static void destruct_RooRandom(void *p) {
      typedef ::RooRandom current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRandom

//______________________________________________________________________________
void RooRandomizeParamMCSModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRandomizeParamMCSModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRandomizeParamMCSModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRandomizeParamMCSModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRandomizeParamMCSModule(void *p) {
      return  p ? new(p) ::RooRandomizeParamMCSModule : new ::RooRandomizeParamMCSModule;
   }
   static void *newArray_RooRandomizeParamMCSModule(Long_t nElements, void *p) {
      return p ? new(p) ::RooRandomizeParamMCSModule[nElements] : new ::RooRandomizeParamMCSModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRandomizeParamMCSModule(void *p) {
      delete (static_cast<::RooRandomizeParamMCSModule*>(p));
   }
   static void deleteArray_RooRandomizeParamMCSModule(void *p) {
      delete [] (static_cast<::RooRandomizeParamMCSModule*>(p));
   }
   static void destruct_RooRandomizeParamMCSModule(void *p) {
      typedef ::RooRandomizeParamMCSModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRandomizeParamMCSModule

//______________________________________________________________________________
void RooRangeBinning::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRangeBinning.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRangeBinning::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRangeBinning::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRangeBinning(void *p) {
      return  p ? new(p) ::RooRangeBinning : new ::RooRangeBinning;
   }
   static void *newArray_RooRangeBinning(Long_t nElements, void *p) {
      return p ? new(p) ::RooRangeBinning[nElements] : new ::RooRangeBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRangeBinning(void *p) {
      delete (static_cast<::RooRangeBinning*>(p));
   }
   static void deleteArray_RooRangeBinning(void *p) {
      delete [] (static_cast<::RooRangeBinning*>(p));
   }
   static void destruct_RooRangeBinning(void *p) {
      typedef ::RooRangeBinning current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRangeBinning

//______________________________________________________________________________
void RooRangeBoolean::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRangeBoolean.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRangeBoolean::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRangeBoolean::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRangeBoolean(void *p) {
      return  p ? new(p) ::RooRangeBoolean : new ::RooRangeBoolean;
   }
   static void *newArray_RooRangeBoolean(Long_t nElements, void *p) {
      return p ? new(p) ::RooRangeBoolean[nElements] : new ::RooRangeBoolean[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRangeBoolean(void *p) {
      delete (static_cast<::RooRangeBoolean*>(p));
   }
   static void deleteArray_RooRangeBoolean(void *p) {
      delete [] (static_cast<::RooRangeBoolean*>(p));
   }
   static void destruct_RooRangeBoolean(void *p) {
      typedef ::RooRangeBoolean current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRangeBoolean

//______________________________________________________________________________
void RooRatio::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRatio.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRatio::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRatio::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRatio(void *p) {
      return  p ? new(p) ::RooRatio : new ::RooRatio;
   }
   static void *newArray_RooRatio(Long_t nElements, void *p) {
      return p ? new(p) ::RooRatio[nElements] : new ::RooRatio[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRatio(void *p) {
      delete (static_cast<::RooRatio*>(p));
   }
   static void deleteArray_RooRatio(void *p) {
      delete [] (static_cast<::RooRatio*>(p));
   }
   static void destruct_RooRatio(void *p) {
      typedef ::RooRatio current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRatio

//______________________________________________________________________________
void RooRealConstant::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealConstant.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealConstant::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealConstant::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealConstant(void *p) {
      return  p ? new(p) ::RooRealConstant : new ::RooRealConstant;
   }
   static void *newArray_RooRealConstant(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealConstant[nElements] : new ::RooRealConstant[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealConstant(void *p) {
      delete (static_cast<::RooRealConstant*>(p));
   }
   static void deleteArray_RooRealConstant(void *p) {
      delete [] (static_cast<::RooRealConstant*>(p));
   }
   static void destruct_RooRealConstant(void *p) {
      typedef ::RooRealConstant current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealConstant

//______________________________________________________________________________
void RooRealIntegral::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealIntegral.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealIntegral::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealIntegral::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealIntegral(void *p) {
      return  p ? new(p) ::RooRealIntegral : new ::RooRealIntegral;
   }
   static void *newArray_RooRealIntegral(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealIntegral[nElements] : new ::RooRealIntegral[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealIntegral(void *p) {
      delete (static_cast<::RooRealIntegral*>(p));
   }
   static void deleteArray_RooRealIntegral(void *p) {
      delete [] (static_cast<::RooRealIntegral*>(p));
   }
   static void destruct_RooRealIntegral(void *p) {
      typedef ::RooRealIntegral current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealIntegral

//______________________________________________________________________________
void RooRealSumFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealSumFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealSumFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealSumFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealSumFunc(void *p) {
      return  p ? new(p) ::RooRealSumFunc : new ::RooRealSumFunc;
   }
   static void *newArray_RooRealSumFunc(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealSumFunc[nElements] : new ::RooRealSumFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealSumFunc(void *p) {
      delete (static_cast<::RooRealSumFunc*>(p));
   }
   static void deleteArray_RooRealSumFunc(void *p) {
      delete [] (static_cast<::RooRealSumFunc*>(p));
   }
   static void destruct_RooRealSumFunc(void *p) {
      typedef ::RooRealSumFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealSumFunc

//______________________________________________________________________________
void RooRealSumPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealSumPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealSumPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealSumPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealSumPdf(void *p) {
      return  p ? new(p) ::RooRealSumPdf : new ::RooRealSumPdf;
   }
   static void *newArray_RooRealSumPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealSumPdf[nElements] : new ::RooRealSumPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealSumPdf(void *p) {
      delete (static_cast<::RooRealSumPdf*>(p));
   }
   static void deleteArray_RooRealSumPdf(void *p) {
      delete [] (static_cast<::RooRealSumPdf*>(p));
   }
   static void destruct_RooRealSumPdf(void *p) {
      typedef ::RooRealSumPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealSumPdf

//______________________________________________________________________________
void RooRealVarSharedProperties::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRealVarSharedProperties.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRealVarSharedProperties::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRealVarSharedProperties::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRealVarSharedProperties(void *p) {
      return  p ? new(p) ::RooRealVarSharedProperties : new ::RooRealVarSharedProperties;
   }
   static void *newArray_RooRealVarSharedProperties(Long_t nElements, void *p) {
      return p ? new(p) ::RooRealVarSharedProperties[nElements] : new ::RooRealVarSharedProperties[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRealVarSharedProperties(void *p) {
      delete (static_cast<::RooRealVarSharedProperties*>(p));
   }
   static void deleteArray_RooRealVarSharedProperties(void *p) {
      delete [] (static_cast<::RooRealVarSharedProperties*>(p));
   }
   static void destruct_RooRealVarSharedProperties(void *p) {
      typedef ::RooRealVarSharedProperties current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRealVarSharedProperties

//______________________________________________________________________________
void RooRecursiveFraction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRecursiveFraction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRecursiveFraction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRecursiveFraction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRecursiveFraction(void *p) {
      return  p ? new(p) ::RooRecursiveFraction : new ::RooRecursiveFraction;
   }
   static void *newArray_RooRecursiveFraction(Long_t nElements, void *p) {
      return p ? new(p) ::RooRecursiveFraction[nElements] : new ::RooRecursiveFraction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRecursiveFraction(void *p) {
      delete (static_cast<::RooRecursiveFraction*>(p));
   }
   static void deleteArray_RooRecursiveFraction(void *p) {
      delete [] (static_cast<::RooRecursiveFraction*>(p));
   }
   static void destruct_RooRecursiveFraction(void *p) {
      typedef ::RooRecursiveFraction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRecursiveFraction

//______________________________________________________________________________
void RooRefCountList::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooRefCountList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooRefCountList::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooRefCountList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooRefCountList(void *p) {
      return  p ? new(p) ::RooRefCountList : new ::RooRefCountList;
   }
   static void *newArray_RooRefCountList(Long_t nElements, void *p) {
      return p ? new(p) ::RooRefCountList[nElements] : new ::RooRefCountList[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooRefCountList(void *p) {
      delete (static_cast<::RooRefCountList*>(p));
   }
   static void deleteArray_RooRefCountList(void *p) {
      delete [] (static_cast<::RooRefCountList*>(p));
   }
   static void destruct_RooRefCountList(void *p) {
      typedef ::RooRefCountList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooRefCountList

//______________________________________________________________________________
void RooSecondMoment::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSecondMoment.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSecondMoment::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSecondMoment::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSecondMoment(void *p) {
      return  p ? new(p) ::RooSecondMoment : new ::RooSecondMoment;
   }
   static void *newArray_RooSecondMoment(Long_t nElements, void *p) {
      return p ? new(p) ::RooSecondMoment[nElements] : new ::RooSecondMoment[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSecondMoment(void *p) {
      delete (static_cast<::RooSecondMoment*>(p));
   }
   static void deleteArray_RooSecondMoment(void *p) {
      delete [] (static_cast<::RooSecondMoment*>(p));
   }
   static void destruct_RooSecondMoment(void *p) {
      typedef ::RooSecondMoment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSecondMoment

//______________________________________________________________________________
void RooSimGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSimGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSimGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSimGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooSimGenContext(void *p) {
      delete (static_cast<::RooSimGenContext*>(p));
   }
   static void deleteArray_RooSimGenContext(void *p) {
      delete [] (static_cast<::RooSimGenContext*>(p));
   }
   static void destruct_RooSimGenContext(void *p) {
      typedef ::RooSimGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSimGenContext

//______________________________________________________________________________
void RooSimSplitGenContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSimSplitGenContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSimSplitGenContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSimSplitGenContext::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooSimSplitGenContext(void *p) {
      delete (static_cast<::RooSimSplitGenContext*>(p));
   }
   static void deleteArray_RooSimSplitGenContext(void *p) {
      delete [] (static_cast<::RooSimSplitGenContext*>(p));
   }
   static void destruct_RooSimSplitGenContext(void *p) {
      typedef ::RooSimSplitGenContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSimSplitGenContext

//______________________________________________________________________________
void RooSimultaneous::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSimultaneous.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSimultaneous::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSimultaneous::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSimultaneous(void *p) {
      return  p ? new(p) ::RooSimultaneous : new ::RooSimultaneous;
   }
   static void *newArray_RooSimultaneous(Long_t nElements, void *p) {
      return p ? new(p) ::RooSimultaneous[nElements] : new ::RooSimultaneous[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSimultaneous(void *p) {
      delete (static_cast<::RooSimultaneous*>(p));
   }
   static void deleteArray_RooSimultaneous(void *p) {
      delete [] (static_cast<::RooSimultaneous*>(p));
   }
   static void destruct_RooSimultaneous(void *p) {
      typedef ::RooSimultaneous current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSimultaneous

//______________________________________________________________________________
void RooStreamParser::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStreamParser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStreamParser::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStreamParser::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStreamParser(void *p) {
      delete (static_cast<::RooStreamParser*>(p));
   }
   static void deleteArray_RooStreamParser(void *p) {
      delete [] (static_cast<::RooStreamParser*>(p));
   }
   static void destruct_RooStreamParser(void *p) {
      typedef ::RooStreamParser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStreamParser

//______________________________________________________________________________
void RooStringVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStringVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStringVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStringVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStringVar(void *p) {
      return  p ? new(p) ::RooStringVar : new ::RooStringVar;
   }
   static void *newArray_RooStringVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooStringVar[nElements] : new ::RooStringVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStringVar(void *p) {
      delete (static_cast<::RooStringVar*>(p));
   }
   static void deleteArray_RooStringVar(void *p) {
      delete [] (static_cast<::RooStringVar*>(p));
   }
   static void destruct_RooStringVar(void *p) {
      typedef ::RooStringVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStringVar

//______________________________________________________________________________
void RooStudyPackage::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStudyPackage.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStudyPackage::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStudyPackage::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStudyPackage(void *p) {
      return  p ? new(p) ::RooStudyPackage : new ::RooStudyPackage;
   }
   static void *newArray_RooStudyPackage(Long_t nElements, void *p) {
      return p ? new(p) ::RooStudyPackage[nElements] : new ::RooStudyPackage[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStudyPackage(void *p) {
      delete (static_cast<::RooStudyPackage*>(p));
   }
   static void deleteArray_RooStudyPackage(void *p) {
      delete [] (static_cast<::RooStudyPackage*>(p));
   }
   static void destruct_RooStudyPackage(void *p) {
      typedef ::RooStudyPackage current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStudyPackage

//______________________________________________________________________________
void RooStudyManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStudyManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStudyManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStudyManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStudyManager(void *p) {
      delete (static_cast<::RooStudyManager*>(p));
   }
   static void deleteArray_RooStudyManager(void *p) {
      delete [] (static_cast<::RooStudyManager*>(p));
   }
   static void destruct_RooStudyManager(void *p) {
      typedef ::RooStudyManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStudyManager

//______________________________________________________________________________
void RooSuperCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooSuperCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooSuperCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooSuperCategory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooSuperCategory(void *p) {
      return  p ? new(p) ::RooSuperCategory : new ::RooSuperCategory;
   }
   static void *newArray_RooSuperCategory(Long_t nElements, void *p) {
      return p ? new(p) ::RooSuperCategory[nElements] : new ::RooSuperCategory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooSuperCategory(void *p) {
      delete (static_cast<::RooSuperCategory*>(p));
   }
   static void deleteArray_RooSuperCategory(void *p) {
      delete [] (static_cast<::RooSuperCategory*>(p));
   }
   static void destruct_RooSuperCategory(void *p) {
      typedef ::RooSuperCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooSuperCategory

//______________________________________________________________________________
void RooTObjWrap::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTObjWrap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTObjWrap::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTObjWrap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTObjWrap(void *p) {
      return  p ? new(p) ::RooTObjWrap : new ::RooTObjWrap;
   }
   static void *newArray_RooTObjWrap(Long_t nElements, void *p) {
      return p ? new(p) ::RooTObjWrap[nElements] : new ::RooTObjWrap[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTObjWrap(void *p) {
      delete (static_cast<::RooTObjWrap*>(p));
   }
   static void deleteArray_RooTObjWrap(void *p) {
      delete [] (static_cast<::RooTObjWrap*>(p));
   }
   static void destruct_RooTObjWrap(void *p) {
      typedef ::RooTObjWrap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTObjWrap

//______________________________________________________________________________
void RooThresholdCategory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooThresholdCategory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooThresholdCategory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooThresholdCategory::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooThresholdCategory(void *p) {
      return  p ? new(p) ::RooThresholdCategory : new ::RooThresholdCategory;
   }
   static void *newArray_RooThresholdCategory(Long_t nElements, void *p) {
      return p ? new(p) ::RooThresholdCategory[nElements] : new ::RooThresholdCategory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooThresholdCategory(void *p) {
      delete (static_cast<::RooThresholdCategory*>(p));
   }
   static void deleteArray_RooThresholdCategory(void *p) {
      delete [] (static_cast<::RooThresholdCategory*>(p));
   }
   static void destruct_RooThresholdCategory(void *p) {
      typedef ::RooThresholdCategory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooThresholdCategory

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTreeDataStore(void *p) {
      return  p ? new(p) ::RooTreeDataStore : new ::RooTreeDataStore;
   }
   static void *newArray_RooTreeDataStore(Long_t nElements, void *p) {
      return p ? new(p) ::RooTreeDataStore[nElements] : new ::RooTreeDataStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTreeDataStore(void *p) {
      delete (static_cast<::RooTreeDataStore*>(p));
   }
   static void deleteArray_RooTreeDataStore(void *p) {
      delete [] (static_cast<::RooTreeDataStore*>(p));
   }
   static void destruct_RooTreeDataStore(void *p) {
      typedef ::RooTreeDataStore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooTreeDataStore(TBuffer &buf, void *obj) {
      ((::RooTreeDataStore*)obj)->::RooTreeDataStore::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooTreeDataStore

//______________________________________________________________________________
void RooTruthModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooTruthModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooTruthModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooTruthModel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooTruthModel(void *p) {
      return  p ? new(p) ::RooTruthModel : new ::RooTruthModel;
   }
   static void *newArray_RooTruthModel(Long_t nElements, void *p) {
      return p ? new(p) ::RooTruthModel[nElements] : new ::RooTruthModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooTruthModel(void *p) {
      delete (static_cast<::RooTruthModel*>(p));
   }
   static void deleteArray_RooTruthModel(void *p) {
      delete [] (static_cast<::RooTruthModel*>(p));
   }
   static void destruct_RooTruthModel(void *p) {
      typedef ::RooTruthModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooTruthModel

//______________________________________________________________________________
void RooUniformBinning::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooUniformBinning.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooUniformBinning::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooUniformBinning::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooUniformBinning(void *p) {
      return  p ? new(p) ::RooUniformBinning : new ::RooUniformBinning;
   }
   static void *newArray_RooUniformBinning(Long_t nElements, void *p) {
      return p ? new(p) ::RooUniformBinning[nElements] : new ::RooUniformBinning[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooUniformBinning(void *p) {
      delete (static_cast<::RooUniformBinning*>(p));
   }
   static void deleteArray_RooUniformBinning(void *p) {
      delete [] (static_cast<::RooUniformBinning*>(p));
   }
   static void destruct_RooUniformBinning(void *p) {
      typedef ::RooUniformBinning current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooUniformBinning

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooVectorDataStore(void *p) {
      return  p ? new(p) ::RooVectorDataStore : new ::RooVectorDataStore;
   }
   static void *newArray_RooVectorDataStore(Long_t nElements, void *p) {
      return p ? new(p) ::RooVectorDataStore[nElements] : new ::RooVectorDataStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooVectorDataStore(void *p) {
      delete (static_cast<::RooVectorDataStore*>(p));
   }
   static void deleteArray_RooVectorDataStore(void *p) {
      delete [] (static_cast<::RooVectorDataStore*>(p));
   }
   static void destruct_RooVectorDataStore(void *p) {
      typedef ::RooVectorDataStore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RooVectorDataStore(TBuffer &buf, void *obj) {
      ((::RooVectorDataStore*)obj)->::RooVectorDataStore::Streamer(buf);
   }
} // end of namespace ROOT for class ::RooVectorDataStore

//______________________________________________________________________________
void RooVectorDataStore::RealVector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooVectorDataStore::RealVector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooVectorDataStore::RealVector::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooVectorDataStore::RealVector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooVectorDataStorecLcLRealVector(void *p) {
      return  p ? new(p) ::RooVectorDataStore::RealVector : new ::RooVectorDataStore::RealVector;
   }
   static void *newArray_RooVectorDataStorecLcLRealVector(Long_t nElements, void *p) {
      return p ? new(p) ::RooVectorDataStore::RealVector[nElements] : new ::RooVectorDataStore::RealVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooVectorDataStorecLcLRealVector(void *p) {
      delete (static_cast<::RooVectorDataStore::RealVector*>(p));
   }
   static void deleteArray_RooVectorDataStorecLcLRealVector(void *p) {
      delete [] (static_cast<::RooVectorDataStore::RealVector*>(p));
   }
   static void destruct_RooVectorDataStorecLcLRealVector(void *p) {
      typedef ::RooVectorDataStore::RealVector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooVectorDataStore::RealVector

//______________________________________________________________________________
void RooVectorDataStore::RealFullVector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooVectorDataStore::RealFullVector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooVectorDataStore::RealFullVector::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooVectorDataStore::RealFullVector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooVectorDataStorecLcLRealFullVector(void *p) {
      return  p ? new(p) ::RooVectorDataStore::RealFullVector : new ::RooVectorDataStore::RealFullVector;
   }
   static void *newArray_RooVectorDataStorecLcLRealFullVector(Long_t nElements, void *p) {
      return p ? new(p) ::RooVectorDataStore::RealFullVector[nElements] : new ::RooVectorDataStore::RealFullVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooVectorDataStorecLcLRealFullVector(void *p) {
      delete (static_cast<::RooVectorDataStore::RealFullVector*>(p));
   }
   static void deleteArray_RooVectorDataStorecLcLRealFullVector(void *p) {
      delete [] (static_cast<::RooVectorDataStore::RealFullVector*>(p));
   }
   static void destruct_RooVectorDataStorecLcLRealFullVector(void *p) {
      typedef ::RooVectorDataStore::RealFullVector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooVectorDataStore::RealFullVector

//______________________________________________________________________________
void RooVectorDataStore::CatVector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooVectorDataStore::CatVector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooVectorDataStore::CatVector::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooVectorDataStore::CatVector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooVectorDataStorecLcLCatVector(void *p) {
      return  p ? new(p) ::RooVectorDataStore::CatVector : new ::RooVectorDataStore::CatVector;
   }
   static void *newArray_RooVectorDataStorecLcLCatVector(Long_t nElements, void *p) {
      return p ? new(p) ::RooVectorDataStore::CatVector[nElements] : new ::RooVectorDataStore::CatVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooVectorDataStorecLcLCatVector(void *p) {
      delete (static_cast<::RooVectorDataStore::CatVector*>(p));
   }
   static void deleteArray_RooVectorDataStorecLcLCatVector(void *p) {
      delete [] (static_cast<::RooVectorDataStore::CatVector*>(p));
   }
   static void destruct_RooVectorDataStorecLcLCatVector(void *p) {
      typedef ::RooVectorDataStore::CatVector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooVectorDataStore::CatVector

//______________________________________________________________________________
void RooWrapperPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooWrapperPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooWrapperPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooWrapperPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooWrapperPdf(void *p) {
      return  p ? new(p) ::RooWrapperPdf : new ::RooWrapperPdf;
   }
   static void *newArray_RooWrapperPdf(Long_t nElements, void *p) {
      return p ? new(p) ::RooWrapperPdf[nElements] : new ::RooWrapperPdf[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooWrapperPdf(void *p) {
      delete (static_cast<::RooWrapperPdf*>(p));
   }
   static void deleteArray_RooWrapperPdf(void *p) {
      delete [] (static_cast<::RooWrapperPdf*>(p));
   }
   static void destruct_RooWrapperPdf(void *p) {
      typedef ::RooWrapperPdf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooWrapperPdf

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "functional", 86,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "functional", 86,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEpairlEstringcOintgRsPgR_Dictionary();
   static void vectorlEpairlEstringcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEstringcOintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEstringcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEstringcOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEstringcOintgRsPgR(void *p);
   static void destruct_vectorlEpairlEstringcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<string,int> >*)
   {
      vector<pair<string,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<string,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<string,int> >", -2, "functional", 86,
                  typeid(vector<pair<string,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEstringcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<string,int> >) );
      instance.SetNew(&new_vectorlEpairlEstringcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEstringcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEstringcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEstringcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEstringcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<string,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<string,int> >","std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<string,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEstringcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<string,int> >*>(nullptr))->GetClass();
      vectorlEpairlEstringcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEstringcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEstringcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<string,int> > : new vector<pair<string,int> >;
   }
   static void *newArray_vectorlEpairlEstringcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<string,int> >[nElements] : new vector<pair<string,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEstringcOintgRsPgR(void *p) {
      delete (static_cast<vector<pair<string,int> >*>(p));
   }
   static void deleteArray_vectorlEpairlEstringcOintgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<string,int> >*>(p));
   }
   static void destruct_vectorlEpairlEstringcOintgRsPgR(void *p) {
      typedef vector<pair<string,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<string,int> >

namespace ROOT {
   static TClass *vectorlEpairlEdoublecOintgRsPgR_Dictionary();
   static void vectorlEpairlEdoublecOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEdoublecOintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEdoublecOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEdoublecOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEdoublecOintgRsPgR(void *p);
   static void destruct_vectorlEpairlEdoublecOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<double,int> >*)
   {
      vector<pair<double,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<double,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<double,int> >", -2, "functional", 86,
                  typeid(vector<pair<double,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEdoublecOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<double,int> >) );
      instance.SetNew(&new_vectorlEpairlEdoublecOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEdoublecOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEdoublecOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEdoublecOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEdoublecOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<double,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<double,int> >","std::__1::vector<std::__1::pair<double, int>, std::__1::allocator<std::__1::pair<double, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<double,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEdoublecOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<double,int> >*>(nullptr))->GetClass();
      vectorlEpairlEdoublecOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEdoublecOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEdoublecOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<double,int> > : new vector<pair<double,int> >;
   }
   static void *newArray_vectorlEpairlEdoublecOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<double,int> >[nElements] : new vector<pair<double,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEdoublecOintgRsPgR(void *p) {
      delete (static_cast<vector<pair<double,int> >*>(p));
   }
   static void deleteArray_vectorlEpairlEdoublecOintgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<double,int> >*>(p));
   }
   static void destruct_vectorlEpairlEdoublecOintgRsPgR(void *p) {
      typedef vector<pair<double,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<double,int> >

namespace ROOT {
   static TClass *vectorlEpairlETObjectmUcOstringgRsPgR_Dictionary();
   static void vectorlEpairlETObjectmUcOstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlETObjectmUcOstringgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlETObjectmUcOstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlETObjectmUcOstringgRsPgR(void *p);
   static void deleteArray_vectorlEpairlETObjectmUcOstringgRsPgR(void *p);
   static void destruct_vectorlEpairlETObjectmUcOstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<TObject*,string> >*)
   {
      vector<pair<TObject*,string> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<TObject*,string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<TObject*,string> >", -2, "functional", 86,
                  typeid(vector<pair<TObject*,string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlETObjectmUcOstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<TObject*,string> >) );
      instance.SetNew(&new_vectorlEpairlETObjectmUcOstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlETObjectmUcOstringgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlETObjectmUcOstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlETObjectmUcOstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlETObjectmUcOstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<TObject*,string> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<TObject*,string> >","std::__1::vector<std::__1::pair<TObject*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<TObject*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<TObject*,string> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlETObjectmUcOstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<TObject*,string> >*>(nullptr))->GetClass();
      vectorlEpairlETObjectmUcOstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlETObjectmUcOstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlETObjectmUcOstringgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<TObject*,string> > : new vector<pair<TObject*,string> >;
   }
   static void *newArray_vectorlEpairlETObjectmUcOstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<TObject*,string> >[nElements] : new vector<pair<TObject*,string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlETObjectmUcOstringgRsPgR(void *p) {
      delete (static_cast<vector<pair<TObject*,string> >*>(p));
   }
   static void deleteArray_vectorlEpairlETObjectmUcOstringgRsPgR(void *p) {
      delete [] (static_cast<vector<pair<TObject*,string> >*>(p));
   }
   static void destruct_vectorlEpairlETObjectmUcOstringgRsPgR(void *p) {
      typedef vector<pair<TObject*,string> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<TObject*,string> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "functional", 86,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::__1::vector<int, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "functional", 86,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::__1::vector<double, std::__1::allocator<double>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlERooVectorDataStorecLcLRealVectormUgR_Dictionary();
   static void vectorlERooVectorDataStorecLcLRealVectormUgR_TClassManip(TClass*);
   static void *new_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p = nullptr);
   static void *newArray_vectorlERooVectorDataStorecLcLRealVectormUgR(Long_t size, void *p);
   static void delete_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p);
   static void deleteArray_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p);
   static void destruct_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooVectorDataStore::RealVector*>*)
   {
      vector<RooVectorDataStore::RealVector*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooVectorDataStore::RealVector*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooVectorDataStore::RealVector*>", -2, "functional", 86,
                  typeid(vector<RooVectorDataStore::RealVector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooVectorDataStorecLcLRealVectormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooVectorDataStore::RealVector*>) );
      instance.SetNew(&new_vectorlERooVectorDataStorecLcLRealVectormUgR);
      instance.SetNewArray(&newArray_vectorlERooVectorDataStorecLcLRealVectormUgR);
      instance.SetDelete(&delete_vectorlERooVectorDataStorecLcLRealVectormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooVectorDataStorecLcLRealVectormUgR);
      instance.SetDestructor(&destruct_vectorlERooVectorDataStorecLcLRealVectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooVectorDataStore::RealVector*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooVectorDataStore::RealVector*>","std::__1::vector<RooVectorDataStore::RealVector*, std::__1::allocator<RooVectorDataStore::RealVector*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooVectorDataStore::RealVector*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooVectorDataStorecLcLRealVectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooVectorDataStore::RealVector*>*>(nullptr))->GetClass();
      vectorlERooVectorDataStorecLcLRealVectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooVectorDataStorecLcLRealVectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooVectorDataStore::RealVector*> : new vector<RooVectorDataStore::RealVector*>;
   }
   static void *newArray_vectorlERooVectorDataStorecLcLRealVectormUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooVectorDataStore::RealVector*>[nElements] : new vector<RooVectorDataStore::RealVector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p) {
      delete (static_cast<vector<RooVectorDataStore::RealVector*>*>(p));
   }
   static void deleteArray_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p) {
      delete [] (static_cast<vector<RooVectorDataStore::RealVector*>*>(p));
   }
   static void destruct_vectorlERooVectorDataStorecLcLRealVectormUgR(void *p) {
      typedef vector<RooVectorDataStore::RealVector*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooVectorDataStore::RealVector*>

namespace ROOT {
   static TClass *vectorlERooVectorDataStorecLcLRealFullVectormUgR_Dictionary();
   static void vectorlERooVectorDataStorecLcLRealFullVectormUgR_TClassManip(TClass*);
   static void *new_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p = nullptr);
   static void *newArray_vectorlERooVectorDataStorecLcLRealFullVectormUgR(Long_t size, void *p);
   static void delete_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p);
   static void deleteArray_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p);
   static void destruct_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooVectorDataStore::RealFullVector*>*)
   {
      vector<RooVectorDataStore::RealFullVector*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooVectorDataStore::RealFullVector*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooVectorDataStore::RealFullVector*>", -2, "functional", 86,
                  typeid(vector<RooVectorDataStore::RealFullVector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooVectorDataStorecLcLRealFullVectormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooVectorDataStore::RealFullVector*>) );
      instance.SetNew(&new_vectorlERooVectorDataStorecLcLRealFullVectormUgR);
      instance.SetNewArray(&newArray_vectorlERooVectorDataStorecLcLRealFullVectormUgR);
      instance.SetDelete(&delete_vectorlERooVectorDataStorecLcLRealFullVectormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooVectorDataStorecLcLRealFullVectormUgR);
      instance.SetDestructor(&destruct_vectorlERooVectorDataStorecLcLRealFullVectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooVectorDataStore::RealFullVector*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooVectorDataStore::RealFullVector*>","std::__1::vector<RooVectorDataStore::RealFullVector*, std::__1::allocator<RooVectorDataStore::RealFullVector*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooVectorDataStore::RealFullVector*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooVectorDataStorecLcLRealFullVectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooVectorDataStore::RealFullVector*>*>(nullptr))->GetClass();
      vectorlERooVectorDataStorecLcLRealFullVectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooVectorDataStorecLcLRealFullVectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooVectorDataStore::RealFullVector*> : new vector<RooVectorDataStore::RealFullVector*>;
   }
   static void *newArray_vectorlERooVectorDataStorecLcLRealFullVectormUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooVectorDataStore::RealFullVector*>[nElements] : new vector<RooVectorDataStore::RealFullVector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p) {
      delete (static_cast<vector<RooVectorDataStore::RealFullVector*>*>(p));
   }
   static void deleteArray_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p) {
      delete [] (static_cast<vector<RooVectorDataStore::RealFullVector*>*>(p));
   }
   static void destruct_vectorlERooVectorDataStorecLcLRealFullVectormUgR(void *p) {
      typedef vector<RooVectorDataStore::RealFullVector*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooVectorDataStore::RealFullVector*>

namespace ROOT {
   static TClass *vectorlERooVectorDataStorecLcLCatVectormUgR_Dictionary();
   static void vectorlERooVectorDataStorecLcLCatVectormUgR_TClassManip(TClass*);
   static void *new_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p = nullptr);
   static void *newArray_vectorlERooVectorDataStorecLcLCatVectormUgR(Long_t size, void *p);
   static void delete_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p);
   static void deleteArray_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p);
   static void destruct_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooVectorDataStore::CatVector*>*)
   {
      vector<RooVectorDataStore::CatVector*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooVectorDataStore::CatVector*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooVectorDataStore::CatVector*>", -2, "functional", 86,
                  typeid(vector<RooVectorDataStore::CatVector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooVectorDataStorecLcLCatVectormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooVectorDataStore::CatVector*>) );
      instance.SetNew(&new_vectorlERooVectorDataStorecLcLCatVectormUgR);
      instance.SetNewArray(&newArray_vectorlERooVectorDataStorecLcLCatVectormUgR);
      instance.SetDelete(&delete_vectorlERooVectorDataStorecLcLCatVectormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooVectorDataStorecLcLCatVectormUgR);
      instance.SetDestructor(&destruct_vectorlERooVectorDataStorecLcLCatVectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooVectorDataStore::CatVector*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooVectorDataStore::CatVector*>","std::__1::vector<RooVectorDataStore::CatVector*, std::__1::allocator<RooVectorDataStore::CatVector*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooVectorDataStore::CatVector*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooVectorDataStorecLcLCatVectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooVectorDataStore::CatVector*>*>(nullptr))->GetClass();
      vectorlERooVectorDataStorecLcLCatVectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooVectorDataStorecLcLCatVectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooVectorDataStore::CatVector*> : new vector<RooVectorDataStore::CatVector*>;
   }
   static void *newArray_vectorlERooVectorDataStorecLcLCatVectormUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooVectorDataStore::CatVector*>[nElements] : new vector<RooVectorDataStore::CatVector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p) {
      delete (static_cast<vector<RooVectorDataStore::CatVector*>*>(p));
   }
   static void deleteArray_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p) {
      delete [] (static_cast<vector<RooVectorDataStore::CatVector*>*>(p));
   }
   static void destruct_vectorlERooVectorDataStorecLcLCatVectormUgR(void *p) {
      typedef vector<RooVectorDataStore::CatVector*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooVectorDataStore::CatVector*>

namespace ROOT {
   static TClass *vectorlERooCollectionProxylERooArgListgRmUgR_Dictionary();
   static void vectorlERooCollectionProxylERooArgListgRmUgR_TClassManip(TClass*);
   static void *new_vectorlERooCollectionProxylERooArgListgRmUgR(void *p = nullptr);
   static void *newArray_vectorlERooCollectionProxylERooArgListgRmUgR(Long_t size, void *p);
   static void delete_vectorlERooCollectionProxylERooArgListgRmUgR(void *p);
   static void deleteArray_vectorlERooCollectionProxylERooArgListgRmUgR(void *p);
   static void destruct_vectorlERooCollectionProxylERooArgListgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooCollectionProxy<RooArgList>*>*)
   {
      vector<RooCollectionProxy<RooArgList>*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooCollectionProxy<RooArgList>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooCollectionProxy<RooArgList>*>", -2, "functional", 86,
                  typeid(vector<RooCollectionProxy<RooArgList>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooCollectionProxylERooArgListgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooCollectionProxy<RooArgList>*>) );
      instance.SetNew(&new_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetNewArray(&newArray_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetDelete(&delete_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.SetDestructor(&destruct_vectorlERooCollectionProxylERooArgListgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooCollectionProxy<RooArgList>*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooCollectionProxy<RooArgList>*>","std::__1::vector<RooCollectionProxy<RooArgList>*, std::__1::allocator<RooCollectionProxy<RooArgList>*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooCollectionProxy<RooArgList>*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooCollectionProxylERooArgListgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooCollectionProxy<RooArgList>*>*>(nullptr))->GetClass();
      vectorlERooCollectionProxylERooArgListgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooCollectionProxylERooArgListgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooCollectionProxy<RooArgList>*> : new vector<RooCollectionProxy<RooArgList>*>;
   }
   static void *newArray_vectorlERooCollectionProxylERooArgListgRmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooCollectionProxy<RooArgList>*>[nElements] : new vector<RooCollectionProxy<RooArgList>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      delete (static_cast<vector<RooCollectionProxy<RooArgList>*>*>(p));
   }
   static void deleteArray_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      delete [] (static_cast<vector<RooCollectionProxy<RooArgList>*>*>(p));
   }
   static void destruct_vectorlERooCollectionProxylERooArgListgRmUgR(void *p) {
      typedef vector<RooCollectionProxy<RooArgList>*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooCollectionProxy<RooArgList>*>

namespace ROOT {
   static TClass *vectorlERooArgSetmUgR_Dictionary();
   static void vectorlERooArgSetmUgR_TClassManip(TClass*);
   static void *new_vectorlERooArgSetmUgR(void *p = nullptr);
   static void *newArray_vectorlERooArgSetmUgR(Long_t size, void *p);
   static void delete_vectorlERooArgSetmUgR(void *p);
   static void deleteArray_vectorlERooArgSetmUgR(void *p);
   static void destruct_vectorlERooArgSetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooArgSet*>*)
   {
      vector<RooArgSet*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooArgSet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooArgSet*>", -2, "functional", 86,
                  typeid(vector<RooArgSet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooArgSetmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooArgSet*>) );
      instance.SetNew(&new_vectorlERooArgSetmUgR);
      instance.SetNewArray(&newArray_vectorlERooArgSetmUgR);
      instance.SetDelete(&delete_vectorlERooArgSetmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooArgSetmUgR);
      instance.SetDestructor(&destruct_vectorlERooArgSetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooArgSet*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooArgSet*>","std::__1::vector<RooArgSet*, std::__1::allocator<RooArgSet*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooArgSet*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooArgSetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooArgSet*>*>(nullptr))->GetClass();
      vectorlERooArgSetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooArgSetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooArgSetmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooArgSet*> : new vector<RooArgSet*>;
   }
   static void *newArray_vectorlERooArgSetmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooArgSet*>[nElements] : new vector<RooArgSet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooArgSetmUgR(void *p) {
      delete (static_cast<vector<RooArgSet*>*>(p));
   }
   static void deleteArray_vectorlERooArgSetmUgR(void *p) {
      delete [] (static_cast<vector<RooArgSet*>*>(p));
   }
   static void destruct_vectorlERooArgSetmUgR(void *p) {
      typedef vector<RooArgSet*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooArgSet*>

namespace ROOT {
   static TClass *vectorlERooAbsArgmUgR_Dictionary();
   static void vectorlERooAbsArgmUgR_TClassManip(TClass*);
   static void *new_vectorlERooAbsArgmUgR(void *p = nullptr);
   static void *newArray_vectorlERooAbsArgmUgR(Long_t size, void *p);
   static void delete_vectorlERooAbsArgmUgR(void *p);
   static void deleteArray_vectorlERooAbsArgmUgR(void *p);
   static void destruct_vectorlERooAbsArgmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooAbsArg*>*)
   {
      vector<RooAbsArg*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooAbsArg*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooAbsArg*>", -2, "functional", 86,
                  typeid(vector<RooAbsArg*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooAbsArgmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooAbsArg*>) );
      instance.SetNew(&new_vectorlERooAbsArgmUgR);
      instance.SetNewArray(&newArray_vectorlERooAbsArgmUgR);
      instance.SetDelete(&delete_vectorlERooAbsArgmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooAbsArgmUgR);
      instance.SetDestructor(&destruct_vectorlERooAbsArgmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooAbsArg*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooAbsArg*>","std::__1::vector<RooAbsArg*, std::__1::allocator<RooAbsArg*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooAbsArg*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooAbsArgmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooAbsArg*>*>(nullptr))->GetClass();
      vectorlERooAbsArgmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooAbsArgmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooAbsArgmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooAbsArg*> : new vector<RooAbsArg*>;
   }
   static void *newArray_vectorlERooAbsArgmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooAbsArg*>[nElements] : new vector<RooAbsArg*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooAbsArgmUgR(void *p) {
      delete (static_cast<vector<RooAbsArg*>*>(p));
   }
   static void deleteArray_vectorlERooAbsArgmUgR(void *p) {
      delete [] (static_cast<vector<RooAbsArg*>*>(p));
   }
   static void destruct_vectorlERooAbsArgmUgR(void *p) {
      typedef vector<RooAbsArg*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooAbsArg*>

namespace ROOT {
   static TClass *unordered_maplEstringcORooAbsBinningmUgR_Dictionary();
   static void unordered_maplEstringcORooAbsBinningmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcORooAbsBinningmUgR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcORooAbsBinningmUgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcORooAbsBinningmUgR(void *p);
   static void deleteArray_unordered_maplEstringcORooAbsBinningmUgR(void *p);
   static void destruct_unordered_maplEstringcORooAbsBinningmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,RooAbsBinning*>*)
   {
      unordered_map<string,RooAbsBinning*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,RooAbsBinning*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,RooAbsBinning*>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,RooAbsBinning*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcORooAbsBinningmUgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,RooAbsBinning*>) );
      instance.SetNew(&new_unordered_maplEstringcORooAbsBinningmUgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcORooAbsBinningmUgR);
      instance.SetDelete(&delete_unordered_maplEstringcORooAbsBinningmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcORooAbsBinningmUgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcORooAbsBinningmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,RooAbsBinning*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,RooAbsBinning*>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsBinning*, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsBinning*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,RooAbsBinning*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcORooAbsBinningmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,RooAbsBinning*>*>(nullptr))->GetClass();
      unordered_maplEstringcORooAbsBinningmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcORooAbsBinningmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcORooAbsBinningmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,RooAbsBinning*> : new unordered_map<string,RooAbsBinning*>;
   }
   static void *newArray_unordered_maplEstringcORooAbsBinningmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,RooAbsBinning*>[nElements] : new unordered_map<string,RooAbsBinning*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcORooAbsBinningmUgR(void *p) {
      delete (static_cast<unordered_map<string,RooAbsBinning*>*>(p));
   }
   static void deleteArray_unordered_maplEstringcORooAbsBinningmUgR(void *p) {
      delete [] (static_cast<unordered_map<string,RooAbsBinning*>*>(p));
   }
   static void destruct_unordered_maplEstringcORooAbsBinningmUgR(void *p) {
      typedef unordered_map<string,RooAbsBinning*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,RooAbsBinning*>

namespace ROOT {
   static TClass *setlEstringgR_Dictionary();
   static void setlEstringgR_TClassManip(TClass*);
   static void *new_setlEstringgR(void *p = nullptr);
   static void *newArray_setlEstringgR(Long_t size, void *p);
   static void delete_setlEstringgR(void *p);
   static void deleteArray_setlEstringgR(void *p);
   static void destruct_setlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<string>*)
   {
      set<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<string>));
      static ::ROOT::TGenericClassInfo 
         instance("set<string>", -2, "set", 576,
                  typeid(set<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(set<string>) );
      instance.SetNew(&new_setlEstringgR);
      instance.SetNewArray(&newArray_setlEstringgR);
      instance.SetDelete(&delete_setlEstringgR);
      instance.SetDeleteArray(&deleteArray_setlEstringgR);
      instance.SetDestructor(&destruct_setlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<string>","std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<string>*>(nullptr))->GetClass();
      setlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<string> : new set<string>;
   }
   static void *newArray_setlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<string>[nElements] : new set<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEstringgR(void *p) {
      delete (static_cast<set<string>*>(p));
   }
   static void deleteArray_setlEstringgR(void *p) {
      delete [] (static_cast<set<string>*>(p));
   }
   static void destruct_setlEstringgR(void *p) {
      typedef set<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<string>

namespace ROOT {
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary();
   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<int> >*)
   {
      map<string,vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<int> >", -2, "map", 975,
                  typeid(map<string,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,vector<int> >) );
      instance.SetNew(&new_maplEstringcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<int> >","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::vector<int, std::__1::allocator<int>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::vector<int, std::__1::allocator<int>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<int> >*>(nullptr))->GetClass();
      maplEstringcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<int> > : new map<string,vector<int> >;
   }
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<int> >[nElements] : new map<string,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete (static_cast<map<string,vector<int> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<int> >*>(p));
   }
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p) {
      typedef map<string,vector<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<int> >

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = nullptr);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 975,
                  typeid(map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,string>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,string>*>(nullptr))->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete (static_cast<map<string,string>*>(p));
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] (static_cast<map<string,string>*>(p));
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = nullptr);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 975,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,int>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,int>*>(nullptr))->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete (static_cast<map<string,int>*>(p));
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] (static_cast<map<string,int>*>(p));
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEstringcOTH1mUgR_Dictionary();
   static void maplEstringcOTH1mUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTH1mUgR(void *p = nullptr);
   static void *newArray_maplEstringcOTH1mUgR(Long_t size, void *p);
   static void delete_maplEstringcOTH1mUgR(void *p);
   static void deleteArray_maplEstringcOTH1mUgR(void *p);
   static void destruct_maplEstringcOTH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TH1*>*)
   {
      map<string,TH1*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TH1*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TH1*>", -2, "map", 975,
                  typeid(map<string,TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTH1mUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,TH1*>) );
      instance.SetNew(&new_maplEstringcOTH1mUgR);
      instance.SetNewArray(&newArray_maplEstringcOTH1mUgR);
      instance.SetDelete(&delete_maplEstringcOTH1mUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTH1mUgR);
      instance.SetDestructor(&destruct_maplEstringcOTH1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TH1*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,TH1*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, TH1*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, TH1*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,TH1*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,TH1*>*>(nullptr))->GetClass();
      maplEstringcOTH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTH1mUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TH1*> : new map<string,TH1*>;
   }
   static void *newArray_maplEstringcOTH1mUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TH1*>[nElements] : new map<string,TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTH1mUgR(void *p) {
      delete (static_cast<map<string,TH1*>*>(p));
   }
   static void deleteArray_maplEstringcOTH1mUgR(void *p) {
      delete [] (static_cast<map<string,TH1*>*>(p));
   }
   static void destruct_maplEstringcOTH1mUgR(void *p) {
      typedef map<string,TH1*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,TH1*>

namespace ROOT {
   static TClass *maplEstringcORooMappedCategorycLcLEntrygR_Dictionary();
   static void maplEstringcORooMappedCategorycLcLEntrygR_TClassManip(TClass*);
   static void *new_maplEstringcORooMappedCategorycLcLEntrygR(void *p = nullptr);
   static void *newArray_maplEstringcORooMappedCategorycLcLEntrygR(Long_t size, void *p);
   static void delete_maplEstringcORooMappedCategorycLcLEntrygR(void *p);
   static void deleteArray_maplEstringcORooMappedCategorycLcLEntrygR(void *p);
   static void destruct_maplEstringcORooMappedCategorycLcLEntrygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooMappedCategory::Entry>*)
   {
      map<string,RooMappedCategory::Entry> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooMappedCategory::Entry>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooMappedCategory::Entry>", -2, "map", 975,
                  typeid(map<string,RooMappedCategory::Entry>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooMappedCategorycLcLEntrygR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooMappedCategory::Entry>) );
      instance.SetNew(&new_maplEstringcORooMappedCategorycLcLEntrygR);
      instance.SetNewArray(&newArray_maplEstringcORooMappedCategorycLcLEntrygR);
      instance.SetDelete(&delete_maplEstringcORooMappedCategorycLcLEntrygR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooMappedCategorycLcLEntrygR);
      instance.SetDestructor(&destruct_maplEstringcORooMappedCategorycLcLEntrygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooMappedCategory::Entry> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooMappedCategory::Entry>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooMappedCategory::Entry, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooMappedCategory::Entry>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooMappedCategory::Entry>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooMappedCategorycLcLEntrygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooMappedCategory::Entry>*>(nullptr))->GetClass();
      maplEstringcORooMappedCategorycLcLEntrygR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooMappedCategorycLcLEntrygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooMappedCategorycLcLEntrygR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooMappedCategory::Entry> : new map<string,RooMappedCategory::Entry>;
   }
   static void *newArray_maplEstringcORooMappedCategorycLcLEntrygR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooMappedCategory::Entry>[nElements] : new map<string,RooMappedCategory::Entry>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooMappedCategorycLcLEntrygR(void *p) {
      delete (static_cast<map<string,RooMappedCategory::Entry>*>(p));
   }
   static void deleteArray_maplEstringcORooMappedCategorycLcLEntrygR(void *p) {
      delete [] (static_cast<map<string,RooMappedCategory::Entry>*>(p));
   }
   static void destruct_maplEstringcORooMappedCategorycLcLEntrygR(void *p) {
      typedef map<string,RooMappedCategory::Entry> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooMappedCategory::Entry>

namespace ROOT {
   static TClass *maplEstringcORooDataSetmUgR_Dictionary();
   static void maplEstringcORooDataSetmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooDataSetmUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooDataSetmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooDataSetmUgR(void *p);
   static void deleteArray_maplEstringcORooDataSetmUgR(void *p);
   static void destruct_maplEstringcORooDataSetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooDataSet*>*)
   {
      map<string,RooDataSet*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooDataSet*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooDataSet*>", -2, "map", 975,
                  typeid(map<string,RooDataSet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooDataSetmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,RooDataSet*>) );
      instance.SetNew(&new_maplEstringcORooDataSetmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooDataSetmUgR);
      instance.SetDelete(&delete_maplEstringcORooDataSetmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooDataSetmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooDataSetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooDataSet*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooDataSet*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooDataSet*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooDataSet*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooDataSet*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooDataSetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooDataSet*>*>(nullptr))->GetClass();
      maplEstringcORooDataSetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooDataSetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooDataSetmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooDataSet*> : new map<string,RooDataSet*>;
   }
   static void *newArray_maplEstringcORooDataSetmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooDataSet*>[nElements] : new map<string,RooDataSet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooDataSetmUgR(void *p) {
      delete (static_cast<map<string,RooDataSet*>*>(p));
   }
   static void deleteArray_maplEstringcORooDataSetmUgR(void *p) {
      delete [] (static_cast<map<string,RooDataSet*>*>(p));
   }
   static void destruct_maplEstringcORooDataSetmUgR(void *p) {
      typedef map<string,RooDataSet*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooDataSet*>

namespace ROOT {
   static TClass *maplEstringcORooDataHistmUgR_Dictionary();
   static void maplEstringcORooDataHistmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooDataHistmUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooDataHistmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooDataHistmUgR(void *p);
   static void deleteArray_maplEstringcORooDataHistmUgR(void *p);
   static void destruct_maplEstringcORooDataHistmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooDataHist*>*)
   {
      map<string,RooDataHist*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooDataHist*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooDataHist*>", -2, "map", 975,
                  typeid(map<string,RooDataHist*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooDataHistmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,RooDataHist*>) );
      instance.SetNew(&new_maplEstringcORooDataHistmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooDataHistmUgR);
      instance.SetDelete(&delete_maplEstringcORooDataHistmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooDataHistmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooDataHistmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooDataHist*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooDataHist*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooDataHist*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooDataHist*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooDataHist*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooDataHistmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooDataHist*>*>(nullptr))->GetClass();
      maplEstringcORooDataHistmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooDataHistmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooDataHistmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooDataHist*> : new map<string,RooDataHist*>;
   }
   static void *newArray_maplEstringcORooDataHistmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooDataHist*>[nElements] : new map<string,RooDataHist*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooDataHistmUgR(void *p) {
      delete (static_cast<map<string,RooDataHist*>*>(p));
   }
   static void deleteArray_maplEstringcORooDataHistmUgR(void *p) {
      delete [] (static_cast<map<string,RooDataHist*>*>(p));
   }
   static void destruct_maplEstringcORooDataHistmUgR(void *p) {
      typedef map<string,RooDataHist*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooDataHist*>

namespace ROOT {
   static TClass *maplEstringcORooArgSetgR_Dictionary();
   static void maplEstringcORooArgSetgR_TClassManip(TClass*);
   static void *new_maplEstringcORooArgSetgR(void *p = nullptr);
   static void *newArray_maplEstringcORooArgSetgR(Long_t size, void *p);
   static void delete_maplEstringcORooArgSetgR(void *p);
   static void deleteArray_maplEstringcORooArgSetgR(void *p);
   static void destruct_maplEstringcORooArgSetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooArgSet>*)
   {
      map<string,RooArgSet> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooArgSet>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooArgSet>", -2, "map", 975,
                  typeid(map<string,RooArgSet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooArgSetgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooArgSet>) );
      instance.SetNew(&new_maplEstringcORooArgSetgR);
      instance.SetNewArray(&newArray_maplEstringcORooArgSetgR);
      instance.SetDelete(&delete_maplEstringcORooArgSetgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooArgSetgR);
      instance.SetDestructor(&destruct_maplEstringcORooArgSetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooArgSet> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooArgSet>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooArgSet, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooArgSet>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooArgSet>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooArgSetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooArgSet>*>(nullptr))->GetClass();
      maplEstringcORooArgSetgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooArgSetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooArgSetgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooArgSet> : new map<string,RooArgSet>;
   }
   static void *newArray_maplEstringcORooArgSetgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooArgSet>[nElements] : new map<string,RooArgSet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooArgSetgR(void *p) {
      delete (static_cast<map<string,RooArgSet>*>(p));
   }
   static void deleteArray_maplEstringcORooArgSetgR(void *p) {
      delete [] (static_cast<map<string,RooArgSet>*>(p));
   }
   static void destruct_maplEstringcORooArgSetgR(void *p) {
      typedef map<string,RooArgSet> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooArgSet>

namespace ROOT {
   static TClass *maplEstringcORooAbsPdfmUgR_Dictionary();
   static void maplEstringcORooAbsPdfmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsPdfmUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooAbsPdfmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsPdfmUgR(void *p);
   static void deleteArray_maplEstringcORooAbsPdfmUgR(void *p);
   static void destruct_maplEstringcORooAbsPdfmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsPdf*>*)
   {
      map<string,RooAbsPdf*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsPdf*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsPdf*>", -2, "map", 975,
                  typeid(map<string,RooAbsPdf*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsPdfmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,RooAbsPdf*>) );
      instance.SetNew(&new_maplEstringcORooAbsPdfmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsPdfmUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsPdfmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsPdfmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsPdfmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsPdf*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooAbsPdf*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsPdf*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsPdf*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooAbsPdf*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsPdfmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooAbsPdf*>*>(nullptr))->GetClass();
      maplEstringcORooAbsPdfmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsPdfmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsPdfmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsPdf*> : new map<string,RooAbsPdf*>;
   }
   static void *newArray_maplEstringcORooAbsPdfmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsPdf*>[nElements] : new map<string,RooAbsPdf*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsPdfmUgR(void *p) {
      delete (static_cast<map<string,RooAbsPdf*>*>(p));
   }
   static void deleteArray_maplEstringcORooAbsPdfmUgR(void *p) {
      delete [] (static_cast<map<string,RooAbsPdf*>*>(p));
   }
   static void destruct_maplEstringcORooAbsPdfmUgR(void *p) {
      typedef map<string,RooAbsPdf*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsPdf*>

namespace ROOT {
   static TClass *maplEstringcORooAbsDataStoremUgR_Dictionary();
   static void maplEstringcORooAbsDataStoremUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsDataStoremUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooAbsDataStoremUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsDataStoremUgR(void *p);
   static void deleteArray_maplEstringcORooAbsDataStoremUgR(void *p);
   static void destruct_maplEstringcORooAbsDataStoremUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsDataStore*>*)
   {
      map<string,RooAbsDataStore*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsDataStore*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsDataStore*>", -2, "map", 975,
                  typeid(map<string,RooAbsDataStore*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsDataStoremUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,RooAbsDataStore*>) );
      instance.SetNew(&new_maplEstringcORooAbsDataStoremUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsDataStoremUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsDataStoremUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsDataStoremUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsDataStoremUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsDataStore*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooAbsDataStore*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsDataStore*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsDataStore*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooAbsDataStore*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsDataStoremUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooAbsDataStore*>*>(nullptr))->GetClass();
      maplEstringcORooAbsDataStoremUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsDataStoremUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsDataStoremUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsDataStore*> : new map<string,RooAbsDataStore*>;
   }
   static void *newArray_maplEstringcORooAbsDataStoremUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsDataStore*>[nElements] : new map<string,RooAbsDataStore*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsDataStoremUgR(void *p) {
      delete (static_cast<map<string,RooAbsDataStore*>*>(p));
   }
   static void deleteArray_maplEstringcORooAbsDataStoremUgR(void *p) {
      delete [] (static_cast<map<string,RooAbsDataStore*>*>(p));
   }
   static void destruct_maplEstringcORooAbsDataStoremUgR(void *p) {
      typedef map<string,RooAbsDataStore*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsDataStore*>

namespace ROOT {
   static TClass *maplEstringcORooAbsDatamUgR_Dictionary();
   static void maplEstringcORooAbsDatamUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsDatamUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooAbsDatamUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsDatamUgR(void *p);
   static void deleteArray_maplEstringcORooAbsDatamUgR(void *p);
   static void destruct_maplEstringcORooAbsDatamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsData*>*)
   {
      map<string,RooAbsData*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsData*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsData*>", -2, "map", 975,
                  typeid(map<string,RooAbsData*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsDatamUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,RooAbsData*>) );
      instance.SetNew(&new_maplEstringcORooAbsDatamUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsDatamUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsDatamUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsDatamUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsDatamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsData*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooAbsData*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsData*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsData*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooAbsData*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsDatamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooAbsData*>*>(nullptr))->GetClass();
      maplEstringcORooAbsDatamUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsDatamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsDatamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsData*> : new map<string,RooAbsData*>;
   }
   static void *newArray_maplEstringcORooAbsDatamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsData*>[nElements] : new map<string,RooAbsData*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsDatamUgR(void *p) {
      delete (static_cast<map<string,RooAbsData*>*>(p));
   }
   static void deleteArray_maplEstringcORooAbsDatamUgR(void *p) {
      delete [] (static_cast<map<string,RooAbsData*>*>(p));
   }
   static void destruct_maplEstringcORooAbsDatamUgR(void *p) {
      typedef map<string,RooAbsData*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsData*>

namespace ROOT {
   static TClass *maplEintcORooAbsDataStoremUgR_Dictionary();
   static void maplEintcORooAbsDataStoremUgR_TClassManip(TClass*);
   static void *new_maplEintcORooAbsDataStoremUgR(void *p = nullptr);
   static void *newArray_maplEintcORooAbsDataStoremUgR(Long_t size, void *p);
   static void delete_maplEintcORooAbsDataStoremUgR(void *p);
   static void deleteArray_maplEintcORooAbsDataStoremUgR(void *p);
   static void destruct_maplEintcORooAbsDataStoremUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,RooAbsDataStore*>*)
   {
      map<int,RooAbsDataStore*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,RooAbsDataStore*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,RooAbsDataStore*>", -2, "map", 975,
                  typeid(map<int,RooAbsDataStore*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcORooAbsDataStoremUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,RooAbsDataStore*>) );
      instance.SetNew(&new_maplEintcORooAbsDataStoremUgR);
      instance.SetNewArray(&newArray_maplEintcORooAbsDataStoremUgR);
      instance.SetDelete(&delete_maplEintcORooAbsDataStoremUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcORooAbsDataStoremUgR);
      instance.SetDestructor(&destruct_maplEintcORooAbsDataStoremUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,RooAbsDataStore*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,RooAbsDataStore*>","std::__1::map<int, RooAbsDataStore*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, RooAbsDataStore*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,RooAbsDataStore*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcORooAbsDataStoremUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,RooAbsDataStore*>*>(nullptr))->GetClass();
      maplEintcORooAbsDataStoremUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcORooAbsDataStoremUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcORooAbsDataStoremUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,RooAbsDataStore*> : new map<int,RooAbsDataStore*>;
   }
   static void *newArray_maplEintcORooAbsDataStoremUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,RooAbsDataStore*>[nElements] : new map<int,RooAbsDataStore*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcORooAbsDataStoremUgR(void *p) {
      delete (static_cast<map<int,RooAbsDataStore*>*>(p));
   }
   static void deleteArray_maplEintcORooAbsDataStoremUgR(void *p) {
      delete [] (static_cast<map<int,RooAbsDataStore*>*>(p));
   }
   static void destruct_maplEintcORooAbsDataStoremUgR(void *p) {
      typedef map<int,RooAbsDataStore*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,RooAbsDataStore*>

namespace ROOT {
   static TClass *maplETStringcOintgR_Dictionary();
   static void maplETStringcOintgR_TClassManip(TClass*);
   static void *new_maplETStringcOintgR(void *p = nullptr);
   static void *newArray_maplETStringcOintgR(Long_t size, void *p);
   static void delete_maplETStringcOintgR(void *p);
   static void deleteArray_maplETStringcOintgR(void *p);
   static void destruct_maplETStringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int>*)
   {
      map<TString,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int>", -2, "map", 975,
                  typeid(map<TString,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,int>) );
      instance.SetNew(&new_maplETStringcOintgR);
      instance.SetNewArray(&newArray_maplETStringcOintgR);
      instance.SetDelete(&delete_maplETStringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintgR);
      instance.SetDestructor(&destruct_maplETStringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,int>","std::__1::map<TString, int, std::__1::less<TString>, std::__1::allocator<std::__1::pair<TString const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,int>*>(nullptr))->GetClass();
      maplETStringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,int> : new map<TString,int>;
   }
   static void *newArray_maplETStringcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,int>[nElements] : new map<TString,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintgR(void *p) {
      delete (static_cast<map<TString,int>*>(p));
   }
   static void deleteArray_maplETStringcOintgR(void *p) {
      delete [] (static_cast<map<TString,int>*>(p));
   }
   static void destruct_maplETStringcOintgR(void *p) {
      typedef map<TString,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,int>

namespace ROOT {
   static TClass *maplETStringcOdoublegR_Dictionary();
   static void maplETStringcOdoublegR_TClassManip(TClass*);
   static void *new_maplETStringcOdoublegR(void *p = nullptr);
   static void *newArray_maplETStringcOdoublegR(Long_t size, void *p);
   static void delete_maplETStringcOdoublegR(void *p);
   static void deleteArray_maplETStringcOdoublegR(void *p);
   static void destruct_maplETStringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,double>*)
   {
      map<TString,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,double>", -2, "map", 975,
                  typeid(map<TString,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,double>) );
      instance.SetNew(&new_maplETStringcOdoublegR);
      instance.SetNewArray(&newArray_maplETStringcOdoublegR);
      instance.SetDelete(&delete_maplETStringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOdoublegR);
      instance.SetDestructor(&destruct_maplETStringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,double>","std::__1::map<TString, double, std::__1::less<TString>, std::__1::allocator<std::__1::pair<TString const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,double>*>(nullptr))->GetClass();
      maplETStringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,double> : new map<TString,double>;
   }
   static void *newArray_maplETStringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,double>[nElements] : new map<TString,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOdoublegR(void *p) {
      delete (static_cast<map<TString,double>*>(p));
   }
   static void deleteArray_maplETStringcOdoublegR(void *p) {
      delete [] (static_cast<map<TString,double>*>(p));
   }
   static void destruct_maplETStringcOdoublegR(void *p) {
      typedef map<TString,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,double>

namespace ROOT {
   static TClass *maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR_Dictionary();
   static void maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR_TClassManip(TClass*);
   static void *new_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p = nullptr);
   static void *newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(Long_t size, void *p);
   static void delete_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p);
   static void deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p);
   static void destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,RooWorkspace::CodeRepo::ExtraHeader>*)
   {
      map<TString,RooWorkspace::CodeRepo::ExtraHeader> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,RooWorkspace::CodeRepo::ExtraHeader>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,RooWorkspace::CodeRepo::ExtraHeader>", -2, "map", 975,
                  typeid(map<TString,RooWorkspace::CodeRepo::ExtraHeader>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,RooWorkspace::CodeRepo::ExtraHeader>) );
      instance.SetNew(&new_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR);
      instance.SetNewArray(&newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR);
      instance.SetDelete(&delete_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR);
      instance.SetDeleteArray(&deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR);
      instance.SetDestructor(&destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,RooWorkspace::CodeRepo::ExtraHeader> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,RooWorkspace::CodeRepo::ExtraHeader>","std::__1::map<TString, RooWorkspace::CodeRepo::ExtraHeader, std::__1::less<TString>, std::__1::allocator<std::__1::pair<TString const, RooWorkspace::CodeRepo::ExtraHeader>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,RooWorkspace::CodeRepo::ExtraHeader>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,RooWorkspace::CodeRepo::ExtraHeader>*>(nullptr))->GetClass();
      maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooWorkspace::CodeRepo::ExtraHeader> : new map<TString,RooWorkspace::CodeRepo::ExtraHeader>;
   }
   static void *newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooWorkspace::CodeRepo::ExtraHeader>[nElements] : new map<TString,RooWorkspace::CodeRepo::ExtraHeader>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p) {
      delete (static_cast<map<TString,RooWorkspace::CodeRepo::ExtraHeader>*>(p));
   }
   static void deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p) {
      delete [] (static_cast<map<TString,RooWorkspace::CodeRepo::ExtraHeader>*>(p));
   }
   static void destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLExtraHeadergR(void *p) {
      typedef map<TString,RooWorkspace::CodeRepo::ExtraHeader> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,RooWorkspace::CodeRepo::ExtraHeader>

namespace ROOT {
   static TClass *maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR_Dictionary();
   static void maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR_TClassManip(TClass*);
   static void *new_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p = nullptr);
   static void *newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(Long_t size, void *p);
   static void delete_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p);
   static void deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p);
   static void destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,RooWorkspace::CodeRepo::ClassRelInfo>*)
   {
      map<TString,RooWorkspace::CodeRepo::ClassRelInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,RooWorkspace::CodeRepo::ClassRelInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,RooWorkspace::CodeRepo::ClassRelInfo>", -2, "map", 975,
                  typeid(map<TString,RooWorkspace::CodeRepo::ClassRelInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,RooWorkspace::CodeRepo::ClassRelInfo>) );
      instance.SetNew(&new_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR);
      instance.SetNewArray(&newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR);
      instance.SetDelete(&delete_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR);
      instance.SetDeleteArray(&deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR);
      instance.SetDestructor(&destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,RooWorkspace::CodeRepo::ClassRelInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,RooWorkspace::CodeRepo::ClassRelInfo>","std::__1::map<TString, RooWorkspace::CodeRepo::ClassRelInfo, std::__1::less<TString>, std::__1::allocator<std::__1::pair<TString const, RooWorkspace::CodeRepo::ClassRelInfo>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,RooWorkspace::CodeRepo::ClassRelInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,RooWorkspace::CodeRepo::ClassRelInfo>*>(nullptr))->GetClass();
      maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooWorkspace::CodeRepo::ClassRelInfo> : new map<TString,RooWorkspace::CodeRepo::ClassRelInfo>;
   }
   static void *newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooWorkspace::CodeRepo::ClassRelInfo>[nElements] : new map<TString,RooWorkspace::CodeRepo::ClassRelInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p) {
      delete (static_cast<map<TString,RooWorkspace::CodeRepo::ClassRelInfo>*>(p));
   }
   static void deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p) {
      delete [] (static_cast<map<TString,RooWorkspace::CodeRepo::ClassRelInfo>*>(p));
   }
   static void destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLClassRelInfogR(void *p) {
      typedef map<TString,RooWorkspace::CodeRepo::ClassRelInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,RooWorkspace::CodeRepo::ClassRelInfo>

namespace ROOT {
   static TClass *maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR_Dictionary();
   static void maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR_TClassManip(TClass*);
   static void *new_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p = nullptr);
   static void *newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(Long_t size, void *p);
   static void delete_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p);
   static void deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p);
   static void destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,RooWorkspace::CodeRepo::ClassFiles>*)
   {
      map<TString,RooWorkspace::CodeRepo::ClassFiles> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,RooWorkspace::CodeRepo::ClassFiles>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,RooWorkspace::CodeRepo::ClassFiles>", -2, "map", 975,
                  typeid(map<TString,RooWorkspace::CodeRepo::ClassFiles>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,RooWorkspace::CodeRepo::ClassFiles>) );
      instance.SetNew(&new_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR);
      instance.SetNewArray(&newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR);
      instance.SetDelete(&delete_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR);
      instance.SetDestructor(&destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,RooWorkspace::CodeRepo::ClassFiles> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,RooWorkspace::CodeRepo::ClassFiles>","std::__1::map<TString, RooWorkspace::CodeRepo::ClassFiles, std::__1::less<TString>, std::__1::allocator<std::__1::pair<TString const, RooWorkspace::CodeRepo::ClassFiles>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,RooWorkspace::CodeRepo::ClassFiles>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,RooWorkspace::CodeRepo::ClassFiles>*>(nullptr))->GetClass();
      maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooWorkspace::CodeRepo::ClassFiles> : new map<TString,RooWorkspace::CodeRepo::ClassFiles>;
   }
   static void *newArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooWorkspace::CodeRepo::ClassFiles>[nElements] : new map<TString,RooWorkspace::CodeRepo::ClassFiles>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p) {
      delete (static_cast<map<TString,RooWorkspace::CodeRepo::ClassFiles>*>(p));
   }
   static void deleteArray_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p) {
      delete [] (static_cast<map<TString,RooWorkspace::CodeRepo::ClassFiles>*>(p));
   }
   static void destruct_maplETStringcORooWorkspacecLcLCodeRepocLcLClassFilesgR(void *p) {
      typedef map<TString,RooWorkspace::CodeRepo::ClassFiles> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,RooWorkspace::CodeRepo::ClassFiles>

namespace ROOT {
   static TClass *maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR_Dictionary();
   static void maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR_TClassManip(TClass*);
   static void *new_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p = nullptr);
   static void *newArray_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(Long_t size, void *p);
   static void delete_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p);
   static void deleteArray_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p);
   static void destruct_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,RooExpensiveObjectCache::ExpensiveObject*>*)
   {
      map<TString,RooExpensiveObjectCache::ExpensiveObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,RooExpensiveObjectCache::ExpensiveObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,RooExpensiveObjectCache::ExpensiveObject*>", -2, "map", 975,
                  typeid(map<TString,RooExpensiveObjectCache::ExpensiveObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,RooExpensiveObjectCache::ExpensiveObject*>) );
      instance.SetNew(&new_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR);
      instance.SetNewArray(&newArray_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR);
      instance.SetDelete(&delete_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR);
      instance.SetDestructor(&destruct_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,RooExpensiveObjectCache::ExpensiveObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,RooExpensiveObjectCache::ExpensiveObject*>","std::__1::map<TString, RooExpensiveObjectCache::ExpensiveObject*, std::__1::less<TString>, std::__1::allocator<std::__1::pair<TString const, RooExpensiveObjectCache::ExpensiveObject*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,RooExpensiveObjectCache::ExpensiveObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,RooExpensiveObjectCache::ExpensiveObject*>*>(nullptr))->GetClass();
      maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooExpensiveObjectCache::ExpensiveObject*> : new map<TString,RooExpensiveObjectCache::ExpensiveObject*>;
   }
   static void *newArray_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,RooExpensiveObjectCache::ExpensiveObject*>[nElements] : new map<TString,RooExpensiveObjectCache::ExpensiveObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p) {
      delete (static_cast<map<TString,RooExpensiveObjectCache::ExpensiveObject*>*>(p));
   }
   static void deleteArray_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p) {
      delete [] (static_cast<map<TString,RooExpensiveObjectCache::ExpensiveObject*>*>(p));
   }
   static void destruct_maplETStringcORooExpensiveObjectCachecLcLExpensiveObjectmUgR(void *p) {
      typedef map<TString,RooExpensiveObjectCache::ExpensiveObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,RooExpensiveObjectCache::ExpensiveObject*>

namespace ROOT {
   static TClass *listlETObjectmUgR_Dictionary();
   static void listlETObjectmUgR_TClassManip(TClass*);
   static void *new_listlETObjectmUgR(void *p = nullptr);
   static void *newArray_listlETObjectmUgR(Long_t size, void *p);
   static void delete_listlETObjectmUgR(void *p);
   static void deleteArray_listlETObjectmUgR(void *p);
   static void destruct_listlETObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<TObject*>*)
   {
      list<TObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<TObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<TObject*>", -2, "list", 663,
                  typeid(list<TObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlETObjectmUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<TObject*>) );
      instance.SetNew(&new_listlETObjectmUgR);
      instance.SetNewArray(&newArray_listlETObjectmUgR);
      instance.SetDelete(&delete_listlETObjectmUgR);
      instance.SetDeleteArray(&deleteArray_listlETObjectmUgR);
      instance.SetDestructor(&destruct_listlETObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<TObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<TObject*>","std::__1::list<TObject*, std::__1::allocator<TObject*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<TObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlETObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<TObject*>*>(nullptr))->GetClass();
      listlETObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlETObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlETObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<TObject*> : new list<TObject*>;
   }
   static void *newArray_listlETObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<TObject*>[nElements] : new list<TObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlETObjectmUgR(void *p) {
      delete (static_cast<list<TObject*>*>(p));
   }
   static void deleteArray_listlETObjectmUgR(void *p) {
      delete [] (static_cast<list<TObject*>*>(p));
   }
   static void destruct_listlETObjectmUgR(void *p) {
      typedef list<TObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<TObject*>

namespace ROOT {
   static TClass *listlERooAbsStudymUgR_Dictionary();
   static void listlERooAbsStudymUgR_TClassManip(TClass*);
   static void *new_listlERooAbsStudymUgR(void *p = nullptr);
   static void *newArray_listlERooAbsStudymUgR(Long_t size, void *p);
   static void delete_listlERooAbsStudymUgR(void *p);
   static void deleteArray_listlERooAbsStudymUgR(void *p);
   static void destruct_listlERooAbsStudymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<RooAbsStudy*>*)
   {
      list<RooAbsStudy*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<RooAbsStudy*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<RooAbsStudy*>", -2, "list", 663,
                  typeid(list<RooAbsStudy*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlERooAbsStudymUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<RooAbsStudy*>) );
      instance.SetNew(&new_listlERooAbsStudymUgR);
      instance.SetNewArray(&newArray_listlERooAbsStudymUgR);
      instance.SetDelete(&delete_listlERooAbsStudymUgR);
      instance.SetDeleteArray(&deleteArray_listlERooAbsStudymUgR);
      instance.SetDestructor(&destruct_listlERooAbsStudymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<RooAbsStudy*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<RooAbsStudy*>","std::__1::list<RooAbsStudy*, std::__1::allocator<RooAbsStudy*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<RooAbsStudy*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlERooAbsStudymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<RooAbsStudy*>*>(nullptr))->GetClass();
      listlERooAbsStudymUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlERooAbsStudymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlERooAbsStudymUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<RooAbsStudy*> : new list<RooAbsStudy*>;
   }
   static void *newArray_listlERooAbsStudymUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<RooAbsStudy*>[nElements] : new list<RooAbsStudy*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlERooAbsStudymUgR(void *p) {
      delete (static_cast<list<RooAbsStudy*>*>(p));
   }
   static void deleteArray_listlERooAbsStudymUgR(void *p) {
      delete [] (static_cast<list<RooAbsStudy*>*>(p));
   }
   static void destruct_listlERooAbsStudymUgR(void *p) {
      typedef list<RooAbsStudy*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<RooAbsStudy*>

namespace ROOT {
   static TClass *listlERooAbsDatamUgR_Dictionary();
   static void listlERooAbsDatamUgR_TClassManip(TClass*);
   static void *new_listlERooAbsDatamUgR(void *p = nullptr);
   static void *newArray_listlERooAbsDatamUgR(Long_t size, void *p);
   static void delete_listlERooAbsDatamUgR(void *p);
   static void deleteArray_listlERooAbsDatamUgR(void *p);
   static void destruct_listlERooAbsDatamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<RooAbsData*>*)
   {
      list<RooAbsData*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<RooAbsData*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<RooAbsData*>", -2, "list", 663,
                  typeid(list<RooAbsData*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlERooAbsDatamUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<RooAbsData*>) );
      instance.SetNew(&new_listlERooAbsDatamUgR);
      instance.SetNewArray(&newArray_listlERooAbsDatamUgR);
      instance.SetDelete(&delete_listlERooAbsDatamUgR);
      instance.SetDeleteArray(&deleteArray_listlERooAbsDatamUgR);
      instance.SetDestructor(&destruct_listlERooAbsDatamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<RooAbsData*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<RooAbsData*>","std::__1::list<RooAbsData*, std::__1::allocator<RooAbsData*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<RooAbsData*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlERooAbsDatamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<RooAbsData*>*>(nullptr))->GetClass();
      listlERooAbsDatamUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlERooAbsDatamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlERooAbsDatamUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<RooAbsData*> : new list<RooAbsData*>;
   }
   static void *newArray_listlERooAbsDatamUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<RooAbsData*>[nElements] : new list<RooAbsData*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlERooAbsDatamUgR(void *p) {
      delete (static_cast<list<RooAbsData*>*>(p));
   }
   static void deleteArray_listlERooAbsDatamUgR(void *p) {
      delete [] (static_cast<list<RooAbsData*>*>(p));
   }
   static void destruct_listlERooAbsDatamUgR(void *p) {
      typedef list<RooAbsData*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<RooAbsData*>

namespace ROOT {

   // Schema evolution read functions
} // namespace ROOT
namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRooFitCore() {

      ::ROOT::Internal::TSchemaHelper* rule;
    {
      // the io read rules for TList
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooList";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      TClass::RegisterReadRules(TSchemaRule::kReadRule, "TList", std::move(readrules));
    }
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRooFitCore) = RecordReadRules_libRooFitCore();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRooFitCore));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRooFitCore_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRooFitCore",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooFitCore_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooFitCore_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooFitCore() {
  TriggerDictionaryInitialization_libRooFitCore_Impl();
}
