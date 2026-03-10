// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Hist
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


// Header files passed as explicit arguments
#include "Foption.h"
#include "HFitInterface.h"
#include "TAxis.h"
#include "TAxisModLab.h"
#include "TBackCompFitter.h"
#include "TBinomialEfficiencyFitter.h"
#include "TConfidenceLevel.h"
#include "TEfficiency.h"
#include "TF12.h"
#include "TF1AbsComposition.h"
#include "TF1Convolution.h"
#include "TF1.h"
#include "TF1NormSum.h"
#include "TF2.h"
#include "TF3.h"
#include "TFitResult.h"
#include "TFitResultPtr.h"
#include "TFormula.h"
#include "TFractionFitter.h"
#include "THistRange.h"
#include "TGraph2DErrors.h"
#include "TGraph2DAsymmErrors.h"
#include "TGraph2D.h"
#include "TGraphAsymmErrors.h"
#include "TGraphMultiErrors.h"
#include "TGraphBentErrors.h"
#include "TGraphDelaunay2D.h"
#include "TGraphDelaunay.h"
#include "TGraphErrors.h"
#include "TGraph.h"
#include "TGraphSmooth.h"
#include "TGraphTime.h"
#include "TScatter.h"
#include "TScatter2D.h"
#include "TH1C.h"
#include "TH1D.h"
#include "TH1F.h"
#include "TH1.h"
#include "TH1I.h"
#include "TH1L.h"
#include "TH1S.h"
#include "TH2C.h"
#include "TH2D.h"
#include "TH2F.h"
#include "TH2.h"
#include "TH2I.h"
#include "TH2L.h"
#include "TH2Poly.h"
#include "TH2S.h"
#include "TH3C.h"
#include "TH3D.h"
#include "TH3F.h"
#include "TH3.h"
#include "TH3I.h"
#include "TH3L.h"
#include "TH3S.h"
#include "THLimitsFinder.h"
#include "THnBase.h"
#include "THnChain.h"
#include "THn.h"
#include "THnSparse.h"
#include "THnSparse_Internal.h"
#include "THStack.h"
#include "TKDE.h"
#include "TLimitDataSource.h"
#include "TLimit.h"
#include "TMultiDimFit.h"
#include "TMultiGraph.h"
#include "TNDArray.h"
#include "TPolyMarker.h"
#include "TPrincipal.h"
#include "TProfile2D.h"
#include "TProfile2Poly.h"
#include "TProfile3D.h"
#include "TProfile.h"
#include "TSpline.h"
#include "TSVDUnfold.h"
#include "TVirtualFitter.h"
#include "TVirtualGraphPainter.h"
#include "TVirtualHistPainter.h"
#include "TVirtualPaveStats.h"
#include "Math/WrappedMultiTF1.h"
#include "Math/WrappedTF1.h"
#include "v5/TF1Data.h"
#include "v5/TFormula.h"
#include "v5/TFormulaPrimitive.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   namespace Fit {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLFit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Fit", 0 /*version*/, "Fit/BasicFCN.h", 29,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLFit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLFit_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *Foption_t_Dictionary();
   static void Foption_t_TClassManip(TClass*);
   static void *new_Foption_t(void *p = nullptr);
   static void *newArray_Foption_t(Long_t size, void *p);
   static void delete_Foption_t(void *p);
   static void deleteArray_Foption_t(void *p);
   static void destruct_Foption_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Foption_t*)
   {
      ::Foption_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Foption_t));
      static ::ROOT::TGenericClassInfo 
         instance("Foption_t", "Foption.h", 24,
                  typeid(::Foption_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Foption_t_Dictionary, isa_proxy, 4,
                  sizeof(::Foption_t) );
      instance.SetNew(&new_Foption_t);
      instance.SetNewArray(&newArray_Foption_t);
      instance.SetDelete(&delete_Foption_t);
      instance.SetDeleteArray(&deleteArray_Foption_t);
      instance.SetDestructor(&destruct_Foption_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Foption_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::Foption_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Foption_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Foption_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::Foption_t*>(nullptr))->GetClass();
      Foption_t_TClassManip(theClass);
   return theClass;
   }

   static void Foption_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitResultPtr(void *p = nullptr);
   static void *newArray_TFitResultPtr(Long_t size, void *p);
   static void delete_TFitResultPtr(void *p);
   static void deleteArray_TFitResultPtr(void *p);
   static void destruct_TFitResultPtr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitResultPtr*)
   {
      ::TFitResultPtr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitResultPtr >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitResultPtr", ::TFitResultPtr::Class_Version(), "TFitResultPtr.h", 32,
                  typeid(::TFitResultPtr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitResultPtr::Dictionary, isa_proxy, 4,
                  sizeof(::TFitResultPtr) );
      instance.SetNew(&new_TFitResultPtr);
      instance.SetNewArray(&newArray_TFitResultPtr);
      instance.SetDelete(&delete_TFitResultPtr);
      instance.SetDeleteArray(&deleteArray_TFitResultPtr);
      instance.SetDestructor(&destruct_TFitResultPtr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitResultPtr*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFitResultPtr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFitResultPtr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAxis(void *p = nullptr);
   static void *newArray_TAxis(Long_t size, void *p);
   static void delete_TAxis(void *p);
   static void deleteArray_TAxis(void *p);
   static void destruct_TAxis(void *p);
   static void streamer_TAxis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAxis*)
   {
      ::TAxis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAxis >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAxis", ::TAxis::Class_Version(), "TAxis.h", 32,
                  typeid(::TAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAxis::Dictionary, isa_proxy, 17,
                  sizeof(::TAxis) );
      instance.SetNew(&new_TAxis);
      instance.SetNewArray(&newArray_TAxis);
      instance.SetDelete(&delete_TAxis);
      instance.SetDeleteArray(&deleteArray_TAxis);
      instance.SetDestructor(&destruct_TAxis);
      instance.SetStreamerFunc(&streamer_TAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAxis*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAxis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAxis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAxisModLab(void *p = nullptr);
   static void *newArray_TAxisModLab(Long_t size, void *p);
   static void delete_TAxisModLab(void *p);
   static void deleteArray_TAxisModLab(void *p);
   static void destruct_TAxisModLab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAxisModLab*)
   {
      ::TAxisModLab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAxisModLab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAxisModLab", ::TAxisModLab::Class_Version(), "TAxisModLab.h", 21,
                  typeid(::TAxisModLab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAxisModLab::Dictionary, isa_proxy, 4,
                  sizeof(::TAxisModLab) );
      instance.SetNew(&new_TAxisModLab);
      instance.SetNewArray(&newArray_TAxisModLab);
      instance.SetDelete(&delete_TAxisModLab);
      instance.SetDeleteArray(&deleteArray_TAxisModLab);
      instance.SetDestructor(&destruct_TAxisModLab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAxisModLab*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAxisModLab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAxisModLab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualFitter(void *p);
   static void deleteArray_TVirtualFitter(void *p);
   static void destruct_TVirtualFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualFitter*)
   {
      ::TVirtualFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualFitter", ::TVirtualFitter::Class_Version(), "TVirtualFitter.h", 29,
                  typeid(::TVirtualFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualFitter) );
      instance.SetDelete(&delete_TVirtualFitter);
      instance.SetDeleteArray(&deleteArray_TVirtualFitter);
      instance.SetDestructor(&destruct_TVirtualFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBackCompFitter(void *p = nullptr);
   static void *newArray_TBackCompFitter(Long_t size, void *p);
   static void delete_TBackCompFitter(void *p);
   static void deleteArray_TBackCompFitter(void *p);
   static void destruct_TBackCompFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBackCompFitter*)
   {
      ::TBackCompFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBackCompFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBackCompFitter", ::TBackCompFitter::Class_Version(), "TBackCompFitter.h", 37,
                  typeid(::TBackCompFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBackCompFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TBackCompFitter) );
      instance.SetNew(&new_TBackCompFitter);
      instance.SetNewArray(&newArray_TBackCompFitter);
      instance.SetDelete(&delete_TBackCompFitter);
      instance.SetDeleteArray(&deleteArray_TBackCompFitter);
      instance.SetDestructor(&destruct_TBackCompFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBackCompFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBackCompFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBackCompFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBinomialEfficiencyFitter(void *p = nullptr);
   static void *newArray_TBinomialEfficiencyFitter(Long_t size, void *p);
   static void delete_TBinomialEfficiencyFitter(void *p);
   static void deleteArray_TBinomialEfficiencyFitter(void *p);
   static void destruct_TBinomialEfficiencyFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBinomialEfficiencyFitter*)
   {
      ::TBinomialEfficiencyFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBinomialEfficiencyFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBinomialEfficiencyFitter", ::TBinomialEfficiencyFitter::Class_Version(), "TBinomialEfficiencyFitter.h", 42,
                  typeid(::TBinomialEfficiencyFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBinomialEfficiencyFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TBinomialEfficiencyFitter) );
      instance.SetNew(&new_TBinomialEfficiencyFitter);
      instance.SetNewArray(&newArray_TBinomialEfficiencyFitter);
      instance.SetDelete(&delete_TBinomialEfficiencyFitter);
      instance.SetDeleteArray(&deleteArray_TBinomialEfficiencyFitter);
      instance.SetDestructor(&destruct_TBinomialEfficiencyFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBinomialEfficiencyFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBinomialEfficiencyFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBinomialEfficiencyFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TConfidenceLevel(void *p = nullptr);
   static void *newArray_TConfidenceLevel(Long_t size, void *p);
   static void delete_TConfidenceLevel(void *p);
   static void deleteArray_TConfidenceLevel(void *p);
   static void destruct_TConfidenceLevel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TConfidenceLevel*)
   {
      ::TConfidenceLevel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TConfidenceLevel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TConfidenceLevel", ::TConfidenceLevel::Class_Version(), "TConfidenceLevel.h", 20,
                  typeid(::TConfidenceLevel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TConfidenceLevel::Dictionary, isa_proxy, 4,
                  sizeof(::TConfidenceLevel) );
      instance.SetNew(&new_TConfidenceLevel);
      instance.SetNewArray(&newArray_TConfidenceLevel);
      instance.SetDelete(&delete_TConfidenceLevel);
      instance.SetDeleteArray(&deleteArray_TConfidenceLevel);
      instance.SetDestructor(&destruct_TConfidenceLevel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TConfidenceLevel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TConfidenceLevel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TConfidenceLevel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEfficiency(void *p = nullptr);
   static void *newArray_TEfficiency(Long_t size, void *p);
   static void delete_TEfficiency(void *p);
   static void deleteArray_TEfficiency(void *p);
   static void destruct_TEfficiency(void *p);
   static Long64_t merge_TEfficiency(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEfficiency*)
   {
      ::TEfficiency *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEfficiency >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEfficiency", ::TEfficiency::Class_Version(), "TEfficiency.h", 28,
                  typeid(::TEfficiency), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEfficiency::Dictionary, isa_proxy, 4,
                  sizeof(::TEfficiency) );
      instance.SetNew(&new_TEfficiency);
      instance.SetNewArray(&newArray_TEfficiency);
      instance.SetDelete(&delete_TEfficiency);
      instance.SetDeleteArray(&deleteArray_TEfficiency);
      instance.SetDestructor(&destruct_TEfficiency);
      instance.SetMerge(&merge_TEfficiency);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEfficiency*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEfficiency*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEfficiency*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TFormulaParamOrder_Dictionary();
   static void TFormulaParamOrder_TClassManip(TClass*);
   static void *new_TFormulaParamOrder(void *p = nullptr);
   static void *newArray_TFormulaParamOrder(Long_t size, void *p);
   static void delete_TFormulaParamOrder(void *p);
   static void deleteArray_TFormulaParamOrder(void *p);
   static void destruct_TFormulaParamOrder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFormulaParamOrder*)
   {
      ::TFormulaParamOrder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TFormulaParamOrder));
      static ::ROOT::TGenericClassInfo 
         instance("TFormulaParamOrder", "TFormula.h", 83,
                  typeid(::TFormulaParamOrder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TFormulaParamOrder_Dictionary, isa_proxy, 4,
                  sizeof(::TFormulaParamOrder) );
      instance.SetNew(&new_TFormulaParamOrder);
      instance.SetNewArray(&newArray_TFormulaParamOrder);
      instance.SetDelete(&delete_TFormulaParamOrder);
      instance.SetDeleteArray(&deleteArray_TFormulaParamOrder);
      instance.SetDestructor(&destruct_TFormulaParamOrder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFormulaParamOrder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFormulaParamOrder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFormulaParamOrder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TFormulaParamOrder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TFormulaParamOrder*>(nullptr))->GetClass();
      TFormulaParamOrder_TClassManip(theClass);
   return theClass;
   }

   static void TFormulaParamOrder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TFormula(void *p = nullptr);
   static void *newArray_TFormula(Long_t size, void *p);
   static void delete_TFormula(void *p);
   static void deleteArray_TFormula(void *p);
   static void destruct_TFormula(void *p);
   static void streamer_TFormula(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFormula*)
   {
      ::TFormula *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFormula >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFormula", ::TFormula::Class_Version(), "TFormula.h", 88,
                  typeid(::TFormula), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFormula::Dictionary, isa_proxy, 17,
                  sizeof(::TFormula) );
      instance.SetNew(&new_TFormula);
      instance.SetNewArray(&newArray_TFormula);
      instance.SetDelete(&delete_TFormula);
      instance.SetDeleteArray(&deleteArray_TFormula);
      instance.SetDestructor(&destruct_TFormula);
      instance.SetStreamerFunc(&streamer_TFormula);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFormula*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFormula*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFormula*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TF1AbsComposition(void *p);
   static void deleteArray_TF1AbsComposition(void *p);
   static void destruct_TF1AbsComposition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1AbsComposition*)
   {
      ::TF1AbsComposition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1AbsComposition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF1AbsComposition", ::TF1AbsComposition::Class_Version(), "TF1AbsComposition.h", 16,
                  typeid(::TF1AbsComposition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1AbsComposition::Dictionary, isa_proxy, 4,
                  sizeof(::TF1AbsComposition) );
      instance.SetDelete(&delete_TF1AbsComposition);
      instance.SetDeleteArray(&deleteArray_TF1AbsComposition);
      instance.SetDestructor(&destruct_TF1AbsComposition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1AbsComposition*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF1AbsComposition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF1AbsComposition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF1Parameters(void *p = nullptr);
   static void *newArray_TF1Parameters(Long_t size, void *p);
   static void delete_TF1Parameters(void *p);
   static void deleteArray_TF1Parameters(void *p);
   static void destruct_TF1Parameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1Parameters*)
   {
      ::TF1Parameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1Parameters >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF1Parameters", ::TF1Parameters::Class_Version(), "TF1.h", 54,
                  typeid(::TF1Parameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1Parameters::Dictionary, isa_proxy, 4,
                  sizeof(::TF1Parameters) );
      instance.SetNew(&new_TF1Parameters);
      instance.SetNewArray(&newArray_TF1Parameters);
      instance.SetDelete(&delete_TF1Parameters);
      instance.SetDeleteArray(&deleteArray_TF1Parameters);
      instance.SetDestructor(&destruct_TF1Parameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1Parameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF1Parameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF1Parameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF1(void *p = nullptr);
   static void *newArray_TF1(Long_t size, void *p);
   static void delete_TF1(void *p);
   static void deleteArray_TF1(void *p);
   static void destruct_TF1(void *p);
   static void streamer_TF1(TBuffer &buf, void *obj);

   // Schema evolution read functions
   static void read_TF1_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fComposition_ptr = oldObj->GetId("fComposition_ptr");
#endif
      struct TF1_Onfile {
         TF1AbsComposition* &fComposition_ptr;
         TF1_Onfile(TF1AbsComposition* &onfile_fComposition_ptr ): fComposition_ptr(onfile_fComposition_ptr) {}
      };
      static Long_t offset_Onfile_TF1_fComposition_ptr = oldObj->GetClass()->GetDataMemberOffset("fComposition_ptr");
      char *onfile_add = (char*)oldObj->GetObject();
      TF1_Onfile onfile(
         *(TF1AbsComposition**)(onfile_add+offset_Onfile_TF1_fComposition_ptr) );

      static TClassRef cls("TF1");
      static Long_t offset_fComposition = cls->GetDataMemberOffset("fComposition");
      unique_ptr<TF1AbsComposition>& fComposition = *(unique_ptr<TF1AbsComposition>*)(target+offset_fComposition);
      TF1* newObj = (TF1*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fComposition.reset(onfile.fComposition_ptr); onfile.fComposition_ptr = nullptr; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1*)
   {
      ::TF1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF1", ::TF1::Class_Version(), "TF1.h", 182,
                  typeid(::TF1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1::Dictionary, isa_proxy, 17,
                  sizeof(::TF1) );
      instance.SetNew(&new_TF1);
      instance.SetNewArray(&newArray_TF1);
      instance.SetDelete(&delete_TF1);
      instance.SetDeleteArray(&deleteArray_TF1);
      instance.SetDestructor(&destruct_TF1);
      instance.SetStreamerFunc(&streamer_TF1);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TF1";
      rule->fTarget      = "fComposition";
      rule->fSource      = "TF1AbsComposition* fComposition_ptr; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TF1_0);
      rule->fCode        = " fComposition.reset(onfile.fComposition_ptr); onfile.fComposition_ptr = nullptr; ";
      rule->fVersion     = "[10]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF2(void *p = nullptr);
   static void *newArray_TF2(Long_t size, void *p);
   static void delete_TF2(void *p);
   static void deleteArray_TF2(void *p);
   static void destruct_TF2(void *p);
   static void streamer_TF2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF2*)
   {
      ::TF2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF2", ::TF2::Class_Version(), "TF2.h", 29,
                  typeid(::TF2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF2::Dictionary, isa_proxy, 17,
                  sizeof(::TF2) );
      instance.SetNew(&new_TF2);
      instance.SetNewArray(&newArray_TF2);
      instance.SetDelete(&delete_TF2);
      instance.SetDeleteArray(&deleteArray_TF2);
      instance.SetDestructor(&destruct_TF2);
      instance.SetStreamerFunc(&streamer_TF2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF12(void *p = nullptr);
   static void *newArray_TF12(Long_t size, void *p);
   static void delete_TF12(void *p);
   static void deleteArray_TF12(void *p);
   static void destruct_TF12(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF12*)
   {
      ::TF12 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF12 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF12", ::TF12::Class_Version(), "TF12.h", 25,
                  typeid(::TF12), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF12::Dictionary, isa_proxy, 4,
                  sizeof(::TF12) );
      instance.SetNew(&new_TF12);
      instance.SetNewArray(&newArray_TF12);
      instance.SetDelete(&delete_TF12);
      instance.SetDeleteArray(&deleteArray_TF12);
      instance.SetDestructor(&destruct_TF12);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF12*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF12*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF12*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraph(void *p = nullptr);
   static void *newArray_TGraph(Long_t size, void *p);
   static void delete_TGraph(void *p);
   static void deleteArray_TGraph(void *p);
   static void destruct_TGraph(void *p);
   static void streamer_TGraph(TBuffer &buf, void *obj);
   static Long64_t merge_TGraph(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraph*)
   {
      ::TGraph *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraph >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraph", ::TGraph::Class_Version(), "TGraph.h", 41,
                  typeid(::TGraph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraph::Dictionary, isa_proxy, 17,
                  sizeof(::TGraph) );
      instance.SetNew(&new_TGraph);
      instance.SetNewArray(&newArray_TGraph);
      instance.SetDelete(&delete_TGraph);
      instance.SetDeleteArray(&deleteArray_TGraph);
      instance.SetDestructor(&destruct_TGraph);
      instance.SetStreamerFunc(&streamer_TGraph);
      instance.SetMerge(&merge_TGraph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraph*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraph*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraph*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF1Convolution(void *p = nullptr);
   static void *newArray_TF1Convolution(Long_t size, void *p);
   static void delete_TF1Convolution(void *p);
   static void deleteArray_TF1Convolution(void *p);
   static void destruct_TF1Convolution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1Convolution*)
   {
      ::TF1Convolution *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1Convolution >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF1Convolution", ::TF1Convolution::Class_Version(), "TF1Convolution.h", 20,
                  typeid(::TF1Convolution), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1Convolution::Dictionary, isa_proxy, 4,
                  sizeof(::TF1Convolution) );
      instance.SetNew(&new_TF1Convolution);
      instance.SetNewArray(&newArray_TF1Convolution);
      instance.SetDelete(&delete_TF1Convolution);
      instance.SetDeleteArray(&deleteArray_TF1Convolution);
      instance.SetDestructor(&destruct_TF1Convolution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1Convolution*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF1Convolution*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF1Convolution*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF1NormSum(void *p = nullptr);
   static void *newArray_TF1NormSum(Long_t size, void *p);
   static void delete_TF1NormSum(void *p);
   static void deleteArray_TF1NormSum(void *p);
   static void destruct_TF1NormSum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1NormSum*)
   {
      ::TF1NormSum *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1NormSum >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF1NormSum", ::TF1NormSum::Class_Version(), "TF1NormSum.h", 19,
                  typeid(::TF1NormSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1NormSum::Dictionary, isa_proxy, 4,
                  sizeof(::TF1NormSum) );
      instance.SetNew(&new_TF1NormSum);
      instance.SetNewArray(&newArray_TF1NormSum);
      instance.SetDelete(&delete_TF1NormSum);
      instance.SetDeleteArray(&deleteArray_TF1NormSum);
      instance.SetDestructor(&destruct_TF1NormSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1NormSum*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF1NormSum*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF1NormSum*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF3(void *p = nullptr);
   static void *newArray_TF3(Long_t size, void *p);
   static void delete_TF3(void *p);
   static void deleteArray_TF3(void *p);
   static void destruct_TF3(void *p);
   static void streamer_TF3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF3*)
   {
      ::TF3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF3", ::TF3::Class_Version(), "TF3.h", 28,
                  typeid(::TF3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF3::Dictionary, isa_proxy, 17,
                  sizeof(::TF3) );
      instance.SetNew(&new_TF3);
      instance.SetNewArray(&newArray_TF3);
      instance.SetDelete(&delete_TF3);
      instance.SetDeleteArray(&deleteArray_TF3);
      instance.SetDestructor(&destruct_TF3);
      instance.SetStreamerFunc(&streamer_TF3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFitResult(void *p = nullptr);
   static void *newArray_TFitResult(Long_t size, void *p);
   static void delete_TFitResult(void *p);
   static void deleteArray_TFitResult(void *p);
   static void destruct_TFitResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitResult*)
   {
      ::TFitResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitResult", ::TFitResult::Class_Version(), "TFitResult.h", 34,
                  typeid(::TFitResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitResult::Dictionary, isa_proxy, 4,
                  sizeof(::TFitResult) );
      instance.SetNew(&new_TFitResult);
      instance.SetNewArray(&newArray_TFitResult);
      instance.SetDelete(&delete_TFitResult);
      instance.SetDeleteArray(&deleteArray_TFitResult);
      instance.SetDestructor(&destruct_TFitResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFitResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFitResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFractionFitter(void *p = nullptr);
   static void *newArray_TFractionFitter(Long_t size, void *p);
   static void delete_TFractionFitter(void *p);
   static void deleteArray_TFractionFitter(void *p);
   static void destruct_TFractionFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFractionFitter*)
   {
      ::TFractionFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFractionFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFractionFitter", ::TFractionFitter::Class_Version(), "TFractionFitter.h", 27,
                  typeid(::TFractionFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFractionFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TFractionFitter) );
      instance.SetNew(&new_TFractionFitter);
      instance.SetNewArray(&newArray_TFractionFitter);
      instance.SetDelete(&delete_TFractionFitter);
      instance.SetDeleteArray(&deleteArray_TFractionFitter);
      instance.SetDestructor(&destruct_TFractionFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFractionFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFractionFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFractionFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TBinIterator_Dictionary();
   static void TBinIterator_TClassManip(TClass*);
   static void delete_TBinIterator(void *p);
   static void deleteArray_TBinIterator(void *p);
   static void destruct_TBinIterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBinIterator*)
   {
      ::TBinIterator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TBinIterator));
      static ::ROOT::TGenericClassInfo 
         instance("TBinIterator", "THistRange.h", 29,
                  typeid(::TBinIterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TBinIterator_Dictionary, isa_proxy, 4,
                  sizeof(::TBinIterator) );
      instance.SetDelete(&delete_TBinIterator);
      instance.SetDeleteArray(&deleteArray_TBinIterator);
      instance.SetDestructor(&destruct_TBinIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBinIterator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBinIterator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBinIterator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TBinIterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TBinIterator*>(nullptr))->GetClass();
      TBinIterator_TClassManip(theClass);
   return theClass;
   }

   static void TBinIterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THistRange_Dictionary();
   static void THistRange_TClassManip(TClass*);
   static void delete_THistRange(void *p);
   static void deleteArray_THistRange(void *p);
   static void destruct_THistRange(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THistRange*)
   {
      ::THistRange *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::THistRange));
      static ::ROOT::TGenericClassInfo 
         instance("THistRange", "THistRange.h", 139,
                  typeid(::THistRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THistRange_Dictionary, isa_proxy, 4,
                  sizeof(::THistRange) );
      instance.SetDelete(&delete_THistRange);
      instance.SetDeleteArray(&deleteArray_THistRange);
      instance.SetDestructor(&destruct_THistRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THistRange*)
   {
      return GenerateInitInstanceLocal(static_cast<::THistRange*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THistRange*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THistRange_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THistRange*>(nullptr))->GetClass();
      THistRange_TClassManip(theClass);
   return theClass;
   }

   static void THistRange_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraph2D(void *p = nullptr);
   static void *newArray_TGraph2D(Long_t size, void *p);
   static void delete_TGraph2D(void *p);
   static void deleteArray_TGraph2D(void *p);
   static void destruct_TGraph2D(void *p);
   static void directoryAutoAdd_TGraph2D(void *obj, TDirectory *dir);
   static void streamer_TGraph2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraph2D*)
   {
      ::TGraph2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraph2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraph2D", ::TGraph2D::Class_Version(), "TGraph2D.h", 41,
                  typeid(::TGraph2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraph2D::Dictionary, isa_proxy, 17,
                  sizeof(::TGraph2D) );
      instance.SetNew(&new_TGraph2D);
      instance.SetNewArray(&newArray_TGraph2D);
      instance.SetDelete(&delete_TGraph2D);
      instance.SetDeleteArray(&deleteArray_TGraph2D);
      instance.SetDestructor(&destruct_TGraph2D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TGraph2D);
      instance.SetStreamerFunc(&streamer_TGraph2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraph2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraph2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraph2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraph2DErrors(void *p = nullptr);
   static void *newArray_TGraph2DErrors(Long_t size, void *p);
   static void delete_TGraph2DErrors(void *p);
   static void deleteArray_TGraph2DErrors(void *p);
   static void destruct_TGraph2DErrors(void *p);
   static void directoryAutoAdd_TGraph2DErrors(void *obj, TDirectory *dir);
   static void streamer_TGraph2DErrors(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraph2DErrors*)
   {
      ::TGraph2DErrors *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraph2DErrors >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraph2DErrors", ::TGraph2DErrors::Class_Version(), "TGraph2DErrors.h", 26,
                  typeid(::TGraph2DErrors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraph2DErrors::Dictionary, isa_proxy, 17,
                  sizeof(::TGraph2DErrors) );
      instance.SetNew(&new_TGraph2DErrors);
      instance.SetNewArray(&newArray_TGraph2DErrors);
      instance.SetDelete(&delete_TGraph2DErrors);
      instance.SetDeleteArray(&deleteArray_TGraph2DErrors);
      instance.SetDestructor(&destruct_TGraph2DErrors);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TGraph2DErrors);
      instance.SetStreamerFunc(&streamer_TGraph2DErrors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraph2DErrors*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraph2DErrors*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraph2DErrors*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraph2DAsymmErrors(void *p = nullptr);
   static void *newArray_TGraph2DAsymmErrors(Long_t size, void *p);
   static void delete_TGraph2DAsymmErrors(void *p);
   static void deleteArray_TGraph2DAsymmErrors(void *p);
   static void destruct_TGraph2DAsymmErrors(void *p);
   static void directoryAutoAdd_TGraph2DAsymmErrors(void *obj, TDirectory *dir);
   static void streamer_TGraph2DAsymmErrors(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraph2DAsymmErrors*)
   {
      ::TGraph2DAsymmErrors *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraph2DAsymmErrors >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraph2DAsymmErrors", ::TGraph2DAsymmErrors::Class_Version(), "TGraph2DAsymmErrors.h", 26,
                  typeid(::TGraph2DAsymmErrors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraph2DAsymmErrors::Dictionary, isa_proxy, 17,
                  sizeof(::TGraph2DAsymmErrors) );
      instance.SetNew(&new_TGraph2DAsymmErrors);
      instance.SetNewArray(&newArray_TGraph2DAsymmErrors);
      instance.SetDelete(&delete_TGraph2DAsymmErrors);
      instance.SetDeleteArray(&deleteArray_TGraph2DAsymmErrors);
      instance.SetDestructor(&destruct_TGraph2DAsymmErrors);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TGraph2DAsymmErrors);
      instance.SetStreamerFunc(&streamer_TGraph2DAsymmErrors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraph2DAsymmErrors*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraph2DAsymmErrors*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraph2DAsymmErrors*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphAsymmErrors(void *p = nullptr);
   static void *newArray_TGraphAsymmErrors(Long_t size, void *p);
   static void delete_TGraphAsymmErrors(void *p);
   static void deleteArray_TGraphAsymmErrors(void *p);
   static void destruct_TGraphAsymmErrors(void *p);
   static void streamer_TGraphAsymmErrors(TBuffer &buf, void *obj);
   static Long64_t merge_TGraphAsymmErrors(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphAsymmErrors*)
   {
      ::TGraphAsymmErrors *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphAsymmErrors >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphAsymmErrors", ::TGraphAsymmErrors::Class_Version(), "TGraphAsymmErrors.h", 26,
                  typeid(::TGraphAsymmErrors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphAsymmErrors::Dictionary, isa_proxy, 17,
                  sizeof(::TGraphAsymmErrors) );
      instance.SetNew(&new_TGraphAsymmErrors);
      instance.SetNewArray(&newArray_TGraphAsymmErrors);
      instance.SetDelete(&delete_TGraphAsymmErrors);
      instance.SetDeleteArray(&deleteArray_TGraphAsymmErrors);
      instance.SetDestructor(&destruct_TGraphAsymmErrors);
      instance.SetStreamerFunc(&streamer_TGraphAsymmErrors);
      instance.SetMerge(&merge_TGraphAsymmErrors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphAsymmErrors*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphAsymmErrors*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphAsymmErrors*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphMultiErrors(void *p = nullptr);
   static void *newArray_TGraphMultiErrors(Long_t size, void *p);
   static void delete_TGraphMultiErrors(void *p);
   static void deleteArray_TGraphMultiErrors(void *p);
   static void destruct_TGraphMultiErrors(void *p);
   static Long64_t merge_TGraphMultiErrors(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphMultiErrors*)
   {
      ::TGraphMultiErrors *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphMultiErrors >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphMultiErrors", ::TGraphMultiErrors::Class_Version(), "TGraphMultiErrors.h", 29,
                  typeid(::TGraphMultiErrors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphMultiErrors::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphMultiErrors) );
      instance.SetNew(&new_TGraphMultiErrors);
      instance.SetNewArray(&newArray_TGraphMultiErrors);
      instance.SetDelete(&delete_TGraphMultiErrors);
      instance.SetDeleteArray(&deleteArray_TGraphMultiErrors);
      instance.SetDestructor(&destruct_TGraphMultiErrors);
      instance.SetMerge(&merge_TGraphMultiErrors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphMultiErrors*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphMultiErrors*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphMultiErrors*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphBentErrors(void *p = nullptr);
   static void *newArray_TGraphBentErrors(Long_t size, void *p);
   static void delete_TGraphBentErrors(void *p);
   static void deleteArray_TGraphBentErrors(void *p);
   static void destruct_TGraphBentErrors(void *p);
   static Long64_t merge_TGraphBentErrors(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphBentErrors*)
   {
      ::TGraphBentErrors *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphBentErrors >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphBentErrors", ::TGraphBentErrors::Class_Version(), "TGraphBentErrors.h", 25,
                  typeid(::TGraphBentErrors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphBentErrors::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphBentErrors) );
      instance.SetNew(&new_TGraphBentErrors);
      instance.SetNewArray(&newArray_TGraphBentErrors);
      instance.SetDelete(&delete_TGraphBentErrors);
      instance.SetDeleteArray(&deleteArray_TGraphBentErrors);
      instance.SetDestructor(&destruct_TGraphBentErrors);
      instance.SetMerge(&merge_TGraphBentErrors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphBentErrors*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphBentErrors*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphBentErrors*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphDelaunay2D(void *p = nullptr);
   static void *newArray_TGraphDelaunay2D(Long_t size, void *p);
   static void delete_TGraphDelaunay2D(void *p);
   static void deleteArray_TGraphDelaunay2D(void *p);
   static void destruct_TGraphDelaunay2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphDelaunay2D*)
   {
      ::TGraphDelaunay2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphDelaunay2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphDelaunay2D", ::TGraphDelaunay2D::Class_Version(), "TGraphDelaunay2D.h", 32,
                  typeid(::TGraphDelaunay2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphDelaunay2D::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphDelaunay2D) );
      instance.SetNew(&new_TGraphDelaunay2D);
      instance.SetNewArray(&newArray_TGraphDelaunay2D);
      instance.SetDelete(&delete_TGraphDelaunay2D);
      instance.SetDeleteArray(&deleteArray_TGraphDelaunay2D);
      instance.SetDestructor(&destruct_TGraphDelaunay2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphDelaunay2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphDelaunay2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphDelaunay2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphDelaunay(void *p = nullptr);
   static void *newArray_TGraphDelaunay(Long_t size, void *p);
   static void delete_TGraphDelaunay(void *p);
   static void deleteArray_TGraphDelaunay(void *p);
   static void destruct_TGraphDelaunay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphDelaunay*)
   {
      ::TGraphDelaunay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphDelaunay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphDelaunay", ::TGraphDelaunay::Class_Version(), "TGraphDelaunay.h", 30,
                  typeid(::TGraphDelaunay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphDelaunay::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphDelaunay) );
      instance.SetNew(&new_TGraphDelaunay);
      instance.SetNewArray(&newArray_TGraphDelaunay);
      instance.SetDelete(&delete_TGraphDelaunay);
      instance.SetDeleteArray(&deleteArray_TGraphDelaunay);
      instance.SetDestructor(&destruct_TGraphDelaunay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphDelaunay*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphDelaunay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphDelaunay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphErrors(void *p = nullptr);
   static void *newArray_TGraphErrors(Long_t size, void *p);
   static void delete_TGraphErrors(void *p);
   static void deleteArray_TGraphErrors(void *p);
   static void destruct_TGraphErrors(void *p);
   static void streamer_TGraphErrors(TBuffer &buf, void *obj);
   static Long64_t merge_TGraphErrors(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphErrors*)
   {
      ::TGraphErrors *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphErrors >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphErrors", ::TGraphErrors::Class_Version(), "TGraphErrors.h", 26,
                  typeid(::TGraphErrors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphErrors::Dictionary, isa_proxy, 17,
                  sizeof(::TGraphErrors) );
      instance.SetNew(&new_TGraphErrors);
      instance.SetNewArray(&newArray_TGraphErrors);
      instance.SetDelete(&delete_TGraphErrors);
      instance.SetDeleteArray(&deleteArray_TGraphErrors);
      instance.SetDestructor(&destruct_TGraphErrors);
      instance.SetStreamerFunc(&streamer_TGraphErrors);
      instance.SetMerge(&merge_TGraphErrors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphErrors*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphErrors*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphErrors*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphSmooth(void *p = nullptr);
   static void *newArray_TGraphSmooth(Long_t size, void *p);
   static void delete_TGraphSmooth(void *p);
   static void deleteArray_TGraphSmooth(void *p);
   static void destruct_TGraphSmooth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphSmooth*)
   {
      ::TGraphSmooth *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphSmooth >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphSmooth", ::TGraphSmooth::Class_Version(), "TGraphSmooth.h", 34,
                  typeid(::TGraphSmooth), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphSmooth::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphSmooth) );
      instance.SetNew(&new_TGraphSmooth);
      instance.SetNewArray(&newArray_TGraphSmooth);
      instance.SetDelete(&delete_TGraphSmooth);
      instance.SetDeleteArray(&deleteArray_TGraphSmooth);
      instance.SetDestructor(&destruct_TGraphSmooth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphSmooth*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphSmooth*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphSmooth*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphTime(void *p = nullptr);
   static void *newArray_TGraphTime(Long_t size, void *p);
   static void delete_TGraphTime(void *p);
   static void deleteArray_TGraphTime(void *p);
   static void destruct_TGraphTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphTime*)
   {
      ::TGraphTime *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphTime >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphTime", ::TGraphTime::Class_Version(), "TGraphTime.h", 30,
                  typeid(::TGraphTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphTime::Dictionary, isa_proxy, 4,
                  sizeof(::TGraphTime) );
      instance.SetNew(&new_TGraphTime);
      instance.SetNewArray(&newArray_TGraphTime);
      instance.SetDelete(&delete_TGraphTime);
      instance.SetDeleteArray(&deleteArray_TGraphTime);
      instance.SetDestructor(&destruct_TGraphTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphTime*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphTime*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphTime*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TScatter(void *p = nullptr);
   static void *newArray_TScatter(Long_t size, void *p);
   static void delete_TScatter(void *p);
   static void deleteArray_TScatter(void *p);
   static void destruct_TScatter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TScatter*)
   {
      ::TScatter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TScatter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TScatter", ::TScatter::Class_Version(), "TScatter.h", 32,
                  typeid(::TScatter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TScatter::Dictionary, isa_proxy, 4,
                  sizeof(::TScatter) );
      instance.SetNew(&new_TScatter);
      instance.SetNewArray(&newArray_TScatter);
      instance.SetDelete(&delete_TScatter);
      instance.SetDeleteArray(&deleteArray_TScatter);
      instance.SetDestructor(&destruct_TScatter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TScatter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TScatter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TScatter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TScatter2D(void *p = nullptr);
   static void *newArray_TScatter2D(Long_t size, void *p);
   static void delete_TScatter2D(void *p);
   static void deleteArray_TScatter2D(void *p);
   static void destruct_TScatter2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TScatter2D*)
   {
      ::TScatter2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TScatter2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TScatter2D", ::TScatter2D::Class_Version(), "TScatter2D.h", 32,
                  typeid(::TScatter2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TScatter2D::Dictionary, isa_proxy, 4,
                  sizeof(::TScatter2D) );
      instance.SetNew(&new_TScatter2D);
      instance.SetNewArray(&newArray_TScatter2D);
      instance.SetDelete(&delete_TScatter2D);
      instance.SetDeleteArray(&deleteArray_TScatter2D);
      instance.SetDestructor(&destruct_TScatter2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TScatter2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TScatter2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TScatter2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TH1(void *p);
   static void deleteArray_TH1(void *p);
   static void destruct_TH1(void *p);
   static void directoryAutoAdd_TH1(void *obj, TDirectory *dir);
   static void streamer_TH1(TBuffer &buf, void *obj);
   static Long64_t merge_TH1(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1*)
   {
      ::TH1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1", ::TH1::Class_Version(), "TH1.h", 109,
                  typeid(::TH1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1::Dictionary, isa_proxy, 17,
                  sizeof(::TH1) );
      instance.SetDelete(&delete_TH1);
      instance.SetDeleteArray(&deleteArray_TH1);
      instance.SetDestructor(&destruct_TH1);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1);
      instance.SetStreamerFunc(&streamer_TH1);
      instance.SetMerge(&merge_TH1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1C(void *p = nullptr);
   static void *newArray_TH1C(Long_t size, void *p);
   static void delete_TH1C(void *p);
   static void deleteArray_TH1C(void *p);
   static void destruct_TH1C(void *p);
   static void directoryAutoAdd_TH1C(void *obj, TDirectory *dir);
   static Long64_t merge_TH1C(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1C*)
   {
      ::TH1C *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1C >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1C", ::TH1C::Class_Version(), "TH1.h", 714,
                  typeid(::TH1C), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1C::Dictionary, isa_proxy, 4,
                  sizeof(::TH1C) );
      instance.SetNew(&new_TH1C);
      instance.SetNewArray(&newArray_TH1C);
      instance.SetDelete(&delete_TH1C);
      instance.SetDeleteArray(&deleteArray_TH1C);
      instance.SetDestructor(&destruct_TH1C);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1C);
      instance.SetMerge(&merge_TH1C);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1C*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1C*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1C*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1S(void *p = nullptr);
   static void *newArray_TH1S(Long_t size, void *p);
   static void delete_TH1S(void *p);
   static void deleteArray_TH1S(void *p);
   static void destruct_TH1S(void *p);
   static void directoryAutoAdd_TH1S(void *obj, TDirectory *dir);
   static Long64_t merge_TH1S(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1S*)
   {
      ::TH1S *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1S >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1S", ::TH1S::Class_Version(), "TH1.h", 755,
                  typeid(::TH1S), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1S::Dictionary, isa_proxy, 4,
                  sizeof(::TH1S) );
      instance.SetNew(&new_TH1S);
      instance.SetNewArray(&newArray_TH1S);
      instance.SetDelete(&delete_TH1S);
      instance.SetDeleteArray(&deleteArray_TH1S);
      instance.SetDestructor(&destruct_TH1S);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1S);
      instance.SetMerge(&merge_TH1S);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1S*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1S*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1S*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1I(void *p = nullptr);
   static void *newArray_TH1I(Long_t size, void *p);
   static void delete_TH1I(void *p);
   static void deleteArray_TH1I(void *p);
   static void destruct_TH1I(void *p);
   static void directoryAutoAdd_TH1I(void *obj, TDirectory *dir);
   static Long64_t merge_TH1I(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1I*)
   {
      ::TH1I *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1I >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1I", ::TH1I::Class_Version(), "TH1.h", 796,
                  typeid(::TH1I), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1I::Dictionary, isa_proxy, 4,
                  sizeof(::TH1I) );
      instance.SetNew(&new_TH1I);
      instance.SetNewArray(&newArray_TH1I);
      instance.SetDelete(&delete_TH1I);
      instance.SetDeleteArray(&deleteArray_TH1I);
      instance.SetDestructor(&destruct_TH1I);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1I);
      instance.SetMerge(&merge_TH1I);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1I*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1I*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1I*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1L(void *p = nullptr);
   static void *newArray_TH1L(Long_t size, void *p);
   static void delete_TH1L(void *p);
   static void deleteArray_TH1L(void *p);
   static void destruct_TH1L(void *p);
   static void directoryAutoAdd_TH1L(void *obj, TDirectory *dir);
   static Long64_t merge_TH1L(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1L*)
   {
      ::TH1L *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1L >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1L", ::TH1L::Class_Version(), "TH1.h", 837,
                  typeid(::TH1L), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1L::Dictionary, isa_proxy, 4,
                  sizeof(::TH1L) );
      instance.SetNew(&new_TH1L);
      instance.SetNewArray(&newArray_TH1L);
      instance.SetDelete(&delete_TH1L);
      instance.SetDeleteArray(&deleteArray_TH1L);
      instance.SetDestructor(&destruct_TH1L);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1L);
      instance.SetMerge(&merge_TH1L);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1L*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1L*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1L*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1F(void *p = nullptr);
   static void *newArray_TH1F(Long_t size, void *p);
   static void delete_TH1F(void *p);
   static void deleteArray_TH1F(void *p);
   static void destruct_TH1F(void *p);
   static void directoryAutoAdd_TH1F(void *obj, TDirectory *dir);
   static Long64_t merge_TH1F(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1F*)
   {
      ::TH1F *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1F >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1F", ::TH1F::Class_Version(), "TH1.h", 878,
                  typeid(::TH1F), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1F::Dictionary, isa_proxy, 4,
                  sizeof(::TH1F) );
      instance.SetNew(&new_TH1F);
      instance.SetNewArray(&newArray_TH1F);
      instance.SetDelete(&delete_TH1F);
      instance.SetDeleteArray(&deleteArray_TH1F);
      instance.SetDestructor(&destruct_TH1F);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1F);
      instance.SetMerge(&merge_TH1F);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1F*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1F*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1F*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1D(void *p = nullptr);
   static void *newArray_TH1D(Long_t size, void *p);
   static void delete_TH1D(void *p);
   static void deleteArray_TH1D(void *p);
   static void destruct_TH1D(void *p);
   static void directoryAutoAdd_TH1D(void *obj, TDirectory *dir);
   static Long64_t merge_TH1D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1D*)
   {
      ::TH1D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1D", ::TH1D::Class_Version(), "TH1.h", 926,
                  typeid(::TH1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1D::Dictionary, isa_proxy, 4,
                  sizeof(::TH1D) );
      instance.SetNew(&new_TH1D);
      instance.SetNewArray(&newArray_TH1D);
      instance.SetDelete(&delete_TH1D);
      instance.SetDeleteArray(&deleteArray_TH1D);
      instance.SetDestructor(&destruct_TH1D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH1D);
      instance.SetMerge(&merge_TH1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TH2(void *p);
   static void deleteArray_TH2(void *p);
   static void destruct_TH2(void *p);
   static void directoryAutoAdd_TH2(void *obj, TDirectory *dir);
   static void streamer_TH2(TBuffer &buf, void *obj);
   static Long64_t merge_TH2(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2*)
   {
      ::TH2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2", ::TH2::Class_Version(), "TH2.h", 30,
                  typeid(::TH2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2::Dictionary, isa_proxy, 17,
                  sizeof(::TH2) );
      instance.SetDelete(&delete_TH2);
      instance.SetDeleteArray(&deleteArray_TH2);
      instance.SetDestructor(&destruct_TH2);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2);
      instance.SetStreamerFunc(&streamer_TH2);
      instance.SetMerge(&merge_TH2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2C(void *p = nullptr);
   static void *newArray_TH2C(Long_t size, void *p);
   static void delete_TH2C(void *p);
   static void deleteArray_TH2C(void *p);
   static void destruct_TH2C(void *p);
   static void directoryAutoAdd_TH2C(void *obj, TDirectory *dir);
   static void streamer_TH2C(TBuffer &buf, void *obj);
   static Long64_t merge_TH2C(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2C*)
   {
      ::TH2C *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2C >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2C", ::TH2C::Class_Version(), "TH2.h", 143,
                  typeid(::TH2C), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2C::Dictionary, isa_proxy, 17,
                  sizeof(::TH2C) );
      instance.SetNew(&new_TH2C);
      instance.SetNewArray(&newArray_TH2C);
      instance.SetDelete(&delete_TH2C);
      instance.SetDeleteArray(&deleteArray_TH2C);
      instance.SetDestructor(&destruct_TH2C);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2C);
      instance.SetStreamerFunc(&streamer_TH2C);
      instance.SetMerge(&merge_TH2C);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2C*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2C*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2C*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2S(void *p = nullptr);
   static void *newArray_TH2S(Long_t size, void *p);
   static void delete_TH2S(void *p);
   static void deleteArray_TH2S(void *p);
   static void destruct_TH2S(void *p);
   static void directoryAutoAdd_TH2S(void *obj, TDirectory *dir);
   static void streamer_TH2S(TBuffer &buf, void *obj);
   static Long64_t merge_TH2S(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2S*)
   {
      ::TH2S *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2S >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2S", ::TH2S::Class_Version(), "TH2.h", 194,
                  typeid(::TH2S), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2S::Dictionary, isa_proxy, 17,
                  sizeof(::TH2S) );
      instance.SetNew(&new_TH2S);
      instance.SetNewArray(&newArray_TH2S);
      instance.SetDelete(&delete_TH2S);
      instance.SetDeleteArray(&deleteArray_TH2S);
      instance.SetDestructor(&destruct_TH2S);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2S);
      instance.SetStreamerFunc(&streamer_TH2S);
      instance.SetMerge(&merge_TH2S);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2S*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2S*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2S*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2I(void *p = nullptr);
   static void *newArray_TH2I(Long_t size, void *p);
   static void delete_TH2I(void *p);
   static void deleteArray_TH2I(void *p);
   static void destruct_TH2I(void *p);
   static void directoryAutoAdd_TH2I(void *obj, TDirectory *dir);
   static Long64_t merge_TH2I(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2I*)
   {
      ::TH2I *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2I >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2I", ::TH2I::Class_Version(), "TH2.h", 245,
                  typeid(::TH2I), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2I::Dictionary, isa_proxy, 4,
                  sizeof(::TH2I) );
      instance.SetNew(&new_TH2I);
      instance.SetNewArray(&newArray_TH2I);
      instance.SetDelete(&delete_TH2I);
      instance.SetDeleteArray(&deleteArray_TH2I);
      instance.SetDestructor(&destruct_TH2I);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2I);
      instance.SetMerge(&merge_TH2I);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2I*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2I*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2I*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2L(void *p = nullptr);
   static void *newArray_TH2L(Long_t size, void *p);
   static void delete_TH2L(void *p);
   static void deleteArray_TH2L(void *p);
   static void destruct_TH2L(void *p);
   static void directoryAutoAdd_TH2L(void *obj, TDirectory *dir);
   static Long64_t merge_TH2L(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2L*)
   {
      ::TH2L *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2L >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2L", ::TH2L::Class_Version(), "TH2.h", 296,
                  typeid(::TH2L), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2L::Dictionary, isa_proxy, 4,
                  sizeof(::TH2L) );
      instance.SetNew(&new_TH2L);
      instance.SetNewArray(&newArray_TH2L);
      instance.SetDelete(&delete_TH2L);
      instance.SetDeleteArray(&deleteArray_TH2L);
      instance.SetDestructor(&destruct_TH2L);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2L);
      instance.SetMerge(&merge_TH2L);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2L*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2L*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2L*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2F(void *p = nullptr);
   static void *newArray_TH2F(Long_t size, void *p);
   static void delete_TH2F(void *p);
   static void deleteArray_TH2F(void *p);
   static void destruct_TH2F(void *p);
   static void directoryAutoAdd_TH2F(void *obj, TDirectory *dir);
   static void streamer_TH2F(TBuffer &buf, void *obj);
   static Long64_t merge_TH2F(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2F*)
   {
      ::TH2F *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2F >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2F", ::TH2F::Class_Version(), "TH2.h", 345,
                  typeid(::TH2F), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2F::Dictionary, isa_proxy, 17,
                  sizeof(::TH2F) );
      instance.SetNew(&new_TH2F);
      instance.SetNewArray(&newArray_TH2F);
      instance.SetDelete(&delete_TH2F);
      instance.SetDeleteArray(&deleteArray_TH2F);
      instance.SetDestructor(&destruct_TH2F);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2F);
      instance.SetStreamerFunc(&streamer_TH2F);
      instance.SetMerge(&merge_TH2F);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2F*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2F*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2F*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2D(void *p = nullptr);
   static void *newArray_TH2D(Long_t size, void *p);
   static void delete_TH2D(void *p);
   static void deleteArray_TH2D(void *p);
   static void destruct_TH2D(void *p);
   static void directoryAutoAdd_TH2D(void *obj, TDirectory *dir);
   static void streamer_TH2D(TBuffer &buf, void *obj);
   static Long64_t merge_TH2D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2D*)
   {
      ::TH2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2D", ::TH2D::Class_Version(), "TH2.h", 400,
                  typeid(::TH2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2D::Dictionary, isa_proxy, 17,
                  sizeof(::TH2D) );
      instance.SetNew(&new_TH2D);
      instance.SetNewArray(&newArray_TH2D);
      instance.SetDelete(&delete_TH2D);
      instance.SetDeleteArray(&deleteArray_TH2D);
      instance.SetDestructor(&destruct_TH2D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2D);
      instance.SetStreamerFunc(&streamer_TH2D);
      instance.SetMerge(&merge_TH2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2PolyBin(void *p = nullptr);
   static void *newArray_TH2PolyBin(Long_t size, void *p);
   static void delete_TH2PolyBin(void *p);
   static void deleteArray_TH2PolyBin(void *p);
   static void destruct_TH2PolyBin(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2PolyBin*)
   {
      ::TH2PolyBin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2PolyBin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2PolyBin", ::TH2PolyBin::Class_Version(), "TH2Poly.h", 25,
                  typeid(::TH2PolyBin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2PolyBin::Dictionary, isa_proxy, 4,
                  sizeof(::TH2PolyBin) );
      instance.SetNew(&new_TH2PolyBin);
      instance.SetNewArray(&newArray_TH2PolyBin);
      instance.SetDelete(&delete_TH2PolyBin);
      instance.SetDeleteArray(&deleteArray_TH2PolyBin);
      instance.SetDestructor(&destruct_TH2PolyBin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2PolyBin*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2PolyBin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2PolyBin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2Poly(void *p = nullptr);
   static void *newArray_TH2Poly(Long_t size, void *p);
   static void delete_TH2Poly(void *p);
   static void deleteArray_TH2Poly(void *p);
   static void destruct_TH2Poly(void *p);
   static void directoryAutoAdd_TH2Poly(void *obj, TDirectory *dir);
   static Long64_t merge_TH2Poly(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2Poly*)
   {
      ::TH2Poly *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2Poly >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2Poly", ::TH2Poly::Class_Version(), "TH2Poly.h", 66,
                  typeid(::TH2Poly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2Poly::Dictionary, isa_proxy, 4,
                  sizeof(::TH2Poly) );
      instance.SetNew(&new_TH2Poly);
      instance.SetNewArray(&newArray_TH2Poly);
      instance.SetDelete(&delete_TH2Poly);
      instance.SetDeleteArray(&deleteArray_TH2Poly);
      instance.SetDestructor(&destruct_TH2Poly);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH2Poly);
      instance.SetMerge(&merge_TH2Poly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2Poly*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2Poly*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2Poly*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TH3(void *p);
   static void deleteArray_TH3(void *p);
   static void destruct_TH3(void *p);
   static void directoryAutoAdd_TH3(void *obj, TDirectory *dir);
   static void streamer_TH3(TBuffer &buf, void *obj);
   static Long64_t merge_TH3(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3*)
   {
      ::TH3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3", ::TH3::Class_Version(), "TH3.h", 45,
                  typeid(::TH3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3::Dictionary, isa_proxy, 17,
                  sizeof(::TH3) );
      instance.SetDelete(&delete_TH3);
      instance.SetDeleteArray(&deleteArray_TH3);
      instance.SetDestructor(&destruct_TH3);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3);
      instance.SetStreamerFunc(&streamer_TH3);
      instance.SetMerge(&merge_TH3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3C(void *p = nullptr);
   static void *newArray_TH3C(Long_t size, void *p);
   static void delete_TH3C(void *p);
   static void deleteArray_TH3C(void *p);
   static void destruct_TH3C(void *p);
   static void directoryAutoAdd_TH3C(void *obj, TDirectory *dir);
   static void streamer_TH3C(TBuffer &buf, void *obj);
   static Long64_t merge_TH3C(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3C*)
   {
      ::TH3C *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3C >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3C", ::TH3C::Class_Version(), "TH3.h", 176,
                  typeid(::TH3C), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3C::Dictionary, isa_proxy, 17,
                  sizeof(::TH3C) );
      instance.SetNew(&new_TH3C);
      instance.SetNewArray(&newArray_TH3C);
      instance.SetDelete(&delete_TH3C);
      instance.SetDeleteArray(&deleteArray_TH3C);
      instance.SetDestructor(&destruct_TH3C);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3C);
      instance.SetStreamerFunc(&streamer_TH3C);
      instance.SetMerge(&merge_TH3C);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3C*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3C*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3C*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3S(void *p = nullptr);
   static void *newArray_TH3S(Long_t size, void *p);
   static void delete_TH3S(void *p);
   static void deleteArray_TH3S(void *p);
   static void destruct_TH3S(void *p);
   static void directoryAutoAdd_TH3S(void *obj, TDirectory *dir);
   static void streamer_TH3S(TBuffer &buf, void *obj);
   static Long64_t merge_TH3S(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3S*)
   {
      ::TH3S *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3S >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3S", ::TH3S::Class_Version(), "TH3.h", 224,
                  typeid(::TH3S), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3S::Dictionary, isa_proxy, 17,
                  sizeof(::TH3S) );
      instance.SetNew(&new_TH3S);
      instance.SetNewArray(&newArray_TH3S);
      instance.SetDelete(&delete_TH3S);
      instance.SetDeleteArray(&deleteArray_TH3S);
      instance.SetDestructor(&destruct_TH3S);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3S);
      instance.SetStreamerFunc(&streamer_TH3S);
      instance.SetMerge(&merge_TH3S);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3S*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3S*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3S*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3I(void *p = nullptr);
   static void *newArray_TH3I(Long_t size, void *p);
   static void delete_TH3I(void *p);
   static void deleteArray_TH3I(void *p);
   static void destruct_TH3I(void *p);
   static void directoryAutoAdd_TH3I(void *obj, TDirectory *dir);
   static Long64_t merge_TH3I(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3I*)
   {
      ::TH3I *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3I >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3I", ::TH3I::Class_Version(), "TH3.h", 273,
                  typeid(::TH3I), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3I::Dictionary, isa_proxy, 4,
                  sizeof(::TH3I) );
      instance.SetNew(&new_TH3I);
      instance.SetNewArray(&newArray_TH3I);
      instance.SetDelete(&delete_TH3I);
      instance.SetDeleteArray(&deleteArray_TH3I);
      instance.SetDestructor(&destruct_TH3I);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3I);
      instance.SetMerge(&merge_TH3I);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3I*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3I*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3I*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3L(void *p = nullptr);
   static void *newArray_TH3L(Long_t size, void *p);
   static void delete_TH3L(void *p);
   static void deleteArray_TH3L(void *p);
   static void destruct_TH3L(void *p);
   static void directoryAutoAdd_TH3L(void *obj, TDirectory *dir);
   static Long64_t merge_TH3L(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3L*)
   {
      ::TH3L *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3L >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3L", ::TH3L::Class_Version(), "TH3.h", 322,
                  typeid(::TH3L), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3L::Dictionary, isa_proxy, 4,
                  sizeof(::TH3L) );
      instance.SetNew(&new_TH3L);
      instance.SetNewArray(&newArray_TH3L);
      instance.SetDelete(&delete_TH3L);
      instance.SetDeleteArray(&deleteArray_TH3L);
      instance.SetDestructor(&destruct_TH3L);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3L);
      instance.SetMerge(&merge_TH3L);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3L*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3L*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3L*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3F(void *p = nullptr);
   static void *newArray_TH3F(Long_t size, void *p);
   static void delete_TH3F(void *p);
   static void deleteArray_TH3F(void *p);
   static void destruct_TH3F(void *p);
   static void directoryAutoAdd_TH3F(void *obj, TDirectory *dir);
   static void streamer_TH3F(TBuffer &buf, void *obj);
   static Long64_t merge_TH3F(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3F*)
   {
      ::TH3F *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3F >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3F", ::TH3F::Class_Version(), "TH3.h", 369,
                  typeid(::TH3F), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3F::Dictionary, isa_proxy, 17,
                  sizeof(::TH3F) );
      instance.SetNew(&new_TH3F);
      instance.SetNewArray(&newArray_TH3F);
      instance.SetDelete(&delete_TH3F);
      instance.SetDeleteArray(&deleteArray_TH3F);
      instance.SetDestructor(&destruct_TH3F);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3F);
      instance.SetStreamerFunc(&streamer_TH3F);
      instance.SetMerge(&merge_TH3F);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3F*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3F*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3F*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH3D(void *p = nullptr);
   static void *newArray_TH3D(Long_t size, void *p);
   static void delete_TH3D(void *p);
   static void deleteArray_TH3D(void *p);
   static void destruct_TH3D(void *p);
   static void directoryAutoAdd_TH3D(void *obj, TDirectory *dir);
   static void streamer_TH3D(TBuffer &buf, void *obj);
   static Long64_t merge_TH3D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH3D*)
   {
      ::TH3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH3D", ::TH3D::Class_Version(), "TH3.h", 424,
                  typeid(::TH3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH3D::Dictionary, isa_proxy, 17,
                  sizeof(::TH3D) );
      instance.SetNew(&new_TH3D);
      instance.SetNewArray(&newArray_TH3D);
      instance.SetDelete(&delete_TH3D);
      instance.SetDeleteArray(&deleteArray_TH3D);
      instance.SetDestructor(&destruct_TH3D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TH3D);
      instance.SetStreamerFunc(&streamer_TH3D);
      instance.SetMerge(&merge_TH3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THLimitsFinder(void *p = nullptr);
   static void *newArray_THLimitsFinder(Long_t size, void *p);
   static void delete_THLimitsFinder(void *p);
   static void deleteArray_THLimitsFinder(void *p);
   static void destruct_THLimitsFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THLimitsFinder*)
   {
      ::THLimitsFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THLimitsFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THLimitsFinder", ::THLimitsFinder::Class_Version(), "THLimitsFinder.h", 28,
                  typeid(::THLimitsFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THLimitsFinder::Dictionary, isa_proxy, 4,
                  sizeof(::THLimitsFinder) );
      instance.SetNew(&new_THLimitsFinder);
      instance.SetNewArray(&newArray_THLimitsFinder);
      instance.SetDelete(&delete_THLimitsFinder);
      instance.SetDeleteArray(&deleteArray_THLimitsFinder);
      instance.SetDestructor(&destruct_THLimitsFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THLimitsFinder*)
   {
      return GenerateInitInstanceLocal(static_cast<::THLimitsFinder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THLimitsFinder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THnBase(void *p);
   static void deleteArray_THnBase(void *p);
   static void destruct_THnBase(void *p);
   static Long64_t merge_THnBase(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnBase*)
   {
      ::THnBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnBase", ::THnBase::Class_Version(), "THnBase.h", 45,
                  typeid(::THnBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THnBase::Dictionary, isa_proxy, 4,
                  sizeof(::THnBase) );
      instance.SetDelete(&delete_THnBase);
      instance.SetDeleteArray(&deleteArray_THnBase);
      instance.SetDestructor(&destruct_THnBase);
      instance.SetMerge(&merge_THnBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLInternalcLcLTHnBaseBrowsable(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLTHnBaseBrowsable(void *p);
   static void destruct_ROOTcLcLInternalcLcLTHnBaseBrowsable(void *p);
   static void streamer_ROOTcLcLInternalcLcLTHnBaseBrowsable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::THnBaseBrowsable*)
   {
      ::ROOT::Internal::THnBaseBrowsable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Internal::THnBaseBrowsable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::THnBaseBrowsable", ::ROOT::Internal::THnBaseBrowsable::Class_Version(), "THnBase.h", 313,
                  typeid(::ROOT::Internal::THnBaseBrowsable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Internal::THnBaseBrowsable::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::Internal::THnBaseBrowsable) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLTHnBaseBrowsable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLTHnBaseBrowsable);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLTHnBaseBrowsable);
      instance.SetStreamerFunc(&streamer_ROOTcLcLInternalcLcLTHnBaseBrowsable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::THnBaseBrowsable*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::THnBaseBrowsable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::THnBaseBrowsable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THnIter(void *p);
   static void deleteArray_THnIter(void *p);
   static void destruct_THnIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnIter*)
   {
      ::THnIter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnIter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnIter", ::THnIter::Class_Version(), "THnBase.h", 346,
                  typeid(::THnIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THnIter::Dictionary, isa_proxy, 4,
                  sizeof(::THnIter) );
      instance.SetDelete(&delete_THnIter);
      instance.SetDeleteArray(&deleteArray_THnIter);
      instance.SetDestructor(&destruct_THnIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnIter*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnIter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnIter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THnChain(void *p);
   static void deleteArray_THnChain(void *p);
   static void destruct_THnChain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnChain*)
   {
      ::THnChain *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnChain >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnChain", ::THnChain::Class_Version(), "THnChain.h", 49,
                  typeid(::THnChain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THnChain::Dictionary, isa_proxy, 4,
                  sizeof(::THnChain) );
      instance.SetDelete(&delete_THnChain);
      instance.SetDeleteArray(&deleteArray_THnChain);
      instance.SetDestructor(&destruct_THnChain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnChain*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnChain*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnChain*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TNDArray(void *p);
   static void deleteArray_TNDArray(void *p);
   static void destruct_TNDArray(void *p);

   // Schema evolution read functions
   static void read_TNDArray_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNdimPlusOne = oldObj->GetId("fNdimPlusOne");
      static Int_t id_fSizes = oldObj->GetId("fSizes");
#endif
      struct TNDArray_Onfile {
         Int_t &fNdimPlusOne;
         Long64_t* &fSizes;
         TNDArray_Onfile(Int_t &onfile_fNdimPlusOne, Long64_t* &onfile_fSizes ): fNdimPlusOne(onfile_fNdimPlusOne), fSizes(onfile_fSizes) {}
      };
      static Long_t offset_Onfile_TNDArray_fNdimPlusOne = oldObj->GetClass()->GetDataMemberOffset("fNdimPlusOne");
      static Long_t offset_Onfile_TNDArray_fSizes = oldObj->GetClass()->GetDataMemberOffset("fSizes");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArray_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArray_fNdimPlusOne),
         *(Long64_t**)(onfile_add+offset_Onfile_TNDArray_fSizes) );

      static TClassRef cls("TNDArray");
      static Long_t offset_fSizes = cls->GetDataMemberOffset("fSizes");
      vector<Long64_t>& fSizes = *(vector<Long64_t>*)(target+offset_fSizes);
      TNDArray* newObj = (TNDArray*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fSizes.clear(); if(onfile.fSizes) {fSizes.reserve(onfile.fNdimPlusOne); for(int i = 0; i < onfile.fNdimPlusOne; ++i) fSizes.push_back(onfile.fSizes[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArray*)
   {
      ::TNDArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArray", ::TNDArray::Class_Version(), "TNDArray.h", 46,
                  typeid(::TNDArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNDArray::Dictionary, isa_proxy, 4,
                  sizeof(::TNDArray) );
      instance.SetDelete(&delete_TNDArray);
      instance.SetDeleteArray(&deleteArray_TNDArray);
      instance.SetDestructor(&destruct_TNDArray);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArray";
      rule->fTarget      = "fSizes";
      rule->fSource      = "int fNdimPlusOne; Long64_t* fSizes; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArray_0);
      rule->fCode        = " fSizes.clear(); if(onfile.fSizes) {fSizes.reserve(onfile.fNdimPlusOne); for(int i = 0; i < onfile.fNdimPlusOne; ++i) fSizes.push_back(onfile.fSizes[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEdoublegR_Dictionary();
   static void TNDArrayReflEdoublegR_TClassManip(TClass*);
   static void delete_TNDArrayReflEdoublegR(void *p);
   static void deleteArray_TNDArrayReflEdoublegR(void *p);
   static void destruct_TNDArrayReflEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<double>*)
   {
      ::TNDArrayRef<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<double>", ::TNDArrayRef<double>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<double>) );
      instance.SetDelete(&delete_TNDArrayReflEdoublegR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEdoublegR);
      instance.SetDestructor(&destruct_TNDArrayReflEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<double>","TNDArrayRef<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<double>*>(nullptr))->GetClass();
      TNDArrayReflEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEchargR_Dictionary();
   static void TNDArrayReflEchargR_TClassManip(TClass*);
   static void delete_TNDArrayReflEchargR(void *p);
   static void deleteArray_TNDArrayReflEchargR(void *p);
   static void destruct_TNDArrayReflEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<char>*)
   {
      ::TNDArrayRef<char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<char> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<char>", ::TNDArrayRef<char>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEchargR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<char>) );
      instance.SetDelete(&delete_TNDArrayReflEchargR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEchargR);
      instance.SetDestructor(&destruct_TNDArrayReflEchargR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<char>","TNDArrayRef<Char_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<char>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<char>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<char>*>(nullptr))->GetClass();
      TNDArrayReflEchargR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEshortgR_Dictionary();
   static void TNDArrayReflEshortgR_TClassManip(TClass*);
   static void delete_TNDArrayReflEshortgR(void *p);
   static void deleteArray_TNDArrayReflEshortgR(void *p);
   static void destruct_TNDArrayReflEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<short>*)
   {
      ::TNDArrayRef<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<short> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<short>", ::TNDArrayRef<short>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<short>) );
      instance.SetDelete(&delete_TNDArrayReflEshortgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEshortgR);
      instance.SetDestructor(&destruct_TNDArrayReflEshortgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<short>","TNDArrayRef<Short_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<short>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<short>*>(nullptr))->GetClass();
      TNDArrayReflEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEintgR_Dictionary();
   static void TNDArrayReflEintgR_TClassManip(TClass*);
   static void delete_TNDArrayReflEintgR(void *p);
   static void deleteArray_TNDArrayReflEintgR(void *p);
   static void destruct_TNDArrayReflEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<int>*)
   {
      ::TNDArrayRef<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<int>", ::TNDArrayRef<int>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<int>) );
      instance.SetDelete(&delete_TNDArrayReflEintgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEintgR);
      instance.SetDestructor(&destruct_TNDArrayReflEintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<int>","TNDArrayRef<Int_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<int>*>(nullptr))->GetClass();
      TNDArrayReflEintgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflELong64_tgR_Dictionary();
   static void TNDArrayReflELong64_tgR_TClassManip(TClass*);
   static void delete_TNDArrayReflELong64_tgR(void *p);
   static void deleteArray_TNDArrayReflELong64_tgR(void *p);
   static void destruct_TNDArrayReflELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<Long64_t>*)
   {
      ::TNDArrayRef<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<Long64_t> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<Long64_t>", ::TNDArrayRef<Long64_t>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<Long64_t>) );
      instance.SetDelete(&delete_TNDArrayReflELong64_tgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflELong64_tgR);
      instance.SetDestructor(&destruct_TNDArrayReflELong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<Long64_t>","TNDArrayRef<long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<Long64_t>*>(nullptr))->GetClass();
      TNDArrayReflELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEfloatgR_Dictionary();
   static void TNDArrayReflEfloatgR_TClassManip(TClass*);
   static void delete_TNDArrayReflEfloatgR(void *p);
   static void deleteArray_TNDArrayReflEfloatgR(void *p);
   static void destruct_TNDArrayReflEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<float>*)
   {
      ::TNDArrayRef<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<float>", ::TNDArrayRef<float>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<float>) );
      instance.SetDelete(&delete_TNDArrayReflEfloatgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEfloatgR);
      instance.SetDestructor(&destruct_TNDArrayReflEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<float>","TNDArrayRef<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<float>*>(nullptr))->GetClass();
      TNDArrayReflEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEunsignedsPshortgR_Dictionary();
   static void TNDArrayReflEunsignedsPshortgR_TClassManip(TClass*);
   static void delete_TNDArrayReflEunsignedsPshortgR(void *p);
   static void deleteArray_TNDArrayReflEunsignedsPshortgR(void *p);
   static void destruct_TNDArrayReflEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<unsigned short>*)
   {
      ::TNDArrayRef<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<unsigned short> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<unsigned short>", ::TNDArrayRef<unsigned short>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<unsigned short>) );
      instance.SetDelete(&delete_TNDArrayReflEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEunsignedsPshortgR);
      instance.SetDestructor(&destruct_TNDArrayReflEunsignedsPshortgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<unsigned short>","TNDArrayRef<UShort_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<unsigned short>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<unsigned short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<unsigned short>*>(nullptr))->GetClass();
      TNDArrayReflEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEunsignedsPintgR_Dictionary();
   static void TNDArrayReflEunsignedsPintgR_TClassManip(TClass*);
   static void delete_TNDArrayReflEunsignedsPintgR(void *p);
   static void deleteArray_TNDArrayReflEunsignedsPintgR(void *p);
   static void destruct_TNDArrayReflEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<unsigned int>*)
   {
      ::TNDArrayRef<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<unsigned int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<unsigned int>", ::TNDArrayRef<unsigned int>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<unsigned int>) );
      instance.SetDelete(&delete_TNDArrayReflEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEunsignedsPintgR);
      instance.SetDestructor(&destruct_TNDArrayReflEunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<unsigned int>","TNDArrayRef<UInt_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<unsigned int>*>(nullptr))->GetClass();
      TNDArrayReflEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEunsignedsPlonggR_Dictionary();
   static void TNDArrayReflEunsignedsPlonggR_TClassManip(TClass*);
   static void delete_TNDArrayReflEunsignedsPlonggR(void *p);
   static void deleteArray_TNDArrayReflEunsignedsPlonggR(void *p);
   static void destruct_TNDArrayReflEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<unsigned long>*)
   {
      ::TNDArrayRef<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<unsigned long> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<unsigned long>", ::TNDArrayRef<unsigned long>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<unsigned long>) );
      instance.SetDelete(&delete_TNDArrayReflEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEunsignedsPlonggR);
      instance.SetDestructor(&destruct_TNDArrayReflEunsignedsPlonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<unsigned long>","TNDArrayRef<ULong_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<unsigned long>*>(nullptr))->GetClass();
      TNDArrayReflEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflEULong64_tgR_Dictionary();
   static void TNDArrayReflEULong64_tgR_TClassManip(TClass*);
   static void delete_TNDArrayReflEULong64_tgR(void *p);
   static void deleteArray_TNDArrayReflEULong64_tgR(void *p);
   static void destruct_TNDArrayReflEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<ULong64_t>*)
   {
      ::TNDArrayRef<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<ULong64_t> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<ULong64_t>", ::TNDArrayRef<ULong64_t>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<ULong64_t>) );
      instance.SetDelete(&delete_TNDArrayReflEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflEULong64_tgR);
      instance.SetDestructor(&destruct_TNDArrayReflEULong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<ULong64_t>","TNDArrayRef<unsigned long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<ULong64_t>*>(nullptr))->GetClass();
      TNDArrayReflEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayReflElonggR_Dictionary();
   static void TNDArrayReflElonggR_TClassManip(TClass*);
   static void delete_TNDArrayReflElonggR(void *p);
   static void deleteArray_TNDArrayReflElonggR(void *p);
   static void destruct_TNDArrayReflElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayRef<long>*)
   {
      ::TNDArrayRef<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayRef<long> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayRef<long>", ::TNDArrayRef<long>::Class_Version(), "TNDArray.h", 91,
                  typeid(::TNDArrayRef<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayReflElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayRef<long>) );
      instance.SetDelete(&delete_TNDArrayReflElonggR);
      instance.SetDeleteArray(&deleteArray_TNDArrayReflElonggR);
      instance.SetDestructor(&destruct_TNDArrayReflElonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayRef<long>","TNDArrayRef<Long_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayRef<long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayRef<long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayReflElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayRef<long>*>(nullptr))->GetClass();
      TNDArrayReflElonggR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayReflElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEdoublegR_Dictionary();
   static void TNDArrayTlEdoublegR_TClassManip(TClass*);
   static void *new_TNDArrayTlEdoublegR(void *p = nullptr);
   static void *newArray_TNDArrayTlEdoublegR(Long_t size, void *p);
   static void delete_TNDArrayTlEdoublegR(void *p);
   static void deleteArray_TNDArrayTlEdoublegR(void *p);
   static void destruct_TNDArrayTlEdoublegR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEdoublegR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEdoublegR_Onfile {
         Int_t &fNumData;
         Double_t* &fData;
         TNDArrayTlEdoublegR_Onfile(Int_t &onfile_fNumData, Double_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEdoublegR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEdoublegR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEdoublegR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEdoublegR_fNumData),
         *(Double_t**)(onfile_add+offset_Onfile_TNDArrayTlEdoublegR_fData) );

      static TClassRef cls("TNDArrayT<Double_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<double>& fData = *(vector<double>*)(target+offset_fData);
      TNDArrayT<Double_t>* newObj = (TNDArrayT<Double_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<double>*)
   {
      ::TNDArrayT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<double>", ::TNDArrayT<double>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<double>) );
      instance.SetNew(&new_TNDArrayTlEdoublegR);
      instance.SetNewArray(&newArray_TNDArrayTlEdoublegR);
      instance.SetDelete(&delete_TNDArrayTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEdoublegR);
      instance.SetDestructor(&destruct_TNDArrayTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<double>","TNDArrayT<Double_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Double_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; double* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEdoublegR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<double>*>(nullptr))->GetClass();
      TNDArrayTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEfloatgR_Dictionary();
   static void TNDArrayTlEfloatgR_TClassManip(TClass*);
   static void *new_TNDArrayTlEfloatgR(void *p = nullptr);
   static void *newArray_TNDArrayTlEfloatgR(Long_t size, void *p);
   static void delete_TNDArrayTlEfloatgR(void *p);
   static void deleteArray_TNDArrayTlEfloatgR(void *p);
   static void destruct_TNDArrayTlEfloatgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEfloatgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEfloatgR_Onfile {
         Int_t &fNumData;
         Float_t* &fData;
         TNDArrayTlEfloatgR_Onfile(Int_t &onfile_fNumData, Float_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEfloatgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEfloatgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEfloatgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEfloatgR_fNumData),
         *(Float_t**)(onfile_add+offset_Onfile_TNDArrayTlEfloatgR_fData) );

      static TClassRef cls("TNDArrayT<Float_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<float>& fData = *(vector<float>*)(target+offset_fData);
      TNDArrayT<Float_t>* newObj = (TNDArrayT<Float_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<float>*)
   {
      ::TNDArrayT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<float>", ::TNDArrayT<float>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<float>) );
      instance.SetNew(&new_TNDArrayTlEfloatgR);
      instance.SetNewArray(&newArray_TNDArrayTlEfloatgR);
      instance.SetDelete(&delete_TNDArrayTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEfloatgR);
      instance.SetDestructor(&destruct_TNDArrayTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<float>","TNDArrayT<Float_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Float_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; float* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEfloatgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<float>*>(nullptr))->GetClass();
      TNDArrayTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlELong64_tgR_Dictionary();
   static void TNDArrayTlELong64_tgR_TClassManip(TClass*);
   static void *new_TNDArrayTlELong64_tgR(void *p = nullptr);
   static void *newArray_TNDArrayTlELong64_tgR(Long_t size, void *p);
   static void delete_TNDArrayTlELong64_tgR(void *p);
   static void deleteArray_TNDArrayTlELong64_tgR(void *p);
   static void destruct_TNDArrayTlELong64_tgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlELong64_tgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlELong64_tgR_Onfile {
         Int_t &fNumData;
         Long64_t* &fData;
         TNDArrayTlELong64_tgR_Onfile(Int_t &onfile_fNumData, Long64_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlELong64_tgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlELong64_tgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlELong64_tgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlELong64_tgR_fNumData),
         *(Long64_t**)(onfile_add+offset_Onfile_TNDArrayTlELong64_tgR_fData) );

      static TClassRef cls("TNDArrayT<Long64_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<Long64_t>& fData = *(vector<Long64_t>*)(target+offset_fData);
      TNDArrayT<Long64_t>* newObj = (TNDArrayT<Long64_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<Long64_t>*)
   {
      ::TNDArrayT<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<Long64_t> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<Long64_t>", ::TNDArrayT<Long64_t>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<Long64_t>) );
      instance.SetNew(&new_TNDArrayTlELong64_tgR);
      instance.SetNewArray(&newArray_TNDArrayTlELong64_tgR);
      instance.SetDelete(&delete_TNDArrayTlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlELong64_tgR);
      instance.SetDestructor(&destruct_TNDArrayTlELong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<Long64_t>","TNDArrayT<long long>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Long64_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; Long64_t* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlELong64_tgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<Long64_t>*>(nullptr))->GetClass();
      TNDArrayTlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlElonggR_Dictionary();
   static void TNDArrayTlElonggR_TClassManip(TClass*);
   static void *new_TNDArrayTlElonggR(void *p = nullptr);
   static void *newArray_TNDArrayTlElonggR(Long_t size, void *p);
   static void delete_TNDArrayTlElonggR(void *p);
   static void deleteArray_TNDArrayTlElonggR(void *p);
   static void destruct_TNDArrayTlElonggR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlElonggR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlElonggR_Onfile {
         Int_t &fNumData;
         Long_t* &fData;
         TNDArrayTlElonggR_Onfile(Int_t &onfile_fNumData, Long_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlElonggR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlElonggR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlElonggR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlElonggR_fNumData),
         *(Long_t**)(onfile_add+offset_Onfile_TNDArrayTlElonggR_fData) );

      static TClassRef cls("TNDArrayT<Long_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<long>& fData = *(vector<long>*)(target+offset_fData);
      TNDArrayT<Long_t>* newObj = (TNDArrayT<Long_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<long>*)
   {
      ::TNDArrayT<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<long> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<long>", ::TNDArrayT<long>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<long>) );
      instance.SetNew(&new_TNDArrayTlElonggR);
      instance.SetNewArray(&newArray_TNDArrayTlElonggR);
      instance.SetDelete(&delete_TNDArrayTlElonggR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlElonggR);
      instance.SetDestructor(&destruct_TNDArrayTlElonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<long>","TNDArrayT<Long_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Long_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; long* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlElonggR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<long>*>(nullptr))->GetClass();
      TNDArrayTlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEintgR_Dictionary();
   static void TNDArrayTlEintgR_TClassManip(TClass*);
   static void *new_TNDArrayTlEintgR(void *p = nullptr);
   static void *newArray_TNDArrayTlEintgR(Long_t size, void *p);
   static void delete_TNDArrayTlEintgR(void *p);
   static void deleteArray_TNDArrayTlEintgR(void *p);
   static void destruct_TNDArrayTlEintgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEintgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEintgR_Onfile {
         Int_t &fNumData;
         Int_t* &fData;
         TNDArrayTlEintgR_Onfile(Int_t &onfile_fNumData, Int_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEintgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEintgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEintgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEintgR_fNumData),
         *(Int_t**)(onfile_add+offset_Onfile_TNDArrayTlEintgR_fData) );

      static TClassRef cls("TNDArrayT<Int_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<int>& fData = *(vector<int>*)(target+offset_fData);
      TNDArrayT<Int_t>* newObj = (TNDArrayT<Int_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<int>*)
   {
      ::TNDArrayT<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<int>", ::TNDArrayT<int>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<int>) );
      instance.SetNew(&new_TNDArrayTlEintgR);
      instance.SetNewArray(&newArray_TNDArrayTlEintgR);
      instance.SetDelete(&delete_TNDArrayTlEintgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEintgR);
      instance.SetDestructor(&destruct_TNDArrayTlEintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<int>","TNDArrayT<Int_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Int_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; int* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEintgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<int>*>(nullptr))->GetClass();
      TNDArrayTlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEshortgR_Dictionary();
   static void TNDArrayTlEshortgR_TClassManip(TClass*);
   static void *new_TNDArrayTlEshortgR(void *p = nullptr);
   static void *newArray_TNDArrayTlEshortgR(Long_t size, void *p);
   static void delete_TNDArrayTlEshortgR(void *p);
   static void deleteArray_TNDArrayTlEshortgR(void *p);
   static void destruct_TNDArrayTlEshortgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEshortgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEshortgR_Onfile {
         Int_t &fNumData;
         Short_t* &fData;
         TNDArrayTlEshortgR_Onfile(Int_t &onfile_fNumData, Short_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEshortgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEshortgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEshortgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEshortgR_fNumData),
         *(Short_t**)(onfile_add+offset_Onfile_TNDArrayTlEshortgR_fData) );

      static TClassRef cls("TNDArrayT<Short_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<short>& fData = *(vector<short>*)(target+offset_fData);
      TNDArrayT<Short_t>* newObj = (TNDArrayT<Short_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<short>*)
   {
      ::TNDArrayT<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<short> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<short>", ::TNDArrayT<short>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<short>) );
      instance.SetNew(&new_TNDArrayTlEshortgR);
      instance.SetNewArray(&newArray_TNDArrayTlEshortgR);
      instance.SetDelete(&delete_TNDArrayTlEshortgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEshortgR);
      instance.SetDestructor(&destruct_TNDArrayTlEshortgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<short>","TNDArrayT<Short_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Short_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; short* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEshortgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<short>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<short>*>(nullptr))->GetClass();
      TNDArrayTlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEchargR_Dictionary();
   static void TNDArrayTlEchargR_TClassManip(TClass*);
   static void *new_TNDArrayTlEchargR(void *p = nullptr);
   static void *newArray_TNDArrayTlEchargR(Long_t size, void *p);
   static void delete_TNDArrayTlEchargR(void *p);
   static void deleteArray_TNDArrayTlEchargR(void *p);
   static void destruct_TNDArrayTlEchargR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEchargR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEchargR_Onfile {
         Int_t &fNumData;
         Char_t* &fData;
         TNDArrayTlEchargR_Onfile(Int_t &onfile_fNumData, Char_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEchargR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEchargR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEchargR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEchargR_fNumData),
         *(Char_t**)(onfile_add+offset_Onfile_TNDArrayTlEchargR_fData) );

      static TClassRef cls("TNDArrayT<Char_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<char>& fData = *(vector<char>*)(target+offset_fData);
      TNDArrayT<Char_t>* newObj = (TNDArrayT<Char_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<char>*)
   {
      ::TNDArrayT<char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<char> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<char>", ::TNDArrayT<char>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEchargR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<char>) );
      instance.SetNew(&new_TNDArrayTlEchargR);
      instance.SetNewArray(&newArray_TNDArrayTlEchargR);
      instance.SetDelete(&delete_TNDArrayTlEchargR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEchargR);
      instance.SetDestructor(&destruct_TNDArrayTlEchargR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<char>","TNDArrayT<Char_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<Char_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; char* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEchargR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<char>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<char>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<char>*>(nullptr))->GetClass();
      TNDArrayTlEchargR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEULong64_tgR_Dictionary();
   static void TNDArrayTlEULong64_tgR_TClassManip(TClass*);
   static void *new_TNDArrayTlEULong64_tgR(void *p = nullptr);
   static void *newArray_TNDArrayTlEULong64_tgR(Long_t size, void *p);
   static void delete_TNDArrayTlEULong64_tgR(void *p);
   static void deleteArray_TNDArrayTlEULong64_tgR(void *p);
   static void destruct_TNDArrayTlEULong64_tgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEULong64_tgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEULong64_tgR_Onfile {
         Int_t &fNumData;
         ULong64_t* &fData;
         TNDArrayTlEULong64_tgR_Onfile(Int_t &onfile_fNumData, ULong64_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEULong64_tgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEULong64_tgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEULong64_tgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEULong64_tgR_fNumData),
         *(ULong64_t**)(onfile_add+offset_Onfile_TNDArrayTlEULong64_tgR_fData) );

      static TClassRef cls("TNDArrayT<ULong64_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<ULong64_t>& fData = *(vector<ULong64_t>*)(target+offset_fData);
      TNDArrayT<ULong64_t>* newObj = (TNDArrayT<ULong64_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<ULong64_t>*)
   {
      ::TNDArrayT<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<ULong64_t> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<ULong64_t>", ::TNDArrayT<ULong64_t>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<ULong64_t>) );
      instance.SetNew(&new_TNDArrayTlEULong64_tgR);
      instance.SetNewArray(&newArray_TNDArrayTlEULong64_tgR);
      instance.SetDelete(&delete_TNDArrayTlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEULong64_tgR);
      instance.SetDestructor(&destruct_TNDArrayTlEULong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<ULong64_t>","TNDArrayT<unsigned long long>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<ULong64_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; ULong64_t* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEULong64_tgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<ULong64_t>*>(nullptr))->GetClass();
      TNDArrayTlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEunsignedsPlonggR_Dictionary();
   static void TNDArrayTlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_TNDArrayTlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_TNDArrayTlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_TNDArrayTlEunsignedsPlonggR(void *p);
   static void deleteArray_TNDArrayTlEunsignedsPlonggR(void *p);
   static void destruct_TNDArrayTlEunsignedsPlonggR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEunsignedsPlonggR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEunsignedsPlonggR_Onfile {
         Int_t &fNumData;
         ULong_t* &fData;
         TNDArrayTlEunsignedsPlonggR_Onfile(Int_t &onfile_fNumData, ULong_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEunsignedsPlonggR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEunsignedsPlonggR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEunsignedsPlonggR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEunsignedsPlonggR_fNumData),
         *(ULong_t**)(onfile_add+offset_Onfile_TNDArrayTlEunsignedsPlonggR_fData) );

      static TClassRef cls("TNDArrayT<ULong_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<unsigned long>& fData = *(vector<unsigned long>*)(target+offset_fData);
      TNDArrayT<ULong_t>* newObj = (TNDArrayT<ULong_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<unsigned long>*)
   {
      ::TNDArrayT<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<unsigned long> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<unsigned long>", ::TNDArrayT<unsigned long>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<unsigned long>) );
      instance.SetNew(&new_TNDArrayTlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_TNDArrayTlEunsignedsPlonggR);
      instance.SetDelete(&delete_TNDArrayTlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_TNDArrayTlEunsignedsPlonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<unsigned long>","TNDArrayT<ULong_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<ULong_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; unsigned long* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEunsignedsPlonggR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<unsigned long>*>(nullptr))->GetClass();
      TNDArrayTlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEunsignedsPintgR_Dictionary();
   static void TNDArrayTlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_TNDArrayTlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_TNDArrayTlEunsignedsPintgR(Long_t size, void *p);
   static void delete_TNDArrayTlEunsignedsPintgR(void *p);
   static void deleteArray_TNDArrayTlEunsignedsPintgR(void *p);
   static void destruct_TNDArrayTlEunsignedsPintgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEunsignedsPintgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEunsignedsPintgR_Onfile {
         Int_t &fNumData;
         UInt_t* &fData;
         TNDArrayTlEunsignedsPintgR_Onfile(Int_t &onfile_fNumData, UInt_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEunsignedsPintgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEunsignedsPintgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEunsignedsPintgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEunsignedsPintgR_fNumData),
         *(UInt_t**)(onfile_add+offset_Onfile_TNDArrayTlEunsignedsPintgR_fData) );

      static TClassRef cls("TNDArrayT<UInt_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<unsigned int>& fData = *(vector<unsigned int>*)(target+offset_fData);
      TNDArrayT<UInt_t>* newObj = (TNDArrayT<UInt_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<unsigned int>*)
   {
      ::TNDArrayT<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<unsigned int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<unsigned int>", ::TNDArrayT<unsigned int>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<unsigned int>) );
      instance.SetNew(&new_TNDArrayTlEunsignedsPintgR);
      instance.SetNewArray(&newArray_TNDArrayTlEunsignedsPintgR);
      instance.SetDelete(&delete_TNDArrayTlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEunsignedsPintgR);
      instance.SetDestructor(&destruct_TNDArrayTlEunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<unsigned int>","TNDArrayT<UInt_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<UInt_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; unsigned int* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEunsignedsPintgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<unsigned int>*>(nullptr))->GetClass();
      TNDArrayTlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TNDArrayTlEunsignedsPshortgR_Dictionary();
   static void TNDArrayTlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_TNDArrayTlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_TNDArrayTlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_TNDArrayTlEunsignedsPshortgR(void *p);
   static void deleteArray_TNDArrayTlEunsignedsPshortgR(void *p);
   static void destruct_TNDArrayTlEunsignedsPshortgR(void *p);

   // Schema evolution read functions
   static void read_TNDArrayTlEunsignedsPshortgR_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNumData = oldObj->GetId("fNumData");
      static Int_t id_fData = oldObj->GetId("fData");
#endif
      struct TNDArrayTlEunsignedsPshortgR_Onfile {
         Int_t &fNumData;
         UShort_t* &fData;
         TNDArrayTlEunsignedsPshortgR_Onfile(Int_t &onfile_fNumData, UShort_t* &onfile_fData ): fNumData(onfile_fNumData), fData(onfile_fData) {}
      };
      static Long_t offset_Onfile_TNDArrayTlEunsignedsPshortgR_fNumData = oldObj->GetClass()->GetDataMemberOffset("fNumData");
      static Long_t offset_Onfile_TNDArrayTlEunsignedsPshortgR_fData = oldObj->GetClass()->GetDataMemberOffset("fData");
      char *onfile_add = (char*)oldObj->GetObject();
      TNDArrayTlEunsignedsPshortgR_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TNDArrayTlEunsignedsPshortgR_fNumData),
         *(UShort_t**)(onfile_add+offset_Onfile_TNDArrayTlEunsignedsPshortgR_fData) );

      static TClassRef cls("TNDArrayT<UShort_t>");
      static Long_t offset_fData = cls->GetDataMemberOffset("fData");
      vector<unsigned short>& fData = *(vector<unsigned short>*)(target+offset_fData);
      TNDArrayT<UShort_t>* newObj = (TNDArrayT<UShort_t>*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNDArrayT<unsigned short>*)
   {
      ::TNDArrayT<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNDArrayT<unsigned short> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNDArrayT<unsigned short>", ::TNDArrayT<unsigned short>::Class_Version(), "TNDArray.h", 114,
                  typeid(::TNDArrayT<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNDArrayTlEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::TNDArrayT<unsigned short>) );
      instance.SetNew(&new_TNDArrayTlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_TNDArrayTlEunsignedsPshortgR);
      instance.SetDelete(&delete_TNDArrayTlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_TNDArrayTlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_TNDArrayTlEunsignedsPshortgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TNDArrayT<unsigned short>","TNDArrayT<UShort_t>"));

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TNDArrayT<UShort_t>";
      rule->fTarget      = "fData";
      rule->fSource      = "int fNumData; unsigned short* fData; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_TNDArrayTlEunsignedsPshortgR_0);
      rule->fCode        = " fData.clear(); if(onfile.fData){fData.reserve(onfile.fNumData); for(int i = 0; i < onfile.fNumData; ++i) fData.push_back(onfile.fData[i]);} ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNDArrayT<unsigned short>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNDArrayT<unsigned short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNDArrayTlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNDArrayT<unsigned short>*>(nullptr))->GetClass();
      TNDArrayTlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void TNDArrayTlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_THn(void *p);
   static void deleteArray_THn(void *p);
   static void destruct_THn(void *p);
   static Long64_t merge_THn(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THn*)
   {
      ::THn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THn >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THn", ::THn::Class_Version(), "THn.h", 30,
                  typeid(::THn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THn::Dictionary, isa_proxy, 4,
                  sizeof(::THn) );
      instance.SetDelete(&delete_THn);
      instance.SetDeleteArray(&deleteArray_THn);
      instance.SetDestructor(&destruct_THn);
      instance.SetMerge(&merge_THn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THn*)
   {
      return GenerateInitInstanceLocal(static_cast<::THn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEfloatgR_Dictionary();
   static void THnTlEfloatgR_TClassManip(TClass*);
   static void *new_THnTlEfloatgR(void *p = nullptr);
   static void *newArray_THnTlEfloatgR(Long_t size, void *p);
   static void delete_THnTlEfloatgR(void *p);
   static void deleteArray_THnTlEfloatgR(void *p);
   static void destruct_THnTlEfloatgR(void *p);
   static Long64_t merge_THnTlEfloatgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<float>*)
   {
      ::THnT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<float>", ::THnT<float>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<float>) );
      instance.SetNew(&new_THnTlEfloatgR);
      instance.SetNewArray(&newArray_THnTlEfloatgR);
      instance.SetDelete(&delete_THnTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_THnTlEfloatgR);
      instance.SetDestructor(&destruct_THnTlEfloatgR);
      instance.SetMerge(&merge_THnTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<float>","THnT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<float>*>(nullptr))->GetClass();
      THnTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEdoublegR_Dictionary();
   static void THnTlEdoublegR_TClassManip(TClass*);
   static void *new_THnTlEdoublegR(void *p = nullptr);
   static void *newArray_THnTlEdoublegR(Long_t size, void *p);
   static void delete_THnTlEdoublegR(void *p);
   static void deleteArray_THnTlEdoublegR(void *p);
   static void destruct_THnTlEdoublegR(void *p);
   static Long64_t merge_THnTlEdoublegR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<double>*)
   {
      ::THnT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<double>", ::THnT<double>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<double>) );
      instance.SetNew(&new_THnTlEdoublegR);
      instance.SetNewArray(&newArray_THnTlEdoublegR);
      instance.SetDelete(&delete_THnTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_THnTlEdoublegR);
      instance.SetDestructor(&destruct_THnTlEdoublegR);
      instance.SetMerge(&merge_THnTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<double>","THnT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<double>*>(nullptr))->GetClass();
      THnTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEchargR_Dictionary();
   static void THnTlEchargR_TClassManip(TClass*);
   static void *new_THnTlEchargR(void *p = nullptr);
   static void *newArray_THnTlEchargR(Long_t size, void *p);
   static void delete_THnTlEchargR(void *p);
   static void deleteArray_THnTlEchargR(void *p);
   static void destruct_THnTlEchargR(void *p);
   static Long64_t merge_THnTlEchargR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<char>*)
   {
      ::THnT<char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<char> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<char>", ::THnT<char>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEchargR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<char>) );
      instance.SetNew(&new_THnTlEchargR);
      instance.SetNewArray(&newArray_THnTlEchargR);
      instance.SetDelete(&delete_THnTlEchargR);
      instance.SetDeleteArray(&deleteArray_THnTlEchargR);
      instance.SetDestructor(&destruct_THnTlEchargR);
      instance.SetMerge(&merge_THnTlEchargR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<char>","THnT<Char_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<char>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<char>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<char>*>(nullptr))->GetClass();
      THnTlEchargR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEshortgR_Dictionary();
   static void THnTlEshortgR_TClassManip(TClass*);
   static void *new_THnTlEshortgR(void *p = nullptr);
   static void *newArray_THnTlEshortgR(Long_t size, void *p);
   static void delete_THnTlEshortgR(void *p);
   static void deleteArray_THnTlEshortgR(void *p);
   static void destruct_THnTlEshortgR(void *p);
   static Long64_t merge_THnTlEshortgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<short>*)
   {
      ::THnT<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<short> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<short>", ::THnT<short>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<short>) );
      instance.SetNew(&new_THnTlEshortgR);
      instance.SetNewArray(&newArray_THnTlEshortgR);
      instance.SetDelete(&delete_THnTlEshortgR);
      instance.SetDeleteArray(&deleteArray_THnTlEshortgR);
      instance.SetDestructor(&destruct_THnTlEshortgR);
      instance.SetMerge(&merge_THnTlEshortgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<short>","THnT<Short_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<short>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<short>*>(nullptr))->GetClass();
      THnTlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEintgR_Dictionary();
   static void THnTlEintgR_TClassManip(TClass*);
   static void *new_THnTlEintgR(void *p = nullptr);
   static void *newArray_THnTlEintgR(Long_t size, void *p);
   static void delete_THnTlEintgR(void *p);
   static void deleteArray_THnTlEintgR(void *p);
   static void destruct_THnTlEintgR(void *p);
   static Long64_t merge_THnTlEintgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<int>*)
   {
      ::THnT<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<int>", ::THnT<int>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<int>) );
      instance.SetNew(&new_THnTlEintgR);
      instance.SetNewArray(&newArray_THnTlEintgR);
      instance.SetDelete(&delete_THnTlEintgR);
      instance.SetDeleteArray(&deleteArray_THnTlEintgR);
      instance.SetDestructor(&destruct_THnTlEintgR);
      instance.SetMerge(&merge_THnTlEintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<int>","THnT<Int_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<int>*>(nullptr))->GetClass();
      THnTlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlELong64_tgR_Dictionary();
   static void THnTlELong64_tgR_TClassManip(TClass*);
   static void *new_THnTlELong64_tgR(void *p = nullptr);
   static void *newArray_THnTlELong64_tgR(Long_t size, void *p);
   static void delete_THnTlELong64_tgR(void *p);
   static void deleteArray_THnTlELong64_tgR(void *p);
   static void destruct_THnTlELong64_tgR(void *p);
   static Long64_t merge_THnTlELong64_tgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<Long64_t>*)
   {
      ::THnT<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<Long64_t> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<Long64_t>", ::THnT<Long64_t>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<Long64_t>) );
      instance.SetNew(&new_THnTlELong64_tgR);
      instance.SetNewArray(&newArray_THnTlELong64_tgR);
      instance.SetDelete(&delete_THnTlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_THnTlELong64_tgR);
      instance.SetDestructor(&destruct_THnTlELong64_tgR);
      instance.SetMerge(&merge_THnTlELong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<Long64_t>","THnT<long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<Long64_t>*>(nullptr))->GetClass();
      THnTlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEunsignedsPshortgR_Dictionary();
   static void THnTlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_THnTlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_THnTlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_THnTlEunsignedsPshortgR(void *p);
   static void deleteArray_THnTlEunsignedsPshortgR(void *p);
   static void destruct_THnTlEunsignedsPshortgR(void *p);
   static Long64_t merge_THnTlEunsignedsPshortgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<unsigned short>*)
   {
      ::THnT<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<unsigned short> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<unsigned short>", ::THnT<unsigned short>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEunsignedsPshortgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<unsigned short>) );
      instance.SetNew(&new_THnTlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_THnTlEunsignedsPshortgR);
      instance.SetDelete(&delete_THnTlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_THnTlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_THnTlEunsignedsPshortgR);
      instance.SetMerge(&merge_THnTlEunsignedsPshortgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<unsigned short>","THnT<UShort_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<unsigned short>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<unsigned short>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<unsigned short>*>(nullptr))->GetClass();
      THnTlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEunsignedsPintgR_Dictionary();
   static void THnTlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_THnTlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_THnTlEunsignedsPintgR(Long_t size, void *p);
   static void delete_THnTlEunsignedsPintgR(void *p);
   static void deleteArray_THnTlEunsignedsPintgR(void *p);
   static void destruct_THnTlEunsignedsPintgR(void *p);
   static Long64_t merge_THnTlEunsignedsPintgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<unsigned int>*)
   {
      ::THnT<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<unsigned int> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<unsigned int>", ::THnT<unsigned int>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<unsigned int>) );
      instance.SetNew(&new_THnTlEunsignedsPintgR);
      instance.SetNewArray(&newArray_THnTlEunsignedsPintgR);
      instance.SetDelete(&delete_THnTlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_THnTlEunsignedsPintgR);
      instance.SetDestructor(&destruct_THnTlEunsignedsPintgR);
      instance.SetMerge(&merge_THnTlEunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<unsigned int>","THnT<UInt_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<unsigned int>*>(nullptr))->GetClass();
      THnTlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEunsignedsPlonggR_Dictionary();
   static void THnTlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_THnTlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_THnTlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_THnTlEunsignedsPlonggR(void *p);
   static void deleteArray_THnTlEunsignedsPlonggR(void *p);
   static void destruct_THnTlEunsignedsPlonggR(void *p);
   static Long64_t merge_THnTlEunsignedsPlonggR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<unsigned long>*)
   {
      ::THnT<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<unsigned long> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<unsigned long>", ::THnT<unsigned long>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<unsigned long>) );
      instance.SetNew(&new_THnTlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_THnTlEunsignedsPlonggR);
      instance.SetDelete(&delete_THnTlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_THnTlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_THnTlEunsignedsPlonggR);
      instance.SetMerge(&merge_THnTlEunsignedsPlonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<unsigned long>","THnT<ULong_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<unsigned long>*>(nullptr))->GetClass();
      THnTlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlEULong64_tgR_Dictionary();
   static void THnTlEULong64_tgR_TClassManip(TClass*);
   static void *new_THnTlEULong64_tgR(void *p = nullptr);
   static void *newArray_THnTlEULong64_tgR(Long_t size, void *p);
   static void delete_THnTlEULong64_tgR(void *p);
   static void deleteArray_THnTlEULong64_tgR(void *p);
   static void destruct_THnTlEULong64_tgR(void *p);
   static Long64_t merge_THnTlEULong64_tgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<ULong64_t>*)
   {
      ::THnT<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<ULong64_t> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<ULong64_t>", ::THnT<ULong64_t>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<ULong64_t>) );
      instance.SetNew(&new_THnTlEULong64_tgR);
      instance.SetNewArray(&newArray_THnTlEULong64_tgR);
      instance.SetDelete(&delete_THnTlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_THnTlEULong64_tgR);
      instance.SetDestructor(&destruct_THnTlEULong64_tgR);
      instance.SetMerge(&merge_THnTlEULong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<ULong64_t>","THnT<unsigned long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<ULong64_t>*>(nullptr))->GetClass();
      THnTlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnTlElonggR_Dictionary();
   static void THnTlElonggR_TClassManip(TClass*);
   static void *new_THnTlElonggR(void *p = nullptr);
   static void *newArray_THnTlElonggR(Long_t size, void *p);
   static void delete_THnTlElonggR(void *p);
   static void deleteArray_THnTlElonggR(void *p);
   static void destruct_THnTlElonggR(void *p);
   static Long64_t merge_THnTlElonggR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnT<long>*)
   {
      ::THnT<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnT<long> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnT<long>", ::THnT<long>::Class_Version(), "THn.h", 191,
                  typeid(::THnT<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnTlElonggR_Dictionary, isa_proxy, 4,
                  sizeof(::THnT<long>) );
      instance.SetNew(&new_THnTlElonggR);
      instance.SetNewArray(&newArray_THnTlElonggR);
      instance.SetDelete(&delete_THnTlElonggR);
      instance.SetDeleteArray(&deleteArray_THnTlElonggR);
      instance.SetDestructor(&destruct_THnTlElonggR);
      instance.SetMerge(&merge_THnTlElonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("THnT<long>","THnT<Long_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnT<long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnT<long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnT<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnTlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnT<long>*>(nullptr))->GetClass();
      THnTlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void THnTlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THnSparseArrayChunk(void *p = nullptr);
   static void *newArray_THnSparseArrayChunk(Long_t size, void *p);
   static void delete_THnSparseArrayChunk(void *p);
   static void deleteArray_THnSparseArrayChunk(void *p);
   static void destruct_THnSparseArrayChunk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseArrayChunk*)
   {
      ::THnSparseArrayChunk *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseArrayChunk >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseArrayChunk", ::THnSparseArrayChunk::Class_Version(), "THnSparse_Internal.h", 30,
                  typeid(::THnSparseArrayChunk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THnSparseArrayChunk::Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseArrayChunk) );
      instance.SetNew(&new_THnSparseArrayChunk);
      instance.SetNewArray(&newArray_THnSparseArrayChunk);
      instance.SetDelete(&delete_THnSparseArrayChunk);
      instance.SetDeleteArray(&deleteArray_THnSparseArrayChunk);
      instance.SetDestructor(&destruct_THnSparseArrayChunk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseArrayChunk*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseArrayChunk*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseArrayChunk*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THnSparse(void *p);
   static void deleteArray_THnSparse(void *p);
   static void destruct_THnSparse(void *p);
   static Long64_t merge_THnSparse(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparse*)
   {
      ::THnSparse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparse", ::THnSparse::Class_Version(), "THnSparse.h", 37,
                  typeid(::THnSparse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THnSparse::Dictionary, isa_proxy, 4,
                  sizeof(::THnSparse) );
      instance.SetDelete(&delete_THnSparse);
      instance.SetDeleteArray(&deleteArray_THnSparse);
      instance.SetDestructor(&destruct_THnSparse);
      instance.SetMerge(&merge_THnSparse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparse*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArrayDgR_Dictionary();
   static void THnSparseTlETArrayDgR_TClassManip(TClass*);
   static void *new_THnSparseTlETArrayDgR(void *p = nullptr);
   static void *newArray_THnSparseTlETArrayDgR(Long_t size, void *p);
   static void delete_THnSparseTlETArrayDgR(void *p);
   static void deleteArray_THnSparseTlETArrayDgR(void *p);
   static void destruct_THnSparseTlETArrayDgR(void *p);
   static Long64_t merge_THnSparseTlETArrayDgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayD>*)
   {
      ::THnSparseT<TArrayD> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayD> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayD>", ::THnSparseT<TArrayD>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayD>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArrayDgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayD>) );
      instance.SetNew(&new_THnSparseTlETArrayDgR);
      instance.SetNewArray(&newArray_THnSparseTlETArrayDgR);
      instance.SetDelete(&delete_THnSparseTlETArrayDgR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArrayDgR);
      instance.SetDestructor(&destruct_THnSparseTlETArrayDgR);
      instance.SetMerge(&merge_THnSparseTlETArrayDgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayD>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayD>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayD>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArrayDgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayD>*>(nullptr))->GetClass();
      THnSparseTlETArrayDgR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArrayDgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArrayFgR_Dictionary();
   static void THnSparseTlETArrayFgR_TClassManip(TClass*);
   static void *new_THnSparseTlETArrayFgR(void *p = nullptr);
   static void *newArray_THnSparseTlETArrayFgR(Long_t size, void *p);
   static void delete_THnSparseTlETArrayFgR(void *p);
   static void deleteArray_THnSparseTlETArrayFgR(void *p);
   static void destruct_THnSparseTlETArrayFgR(void *p);
   static Long64_t merge_THnSparseTlETArrayFgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayF>*)
   {
      ::THnSparseT<TArrayF> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayF> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayF>", ::THnSparseT<TArrayF>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayF>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArrayFgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayF>) );
      instance.SetNew(&new_THnSparseTlETArrayFgR);
      instance.SetNewArray(&newArray_THnSparseTlETArrayFgR);
      instance.SetDelete(&delete_THnSparseTlETArrayFgR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArrayFgR);
      instance.SetDestructor(&destruct_THnSparseTlETArrayFgR);
      instance.SetMerge(&merge_THnSparseTlETArrayFgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayF>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayF>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayF>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArrayFgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayF>*>(nullptr))->GetClass();
      THnSparseTlETArrayFgR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArrayFgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArrayL64gR_Dictionary();
   static void THnSparseTlETArrayL64gR_TClassManip(TClass*);
   static void *new_THnSparseTlETArrayL64gR(void *p = nullptr);
   static void *newArray_THnSparseTlETArrayL64gR(Long_t size, void *p);
   static void delete_THnSparseTlETArrayL64gR(void *p);
   static void deleteArray_THnSparseTlETArrayL64gR(void *p);
   static void destruct_THnSparseTlETArrayL64gR(void *p);
   static Long64_t merge_THnSparseTlETArrayL64gR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayL64>*)
   {
      ::THnSparseT<TArrayL64> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayL64> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayL64>", ::THnSparseT<TArrayL64>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayL64>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArrayL64gR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayL64>) );
      instance.SetNew(&new_THnSparseTlETArrayL64gR);
      instance.SetNewArray(&newArray_THnSparseTlETArrayL64gR);
      instance.SetDelete(&delete_THnSparseTlETArrayL64gR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArrayL64gR);
      instance.SetDestructor(&destruct_THnSparseTlETArrayL64gR);
      instance.SetMerge(&merge_THnSparseTlETArrayL64gR);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "THnSparseT<TArrayL>";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayL64>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayL64>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayL64>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArrayL64gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayL64>*>(nullptr))->GetClass();
      THnSparseTlETArrayL64gR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArrayL64gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArrayIgR_Dictionary();
   static void THnSparseTlETArrayIgR_TClassManip(TClass*);
   static void *new_THnSparseTlETArrayIgR(void *p = nullptr);
   static void *newArray_THnSparseTlETArrayIgR(Long_t size, void *p);
   static void delete_THnSparseTlETArrayIgR(void *p);
   static void deleteArray_THnSparseTlETArrayIgR(void *p);
   static void destruct_THnSparseTlETArrayIgR(void *p);
   static Long64_t merge_THnSparseTlETArrayIgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayI>*)
   {
      ::THnSparseT<TArrayI> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayI> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayI>", ::THnSparseT<TArrayI>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayI>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArrayIgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayI>) );
      instance.SetNew(&new_THnSparseTlETArrayIgR);
      instance.SetNewArray(&newArray_THnSparseTlETArrayIgR);
      instance.SetDelete(&delete_THnSparseTlETArrayIgR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArrayIgR);
      instance.SetDestructor(&destruct_THnSparseTlETArrayIgR);
      instance.SetMerge(&merge_THnSparseTlETArrayIgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayI>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayI>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayI>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArrayIgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayI>*>(nullptr))->GetClass();
      THnSparseTlETArrayIgR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArrayIgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArraySgR_Dictionary();
   static void THnSparseTlETArraySgR_TClassManip(TClass*);
   static void *new_THnSparseTlETArraySgR(void *p = nullptr);
   static void *newArray_THnSparseTlETArraySgR(Long_t size, void *p);
   static void delete_THnSparseTlETArraySgR(void *p);
   static void deleteArray_THnSparseTlETArraySgR(void *p);
   static void destruct_THnSparseTlETArraySgR(void *p);
   static Long64_t merge_THnSparseTlETArraySgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayS>*)
   {
      ::THnSparseT<TArrayS> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayS> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayS>", ::THnSparseT<TArrayS>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayS>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArraySgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayS>) );
      instance.SetNew(&new_THnSparseTlETArraySgR);
      instance.SetNewArray(&newArray_THnSparseTlETArraySgR);
      instance.SetDelete(&delete_THnSparseTlETArraySgR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArraySgR);
      instance.SetDestructor(&destruct_THnSparseTlETArraySgR);
      instance.SetMerge(&merge_THnSparseTlETArraySgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayS>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayS>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayS>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArraySgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayS>*>(nullptr))->GetClass();
      THnSparseTlETArraySgR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArraySgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArrayCgR_Dictionary();
   static void THnSparseTlETArrayCgR_TClassManip(TClass*);
   static void *new_THnSparseTlETArrayCgR(void *p = nullptr);
   static void *newArray_THnSparseTlETArrayCgR(Long_t size, void *p);
   static void delete_THnSparseTlETArrayCgR(void *p);
   static void deleteArray_THnSparseTlETArrayCgR(void *p);
   static void destruct_THnSparseTlETArrayCgR(void *p);
   static Long64_t merge_THnSparseTlETArrayCgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayC>*)
   {
      ::THnSparseT<TArrayC> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayC> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayC>", ::THnSparseT<TArrayC>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayC>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArrayCgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayC>) );
      instance.SetNew(&new_THnSparseTlETArrayCgR);
      instance.SetNewArray(&newArray_THnSparseTlETArrayCgR);
      instance.SetDelete(&delete_THnSparseTlETArrayCgR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArrayCgR);
      instance.SetDestructor(&destruct_THnSparseTlETArrayCgR);
      instance.SetMerge(&merge_THnSparseTlETArrayCgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayC>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayC>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayC>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArrayCgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayC>*>(nullptr))->GetClass();
      THnSparseTlETArrayCgR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArrayCgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *THnSparseTlETArrayLgR_Dictionary();
   static void THnSparseTlETArrayLgR_TClassManip(TClass*);
   static void *new_THnSparseTlETArrayLgR(void *p = nullptr);
   static void *newArray_THnSparseTlETArrayLgR(Long_t size, void *p);
   static void delete_THnSparseTlETArrayLgR(void *p);
   static void deleteArray_THnSparseTlETArrayLgR(void *p);
   static void destruct_THnSparseTlETArrayLgR(void *p);
   static Long64_t merge_THnSparseTlETArrayLgR(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THnSparseT<TArrayL>*)
   {
      ::THnSparseT<TArrayL> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THnSparseT<TArrayL> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THnSparseT<TArrayL>", ::THnSparseT<TArrayL>::Class_Version(), "THnSparse.h", 184,
                  typeid(::THnSparseT<TArrayL>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THnSparseTlETArrayLgR_Dictionary, isa_proxy, 4,
                  sizeof(::THnSparseT<TArrayL>) );
      instance.SetNew(&new_THnSparseTlETArrayLgR);
      instance.SetNewArray(&newArray_THnSparseTlETArrayLgR);
      instance.SetDelete(&delete_THnSparseTlETArrayLgR);
      instance.SetDeleteArray(&deleteArray_THnSparseTlETArrayLgR);
      instance.SetDestructor(&destruct_THnSparseTlETArrayLgR);
      instance.SetMerge(&merge_THnSparseTlETArrayLgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THnSparseT<TArrayL>*)
   {
      return GenerateInitInstanceLocal(static_cast<::THnSparseT<TArrayL>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayL>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THnSparseTlETArrayLgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::THnSparseT<TArrayL>*>(nullptr))->GetClass();
      THnSparseTlETArrayLgR_TClassManip(theClass);
   return theClass;
   }

   static void THnSparseTlETArrayLgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THStack(void *p = nullptr);
   static void *newArray_THStack(Long_t size, void *p);
   static void delete_THStack(void *p);
   static void deleteArray_THStack(void *p);
   static void destruct_THStack(void *p);
   static Long64_t merge_THStack(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THStack*)
   {
      ::THStack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THStack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THStack", ::THStack::Class_Version(), "THStack.h", 40,
                  typeid(::THStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THStack::Dictionary, isa_proxy, 4,
                  sizeof(::THStack) );
      instance.SetNew(&new_THStack);
      instance.SetNewArray(&newArray_THStack);
      instance.SetDelete(&delete_THStack);
      instance.SetDeleteArray(&deleteArray_THStack);
      instance.SetDestructor(&destruct_THStack);
      instance.SetMerge(&merge_THStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THStack*)
   {
      return GenerateInitInstanceLocal(static_cast<::THStack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THStack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TKDE(void *p = nullptr);
   static void *newArray_TKDE(Long_t size, void *p);
   static void delete_TKDE(void *p);
   static void deleteArray_TKDE(void *p);
   static void destruct_TKDE(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKDE*)
   {
      ::TKDE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKDE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TKDE", ::TKDE::Class_Version(), "TKDE.h", 37,
                  typeid(::TKDE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKDE::Dictionary, isa_proxy, 4,
                  sizeof(::TKDE) );
      instance.SetNew(&new_TKDE);
      instance.SetNewArray(&newArray_TKDE);
      instance.SetDelete(&delete_TKDE);
      instance.SetDeleteArray(&deleteArray_TKDE);
      instance.SetDestructor(&destruct_TKDE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKDE*)
   {
      return GenerateInitInstanceLocal(static_cast<::TKDE*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TKDE*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLimitDataSource(void *p = nullptr);
   static void *newArray_TLimitDataSource(Long_t size, void *p);
   static void delete_TLimitDataSource(void *p);
   static void deleteArray_TLimitDataSource(void *p);
   static void destruct_TLimitDataSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLimitDataSource*)
   {
      ::TLimitDataSource *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLimitDataSource >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLimitDataSource", ::TLimitDataSource::Class_Version(), "TLimitDataSource.h", 24,
                  typeid(::TLimitDataSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLimitDataSource::Dictionary, isa_proxy, 4,
                  sizeof(::TLimitDataSource) );
      instance.SetNew(&new_TLimitDataSource);
      instance.SetNewArray(&newArray_TLimitDataSource);
      instance.SetDelete(&delete_TLimitDataSource);
      instance.SetDeleteArray(&deleteArray_TLimitDataSource);
      instance.SetDestructor(&destruct_TLimitDataSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLimitDataSource*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLimitDataSource*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLimitDataSource*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLimit(void *p = nullptr);
   static void *newArray_TLimit(Long_t size, void *p);
   static void delete_TLimit(void *p);
   static void deleteArray_TLimit(void *p);
   static void destruct_TLimit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLimit*)
   {
      ::TLimit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLimit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLimit", ::TLimit::Class_Version(), "TLimit.h", 19,
                  typeid(::TLimit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLimit::Dictionary, isa_proxy, 4,
                  sizeof(::TLimit) );
      instance.SetNew(&new_TLimit);
      instance.SetNewArray(&newArray_TLimit);
      instance.SetDelete(&delete_TLimit);
      instance.SetDeleteArray(&deleteArray_TLimit);
      instance.SetDestructor(&destruct_TLimit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLimit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLimit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLimit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMultiDimFit(void *p = nullptr);
   static void *newArray_TMultiDimFit(Long_t size, void *p);
   static void delete_TMultiDimFit(void *p);
   static void deleteArray_TMultiDimFit(void *p);
   static void destruct_TMultiDimFit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMultiDimFit*)
   {
      ::TMultiDimFit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMultiDimFit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMultiDimFit", ::TMultiDimFit::Class_Version(), "TMultiDimFit.h", 15,
                  typeid(::TMultiDimFit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMultiDimFit::Dictionary, isa_proxy, 4,
                  sizeof(::TMultiDimFit) );
      instance.SetNew(&new_TMultiDimFit);
      instance.SetNewArray(&newArray_TMultiDimFit);
      instance.SetDelete(&delete_TMultiDimFit);
      instance.SetDeleteArray(&deleteArray_TMultiDimFit);
      instance.SetDestructor(&destruct_TMultiDimFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMultiDimFit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMultiDimFit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMultiDimFit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMultiGraph(void *p = nullptr);
   static void *newArray_TMultiGraph(Long_t size, void *p);
   static void delete_TMultiGraph(void *p);
   static void deleteArray_TMultiGraph(void *p);
   static void destruct_TMultiGraph(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMultiGraph*)
   {
      ::TMultiGraph *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMultiGraph >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMultiGraph", ::TMultiGraph::Class_Version(), "TMultiGraph.h", 34,
                  typeid(::TMultiGraph), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMultiGraph::Dictionary, isa_proxy, 4,
                  sizeof(::TMultiGraph) );
      instance.SetNew(&new_TMultiGraph);
      instance.SetNewArray(&newArray_TMultiGraph);
      instance.SetDelete(&delete_TMultiGraph);
      instance.SetDeleteArray(&deleteArray_TMultiGraph);
      instance.SetDestructor(&destruct_TMultiGraph);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMultiGraph*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMultiGraph*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMultiGraph*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPolyMarker(void *p = nullptr);
   static void *newArray_TPolyMarker(Long_t size, void *p);
   static void delete_TPolyMarker(void *p);
   static void deleteArray_TPolyMarker(void *p);
   static void destruct_TPolyMarker(void *p);
   static void streamer_TPolyMarker(TBuffer &buf, void *obj);
   static Long64_t merge_TPolyMarker(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPolyMarker*)
   {
      ::TPolyMarker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPolyMarker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPolyMarker", ::TPolyMarker::Class_Version(), "TPolyMarker.h", 31,
                  typeid(::TPolyMarker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPolyMarker::Dictionary, isa_proxy, 17,
                  sizeof(::TPolyMarker) );
      instance.SetNew(&new_TPolyMarker);
      instance.SetNewArray(&newArray_TPolyMarker);
      instance.SetDelete(&delete_TPolyMarker);
      instance.SetDeleteArray(&deleteArray_TPolyMarker);
      instance.SetDestructor(&destruct_TPolyMarker);
      instance.SetStreamerFunc(&streamer_TPolyMarker);
      instance.SetMerge(&merge_TPolyMarker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPolyMarker*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPolyMarker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPolyMarker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPrincipal(void *p = nullptr);
   static void *newArray_TPrincipal(Long_t size, void *p);
   static void delete_TPrincipal(void *p);
   static void deleteArray_TPrincipal(void *p);
   static void destruct_TPrincipal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPrincipal*)
   {
      ::TPrincipal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPrincipal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPrincipal", ::TPrincipal::Class_Version(), "TPrincipal.h", 21,
                  typeid(::TPrincipal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPrincipal::Dictionary, isa_proxy, 4,
                  sizeof(::TPrincipal) );
      instance.SetNew(&new_TPrincipal);
      instance.SetNewArray(&newArray_TPrincipal);
      instance.SetDelete(&delete_TPrincipal);
      instance.SetDeleteArray(&deleteArray_TPrincipal);
      instance.SetDestructor(&destruct_TPrincipal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPrincipal*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPrincipal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPrincipal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProfile(void *p = nullptr);
   static void *newArray_TProfile(Long_t size, void *p);
   static void delete_TProfile(void *p);
   static void deleteArray_TProfile(void *p);
   static void destruct_TProfile(void *p);
   static void directoryAutoAdd_TProfile(void *obj, TDirectory *dir);
   static void streamer_TProfile(TBuffer &buf, void *obj);
   static Long64_t merge_TProfile(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Schema evolution read functions
   static void read_TProfile_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("TProfile");
      static Long_t offset_fBinSumw2 = cls->GetDataMemberOffset("fBinSumw2");
      TArrayD& fBinSumw2 = *(TArrayD*)(target+offset_fBinSumw2);
      TProfile* newObj = (TProfile*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fBinSumw2.Reset(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProfile*)
   {
      ::TProfile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProfile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TProfile", ::TProfile::Class_Version(), "TProfile.h", 32,
                  typeid(::TProfile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProfile::Dictionary, isa_proxy, 17,
                  sizeof(::TProfile) );
      instance.SetNew(&new_TProfile);
      instance.SetNewArray(&newArray_TProfile);
      instance.SetDelete(&delete_TProfile);
      instance.SetDeleteArray(&deleteArray_TProfile);
      instance.SetDestructor(&destruct_TProfile);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TProfile);
      instance.SetStreamerFunc(&streamer_TProfile);
      instance.SetMerge(&merge_TProfile);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TProfile";
      rule->fTarget      = "fBinSumw2";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TProfile_0);
      rule->fCode        = " fBinSumw2.Reset(); ";
      rule->fVersion     = "[1-5]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProfile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TProfile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TProfile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProfile2D(void *p = nullptr);
   static void *newArray_TProfile2D(Long_t size, void *p);
   static void delete_TProfile2D(void *p);
   static void deleteArray_TProfile2D(void *p);
   static void destruct_TProfile2D(void *p);
   static void directoryAutoAdd_TProfile2D(void *obj, TDirectory *dir);
   static void streamer_TProfile2D(TBuffer &buf, void *obj);
   static Long64_t merge_TProfile2D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Schema evolution read functions
   static void read_TProfile2D_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("TProfile2D");
      static Long_t offset_fBinSumw2 = cls->GetDataMemberOffset("fBinSumw2");
      TArrayD& fBinSumw2 = *(TArrayD*)(target+offset_fBinSumw2);
      TProfile2D* newObj = (TProfile2D*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fBinSumw2.Reset(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProfile2D*)
   {
      ::TProfile2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProfile2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TProfile2D", ::TProfile2D::Class_Version(), "TProfile2D.h", 27,
                  typeid(::TProfile2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProfile2D::Dictionary, isa_proxy, 17,
                  sizeof(::TProfile2D) );
      instance.SetNew(&new_TProfile2D);
      instance.SetNewArray(&newArray_TProfile2D);
      instance.SetDelete(&delete_TProfile2D);
      instance.SetDeleteArray(&deleteArray_TProfile2D);
      instance.SetDestructor(&destruct_TProfile2D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TProfile2D);
      instance.SetStreamerFunc(&streamer_TProfile2D);
      instance.SetMerge(&merge_TProfile2D);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TProfile2D";
      rule->fTarget      = "fBinSumw2";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TProfile2D_0);
      rule->fCode        = " fBinSumw2.Reset(); ";
      rule->fVersion     = "[1-6]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProfile2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TProfile2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TProfile2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProfile2PolyBin(void *p = nullptr);
   static void *newArray_TProfile2PolyBin(Long_t size, void *p);
   static void delete_TProfile2PolyBin(void *p);
   static void deleteArray_TProfile2PolyBin(void *p);
   static void destruct_TProfile2PolyBin(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProfile2PolyBin*)
   {
      ::TProfile2PolyBin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProfile2PolyBin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TProfile2PolyBin", ::TProfile2PolyBin::Class_Version(), "TProfile2Poly.h", 19,
                  typeid(::TProfile2PolyBin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProfile2PolyBin::Dictionary, isa_proxy, 4,
                  sizeof(::TProfile2PolyBin) );
      instance.SetNew(&new_TProfile2PolyBin);
      instance.SetNewArray(&newArray_TProfile2PolyBin);
      instance.SetDelete(&delete_TProfile2PolyBin);
      instance.SetDeleteArray(&deleteArray_TProfile2PolyBin);
      instance.SetDestructor(&destruct_TProfile2PolyBin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProfile2PolyBin*)
   {
      return GenerateInitInstanceLocal(static_cast<::TProfile2PolyBin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TProfile2PolyBin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProfile2Poly(void *p = nullptr);
   static void *newArray_TProfile2Poly(Long_t size, void *p);
   static void delete_TProfile2Poly(void *p);
   static void deleteArray_TProfile2Poly(void *p);
   static void destruct_TProfile2Poly(void *p);
   static void directoryAutoAdd_TProfile2Poly(void *obj, TDirectory *dir);
   static Long64_t merge_TProfile2Poly(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProfile2Poly*)
   {
      ::TProfile2Poly *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProfile2Poly >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TProfile2Poly", ::TProfile2Poly::Class_Version(), "TProfile2Poly.h", 58,
                  typeid(::TProfile2Poly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProfile2Poly::Dictionary, isa_proxy, 4,
                  sizeof(::TProfile2Poly) );
      instance.SetNew(&new_TProfile2Poly);
      instance.SetNewArray(&newArray_TProfile2Poly);
      instance.SetDelete(&delete_TProfile2Poly);
      instance.SetDeleteArray(&deleteArray_TProfile2Poly);
      instance.SetDestructor(&destruct_TProfile2Poly);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TProfile2Poly);
      instance.SetMerge(&merge_TProfile2Poly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProfile2Poly*)
   {
      return GenerateInitInstanceLocal(static_cast<::TProfile2Poly*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TProfile2Poly*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TProfile3D(void *p = nullptr);
   static void *newArray_TProfile3D(Long_t size, void *p);
   static void delete_TProfile3D(void *p);
   static void deleteArray_TProfile3D(void *p);
   static void destruct_TProfile3D(void *p);
   static void directoryAutoAdd_TProfile3D(void *obj, TDirectory *dir);
   static Long64_t merge_TProfile3D(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Schema evolution read functions
   static void read_TProfile3D_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("TProfile3D");
      static Long_t offset_fBinSumw2 = cls->GetDataMemberOffset("fBinSumw2");
      TArrayD& fBinSumw2 = *(TArrayD*)(target+offset_fBinSumw2);
      TProfile3D* newObj = (TProfile3D*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fBinSumw2.Reset(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TProfile3D*)
   {
      ::TProfile3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TProfile3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TProfile3D", ::TProfile3D::Class_Version(), "TProfile3D.h", 27,
                  typeid(::TProfile3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TProfile3D::Dictionary, isa_proxy, 4,
                  sizeof(::TProfile3D) );
      instance.SetNew(&new_TProfile3D);
      instance.SetNewArray(&newArray_TProfile3D);
      instance.SetDelete(&delete_TProfile3D);
      instance.SetDeleteArray(&deleteArray_TProfile3D);
      instance.SetDestructor(&destruct_TProfile3D);
      instance.SetDirectoryAutoAdd(&directoryAutoAdd_TProfile3D);
      instance.SetMerge(&merge_TProfile3D);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TProfile3D";
      rule->fTarget      = "fBinSumw2";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TProfile3D_0);
      rule->fCode        = " fBinSumw2.Reset(); ";
      rule->fVersion     = "[1-6]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TProfile3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TProfile3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TProfile3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSpline(void *p);
   static void deleteArray_TSpline(void *p);
   static void destruct_TSpline(void *p);
   static void streamer_TSpline(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpline*)
   {
      ::TSpline *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpline >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSpline", ::TSpline::Class_Version(), "TSpline.h", 29,
                  typeid(::TSpline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpline::Dictionary, isa_proxy, 17,
                  sizeof(::TSpline) );
      instance.SetDelete(&delete_TSpline);
      instance.SetDeleteArray(&deleteArray_TSpline);
      instance.SetDestructor(&destruct_TSpline);
      instance.SetStreamerFunc(&streamer_TSpline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpline*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSpline*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSpline*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSplinePoly(void *p = nullptr);
   static void *newArray_TSplinePoly(Long_t size, void *p);
   static void delete_TSplinePoly(void *p);
   static void deleteArray_TSplinePoly(void *p);
   static void destruct_TSplinePoly(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSplinePoly*)
   {
      ::TSplinePoly *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSplinePoly >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSplinePoly", ::TSplinePoly::Class_Version(), "TSpline.h", 74,
                  typeid(::TSplinePoly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSplinePoly::Dictionary, isa_proxy, 4,
                  sizeof(::TSplinePoly) );
      instance.SetNew(&new_TSplinePoly);
      instance.SetNewArray(&newArray_TSplinePoly);
      instance.SetDelete(&delete_TSplinePoly);
      instance.SetDeleteArray(&deleteArray_TSplinePoly);
      instance.SetDestructor(&destruct_TSplinePoly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSplinePoly*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSplinePoly*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSplinePoly*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSplinePoly3(void *p = nullptr);
   static void *newArray_TSplinePoly3(Long_t size, void *p);
   static void delete_TSplinePoly3(void *p);
   static void deleteArray_TSplinePoly3(void *p);
   static void destruct_TSplinePoly3(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSplinePoly3*)
   {
      ::TSplinePoly3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSplinePoly3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSplinePoly3", ::TSplinePoly3::Class_Version(), "TSpline.h", 104,
                  typeid(::TSplinePoly3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSplinePoly3::Dictionary, isa_proxy, 4,
                  sizeof(::TSplinePoly3) );
      instance.SetNew(&new_TSplinePoly3);
      instance.SetNewArray(&newArray_TSplinePoly3);
      instance.SetDelete(&delete_TSplinePoly3);
      instance.SetDeleteArray(&deleteArray_TSplinePoly3);
      instance.SetDestructor(&destruct_TSplinePoly3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSplinePoly3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSplinePoly3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSplinePoly3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSplinePoly5(void *p = nullptr);
   static void *newArray_TSplinePoly5(Long_t size, void *p);
   static void delete_TSplinePoly5(void *p);
   static void deleteArray_TSplinePoly5(void *p);
   static void destruct_TSplinePoly5(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSplinePoly5*)
   {
      ::TSplinePoly5 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSplinePoly5 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSplinePoly5", ::TSplinePoly5::Class_Version(), "TSpline.h", 139,
                  typeid(::TSplinePoly5), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSplinePoly5::Dictionary, isa_proxy, 4,
                  sizeof(::TSplinePoly5) );
      instance.SetNew(&new_TSplinePoly5);
      instance.SetNewArray(&newArray_TSplinePoly5);
      instance.SetDelete(&delete_TSplinePoly5);
      instance.SetDeleteArray(&deleteArray_TSplinePoly5);
      instance.SetDestructor(&destruct_TSplinePoly5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSplinePoly5*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSplinePoly5*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSplinePoly5*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpline3(void *p = nullptr);
   static void *newArray_TSpline3(Long_t size, void *p);
   static void delete_TSpline3(void *p);
   static void deleteArray_TSpline3(void *p);
   static void destruct_TSpline3(void *p);
   static void streamer_TSpline3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpline3*)
   {
      ::TSpline3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpline3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSpline3", ::TSpline3::Class_Version(), "TSpline.h", 181,
                  typeid(::TSpline3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpline3::Dictionary, isa_proxy, 17,
                  sizeof(::TSpline3) );
      instance.SetNew(&new_TSpline3);
      instance.SetNewArray(&newArray_TSpline3);
      instance.SetDelete(&delete_TSpline3);
      instance.SetDeleteArray(&deleteArray_TSpline3);
      instance.SetDestructor(&destruct_TSpline3);
      instance.SetStreamerFunc(&streamer_TSpline3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpline3*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSpline3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSpline3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpline5(void *p = nullptr);
   static void *newArray_TSpline5(Long_t size, void *p);
   static void delete_TSpline5(void *p);
   static void deleteArray_TSpline5(void *p);
   static void destruct_TSpline5(void *p);
   static void streamer_TSpline5(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpline5*)
   {
      ::TSpline5 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpline5 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSpline5", ::TSpline5::Class_Version(), "TSpline.h", 237,
                  typeid(::TSpline5), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpline5::Dictionary, isa_proxy, 17,
                  sizeof(::TSpline5) );
      instance.SetNew(&new_TSpline5);
      instance.SetNewArray(&newArray_TSpline5);
      instance.SetDelete(&delete_TSpline5);
      instance.SetDeleteArray(&deleteArray_TSpline5);
      instance.SetDestructor(&destruct_TSpline5);
      instance.SetStreamerFunc(&streamer_TSpline5);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpline5*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSpline5*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSpline5*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSVDUnfold(void *p);
   static void deleteArray_TSVDUnfold(void *p);
   static void destruct_TSVDUnfold(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSVDUnfold*)
   {
      ::TSVDUnfold *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSVDUnfold >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSVDUnfold", ::TSVDUnfold::Class_Version(), "TSVDUnfold.h", 46,
                  typeid(::TSVDUnfold), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSVDUnfold::Dictionary, isa_proxy, 4,
                  sizeof(::TSVDUnfold) );
      instance.SetDelete(&delete_TSVDUnfold);
      instance.SetDeleteArray(&deleteArray_TSVDUnfold);
      instance.SetDestructor(&destruct_TSVDUnfold);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSVDUnfold*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSVDUnfold*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSVDUnfold*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGraphPainter(void *p);
   static void deleteArray_TVirtualGraphPainter(void *p);
   static void destruct_TVirtualGraphPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGraphPainter*)
   {
      ::TVirtualGraphPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGraphPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGraphPainter", ::TVirtualGraphPainter::Class_Version(), "TVirtualGraphPainter.h", 29,
                  typeid(::TVirtualGraphPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGraphPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGraphPainter) );
      instance.SetDelete(&delete_TVirtualGraphPainter);
      instance.SetDeleteArray(&deleteArray_TVirtualGraphPainter);
      instance.SetDestructor(&destruct_TVirtualGraphPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGraphPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualGraphPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualGraphPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualHistPainter(void *p);
   static void deleteArray_TVirtualHistPainter(void *p);
   static void destruct_TVirtualHistPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualHistPainter*)
   {
      ::TVirtualHistPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualHistPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualHistPainter", ::TVirtualHistPainter::Class_Version(), "TVirtualHistPainter.h", 30,
                  typeid(::TVirtualHistPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualHistPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualHistPainter) );
      instance.SetDelete(&delete_TVirtualHistPainter);
      instance.SetDeleteArray(&deleteArray_TVirtualHistPainter);
      instance.SetDestructor(&destruct_TVirtualHistPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualHistPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualHistPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualHistPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualPaveStats(void *p);
   static void deleteArray_TVirtualPaveStats(void *p);
   static void destruct_TVirtualPaveStats(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualPaveStats*)
   {
      ::TVirtualPaveStats *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualPaveStats >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualPaveStats", ::TVirtualPaveStats::Class_Version(), "TVirtualPaveStats.h", 28,
                  typeid(::TVirtualPaveStats), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualPaveStats::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualPaveStats) );
      instance.SetDelete(&delete_TVirtualPaveStats);
      instance.SetDeleteArray(&deleteArray_TVirtualPaveStats);
      instance.SetDestructor(&destruct_TVirtualPaveStats);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualPaveStats*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualPaveStats*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualPaveStats*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR_Dictionary();
   static void ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR(void *p);
   static void deleteArray_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR(void *p);
   static void destruct_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::WrappedMultiTF1Templ<double>*)
   {
      ::ROOT::Math::WrappedMultiTF1Templ<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::WrappedMultiTF1Templ<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::WrappedMultiTF1Templ<double>", "Math/WrappedMultiTF1.h", 48,
                  typeid(::ROOT::Math::WrappedMultiTF1Templ<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::WrappedMultiTF1Templ<double>) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Math::WrappedMultiTF1Templ<double>","ROOT::Math::WrappedMultiTF1"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::WrappedMultiTF1Templ<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Math::WrappedMultiTF1Templ<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::WrappedMultiTF1Templ<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::WrappedMultiTF1Templ<double>*>(nullptr))->GetClass();
      ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLWrappedTF1_Dictionary();
   static void ROOTcLcLMathcLcLWrappedTF1_TClassManip(TClass*);
   static void delete_ROOTcLcLMathcLcLWrappedTF1(void *p);
   static void deleteArray_ROOTcLcLMathcLcLWrappedTF1(void *p);
   static void destruct_ROOTcLcLMathcLcLWrappedTF1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::WrappedTF1*)
   {
      ::ROOT::Math::WrappedTF1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::WrappedTF1));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::WrappedTF1", "Math/WrappedTF1.h", 39,
                  typeid(::ROOT::Math::WrappedTF1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLWrappedTF1_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Math::WrappedTF1) );
      instance.SetDelete(&delete_ROOTcLcLMathcLcLWrappedTF1);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLWrappedTF1);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLWrappedTF1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::WrappedTF1*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Math::WrappedTF1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::WrappedTF1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLWrappedTF1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::WrappedTF1*>(nullptr))->GetClass();
      ROOTcLcLMathcLcLWrappedTF1_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLWrappedTF1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLv5cLcLTFormula(void *p = nullptr);
   static void *newArray_ROOTcLcLv5cLcLTFormula(Long_t size, void *p);
   static void delete_ROOTcLcLv5cLcLTFormula(void *p);
   static void deleteArray_ROOTcLcLv5cLcLTFormula(void *p);
   static void destruct_ROOTcLcLv5cLcLTFormula(void *p);
   static void streamer_ROOTcLcLv5cLcLTFormula(TBuffer &buf, void *obj);
   static void conv_streamer_ROOTcLcLv5cLcLTFormula(TBuffer &buf, void *obj, const TClass*);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::v5::TFormula*)
   {
      ::ROOT::v5::TFormula *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::v5::TFormula >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::v5::TFormula", ::ROOT::v5::TFormula::Class_Version(), "v5/TFormula.h", 65,
                  typeid(::ROOT::v5::TFormula), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::v5::TFormula::Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::v5::TFormula) );
      instance.SetNew(&new_ROOTcLcLv5cLcLTFormula);
      instance.SetNewArray(&newArray_ROOTcLcLv5cLcLTFormula);
      instance.SetDelete(&delete_ROOTcLcLv5cLcLTFormula);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLv5cLcLTFormula);
      instance.SetDestructor(&destruct_ROOTcLcLv5cLcLTFormula);
      instance.SetStreamerFunc(&streamer_ROOTcLcLv5cLcLTFormula);
      instance.SetConvStreamerFunc(&conv_streamer_ROOTcLcLv5cLcLTFormula);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TFormula";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::v5::TFormula*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::v5::TFormula*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::v5::TFormula*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLv5cLcLTF1Data(void *p = nullptr);
   static void *newArray_ROOTcLcLv5cLcLTF1Data(Long_t size, void *p);
   static void delete_ROOTcLcLv5cLcLTF1Data(void *p);
   static void deleteArray_ROOTcLcLv5cLcLTF1Data(void *p);
   static void destruct_ROOTcLcLv5cLcLTF1Data(void *p);
   static void streamer_ROOTcLcLv5cLcLTF1Data(TBuffer &buf, void *obj);

   // Schema evolution read functions

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::v5::TF1Data*)
   {
      ::ROOT::v5::TF1Data *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::v5::TF1Data >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::v5::TF1Data", ::ROOT::v5::TF1Data::Class_Version(), "v5/TF1Data.h", 37,
                  typeid(::ROOT::v5::TF1Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::v5::TF1Data::Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::v5::TF1Data) );
      instance.SetNew(&new_ROOTcLcLv5cLcLTF1Data);
      instance.SetNewArray(&newArray_ROOTcLcLv5cLcLTF1Data);
      instance.SetDelete(&delete_ROOTcLcLv5cLcLTF1Data);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLv5cLcLTF1Data);
      instance.SetDestructor(&destruct_ROOTcLcLv5cLcLTF1Data);
      instance.SetStreamerFunc(&streamer_ROOTcLcLv5cLcLTF1Data);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TF1";
      rule->fTarget      = "";
      rule->fVersion     = "[1-]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::v5::TF1Data*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::v5::TF1Data*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::v5::TF1Data*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLv5cLcLTFormulaPrimitive(void *p = nullptr);
   static void *newArray_ROOTcLcLv5cLcLTFormulaPrimitive(Long_t size, void *p);
   static void delete_ROOTcLcLv5cLcLTFormulaPrimitive(void *p);
   static void deleteArray_ROOTcLcLv5cLcLTFormulaPrimitive(void *p);
   static void destruct_ROOTcLcLv5cLcLTFormulaPrimitive(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::v5::TFormulaPrimitive*)
   {
      ::ROOT::v5::TFormulaPrimitive *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::v5::TFormulaPrimitive >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::v5::TFormulaPrimitive", ::ROOT::v5::TFormulaPrimitive::Class_Version(), "v5/TFormulaPrimitive.h", 37,
                  typeid(::ROOT::v5::TFormulaPrimitive), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::v5::TFormulaPrimitive::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::v5::TFormulaPrimitive) );
      instance.SetNew(&new_ROOTcLcLv5cLcLTFormulaPrimitive);
      instance.SetNewArray(&newArray_ROOTcLcLv5cLcLTFormulaPrimitive);
      instance.SetDelete(&delete_ROOTcLcLv5cLcLTFormulaPrimitive);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLv5cLcLTFormulaPrimitive);
      instance.SetDestructor(&destruct_ROOTcLcLv5cLcLTFormulaPrimitive);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::v5::TFormulaPrimitive*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::v5::TFormulaPrimitive*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::v5::TFormulaPrimitive*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFitResultPtr::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitResultPtr::Class_Name()
{
   return "TFitResultPtr";
}

//______________________________________________________________________________
const char *TFitResultPtr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitResultPtr*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitResultPtr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitResultPtr*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitResultPtr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitResultPtr*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitResultPtr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitResultPtr*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAxis::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAxis::Class_Name()
{
   return "TAxis";
}

//______________________________________________________________________________
const char *TAxis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxis*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAxis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxis*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAxis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxis*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAxis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxis*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAxisModLab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAxisModLab::Class_Name()
{
   return "TAxisModLab";
}

//______________________________________________________________________________
const char *TAxisModLab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxisModLab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAxisModLab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxisModLab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAxisModLab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxisModLab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAxisModLab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxisModLab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualFitter::Class_Name()
{
   return "TVirtualFitter";
}

//______________________________________________________________________________
const char *TVirtualFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBackCompFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBackCompFitter::Class_Name()
{
   return "TBackCompFitter";
}

//______________________________________________________________________________
const char *TBackCompFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBackCompFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBackCompFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBackCompFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBackCompFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBackCompFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBackCompFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBackCompFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBinomialEfficiencyFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBinomialEfficiencyFitter::Class_Name()
{
   return "TBinomialEfficiencyFitter";
}

//______________________________________________________________________________
const char *TBinomialEfficiencyFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBinomialEfficiencyFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBinomialEfficiencyFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBinomialEfficiencyFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBinomialEfficiencyFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBinomialEfficiencyFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBinomialEfficiencyFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBinomialEfficiencyFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TConfidenceLevel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TConfidenceLevel::Class_Name()
{
   return "TConfidenceLevel";
}

//______________________________________________________________________________
const char *TConfidenceLevel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TConfidenceLevel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TConfidenceLevel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TConfidenceLevel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConfidenceLevel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TConfidenceLevel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConfidenceLevel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TConfidenceLevel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEfficiency::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEfficiency::Class_Name()
{
   return "TEfficiency";
}

//______________________________________________________________________________
const char *TEfficiency::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEfficiency*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEfficiency::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEfficiency*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEfficiency::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEfficiency*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEfficiency::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEfficiency*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFormula::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFormula::Class_Name()
{
   return "TFormula";
}

//______________________________________________________________________________
const char *TFormula::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFormula*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFormula::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFormula*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFormula::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFormula*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFormula::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFormula*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1AbsComposition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1AbsComposition::Class_Name()
{
   return "TF1AbsComposition";
}

//______________________________________________________________________________
const char *TF1AbsComposition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1AbsComposition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1AbsComposition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1AbsComposition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1AbsComposition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1AbsComposition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1AbsComposition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1AbsComposition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1Parameters::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1Parameters::Class_Name()
{
   return "TF1Parameters";
}

//______________________________________________________________________________
const char *TF1Parameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Parameters*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1Parameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Parameters*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1Parameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Parameters*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1Parameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Parameters*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1::Class_Name()
{
   return "TF1";
}

//______________________________________________________________________________
const char *TF1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF2::Class_Name()
{
   return "TF2";
}

//______________________________________________________________________________
const char *TF2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF12::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF12::Class_Name()
{
   return "TF12";
}

//______________________________________________________________________________
const char *TF12::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF12*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF12::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF12*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF12::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF12*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF12::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF12*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraph::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraph::Class_Name()
{
   return "TGraph";
}

//______________________________________________________________________________
const char *TGraph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1Convolution::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1Convolution::Class_Name()
{
   return "TF1Convolution";
}

//______________________________________________________________________________
const char *TF1Convolution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Convolution*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1Convolution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Convolution*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1Convolution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Convolution*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1Convolution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Convolution*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1NormSum::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1NormSum::Class_Name()
{
   return "TF1NormSum";
}

//______________________________________________________________________________
const char *TF1NormSum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1NormSum*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1NormSum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1NormSum*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1NormSum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1NormSum*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1NormSum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1NormSum*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF3::Class_Name()
{
   return "TF3";
}

//______________________________________________________________________________
const char *TF3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitResult::Class_Name()
{
   return "TFitResult";
}

//______________________________________________________________________________
const char *TFitResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitResult*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFractionFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFractionFitter::Class_Name()
{
   return "TFractionFitter";
}

//______________________________________________________________________________
const char *TFractionFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFractionFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFractionFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFractionFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFractionFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFractionFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFractionFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFractionFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraph2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraph2D::Class_Name()
{
   return "TGraph2D";
}

//______________________________________________________________________________
const char *TGraph2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraph2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraph2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraph2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraph2DErrors::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraph2DErrors::Class_Name()
{
   return "TGraph2DErrors";
}

//______________________________________________________________________________
const char *TGraph2DErrors::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DErrors*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraph2DErrors::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DErrors*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraph2DErrors::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DErrors*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraph2DErrors::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DErrors*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraph2DAsymmErrors::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraph2DAsymmErrors::Class_Name()
{
   return "TGraph2DAsymmErrors";
}

//______________________________________________________________________________
const char *TGraph2DAsymmErrors::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DAsymmErrors*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraph2DAsymmErrors::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DAsymmErrors*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraph2DAsymmErrors::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DAsymmErrors*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraph2DAsymmErrors::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DAsymmErrors*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphAsymmErrors::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphAsymmErrors::Class_Name()
{
   return "TGraphAsymmErrors";
}

//______________________________________________________________________________
const char *TGraphAsymmErrors::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphAsymmErrors*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphAsymmErrors::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphAsymmErrors*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphAsymmErrors::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphAsymmErrors*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphAsymmErrors::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphAsymmErrors*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphMultiErrors::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphMultiErrors::Class_Name()
{
   return "TGraphMultiErrors";
}

//______________________________________________________________________________
const char *TGraphMultiErrors::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphMultiErrors*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphMultiErrors::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphMultiErrors*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphMultiErrors::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphMultiErrors*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphMultiErrors::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphMultiErrors*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphBentErrors::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphBentErrors::Class_Name()
{
   return "TGraphBentErrors";
}

//______________________________________________________________________________
const char *TGraphBentErrors::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphBentErrors*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphBentErrors::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphBentErrors*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphBentErrors::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphBentErrors*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphBentErrors::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphBentErrors*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphDelaunay2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphDelaunay2D::Class_Name()
{
   return "TGraphDelaunay2D";
}

//______________________________________________________________________________
const char *TGraphDelaunay2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphDelaunay2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphDelaunay2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphDelaunay2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphDelaunay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphDelaunay::Class_Name()
{
   return "TGraphDelaunay";
}

//______________________________________________________________________________
const char *TGraphDelaunay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphDelaunay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphDelaunay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphDelaunay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphDelaunay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphErrors::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphErrors::Class_Name()
{
   return "TGraphErrors";
}

//______________________________________________________________________________
const char *TGraphErrors::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphErrors*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphErrors::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphErrors*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphErrors::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphErrors*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphErrors::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphErrors*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphSmooth::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphSmooth::Class_Name()
{
   return "TGraphSmooth";
}

//______________________________________________________________________________
const char *TGraphSmooth::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphSmooth*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphSmooth::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphSmooth*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphSmooth::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphSmooth*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphSmooth::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphSmooth*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphTime::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphTime::Class_Name()
{
   return "TGraphTime";
}

//______________________________________________________________________________
const char *TGraphTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphTime*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphTime*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphTime*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphTime*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TScatter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TScatter::Class_Name()
{
   return "TScatter";
}

//______________________________________________________________________________
const char *TScatter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TScatter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TScatter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TScatter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TScatter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TScatter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TScatter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TScatter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TScatter2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TScatter2D::Class_Name()
{
   return "TScatter2D";
}

//______________________________________________________________________________
const char *TScatter2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TScatter2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TScatter2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TScatter2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TScatter2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TScatter2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TScatter2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TScatter2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1::Class_Name()
{
   return "TH1";
}

//______________________________________________________________________________
const char *TH1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1C::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1C::Class_Name()
{
   return "TH1C";
}

//______________________________________________________________________________
const char *TH1C::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1C*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1C::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1C*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1C::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1C*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1C::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1C*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1S::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1S::Class_Name()
{
   return "TH1S";
}

//______________________________________________________________________________
const char *TH1S::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1S*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1S::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1S*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1S::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1S*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1S::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1S*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1I::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1I::Class_Name()
{
   return "TH1I";
}

//______________________________________________________________________________
const char *TH1I::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1I*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1I::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1I*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1I::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1I*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1I::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1I*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1L::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1L::Class_Name()
{
   return "TH1L";
}

//______________________________________________________________________________
const char *TH1L::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1L*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1L::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1L*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1L::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1L*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1L::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1L*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1F::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1F::Class_Name()
{
   return "TH1F";
}

//______________________________________________________________________________
const char *TH1F::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1F*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1F::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1F*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1F::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1F*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1F::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1F*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1D::Class_Name()
{
   return "TH1D";
}

//______________________________________________________________________________
const char *TH1D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2::Class_Name()
{
   return "TH2";
}

//______________________________________________________________________________
const char *TH2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2C::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2C::Class_Name()
{
   return "TH2C";
}

//______________________________________________________________________________
const char *TH2C::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2C*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2C::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2C*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2C::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2C*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2C::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2C*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2S::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2S::Class_Name()
{
   return "TH2S";
}

//______________________________________________________________________________
const char *TH2S::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2S*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2S::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2S*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2S::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2S*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2S::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2S*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2I::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2I::Class_Name()
{
   return "TH2I";
}

//______________________________________________________________________________
const char *TH2I::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2I*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2I::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2I*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2I::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2I*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2I::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2I*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2L::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2L::Class_Name()
{
   return "TH2L";
}

//______________________________________________________________________________
const char *TH2L::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2L*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2L::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2L*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2L::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2L*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2L::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2L*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2F::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2F::Class_Name()
{
   return "TH2F";
}

//______________________________________________________________________________
const char *TH2F::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2F*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2F::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2F*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2F::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2F*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2F::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2F*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2D::Class_Name()
{
   return "TH2D";
}

//______________________________________________________________________________
const char *TH2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2PolyBin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2PolyBin::Class_Name()
{
   return "TH2PolyBin";
}

//______________________________________________________________________________
const char *TH2PolyBin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2PolyBin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2PolyBin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2PolyBin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2PolyBin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2PolyBin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2PolyBin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2PolyBin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2Poly::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2Poly::Class_Name()
{
   return "TH2Poly";
}

//______________________________________________________________________________
const char *TH2Poly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Poly*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2Poly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Poly*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2Poly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Poly*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2Poly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Poly*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3::Class_Name()
{
   return "TH3";
}

//______________________________________________________________________________
const char *TH3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3C::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3C::Class_Name()
{
   return "TH3C";
}

//______________________________________________________________________________
const char *TH3C::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3C*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3C::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3C*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3C::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3C*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3C::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3C*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3S::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3S::Class_Name()
{
   return "TH3S";
}

//______________________________________________________________________________
const char *TH3S::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3S*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3S::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3S*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3S::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3S*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3S::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3S*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3I::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3I::Class_Name()
{
   return "TH3I";
}

//______________________________________________________________________________
const char *TH3I::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3I*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3I::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3I*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3I::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3I*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3I::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3I*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3L::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3L::Class_Name()
{
   return "TH3L";
}

//______________________________________________________________________________
const char *TH3L::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3L*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3L::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3L*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3L::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3L*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3L::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3L*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3F::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3F::Class_Name()
{
   return "TH3F";
}

//______________________________________________________________________________
const char *TH3F::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3F*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3F::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3F*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3F::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3F*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3F::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3F*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH3D::Class_Name()
{
   return "TH3D";
}

//______________________________________________________________________________
const char *TH3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THLimitsFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THLimitsFinder::Class_Name()
{
   return "THLimitsFinder";
}

//______________________________________________________________________________
const char *THLimitsFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THLimitsFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THLimitsFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THLimitsFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THLimitsFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THLimitsFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THLimitsFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THLimitsFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THnBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THnBase::Class_Name()
{
   return "THnBase";
}

//______________________________________________________________________________
const char *THnBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THnBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THnBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THnBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnBase*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
atomic_TClass_ptr THnBaseBrowsable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THnBaseBrowsable::Class_Name()
{
   return "ROOT::Internal::THnBaseBrowsable";
}

//______________________________________________________________________________
const char *THnBaseBrowsable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::THnBaseBrowsable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THnBaseBrowsable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::THnBaseBrowsable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THnBaseBrowsable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::THnBaseBrowsable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THnBaseBrowsable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::THnBaseBrowsable*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
//______________________________________________________________________________
atomic_TClass_ptr THnIter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THnIter::Class_Name()
{
   return "THnIter";
}

//______________________________________________________________________________
const char *THnIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnIter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THnIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnIter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THnIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnIter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THnIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnIter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THnChain::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THnChain::Class_Name()
{
   return "THnChain";
}

//______________________________________________________________________________
const char *THnChain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnChain*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THnChain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnChain*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THnChain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnChain*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THnChain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnChain*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNDArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TNDArray::Class_Name()
{
   return "TNDArray";
}

//______________________________________________________________________________
const char *TNDArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TNDArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNDArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNDArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<double>::Class_Name()
{
   return "TNDArrayRef<double>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<char>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<char>::Class_Name()
{
   return "TNDArrayRef<char>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<char>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<char>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<char>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<char>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<char>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<char>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<char>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<char>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<short>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<short>::Class_Name()
{
   return "TNDArrayRef<short>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<short>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<short>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<short>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<short>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<int>::Class_Name()
{
   return "TNDArrayRef<int>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<Long64_t>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<Long64_t>::Class_Name()
{
   return "TNDArrayRef<Long64_t>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<Long64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<Long64_t>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<Long64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<Long64_t>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<Long64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<Long64_t>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<Long64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<Long64_t>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<float>::Class_Name()
{
   return "TNDArrayRef<float>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<unsigned short>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<unsigned short>::Class_Name()
{
   return "TNDArrayRef<unsigned short>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<unsigned short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned short>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<unsigned short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned short>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<unsigned short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned short>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<unsigned short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned short>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<unsigned int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<unsigned int>::Class_Name()
{
   return "TNDArrayRef<unsigned int>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<unsigned long>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<unsigned long>::Class_Name()
{
   return "TNDArrayRef<unsigned long>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<unsigned long>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned long>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<unsigned long>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned long>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<unsigned long>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned long>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<unsigned long>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<unsigned long>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<ULong64_t>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<ULong64_t>::Class_Name()
{
   return "TNDArrayRef<ULong64_t>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<ULong64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<ULong64_t>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<ULong64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<ULong64_t>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<ULong64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<ULong64_t>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<ULong64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<ULong64_t>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayRef<long>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayRef<long>::Class_Name()
{
   return "TNDArrayRef<long>";
}

//______________________________________________________________________________
template <> const char *TNDArrayRef<long>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<long>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayRef<long>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<long>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<long>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<long>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayRef<long>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayRef<long>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<double>::Class_Name()
{
   return "TNDArrayT<double>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<float>::Class_Name()
{
   return "TNDArrayT<float>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<Long64_t>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<Long64_t>::Class_Name()
{
   return "TNDArrayT<Long64_t>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<Long64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<Long64_t>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<Long64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<Long64_t>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<Long64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<Long64_t>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<Long64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<Long64_t>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<long>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<long>::Class_Name()
{
   return "TNDArrayT<long>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<long>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<long>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<long>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<long>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<long>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<long>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<long>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<long>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<int>::Class_Name()
{
   return "TNDArrayT<int>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<short>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<short>::Class_Name()
{
   return "TNDArrayT<short>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<short>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<short>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<short>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<short>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<char>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<char>::Class_Name()
{
   return "TNDArrayT<char>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<char>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<char>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<char>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<char>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<char>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<char>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<char>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<char>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<ULong64_t>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<ULong64_t>::Class_Name()
{
   return "TNDArrayT<ULong64_t>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<ULong64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<ULong64_t>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<ULong64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<ULong64_t>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<ULong64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<ULong64_t>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<ULong64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<ULong64_t>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<unsigned long>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<unsigned long>::Class_Name()
{
   return "TNDArrayT<unsigned long>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<unsigned long>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned long>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<unsigned long>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned long>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<unsigned long>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned long>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<unsigned long>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned long>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<unsigned int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<unsigned int>::Class_Name()
{
   return "TNDArrayT<unsigned int>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TNDArrayT<unsigned short>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNDArrayT<unsigned short>::Class_Name()
{
   return "TNDArrayT<unsigned short>";
}

//______________________________________________________________________________
template <> const char *TNDArrayT<unsigned short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned short>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNDArrayT<unsigned short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned short>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<unsigned short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned short>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNDArrayT<unsigned short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNDArrayT<unsigned short>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THn::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THn::Class_Name()
{
   return "THn";
}

//______________________________________________________________________________
const char *THn::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THn*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THn::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THn*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THn::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THn*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THn::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THn*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<float>::Class_Name()
{
   return "THnT<float>";
}

//______________________________________________________________________________
template <> const char *THnT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<double>::Class_Name()
{
   return "THnT<double>";
}

//______________________________________________________________________________
template <> const char *THnT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<char>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<char>::Class_Name()
{
   return "THnT<char>";
}

//______________________________________________________________________________
template <> const char *THnT<char>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<char>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<char>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<char>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<char>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<char>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<char>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<char>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<short>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<short>::Class_Name()
{
   return "THnT<short>";
}

//______________________________________________________________________________
template <> const char *THnT<short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<short>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<short>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<short>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<short>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<int>::Class_Name()
{
   return "THnT<int>";
}

//______________________________________________________________________________
template <> const char *THnT<int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<Long64_t>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<Long64_t>::Class_Name()
{
   return "THnT<Long64_t>";
}

//______________________________________________________________________________
template <> const char *THnT<Long64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<Long64_t>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<Long64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<Long64_t>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<Long64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<Long64_t>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<Long64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<Long64_t>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<unsigned short>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<unsigned short>::Class_Name()
{
   return "THnT<unsigned short>";
}

//______________________________________________________________________________
template <> const char *THnT<unsigned short>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned short>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<unsigned short>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned short>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<unsigned short>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned short>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<unsigned short>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned short>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<unsigned int>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<unsigned int>::Class_Name()
{
   return "THnT<unsigned int>";
}

//______________________________________________________________________________
template <> const char *THnT<unsigned int>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned int>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<unsigned int>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned int>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<unsigned int>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned int>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<unsigned int>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned int>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<unsigned long>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<unsigned long>::Class_Name()
{
   return "THnT<unsigned long>";
}

//______________________________________________________________________________
template <> const char *THnT<unsigned long>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned long>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<unsigned long>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned long>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<unsigned long>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned long>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<unsigned long>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<unsigned long>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<ULong64_t>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<ULong64_t>::Class_Name()
{
   return "THnT<ULong64_t>";
}

//______________________________________________________________________________
template <> const char *THnT<ULong64_t>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<ULong64_t>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<ULong64_t>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<ULong64_t>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<ULong64_t>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<ULong64_t>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<ULong64_t>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<ULong64_t>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnT<long>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnT<long>::Class_Name()
{
   return "THnT<long>";
}

//______________________________________________________________________________
template <> const char *THnT<long>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<long>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnT<long>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnT<long>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnT<long>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<long>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnT<long>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnT<long>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THnSparseArrayChunk::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THnSparseArrayChunk::Class_Name()
{
   return "THnSparseArrayChunk";
}

//______________________________________________________________________________
const char *THnSparseArrayChunk::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseArrayChunk*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THnSparseArrayChunk::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseArrayChunk*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THnSparseArrayChunk::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseArrayChunk*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THnSparseArrayChunk::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseArrayChunk*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THnSparse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THnSparse::Class_Name()
{
   return "THnSparse";
}

//______________________________________________________________________________
const char *THnSparse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THnSparse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THnSparse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THnSparse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayD>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayD>::Class_Name()
{
   return "THnSparseT<TArrayD>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayD>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayD>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayD>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayD>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayD>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayD>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayD>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayD>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayF>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayF>::Class_Name()
{
   return "THnSparseT<TArrayF>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayF>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayF>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayF>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayF>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayF>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayF>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayF>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayF>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayL64>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayL64>::Class_Name()
{
   return "THnSparseT<TArrayL64>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayL64>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL64>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayL64>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL64>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayL64>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL64>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayL64>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL64>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayI>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayI>::Class_Name()
{
   return "THnSparseT<TArrayI>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayI>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayI>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayI>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayI>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayI>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayI>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayI>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayI>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayS>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayS>::Class_Name()
{
   return "THnSparseT<TArrayS>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayS>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayS>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayS>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayS>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayS>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayS>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayS>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayS>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayC>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayC>::Class_Name()
{
   return "THnSparseT<TArrayC>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayC>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayC>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayC>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayC>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayC>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayC>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayC>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayC>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr THnSparseT<TArrayL>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayL>::Class_Name()
{
   return "THnSparseT<TArrayL>";
}

//______________________________________________________________________________
template <> const char *THnSparseT<TArrayL>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int THnSparseT<TArrayL>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayL>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *THnSparseT<TArrayL>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THnSparseT<TArrayL>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THStack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THStack::Class_Name()
{
   return "THStack";
}

//______________________________________________________________________________
const char *THStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THStack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THStack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THStack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THStack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKDE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TKDE::Class_Name()
{
   return "TKDE";
}

//______________________________________________________________________________
const char *TKDE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TKDE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKDE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKDE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKDE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKDE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLimitDataSource::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLimitDataSource::Class_Name()
{
   return "TLimitDataSource";
}

//______________________________________________________________________________
const char *TLimitDataSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLimitDataSource*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLimitDataSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLimitDataSource*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLimitDataSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLimitDataSource*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLimitDataSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLimitDataSource*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLimit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLimit::Class_Name()
{
   return "TLimit";
}

//______________________________________________________________________________
const char *TLimit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLimit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLimit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLimit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLimit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLimit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLimit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLimit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMultiDimFit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMultiDimFit::Class_Name()
{
   return "TMultiDimFit";
}

//______________________________________________________________________________
const char *TMultiDimFit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiDimFit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMultiDimFit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiDimFit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMultiDimFit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiDimFit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMultiDimFit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiDimFit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMultiGraph::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMultiGraph::Class_Name()
{
   return "TMultiGraph";
}

//______________________________________________________________________________
const char *TMultiGraph::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiGraph*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMultiGraph::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiGraph*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMultiGraph::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiGraph*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMultiGraph::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiGraph*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPolyMarker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPolyMarker::Class_Name()
{
   return "TPolyMarker";
}

//______________________________________________________________________________
const char *TPolyMarker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPolyMarker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPolyMarker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPolyMarker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPolyMarker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPrincipal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPrincipal::Class_Name()
{
   return "TPrincipal";
}

//______________________________________________________________________________
const char *TPrincipal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPrincipal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPrincipal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPrincipal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPrincipal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPrincipal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPrincipal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPrincipal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProfile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TProfile::Class_Name()
{
   return "TProfile";
}

//______________________________________________________________________________
const char *TProfile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TProfile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProfile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProfile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProfile2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TProfile2D::Class_Name()
{
   return "TProfile2D";
}

//______________________________________________________________________________
const char *TProfile2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TProfile2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProfile2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProfile2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProfile2PolyBin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TProfile2PolyBin::Class_Name()
{
   return "TProfile2PolyBin";
}

//______________________________________________________________________________
const char *TProfile2PolyBin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile2PolyBin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TProfile2PolyBin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile2PolyBin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProfile2PolyBin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile2PolyBin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProfile2PolyBin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile2PolyBin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProfile2Poly::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TProfile2Poly::Class_Name()
{
   return "TProfile2Poly";
}

//______________________________________________________________________________
const char *TProfile2Poly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile2Poly*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TProfile2Poly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile2Poly*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProfile2Poly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile2Poly*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProfile2Poly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile2Poly*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TProfile3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TProfile3D::Class_Name()
{
   return "TProfile3D";
}

//______________________________________________________________________________
const char *TProfile3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TProfile3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TProfile3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TProfile3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TProfile3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TProfile3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpline::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpline::Class_Name()
{
   return "TSpline";
}

//______________________________________________________________________________
const char *TSpline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpline*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSpline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpline*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpline*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpline*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSplinePoly::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSplinePoly::Class_Name()
{
   return "TSplinePoly";
}

//______________________________________________________________________________
const char *TSplinePoly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSplinePoly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSplinePoly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSplinePoly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSplinePoly3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSplinePoly3::Class_Name()
{
   return "TSplinePoly3";
}

//______________________________________________________________________________
const char *TSplinePoly3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSplinePoly3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSplinePoly3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSplinePoly3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSplinePoly5::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSplinePoly5::Class_Name()
{
   return "TSplinePoly5";
}

//______________________________________________________________________________
const char *TSplinePoly5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly5*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSplinePoly5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly5*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSplinePoly5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly5*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSplinePoly5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSplinePoly5*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpline3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpline3::Class_Name()
{
   return "TSpline3";
}

//______________________________________________________________________________
const char *TSpline3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpline3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSpline3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpline3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpline3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpline3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpline3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpline3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpline5::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpline5::Class_Name()
{
   return "TSpline5";
}

//______________________________________________________________________________
const char *TSpline5::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpline5*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSpline5::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpline5*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpline5::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpline5*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpline5::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpline5*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSVDUnfold::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSVDUnfold::Class_Name()
{
   return "TSVDUnfold";
}

//______________________________________________________________________________
const char *TSVDUnfold::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSVDUnfold*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSVDUnfold::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSVDUnfold*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSVDUnfold::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSVDUnfold*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSVDUnfold::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSVDUnfold*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGraphPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGraphPainter::Class_Name()
{
   return "TVirtualGraphPainter";
}

//______________________________________________________________________________
const char *TVirtualGraphPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGraphPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGraphPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGraphPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGraphPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGraphPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGraphPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGraphPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualHistPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualHistPainter::Class_Name()
{
   return "TVirtualHistPainter";
}

//______________________________________________________________________________
const char *TVirtualHistPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualHistPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualHistPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualHistPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualHistPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualHistPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualHistPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualHistPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualPaveStats::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualPaveStats::Class_Name()
{
   return "TVirtualPaveStats";
}

//______________________________________________________________________________
const char *TVirtualPaveStats::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPaveStats*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualPaveStats::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPaveStats*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualPaveStats::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPaveStats*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualPaveStats::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualPaveStats*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   namespace v5 {
//______________________________________________________________________________
atomic_TClass_ptr TFormula::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFormula::Class_Name()
{
   return "ROOT::v5::TFormula";
}

//______________________________________________________________________________
const char *TFormula::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormula*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFormula::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormula*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFormula::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormula*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFormula::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormula*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::v5
} // namespace ROOT::v5
namespace ROOT {
   namespace v5 {
//______________________________________________________________________________
atomic_TClass_ptr TF1Data::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1Data::Class_Name()
{
   return "ROOT::v5::TF1Data";
}

//______________________________________________________________________________
const char *TF1Data::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TF1Data*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1Data::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TF1Data*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1Data::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TF1Data*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1Data::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TF1Data*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::v5
} // namespace ROOT::v5
namespace ROOT {
   namespace v5 {
//______________________________________________________________________________
atomic_TClass_ptr TFormulaPrimitive::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFormulaPrimitive::Class_Name()
{
   return "ROOT::v5::TFormulaPrimitive";
}

//______________________________________________________________________________
const char *TFormulaPrimitive::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormulaPrimitive*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFormulaPrimitive::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormulaPrimitive*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFormulaPrimitive::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormulaPrimitive*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFormulaPrimitive::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::v5::TFormulaPrimitive*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::v5
} // namespace ROOT::v5
namespace ROOT {
   // Wrappers around operator new
   static void *new_Foption_t(void *p) {
      return  p ? new(p) ::Foption_t : new ::Foption_t;
   }
   static void *newArray_Foption_t(Long_t nElements, void *p) {
      return p ? new(p) ::Foption_t[nElements] : new ::Foption_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_Foption_t(void *p) {
      delete (static_cast<::Foption_t*>(p));
   }
   static void deleteArray_Foption_t(void *p) {
      delete [] (static_cast<::Foption_t*>(p));
   }
   static void destruct_Foption_t(void *p) {
      typedef ::Foption_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Foption_t

//______________________________________________________________________________
void TFitResultPtr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitResultPtr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFitResultPtr::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFitResultPtr::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitResultPtr(void *p) {
      return  p ? new(p) ::TFitResultPtr : new ::TFitResultPtr;
   }
   static void *newArray_TFitResultPtr(Long_t nElements, void *p) {
      return p ? new(p) ::TFitResultPtr[nElements] : new ::TFitResultPtr[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitResultPtr(void *p) {
      delete (static_cast<::TFitResultPtr*>(p));
   }
   static void deleteArray_TFitResultPtr(void *p) {
      delete [] (static_cast<::TFitResultPtr*>(p));
   }
   static void destruct_TFitResultPtr(void *p) {
      typedef ::TFitResultPtr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFitResultPtr

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAxis(void *p) {
      return  p ? new(p) ::TAxis : new ::TAxis;
   }
   static void *newArray_TAxis(Long_t nElements, void *p) {
      return p ? new(p) ::TAxis[nElements] : new ::TAxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAxis(void *p) {
      delete (static_cast<::TAxis*>(p));
   }
   static void deleteArray_TAxis(void *p) {
      delete [] (static_cast<::TAxis*>(p));
   }
   static void destruct_TAxis(void *p) {
      typedef ::TAxis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAxis(TBuffer &buf, void *obj) {
      ((::TAxis*)obj)->::TAxis::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAxis

//______________________________________________________________________________
void TAxisModLab::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAxisModLab.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TAxisModLab::Class(),this);
   } else {
      R__b.WriteClassBuffer(TAxisModLab::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAxisModLab(void *p) {
      return  p ? new(p) ::TAxisModLab : new ::TAxisModLab;
   }
   static void *newArray_TAxisModLab(Long_t nElements, void *p) {
      return p ? new(p) ::TAxisModLab[nElements] : new ::TAxisModLab[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAxisModLab(void *p) {
      delete (static_cast<::TAxisModLab*>(p));
   }
   static void deleteArray_TAxisModLab(void *p) {
      delete [] (static_cast<::TAxisModLab*>(p));
   }
   static void destruct_TAxisModLab(void *p) {
      typedef ::TAxisModLab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAxisModLab

//______________________________________________________________________________
void TVirtualFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualFitter(void *p) {
      delete (static_cast<::TVirtualFitter*>(p));
   }
   static void deleteArray_TVirtualFitter(void *p) {
      delete [] (static_cast<::TVirtualFitter*>(p));
   }
   static void destruct_TVirtualFitter(void *p) {
      typedef ::TVirtualFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualFitter

//______________________________________________________________________________
void TBackCompFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBackCompFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBackCompFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBackCompFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBackCompFitter(void *p) {
      return  p ? new(p) ::TBackCompFitter : new ::TBackCompFitter;
   }
   static void *newArray_TBackCompFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TBackCompFitter[nElements] : new ::TBackCompFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBackCompFitter(void *p) {
      delete (static_cast<::TBackCompFitter*>(p));
   }
   static void deleteArray_TBackCompFitter(void *p) {
      delete [] (static_cast<::TBackCompFitter*>(p));
   }
   static void destruct_TBackCompFitter(void *p) {
      typedef ::TBackCompFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TBackCompFitter

//______________________________________________________________________________
void TBinomialEfficiencyFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBinomialEfficiencyFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TBinomialEfficiencyFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TBinomialEfficiencyFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBinomialEfficiencyFitter(void *p) {
      return  p ? new(p) ::TBinomialEfficiencyFitter : new ::TBinomialEfficiencyFitter;
   }
   static void *newArray_TBinomialEfficiencyFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TBinomialEfficiencyFitter[nElements] : new ::TBinomialEfficiencyFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBinomialEfficiencyFitter(void *p) {
      delete (static_cast<::TBinomialEfficiencyFitter*>(p));
   }
   static void deleteArray_TBinomialEfficiencyFitter(void *p) {
      delete [] (static_cast<::TBinomialEfficiencyFitter*>(p));
   }
   static void destruct_TBinomialEfficiencyFitter(void *p) {
      typedef ::TBinomialEfficiencyFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TBinomialEfficiencyFitter

//______________________________________________________________________________
void TConfidenceLevel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TConfidenceLevel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TConfidenceLevel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TConfidenceLevel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TConfidenceLevel(void *p) {
      return  p ? new(p) ::TConfidenceLevel : new ::TConfidenceLevel;
   }
   static void *newArray_TConfidenceLevel(Long_t nElements, void *p) {
      return p ? new(p) ::TConfidenceLevel[nElements] : new ::TConfidenceLevel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TConfidenceLevel(void *p) {
      delete (static_cast<::TConfidenceLevel*>(p));
   }
   static void deleteArray_TConfidenceLevel(void *p) {
      delete [] (static_cast<::TConfidenceLevel*>(p));
   }
   static void destruct_TConfidenceLevel(void *p) {
      typedef ::TConfidenceLevel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TConfidenceLevel

//______________________________________________________________________________
void TEfficiency::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEfficiency.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEfficiency::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEfficiency::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEfficiency(void *p) {
      return  p ? new(p) ::TEfficiency : new ::TEfficiency;
   }
   static void *newArray_TEfficiency(Long_t nElements, void *p) {
      return p ? new(p) ::TEfficiency[nElements] : new ::TEfficiency[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEfficiency(void *p) {
      delete (static_cast<::TEfficiency*>(p));
   }
   static void deleteArray_TEfficiency(void *p) {
      delete [] (static_cast<::TEfficiency*>(p));
   }
   static void destruct_TEfficiency(void *p) {
      typedef ::TEfficiency current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEfficiency(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEfficiency*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEfficiency

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFormulaParamOrder(void *p) {
      return  p ? new(p) ::TFormulaParamOrder : new ::TFormulaParamOrder;
   }
   static void *newArray_TFormulaParamOrder(Long_t nElements, void *p) {
      return p ? new(p) ::TFormulaParamOrder[nElements] : new ::TFormulaParamOrder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFormulaParamOrder(void *p) {
      delete (static_cast<::TFormulaParamOrder*>(p));
   }
   static void deleteArray_TFormulaParamOrder(void *p) {
      delete [] (static_cast<::TFormulaParamOrder*>(p));
   }
   static void destruct_TFormulaParamOrder(void *p) {
      typedef ::TFormulaParamOrder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFormulaParamOrder

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFormula(void *p) {
      return  p ? new(p) ::TFormula : new ::TFormula;
   }
   static void *newArray_TFormula(Long_t nElements, void *p) {
      return p ? new(p) ::TFormula[nElements] : new ::TFormula[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFormula(void *p) {
      delete (static_cast<::TFormula*>(p));
   }
   static void deleteArray_TFormula(void *p) {
      delete [] (static_cast<::TFormula*>(p));
   }
   static void destruct_TFormula(void *p) {
      typedef ::TFormula current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFormula(TBuffer &buf, void *obj) {
      ((::TFormula*)obj)->::TFormula::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFormula

//______________________________________________________________________________
void TF1AbsComposition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF1AbsComposition.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TF1AbsComposition::Class(),this);
   } else {
      R__b.WriteClassBuffer(TF1AbsComposition::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TF1AbsComposition(void *p) {
      delete (static_cast<::TF1AbsComposition*>(p));
   }
   static void deleteArray_TF1AbsComposition(void *p) {
      delete [] (static_cast<::TF1AbsComposition*>(p));
   }
   static void destruct_TF1AbsComposition(void *p) {
      typedef ::TF1AbsComposition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TF1AbsComposition

//______________________________________________________________________________
void TF1Parameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF1Parameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TF1Parameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(TF1Parameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF1Parameters(void *p) {
      return  p ? new(p) ::TF1Parameters : new ::TF1Parameters;
   }
   static void *newArray_TF1Parameters(Long_t nElements, void *p) {
      return p ? new(p) ::TF1Parameters[nElements] : new ::TF1Parameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF1Parameters(void *p) {
      delete (static_cast<::TF1Parameters*>(p));
   }
   static void deleteArray_TF1Parameters(void *p) {
      delete [] (static_cast<::TF1Parameters*>(p));
   }
   static void destruct_TF1Parameters(void *p) {
      typedef ::TF1Parameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TF1Parameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF1(void *p) {
      return  p ? new(p) ::TF1 : new ::TF1;
   }
   static void *newArray_TF1(Long_t nElements, void *p) {
      return p ? new(p) ::TF1[nElements] : new ::TF1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF1(void *p) {
      delete (static_cast<::TF1*>(p));
   }
   static void deleteArray_TF1(void *p) {
      delete [] (static_cast<::TF1*>(p));
   }
   static void destruct_TF1(void *p) {
      typedef ::TF1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TF1(TBuffer &buf, void *obj) {
      ((::TF1*)obj)->::TF1::Streamer(buf);
   }
} // end of namespace ROOT for class ::TF1

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF2(void *p) {
      return  p ? new(p) ::TF2 : new ::TF2;
   }
   static void *newArray_TF2(Long_t nElements, void *p) {
      return p ? new(p) ::TF2[nElements] : new ::TF2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF2(void *p) {
      delete (static_cast<::TF2*>(p));
   }
   static void deleteArray_TF2(void *p) {
      delete [] (static_cast<::TF2*>(p));
   }
   static void destruct_TF2(void *p) {
      typedef ::TF2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TF2(TBuffer &buf, void *obj) {
      ((::TF2*)obj)->::TF2::Streamer(buf);
   }
} // end of namespace ROOT for class ::TF2

//______________________________________________________________________________
void TF12::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF12.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TF12::Class(),this);
   } else {
      R__b.WriteClassBuffer(TF12::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF12(void *p) {
      return  p ? new(p) ::TF12 : new ::TF12;
   }
   static void *newArray_TF12(Long_t nElements, void *p) {
      return p ? new(p) ::TF12[nElements] : new ::TF12[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF12(void *p) {
      delete (static_cast<::TF12*>(p));
   }
   static void deleteArray_TF12(void *p) {
      delete [] (static_cast<::TF12*>(p));
   }
   static void destruct_TF12(void *p) {
      typedef ::TF12 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TF12

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraph(void *p) {
      return  p ? new(p) ::TGraph : new ::TGraph;
   }
   static void *newArray_TGraph(Long_t nElements, void *p) {
      return p ? new(p) ::TGraph[nElements] : new ::TGraph[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraph(void *p) {
      delete (static_cast<::TGraph*>(p));
   }
   static void deleteArray_TGraph(void *p) {
      delete [] (static_cast<::TGraph*>(p));
   }
   static void destruct_TGraph(void *p) {
      typedef ::TGraph current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraph(TBuffer &buf, void *obj) {
      ((::TGraph*)obj)->::TGraph::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraph(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraph*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraph

//______________________________________________________________________________
void TF1Convolution::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF1Convolution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TF1Convolution::Class(),this);
   } else {
      R__b.WriteClassBuffer(TF1Convolution::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF1Convolution(void *p) {
      return  p ? new(p) ::TF1Convolution : new ::TF1Convolution;
   }
   static void *newArray_TF1Convolution(Long_t nElements, void *p) {
      return p ? new(p) ::TF1Convolution[nElements] : new ::TF1Convolution[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF1Convolution(void *p) {
      delete (static_cast<::TF1Convolution*>(p));
   }
   static void deleteArray_TF1Convolution(void *p) {
      delete [] (static_cast<::TF1Convolution*>(p));
   }
   static void destruct_TF1Convolution(void *p) {
      typedef ::TF1Convolution current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TF1Convolution

//______________________________________________________________________________
void TF1NormSum::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF1NormSum.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TF1NormSum::Class(),this);
   } else {
      R__b.WriteClassBuffer(TF1NormSum::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF1NormSum(void *p) {
      return  p ? new(p) ::TF1NormSum : new ::TF1NormSum;
   }
   static void *newArray_TF1NormSum(Long_t nElements, void *p) {
      return p ? new(p) ::TF1NormSum[nElements] : new ::TF1NormSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF1NormSum(void *p) {
      delete (static_cast<::TF1NormSum*>(p));
   }
   static void deleteArray_TF1NormSum(void *p) {
      delete [] (static_cast<::TF1NormSum*>(p));
   }
   static void destruct_TF1NormSum(void *p) {
      typedef ::TF1NormSum current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TF1NormSum

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF3(void *p) {
      return  p ? new(p) ::TF3 : new ::TF3;
   }
   static void *newArray_TF3(Long_t nElements, void *p) {
      return p ? new(p) ::TF3[nElements] : new ::TF3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF3(void *p) {
      delete (static_cast<::TF3*>(p));
   }
   static void deleteArray_TF3(void *p) {
      delete [] (static_cast<::TF3*>(p));
   }
   static void destruct_TF3(void *p) {
      typedef ::TF3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TF3(TBuffer &buf, void *obj) {
      ((::TF3*)obj)->::TF3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TF3

//______________________________________________________________________________
void TFitResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFitResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFitResult::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitResult(void *p) {
      return  p ? new(p) ::TFitResult : new ::TFitResult;
   }
   static void *newArray_TFitResult(Long_t nElements, void *p) {
      return p ? new(p) ::TFitResult[nElements] : new ::TFitResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitResult(void *p) {
      delete (static_cast<::TFitResult*>(p));
   }
   static void deleteArray_TFitResult(void *p) {
      delete [] (static_cast<::TFitResult*>(p));
   }
   static void destruct_TFitResult(void *p) {
      typedef ::TFitResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFitResult

//______________________________________________________________________________
void TFractionFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFractionFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFractionFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFractionFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFractionFitter(void *p) {
      return  p ? new(p) ::TFractionFitter : new ::TFractionFitter;
   }
   static void *newArray_TFractionFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TFractionFitter[nElements] : new ::TFractionFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFractionFitter(void *p) {
      delete (static_cast<::TFractionFitter*>(p));
   }
   static void deleteArray_TFractionFitter(void *p) {
      delete [] (static_cast<::TFractionFitter*>(p));
   }
   static void destruct_TFractionFitter(void *p) {
      typedef ::TFractionFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFractionFitter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBinIterator(void *p) {
      delete (static_cast<::TBinIterator*>(p));
   }
   static void deleteArray_TBinIterator(void *p) {
      delete [] (static_cast<::TBinIterator*>(p));
   }
   static void destruct_TBinIterator(void *p) {
      typedef ::TBinIterator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TBinIterator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THistRange(void *p) {
      delete (static_cast<::THistRange*>(p));
   }
   static void deleteArray_THistRange(void *p) {
      delete [] (static_cast<::THistRange*>(p));
   }
   static void destruct_THistRange(void *p) {
      typedef ::THistRange current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THistRange

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraph2D(void *p) {
      return  p ? new(p) ::TGraph2D : new ::TGraph2D;
   }
   static void *newArray_TGraph2D(Long_t nElements, void *p) {
      return p ? new(p) ::TGraph2D[nElements] : new ::TGraph2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraph2D(void *p) {
      delete (static_cast<::TGraph2D*>(p));
   }
   static void deleteArray_TGraph2D(void *p) {
      delete [] (static_cast<::TGraph2D*>(p));
   }
   static void destruct_TGraph2D(void *p) {
      typedef ::TGraph2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TGraph2D(void *p, TDirectory *dir) {
      ((::TGraph2D*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraph2D(TBuffer &buf, void *obj) {
      ((::TGraph2D*)obj)->::TGraph2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraph2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraph2DErrors(void *p) {
      return  p ? new(p) ::TGraph2DErrors : new ::TGraph2DErrors;
   }
   static void *newArray_TGraph2DErrors(Long_t nElements, void *p) {
      return p ? new(p) ::TGraph2DErrors[nElements] : new ::TGraph2DErrors[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraph2DErrors(void *p) {
      delete (static_cast<::TGraph2DErrors*>(p));
   }
   static void deleteArray_TGraph2DErrors(void *p) {
      delete [] (static_cast<::TGraph2DErrors*>(p));
   }
   static void destruct_TGraph2DErrors(void *p) {
      typedef ::TGraph2DErrors current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TGraph2DErrors(void *p, TDirectory *dir) {
      ((::TGraph2DErrors*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraph2DErrors(TBuffer &buf, void *obj) {
      ((::TGraph2DErrors*)obj)->::TGraph2DErrors::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraph2DErrors

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraph2DAsymmErrors(void *p) {
      return  p ? new(p) ::TGraph2DAsymmErrors : new ::TGraph2DAsymmErrors;
   }
   static void *newArray_TGraph2DAsymmErrors(Long_t nElements, void *p) {
      return p ? new(p) ::TGraph2DAsymmErrors[nElements] : new ::TGraph2DAsymmErrors[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraph2DAsymmErrors(void *p) {
      delete (static_cast<::TGraph2DAsymmErrors*>(p));
   }
   static void deleteArray_TGraph2DAsymmErrors(void *p) {
      delete [] (static_cast<::TGraph2DAsymmErrors*>(p));
   }
   static void destruct_TGraph2DAsymmErrors(void *p) {
      typedef ::TGraph2DAsymmErrors current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TGraph2DAsymmErrors(void *p, TDirectory *dir) {
      ((::TGraph2DAsymmErrors*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraph2DAsymmErrors(TBuffer &buf, void *obj) {
      ((::TGraph2DAsymmErrors*)obj)->::TGraph2DAsymmErrors::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraph2DAsymmErrors

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphAsymmErrors(void *p) {
      return  p ? new(p) ::TGraphAsymmErrors : new ::TGraphAsymmErrors;
   }
   static void *newArray_TGraphAsymmErrors(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphAsymmErrors[nElements] : new ::TGraphAsymmErrors[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphAsymmErrors(void *p) {
      delete (static_cast<::TGraphAsymmErrors*>(p));
   }
   static void deleteArray_TGraphAsymmErrors(void *p) {
      delete [] (static_cast<::TGraphAsymmErrors*>(p));
   }
   static void destruct_TGraphAsymmErrors(void *p) {
      typedef ::TGraphAsymmErrors current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphAsymmErrors(TBuffer &buf, void *obj) {
      ((::TGraphAsymmErrors*)obj)->::TGraphAsymmErrors::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraphAsymmErrors(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraphAsymmErrors*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraphAsymmErrors

//______________________________________________________________________________
void TGraphMultiErrors::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphMultiErrors.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphMultiErrors::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphMultiErrors::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphMultiErrors(void *p) {
      return  p ? new(p) ::TGraphMultiErrors : new ::TGraphMultiErrors;
   }
   static void *newArray_TGraphMultiErrors(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphMultiErrors[nElements] : new ::TGraphMultiErrors[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphMultiErrors(void *p) {
      delete (static_cast<::TGraphMultiErrors*>(p));
   }
   static void deleteArray_TGraphMultiErrors(void *p) {
      delete [] (static_cast<::TGraphMultiErrors*>(p));
   }
   static void destruct_TGraphMultiErrors(void *p) {
      typedef ::TGraphMultiErrors current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraphMultiErrors(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraphMultiErrors*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraphMultiErrors

//______________________________________________________________________________
void TGraphBentErrors::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphBentErrors.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphBentErrors::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphBentErrors::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphBentErrors(void *p) {
      return  p ? new(p) ::TGraphBentErrors : new ::TGraphBentErrors;
   }
   static void *newArray_TGraphBentErrors(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphBentErrors[nElements] : new ::TGraphBentErrors[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphBentErrors(void *p) {
      delete (static_cast<::TGraphBentErrors*>(p));
   }
   static void deleteArray_TGraphBentErrors(void *p) {
      delete [] (static_cast<::TGraphBentErrors*>(p));
   }
   static void destruct_TGraphBentErrors(void *p) {
      typedef ::TGraphBentErrors current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraphBentErrors(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraphBentErrors*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraphBentErrors

//______________________________________________________________________________
void TGraphDelaunay2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphDelaunay2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphDelaunay2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphDelaunay2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphDelaunay2D(void *p) {
      return  p ? new(p) ::TGraphDelaunay2D : new ::TGraphDelaunay2D;
   }
   static void *newArray_TGraphDelaunay2D(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphDelaunay2D[nElements] : new ::TGraphDelaunay2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphDelaunay2D(void *p) {
      delete (static_cast<::TGraphDelaunay2D*>(p));
   }
   static void deleteArray_TGraphDelaunay2D(void *p) {
      delete [] (static_cast<::TGraphDelaunay2D*>(p));
   }
   static void destruct_TGraphDelaunay2D(void *p) {
      typedef ::TGraphDelaunay2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGraphDelaunay2D

//______________________________________________________________________________
void TGraphDelaunay::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphDelaunay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphDelaunay::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphDelaunay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphDelaunay(void *p) {
      return  p ? new(p) ::TGraphDelaunay : new ::TGraphDelaunay;
   }
   static void *newArray_TGraphDelaunay(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphDelaunay[nElements] : new ::TGraphDelaunay[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphDelaunay(void *p) {
      delete (static_cast<::TGraphDelaunay*>(p));
   }
   static void deleteArray_TGraphDelaunay(void *p) {
      delete [] (static_cast<::TGraphDelaunay*>(p));
   }
   static void destruct_TGraphDelaunay(void *p) {
      typedef ::TGraphDelaunay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGraphDelaunay

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphErrors(void *p) {
      return  p ? new(p) ::TGraphErrors : new ::TGraphErrors;
   }
   static void *newArray_TGraphErrors(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphErrors[nElements] : new ::TGraphErrors[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphErrors(void *p) {
      delete (static_cast<::TGraphErrors*>(p));
   }
   static void deleteArray_TGraphErrors(void *p) {
      delete [] (static_cast<::TGraphErrors*>(p));
   }
   static void destruct_TGraphErrors(void *p) {
      typedef ::TGraphErrors current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphErrors(TBuffer &buf, void *obj) {
      ((::TGraphErrors*)obj)->::TGraphErrors::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGraphErrors(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGraphErrors*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGraphErrors

//______________________________________________________________________________
void TGraphSmooth::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphSmooth.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphSmooth::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphSmooth::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphSmooth(void *p) {
      return  p ? new(p) ::TGraphSmooth : new ::TGraphSmooth;
   }
   static void *newArray_TGraphSmooth(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphSmooth[nElements] : new ::TGraphSmooth[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphSmooth(void *p) {
      delete (static_cast<::TGraphSmooth*>(p));
   }
   static void deleteArray_TGraphSmooth(void *p) {
      delete [] (static_cast<::TGraphSmooth*>(p));
   }
   static void destruct_TGraphSmooth(void *p) {
      typedef ::TGraphSmooth current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGraphSmooth

//______________________________________________________________________________
void TGraphTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGraphTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGraphTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphTime(void *p) {
      return  p ? new(p) ::TGraphTime : new ::TGraphTime;
   }
   static void *newArray_TGraphTime(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphTime[nElements] : new ::TGraphTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphTime(void *p) {
      delete (static_cast<::TGraphTime*>(p));
   }
   static void deleteArray_TGraphTime(void *p) {
      delete [] (static_cast<::TGraphTime*>(p));
   }
   static void destruct_TGraphTime(void *p) {
      typedef ::TGraphTime current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGraphTime

//______________________________________________________________________________
void TScatter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TScatter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TScatter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TScatter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TScatter(void *p) {
      return  p ? new(p) ::TScatter : new ::TScatter;
   }
   static void *newArray_TScatter(Long_t nElements, void *p) {
      return p ? new(p) ::TScatter[nElements] : new ::TScatter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TScatter(void *p) {
      delete (static_cast<::TScatter*>(p));
   }
   static void deleteArray_TScatter(void *p) {
      delete [] (static_cast<::TScatter*>(p));
   }
   static void destruct_TScatter(void *p) {
      typedef ::TScatter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TScatter

//______________________________________________________________________________
void TScatter2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TScatter2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TScatter2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TScatter2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TScatter2D(void *p) {
      return  p ? new(p) ::TScatter2D : new ::TScatter2D;
   }
   static void *newArray_TScatter2D(Long_t nElements, void *p) {
      return p ? new(p) ::TScatter2D[nElements] : new ::TScatter2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TScatter2D(void *p) {
      delete (static_cast<::TScatter2D*>(p));
   }
   static void deleteArray_TScatter2D(void *p) {
      delete [] (static_cast<::TScatter2D*>(p));
   }
   static void destruct_TScatter2D(void *p) {
      typedef ::TScatter2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TScatter2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TH1(void *p) {
      delete (static_cast<::TH1*>(p));
   }
   static void deleteArray_TH1(void *p) {
      delete [] (static_cast<::TH1*>(p));
   }
   static void destruct_TH1(void *p) {
      typedef ::TH1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1(void *p, TDirectory *dir) {
      ((::TH1*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH1(TBuffer &buf, void *obj) {
      ((::TH1*)obj)->::TH1::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1

//______________________________________________________________________________
void TH1C::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1C.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH1C::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH1C::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1C(void *p) {
      return  p ? new(p) ::TH1C : new ::TH1C;
   }
   static void *newArray_TH1C(Long_t nElements, void *p) {
      return p ? new(p) ::TH1C[nElements] : new ::TH1C[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1C(void *p) {
      delete (static_cast<::TH1C*>(p));
   }
   static void deleteArray_TH1C(void *p) {
      delete [] (static_cast<::TH1C*>(p));
   }
   static void destruct_TH1C(void *p) {
      typedef ::TH1C current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1C(void *p, TDirectory *dir) {
      ((::TH1C*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1C(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1C*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1C

//______________________________________________________________________________
void TH1S::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1S.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH1S::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH1S::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1S(void *p) {
      return  p ? new(p) ::TH1S : new ::TH1S;
   }
   static void *newArray_TH1S(Long_t nElements, void *p) {
      return p ? new(p) ::TH1S[nElements] : new ::TH1S[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1S(void *p) {
      delete (static_cast<::TH1S*>(p));
   }
   static void deleteArray_TH1S(void *p) {
      delete [] (static_cast<::TH1S*>(p));
   }
   static void destruct_TH1S(void *p) {
      typedef ::TH1S current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1S(void *p, TDirectory *dir) {
      ((::TH1S*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1S(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1S*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1S

//______________________________________________________________________________
void TH1I::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1I.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH1I::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH1I::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1I(void *p) {
      return  p ? new(p) ::TH1I : new ::TH1I;
   }
   static void *newArray_TH1I(Long_t nElements, void *p) {
      return p ? new(p) ::TH1I[nElements] : new ::TH1I[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1I(void *p) {
      delete (static_cast<::TH1I*>(p));
   }
   static void deleteArray_TH1I(void *p) {
      delete [] (static_cast<::TH1I*>(p));
   }
   static void destruct_TH1I(void *p) {
      typedef ::TH1I current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1I(void *p, TDirectory *dir) {
      ((::TH1I*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1I(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1I*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1I

//______________________________________________________________________________
void TH1L::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1L.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH1L::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH1L::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1L(void *p) {
      return  p ? new(p) ::TH1L : new ::TH1L;
   }
   static void *newArray_TH1L(Long_t nElements, void *p) {
      return p ? new(p) ::TH1L[nElements] : new ::TH1L[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1L(void *p) {
      delete (static_cast<::TH1L*>(p));
   }
   static void deleteArray_TH1L(void *p) {
      delete [] (static_cast<::TH1L*>(p));
   }
   static void destruct_TH1L(void *p) {
      typedef ::TH1L current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1L(void *p, TDirectory *dir) {
      ((::TH1L*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1L(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1L*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1L

//______________________________________________________________________________
void TH1F::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1F.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH1F::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH1F::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1F(void *p) {
      return  p ? new(p) ::TH1F : new ::TH1F;
   }
   static void *newArray_TH1F(Long_t nElements, void *p) {
      return p ? new(p) ::TH1F[nElements] : new ::TH1F[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1F(void *p) {
      delete (static_cast<::TH1F*>(p));
   }
   static void deleteArray_TH1F(void *p) {
      delete [] (static_cast<::TH1F*>(p));
   }
   static void destruct_TH1F(void *p) {
      typedef ::TH1F current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1F(void *p, TDirectory *dir) {
      ((::TH1F*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1F(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1F*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1F

//______________________________________________________________________________
void TH1D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH1D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH1D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1D(void *p) {
      return  p ? new(p) ::TH1D : new ::TH1D;
   }
   static void *newArray_TH1D(Long_t nElements, void *p) {
      return p ? new(p) ::TH1D[nElements] : new ::TH1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1D(void *p) {
      delete (static_cast<::TH1D*>(p));
   }
   static void deleteArray_TH1D(void *p) {
      delete [] (static_cast<::TH1D*>(p));
   }
   static void destruct_TH1D(void *p) {
      typedef ::TH1D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH1D(void *p, TDirectory *dir) {
      ((::TH1D*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH1D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH1D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH1D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TH2(void *p) {
      delete (static_cast<::TH2*>(p));
   }
   static void deleteArray_TH2(void *p) {
      delete [] (static_cast<::TH2*>(p));
   }
   static void destruct_TH2(void *p) {
      typedef ::TH2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2(void *p, TDirectory *dir) {
      ((::TH2*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2(TBuffer &buf, void *obj) {
      ((::TH2*)obj)->::TH2::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2C(void *p) {
      return  p ? new(p) ::TH2C : new ::TH2C;
   }
   static void *newArray_TH2C(Long_t nElements, void *p) {
      return p ? new(p) ::TH2C[nElements] : new ::TH2C[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2C(void *p) {
      delete (static_cast<::TH2C*>(p));
   }
   static void deleteArray_TH2C(void *p) {
      delete [] (static_cast<::TH2C*>(p));
   }
   static void destruct_TH2C(void *p) {
      typedef ::TH2C current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2C(void *p, TDirectory *dir) {
      ((::TH2C*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2C(TBuffer &buf, void *obj) {
      ((::TH2C*)obj)->::TH2C::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2C(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2C*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2C

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2S(void *p) {
      return  p ? new(p) ::TH2S : new ::TH2S;
   }
   static void *newArray_TH2S(Long_t nElements, void *p) {
      return p ? new(p) ::TH2S[nElements] : new ::TH2S[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2S(void *p) {
      delete (static_cast<::TH2S*>(p));
   }
   static void deleteArray_TH2S(void *p) {
      delete [] (static_cast<::TH2S*>(p));
   }
   static void destruct_TH2S(void *p) {
      typedef ::TH2S current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2S(void *p, TDirectory *dir) {
      ((::TH2S*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2S(TBuffer &buf, void *obj) {
      ((::TH2S*)obj)->::TH2S::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2S(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2S*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2S

//______________________________________________________________________________
void TH2I::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2I.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2I::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2I::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2I(void *p) {
      return  p ? new(p) ::TH2I : new ::TH2I;
   }
   static void *newArray_TH2I(Long_t nElements, void *p) {
      return p ? new(p) ::TH2I[nElements] : new ::TH2I[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2I(void *p) {
      delete (static_cast<::TH2I*>(p));
   }
   static void deleteArray_TH2I(void *p) {
      delete [] (static_cast<::TH2I*>(p));
   }
   static void destruct_TH2I(void *p) {
      typedef ::TH2I current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2I(void *p, TDirectory *dir) {
      ((::TH2I*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2I(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2I*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2I

//______________________________________________________________________________
void TH2L::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2L.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2L::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2L::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2L(void *p) {
      return  p ? new(p) ::TH2L : new ::TH2L;
   }
   static void *newArray_TH2L(Long_t nElements, void *p) {
      return p ? new(p) ::TH2L[nElements] : new ::TH2L[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2L(void *p) {
      delete (static_cast<::TH2L*>(p));
   }
   static void deleteArray_TH2L(void *p) {
      delete [] (static_cast<::TH2L*>(p));
   }
   static void destruct_TH2L(void *p) {
      typedef ::TH2L current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2L(void *p, TDirectory *dir) {
      ((::TH2L*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2L(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2L*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2L

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2F(void *p) {
      return  p ? new(p) ::TH2F : new ::TH2F;
   }
   static void *newArray_TH2F(Long_t nElements, void *p) {
      return p ? new(p) ::TH2F[nElements] : new ::TH2F[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2F(void *p) {
      delete (static_cast<::TH2F*>(p));
   }
   static void deleteArray_TH2F(void *p) {
      delete [] (static_cast<::TH2F*>(p));
   }
   static void destruct_TH2F(void *p) {
      typedef ::TH2F current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2F(void *p, TDirectory *dir) {
      ((::TH2F*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2F(TBuffer &buf, void *obj) {
      ((::TH2F*)obj)->::TH2F::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2F(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2F*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2F

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2D(void *p) {
      return  p ? new(p) ::TH2D : new ::TH2D;
   }
   static void *newArray_TH2D(Long_t nElements, void *p) {
      return p ? new(p) ::TH2D[nElements] : new ::TH2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2D(void *p) {
      delete (static_cast<::TH2D*>(p));
   }
   static void deleteArray_TH2D(void *p) {
      delete [] (static_cast<::TH2D*>(p));
   }
   static void destruct_TH2D(void *p) {
      typedef ::TH2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2D(void *p, TDirectory *dir) {
      ((::TH2D*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2D(TBuffer &buf, void *obj) {
      ((::TH2D*)obj)->::TH2D::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2D

//______________________________________________________________________________
void TH2PolyBin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2PolyBin.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2PolyBin::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2PolyBin::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2PolyBin(void *p) {
      return  p ? new(p) ::TH2PolyBin : new ::TH2PolyBin;
   }
   static void *newArray_TH2PolyBin(Long_t nElements, void *p) {
      return p ? new(p) ::TH2PolyBin[nElements] : new ::TH2PolyBin[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2PolyBin(void *p) {
      delete (static_cast<::TH2PolyBin*>(p));
   }
   static void deleteArray_TH2PolyBin(void *p) {
      delete [] (static_cast<::TH2PolyBin*>(p));
   }
   static void destruct_TH2PolyBin(void *p) {
      typedef ::TH2PolyBin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TH2PolyBin

//______________________________________________________________________________
void TH2Poly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2Poly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH2Poly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH2Poly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2Poly(void *p) {
      return  p ? new(p) ::TH2Poly : new ::TH2Poly;
   }
   static void *newArray_TH2Poly(Long_t nElements, void *p) {
      return p ? new(p) ::TH2Poly[nElements] : new ::TH2Poly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2Poly(void *p) {
      delete (static_cast<::TH2Poly*>(p));
   }
   static void deleteArray_TH2Poly(void *p) {
      delete [] (static_cast<::TH2Poly*>(p));
   }
   static void destruct_TH2Poly(void *p) {
      typedef ::TH2Poly current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH2Poly(void *p, TDirectory *dir) {
      ((::TH2Poly*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH2Poly(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH2Poly*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH2Poly

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TH3(void *p) {
      delete (static_cast<::TH3*>(p));
   }
   static void deleteArray_TH3(void *p) {
      delete [] (static_cast<::TH3*>(p));
   }
   static void destruct_TH3(void *p) {
      typedef ::TH3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3(void *p, TDirectory *dir) {
      ((::TH3*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH3(TBuffer &buf, void *obj) {
      ((::TH3*)obj)->::TH3::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3C(void *p) {
      return  p ? new(p) ::TH3C : new ::TH3C;
   }
   static void *newArray_TH3C(Long_t nElements, void *p) {
      return p ? new(p) ::TH3C[nElements] : new ::TH3C[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3C(void *p) {
      delete (static_cast<::TH3C*>(p));
   }
   static void deleteArray_TH3C(void *p) {
      delete [] (static_cast<::TH3C*>(p));
   }
   static void destruct_TH3C(void *p) {
      typedef ::TH3C current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3C(void *p, TDirectory *dir) {
      ((::TH3C*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH3C(TBuffer &buf, void *obj) {
      ((::TH3C*)obj)->::TH3C::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3C(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3C*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3C

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3S(void *p) {
      return  p ? new(p) ::TH3S : new ::TH3S;
   }
   static void *newArray_TH3S(Long_t nElements, void *p) {
      return p ? new(p) ::TH3S[nElements] : new ::TH3S[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3S(void *p) {
      delete (static_cast<::TH3S*>(p));
   }
   static void deleteArray_TH3S(void *p) {
      delete [] (static_cast<::TH3S*>(p));
   }
   static void destruct_TH3S(void *p) {
      typedef ::TH3S current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3S(void *p, TDirectory *dir) {
      ((::TH3S*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH3S(TBuffer &buf, void *obj) {
      ((::TH3S*)obj)->::TH3S::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3S(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3S*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3S

//______________________________________________________________________________
void TH3I::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH3I.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH3I::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH3I::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3I(void *p) {
      return  p ? new(p) ::TH3I : new ::TH3I;
   }
   static void *newArray_TH3I(Long_t nElements, void *p) {
      return p ? new(p) ::TH3I[nElements] : new ::TH3I[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3I(void *p) {
      delete (static_cast<::TH3I*>(p));
   }
   static void deleteArray_TH3I(void *p) {
      delete [] (static_cast<::TH3I*>(p));
   }
   static void destruct_TH3I(void *p) {
      typedef ::TH3I current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3I(void *p, TDirectory *dir) {
      ((::TH3I*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3I(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3I*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3I

//______________________________________________________________________________
void TH3L::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH3L.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TH3L::Class(),this);
   } else {
      R__b.WriteClassBuffer(TH3L::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3L(void *p) {
      return  p ? new(p) ::TH3L : new ::TH3L;
   }
   static void *newArray_TH3L(Long_t nElements, void *p) {
      return p ? new(p) ::TH3L[nElements] : new ::TH3L[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3L(void *p) {
      delete (static_cast<::TH3L*>(p));
   }
   static void deleteArray_TH3L(void *p) {
      delete [] (static_cast<::TH3L*>(p));
   }
   static void destruct_TH3L(void *p) {
      typedef ::TH3L current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3L(void *p, TDirectory *dir) {
      ((::TH3L*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3L(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3L*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3L

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3F(void *p) {
      return  p ? new(p) ::TH3F : new ::TH3F;
   }
   static void *newArray_TH3F(Long_t nElements, void *p) {
      return p ? new(p) ::TH3F[nElements] : new ::TH3F[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3F(void *p) {
      delete (static_cast<::TH3F*>(p));
   }
   static void deleteArray_TH3F(void *p) {
      delete [] (static_cast<::TH3F*>(p));
   }
   static void destruct_TH3F(void *p) {
      typedef ::TH3F current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3F(void *p, TDirectory *dir) {
      ((::TH3F*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH3F(TBuffer &buf, void *obj) {
      ((::TH3F*)obj)->::TH3F::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3F(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3F*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3F

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH3D(void *p) {
      return  p ? new(p) ::TH3D : new ::TH3D;
   }
   static void *newArray_TH3D(Long_t nElements, void *p) {
      return p ? new(p) ::TH3D[nElements] : new ::TH3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH3D(void *p) {
      delete (static_cast<::TH3D*>(p));
   }
   static void deleteArray_TH3D(void *p) {
      delete [] (static_cast<::TH3D*>(p));
   }
   static void destruct_TH3D(void *p) {
      typedef ::TH3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TH3D(void *p, TDirectory *dir) {
      ((::TH3D*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH3D(TBuffer &buf, void *obj) {
      ((::TH3D*)obj)->::TH3D::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TH3D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TH3D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TH3D

//______________________________________________________________________________
void THLimitsFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class THLimitsFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THLimitsFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(THLimitsFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THLimitsFinder(void *p) {
      return  p ? new(p) ::THLimitsFinder : new ::THLimitsFinder;
   }
   static void *newArray_THLimitsFinder(Long_t nElements, void *p) {
      return p ? new(p) ::THLimitsFinder[nElements] : new ::THLimitsFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_THLimitsFinder(void *p) {
      delete (static_cast<::THLimitsFinder*>(p));
   }
   static void deleteArray_THLimitsFinder(void *p) {
      delete [] (static_cast<::THLimitsFinder*>(p));
   }
   static void destruct_THLimitsFinder(void *p) {
      typedef ::THLimitsFinder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THLimitsFinder

//______________________________________________________________________________
void THnBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THnBase(void *p) {
      delete (static_cast<::THnBase*>(p));
   }
   static void deleteArray_THnBase(void *p) {
      delete [] (static_cast<::THnBase*>(p));
   }
   static void destruct_THnBase(void *p) {
      typedef ::THnBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnBase(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnBase*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnBase

namespace ROOT {
   namespace Internal {
//______________________________________________________________________________
void THnBaseBrowsable::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Internal::THnBaseBrowsable.

   TNamed::Streamer(R__b);
}

} // namespace ROOT::Internal
} // namespace ROOT::Internal
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLTHnBaseBrowsable(void *p) {
      delete (static_cast<::ROOT::Internal::THnBaseBrowsable*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLTHnBaseBrowsable(void *p) {
      delete [] (static_cast<::ROOT::Internal::THnBaseBrowsable*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLTHnBaseBrowsable(void *p) {
      typedef ::ROOT::Internal::THnBaseBrowsable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLInternalcLcLTHnBaseBrowsable(TBuffer &buf, void *obj) {
      ((::ROOT::Internal::THnBaseBrowsable*)obj)->::ROOT::Internal::THnBaseBrowsable::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Internal::THnBaseBrowsable

//______________________________________________________________________________
void THnIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnIter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnIter::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnIter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THnIter(void *p) {
      delete (static_cast<::THnIter*>(p));
   }
   static void deleteArray_THnIter(void *p) {
      delete [] (static_cast<::THnIter*>(p));
   }
   static void destruct_THnIter(void *p) {
      typedef ::THnIter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THnIter

//______________________________________________________________________________
void THnChain::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnChain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnChain::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnChain::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THnChain(void *p) {
      delete (static_cast<::THnChain*>(p));
   }
   static void deleteArray_THnChain(void *p) {
      delete [] (static_cast<::THnChain*>(p));
   }
   static void destruct_THnChain(void *p) {
      typedef ::THnChain current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THnChain

//______________________________________________________________________________
void TNDArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArray::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArray(void *p) {
      delete (static_cast<::TNDArray*>(p));
   }
   static void deleteArray_TNDArray(void *p) {
      delete [] (static_cast<::TNDArray*>(p));
   }
   static void destruct_TNDArray(void *p) {
      typedef ::TNDArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArray

//______________________________________________________________________________
template <> void TNDArrayRef<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEdoublegR(void *p) {
      delete (static_cast<::TNDArrayRef<double>*>(p));
   }
   static void deleteArray_TNDArrayReflEdoublegR(void *p) {
      delete [] (static_cast<::TNDArrayRef<double>*>(p));
   }
   static void destruct_TNDArrayReflEdoublegR(void *p) {
      typedef ::TNDArrayRef<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<double>

//______________________________________________________________________________
template <> void TNDArrayRef<char>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<char>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<char>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<char>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEchargR(void *p) {
      delete (static_cast<::TNDArrayRef<char>*>(p));
   }
   static void deleteArray_TNDArrayReflEchargR(void *p) {
      delete [] (static_cast<::TNDArrayRef<char>*>(p));
   }
   static void destruct_TNDArrayReflEchargR(void *p) {
      typedef ::TNDArrayRef<char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<char>

//______________________________________________________________________________
template <> void TNDArrayRef<short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<short>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEshortgR(void *p) {
      delete (static_cast<::TNDArrayRef<short>*>(p));
   }
   static void deleteArray_TNDArrayReflEshortgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<short>*>(p));
   }
   static void destruct_TNDArrayReflEshortgR(void *p) {
      typedef ::TNDArrayRef<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<short>

//______________________________________________________________________________
template <> void TNDArrayRef<int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<int>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEintgR(void *p) {
      delete (static_cast<::TNDArrayRef<int>*>(p));
   }
   static void deleteArray_TNDArrayReflEintgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<int>*>(p));
   }
   static void destruct_TNDArrayReflEintgR(void *p) {
      typedef ::TNDArrayRef<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<int>

//______________________________________________________________________________
template <> void TNDArrayRef<Long64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<Long64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<Long64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<Long64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflELong64_tgR(void *p) {
      delete (static_cast<::TNDArrayRef<Long64_t>*>(p));
   }
   static void deleteArray_TNDArrayReflELong64_tgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<Long64_t>*>(p));
   }
   static void destruct_TNDArrayReflELong64_tgR(void *p) {
      typedef ::TNDArrayRef<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<Long64_t>

//______________________________________________________________________________
template <> void TNDArrayRef<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEfloatgR(void *p) {
      delete (static_cast<::TNDArrayRef<float>*>(p));
   }
   static void deleteArray_TNDArrayReflEfloatgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<float>*>(p));
   }
   static void destruct_TNDArrayReflEfloatgR(void *p) {
      typedef ::TNDArrayRef<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<float>

//______________________________________________________________________________
template <> void TNDArrayRef<unsigned short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<unsigned short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<unsigned short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<unsigned short>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEunsignedsPshortgR(void *p) {
      delete (static_cast<::TNDArrayRef<unsigned short>*>(p));
   }
   static void deleteArray_TNDArrayReflEunsignedsPshortgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<unsigned short>*>(p));
   }
   static void destruct_TNDArrayReflEunsignedsPshortgR(void *p) {
      typedef ::TNDArrayRef<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<unsigned short>

//______________________________________________________________________________
template <> void TNDArrayRef<unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEunsignedsPintgR(void *p) {
      delete (static_cast<::TNDArrayRef<unsigned int>*>(p));
   }
   static void deleteArray_TNDArrayReflEunsignedsPintgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<unsigned int>*>(p));
   }
   static void destruct_TNDArrayReflEunsignedsPintgR(void *p) {
      typedef ::TNDArrayRef<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<unsigned int>

//______________________________________________________________________________
template <> void TNDArrayRef<unsigned long>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<unsigned long>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<unsigned long>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<unsigned long>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEunsignedsPlonggR(void *p) {
      delete (static_cast<::TNDArrayRef<unsigned long>*>(p));
   }
   static void deleteArray_TNDArrayReflEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::TNDArrayRef<unsigned long>*>(p));
   }
   static void destruct_TNDArrayReflEunsignedsPlonggR(void *p) {
      typedef ::TNDArrayRef<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<unsigned long>

//______________________________________________________________________________
template <> void TNDArrayRef<ULong64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<ULong64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<ULong64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<ULong64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflEULong64_tgR(void *p) {
      delete (static_cast<::TNDArrayRef<ULong64_t>*>(p));
   }
   static void deleteArray_TNDArrayReflEULong64_tgR(void *p) {
      delete [] (static_cast<::TNDArrayRef<ULong64_t>*>(p));
   }
   static void destruct_TNDArrayReflEULong64_tgR(void *p) {
      typedef ::TNDArrayRef<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<ULong64_t>

//______________________________________________________________________________
template <> void TNDArrayRef<long>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayRef<long>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayRef<long>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayRef<long>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNDArrayReflElonggR(void *p) {
      delete (static_cast<::TNDArrayRef<long>*>(p));
   }
   static void deleteArray_TNDArrayReflElonggR(void *p) {
      delete [] (static_cast<::TNDArrayRef<long>*>(p));
   }
   static void destruct_TNDArrayReflElonggR(void *p) {
      typedef ::TNDArrayRef<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayRef<long>

//______________________________________________________________________________
template <> void TNDArrayT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEdoublegR(void *p) {
      return  p ? new(p) ::TNDArrayT<double> : new ::TNDArrayT<double>;
   }
   static void *newArray_TNDArrayTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<double>[nElements] : new ::TNDArrayT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEdoublegR(void *p) {
      delete (static_cast<::TNDArrayT<double>*>(p));
   }
   static void deleteArray_TNDArrayTlEdoublegR(void *p) {
      delete [] (static_cast<::TNDArrayT<double>*>(p));
   }
   static void destruct_TNDArrayTlEdoublegR(void *p) {
      typedef ::TNDArrayT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<double>

//______________________________________________________________________________
template <> void TNDArrayT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEfloatgR(void *p) {
      return  p ? new(p) ::TNDArrayT<float> : new ::TNDArrayT<float>;
   }
   static void *newArray_TNDArrayTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<float>[nElements] : new ::TNDArrayT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEfloatgR(void *p) {
      delete (static_cast<::TNDArrayT<float>*>(p));
   }
   static void deleteArray_TNDArrayTlEfloatgR(void *p) {
      delete [] (static_cast<::TNDArrayT<float>*>(p));
   }
   static void destruct_TNDArrayTlEfloatgR(void *p) {
      typedef ::TNDArrayT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<float>

//______________________________________________________________________________
template <> void TNDArrayT<Long64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<Long64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<Long64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<Long64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlELong64_tgR(void *p) {
      return  p ? new(p) ::TNDArrayT<Long64_t> : new ::TNDArrayT<Long64_t>;
   }
   static void *newArray_TNDArrayTlELong64_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<Long64_t>[nElements] : new ::TNDArrayT<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlELong64_tgR(void *p) {
      delete (static_cast<::TNDArrayT<Long64_t>*>(p));
   }
   static void deleteArray_TNDArrayTlELong64_tgR(void *p) {
      delete [] (static_cast<::TNDArrayT<Long64_t>*>(p));
   }
   static void destruct_TNDArrayTlELong64_tgR(void *p) {
      typedef ::TNDArrayT<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<Long64_t>

//______________________________________________________________________________
template <> void TNDArrayT<long>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<long>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<long>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<long>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlElonggR(void *p) {
      return  p ? new(p) ::TNDArrayT<long> : new ::TNDArrayT<long>;
   }
   static void *newArray_TNDArrayTlElonggR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<long>[nElements] : new ::TNDArrayT<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlElonggR(void *p) {
      delete (static_cast<::TNDArrayT<long>*>(p));
   }
   static void deleteArray_TNDArrayTlElonggR(void *p) {
      delete [] (static_cast<::TNDArrayT<long>*>(p));
   }
   static void destruct_TNDArrayTlElonggR(void *p) {
      typedef ::TNDArrayT<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<long>

//______________________________________________________________________________
template <> void TNDArrayT<int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEintgR(void *p) {
      return  p ? new(p) ::TNDArrayT<int> : new ::TNDArrayT<int>;
   }
   static void *newArray_TNDArrayTlEintgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<int>[nElements] : new ::TNDArrayT<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEintgR(void *p) {
      delete (static_cast<::TNDArrayT<int>*>(p));
   }
   static void deleteArray_TNDArrayTlEintgR(void *p) {
      delete [] (static_cast<::TNDArrayT<int>*>(p));
   }
   static void destruct_TNDArrayTlEintgR(void *p) {
      typedef ::TNDArrayT<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<int>

//______________________________________________________________________________
template <> void TNDArrayT<short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<short>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEshortgR(void *p) {
      return  p ? new(p) ::TNDArrayT<short> : new ::TNDArrayT<short>;
   }
   static void *newArray_TNDArrayTlEshortgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<short>[nElements] : new ::TNDArrayT<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEshortgR(void *p) {
      delete (static_cast<::TNDArrayT<short>*>(p));
   }
   static void deleteArray_TNDArrayTlEshortgR(void *p) {
      delete [] (static_cast<::TNDArrayT<short>*>(p));
   }
   static void destruct_TNDArrayTlEshortgR(void *p) {
      typedef ::TNDArrayT<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<short>

//______________________________________________________________________________
template <> void TNDArrayT<char>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<char>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<char>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<char>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEchargR(void *p) {
      return  p ? new(p) ::TNDArrayT<char> : new ::TNDArrayT<char>;
   }
   static void *newArray_TNDArrayTlEchargR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<char>[nElements] : new ::TNDArrayT<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEchargR(void *p) {
      delete (static_cast<::TNDArrayT<char>*>(p));
   }
   static void deleteArray_TNDArrayTlEchargR(void *p) {
      delete [] (static_cast<::TNDArrayT<char>*>(p));
   }
   static void destruct_TNDArrayTlEchargR(void *p) {
      typedef ::TNDArrayT<char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<char>

//______________________________________________________________________________
template <> void TNDArrayT<ULong64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<ULong64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<ULong64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<ULong64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEULong64_tgR(void *p) {
      return  p ? new(p) ::TNDArrayT<ULong64_t> : new ::TNDArrayT<ULong64_t>;
   }
   static void *newArray_TNDArrayTlEULong64_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<ULong64_t>[nElements] : new ::TNDArrayT<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEULong64_tgR(void *p) {
      delete (static_cast<::TNDArrayT<ULong64_t>*>(p));
   }
   static void deleteArray_TNDArrayTlEULong64_tgR(void *p) {
      delete [] (static_cast<::TNDArrayT<ULong64_t>*>(p));
   }
   static void destruct_TNDArrayTlEULong64_tgR(void *p) {
      typedef ::TNDArrayT<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<ULong64_t>

//______________________________________________________________________________
template <> void TNDArrayT<unsigned long>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<unsigned long>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<unsigned long>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<unsigned long>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEunsignedsPlonggR(void *p) {
      return  p ? new(p) ::TNDArrayT<unsigned long> : new ::TNDArrayT<unsigned long>;
   }
   static void *newArray_TNDArrayTlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<unsigned long>[nElements] : new ::TNDArrayT<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEunsignedsPlonggR(void *p) {
      delete (static_cast<::TNDArrayT<unsigned long>*>(p));
   }
   static void deleteArray_TNDArrayTlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::TNDArrayT<unsigned long>*>(p));
   }
   static void destruct_TNDArrayTlEunsignedsPlonggR(void *p) {
      typedef ::TNDArrayT<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<unsigned long>

//______________________________________________________________________________
template <> void TNDArrayT<unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEunsignedsPintgR(void *p) {
      return  p ? new(p) ::TNDArrayT<unsigned int> : new ::TNDArrayT<unsigned int>;
   }
   static void *newArray_TNDArrayTlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<unsigned int>[nElements] : new ::TNDArrayT<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEunsignedsPintgR(void *p) {
      delete (static_cast<::TNDArrayT<unsigned int>*>(p));
   }
   static void deleteArray_TNDArrayTlEunsignedsPintgR(void *p) {
      delete [] (static_cast<::TNDArrayT<unsigned int>*>(p));
   }
   static void destruct_TNDArrayTlEunsignedsPintgR(void *p) {
      typedef ::TNDArrayT<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<unsigned int>

//______________________________________________________________________________
template <> void TNDArrayT<unsigned short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNDArrayT<unsigned short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNDArrayT<unsigned short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNDArrayT<unsigned short>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNDArrayTlEunsignedsPshortgR(void *p) {
      return  p ? new(p) ::TNDArrayT<unsigned short> : new ::TNDArrayT<unsigned short>;
   }
   static void *newArray_TNDArrayTlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? new(p) ::TNDArrayT<unsigned short>[nElements] : new ::TNDArrayT<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNDArrayTlEunsignedsPshortgR(void *p) {
      delete (static_cast<::TNDArrayT<unsigned short>*>(p));
   }
   static void deleteArray_TNDArrayTlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<::TNDArrayT<unsigned short>*>(p));
   }
   static void destruct_TNDArrayTlEunsignedsPshortgR(void *p) {
      typedef ::TNDArrayT<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNDArrayT<unsigned short>

//______________________________________________________________________________
void THn::Streamer(TBuffer &R__b)
{
   // Stream an object of class THn.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THn::Class(),this);
   } else {
      R__b.WriteClassBuffer(THn::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THn(void *p) {
      delete (static_cast<::THn*>(p));
   }
   static void deleteArray_THn(void *p) {
      delete [] (static_cast<::THn*>(p));
   }
   static void destruct_THn(void *p) {
      typedef ::THn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THn(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THn*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THn

//______________________________________________________________________________
template <> void THnT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEfloatgR(void *p) {
      return  p ? new(p) ::THnT<float> : new ::THnT<float>;
   }
   static void *newArray_THnTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<float>[nElements] : new ::THnT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEfloatgR(void *p) {
      delete (static_cast<::THnT<float>*>(p));
   }
   static void deleteArray_THnTlEfloatgR(void *p) {
      delete [] (static_cast<::THnT<float>*>(p));
   }
   static void destruct_THnTlEfloatgR(void *p) {
      typedef ::THnT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEfloatgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<float>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<float>

//______________________________________________________________________________
template <> void THnT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEdoublegR(void *p) {
      return  p ? new(p) ::THnT<double> : new ::THnT<double>;
   }
   static void *newArray_THnTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<double>[nElements] : new ::THnT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEdoublegR(void *p) {
      delete (static_cast<::THnT<double>*>(p));
   }
   static void deleteArray_THnTlEdoublegR(void *p) {
      delete [] (static_cast<::THnT<double>*>(p));
   }
   static void destruct_THnTlEdoublegR(void *p) {
      typedef ::THnT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEdoublegR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<double>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<double>

//______________________________________________________________________________
template <> void THnT<char>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<char>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<char>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<char>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEchargR(void *p) {
      return  p ? new(p) ::THnT<char> : new ::THnT<char>;
   }
   static void *newArray_THnTlEchargR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<char>[nElements] : new ::THnT<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEchargR(void *p) {
      delete (static_cast<::THnT<char>*>(p));
   }
   static void deleteArray_THnTlEchargR(void *p) {
      delete [] (static_cast<::THnT<char>*>(p));
   }
   static void destruct_THnTlEchargR(void *p) {
      typedef ::THnT<char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEchargR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<char>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<char>

//______________________________________________________________________________
template <> void THnT<short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<short>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEshortgR(void *p) {
      return  p ? new(p) ::THnT<short> : new ::THnT<short>;
   }
   static void *newArray_THnTlEshortgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<short>[nElements] : new ::THnT<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEshortgR(void *p) {
      delete (static_cast<::THnT<short>*>(p));
   }
   static void deleteArray_THnTlEshortgR(void *p) {
      delete [] (static_cast<::THnT<short>*>(p));
   }
   static void destruct_THnTlEshortgR(void *p) {
      typedef ::THnT<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEshortgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<short>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<short>

//______________________________________________________________________________
template <> void THnT<int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEintgR(void *p) {
      return  p ? new(p) ::THnT<int> : new ::THnT<int>;
   }
   static void *newArray_THnTlEintgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<int>[nElements] : new ::THnT<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEintgR(void *p) {
      delete (static_cast<::THnT<int>*>(p));
   }
   static void deleteArray_THnTlEintgR(void *p) {
      delete [] (static_cast<::THnT<int>*>(p));
   }
   static void destruct_THnTlEintgR(void *p) {
      typedef ::THnT<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEintgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<int>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<int>

//______________________________________________________________________________
template <> void THnT<Long64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<Long64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<Long64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<Long64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlELong64_tgR(void *p) {
      return  p ? new(p) ::THnT<Long64_t> : new ::THnT<Long64_t>;
   }
   static void *newArray_THnTlELong64_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<Long64_t>[nElements] : new ::THnT<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlELong64_tgR(void *p) {
      delete (static_cast<::THnT<Long64_t>*>(p));
   }
   static void deleteArray_THnTlELong64_tgR(void *p) {
      delete [] (static_cast<::THnT<Long64_t>*>(p));
   }
   static void destruct_THnTlELong64_tgR(void *p) {
      typedef ::THnT<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlELong64_tgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<Long64_t>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<Long64_t>

//______________________________________________________________________________
template <> void THnT<unsigned short>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<unsigned short>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<unsigned short>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<unsigned short>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEunsignedsPshortgR(void *p) {
      return  p ? new(p) ::THnT<unsigned short> : new ::THnT<unsigned short>;
   }
   static void *newArray_THnTlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<unsigned short>[nElements] : new ::THnT<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEunsignedsPshortgR(void *p) {
      delete (static_cast<::THnT<unsigned short>*>(p));
   }
   static void deleteArray_THnTlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<::THnT<unsigned short>*>(p));
   }
   static void destruct_THnTlEunsignedsPshortgR(void *p) {
      typedef ::THnT<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEunsignedsPshortgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<unsigned short>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<unsigned short>

//______________________________________________________________________________
template <> void THnT<unsigned int>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<unsigned int>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<unsigned int>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<unsigned int>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEunsignedsPintgR(void *p) {
      return  p ? new(p) ::THnT<unsigned int> : new ::THnT<unsigned int>;
   }
   static void *newArray_THnTlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<unsigned int>[nElements] : new ::THnT<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEunsignedsPintgR(void *p) {
      delete (static_cast<::THnT<unsigned int>*>(p));
   }
   static void deleteArray_THnTlEunsignedsPintgR(void *p) {
      delete [] (static_cast<::THnT<unsigned int>*>(p));
   }
   static void destruct_THnTlEunsignedsPintgR(void *p) {
      typedef ::THnT<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEunsignedsPintgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<unsigned int>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<unsigned int>

//______________________________________________________________________________
template <> void THnT<unsigned long>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<unsigned long>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<unsigned long>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<unsigned long>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEunsignedsPlonggR(void *p) {
      return  p ? new(p) ::THnT<unsigned long> : new ::THnT<unsigned long>;
   }
   static void *newArray_THnTlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<unsigned long>[nElements] : new ::THnT<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEunsignedsPlonggR(void *p) {
      delete (static_cast<::THnT<unsigned long>*>(p));
   }
   static void deleteArray_THnTlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::THnT<unsigned long>*>(p));
   }
   static void destruct_THnTlEunsignedsPlonggR(void *p) {
      typedef ::THnT<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEunsignedsPlonggR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<unsigned long>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<unsigned long>

//______________________________________________________________________________
template <> void THnT<ULong64_t>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<ULong64_t>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<ULong64_t>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<ULong64_t>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlEULong64_tgR(void *p) {
      return  p ? new(p) ::THnT<ULong64_t> : new ::THnT<ULong64_t>;
   }
   static void *newArray_THnTlEULong64_tgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<ULong64_t>[nElements] : new ::THnT<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlEULong64_tgR(void *p) {
      delete (static_cast<::THnT<ULong64_t>*>(p));
   }
   static void deleteArray_THnTlEULong64_tgR(void *p) {
      delete [] (static_cast<::THnT<ULong64_t>*>(p));
   }
   static void destruct_THnTlEULong64_tgR(void *p) {
      typedef ::THnT<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlEULong64_tgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<ULong64_t>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<ULong64_t>

//______________________________________________________________________________
template <> void THnT<long>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnT<long>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnT<long>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnT<long>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnTlElonggR(void *p) {
      return  p ? new(p) ::THnT<long> : new ::THnT<long>;
   }
   static void *newArray_THnTlElonggR(Long_t nElements, void *p) {
      return p ? new(p) ::THnT<long>[nElements] : new ::THnT<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnTlElonggR(void *p) {
      delete (static_cast<::THnT<long>*>(p));
   }
   static void deleteArray_THnTlElonggR(void *p) {
      delete [] (static_cast<::THnT<long>*>(p));
   }
   static void destruct_THnTlElonggR(void *p) {
      typedef ::THnT<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnTlElonggR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnT<long>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnT<long>

//______________________________________________________________________________
void THnSparseArrayChunk::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseArrayChunk.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseArrayChunk::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseArrayChunk::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseArrayChunk(void *p) {
      return  p ? new(p) ::THnSparseArrayChunk : new ::THnSparseArrayChunk;
   }
   static void *newArray_THnSparseArrayChunk(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseArrayChunk[nElements] : new ::THnSparseArrayChunk[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseArrayChunk(void *p) {
      delete (static_cast<::THnSparseArrayChunk*>(p));
   }
   static void deleteArray_THnSparseArrayChunk(void *p) {
      delete [] (static_cast<::THnSparseArrayChunk*>(p));
   }
   static void destruct_THnSparseArrayChunk(void *p) {
      typedef ::THnSparseArrayChunk current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::THnSparseArrayChunk

//______________________________________________________________________________
void THnSparse::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparse::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparse::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THnSparse(void *p) {
      delete (static_cast<::THnSparse*>(p));
   }
   static void deleteArray_THnSparse(void *p) {
      delete [] (static_cast<::THnSparse*>(p));
   }
   static void destruct_THnSparse(void *p) {
      typedef ::THnSparse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparse(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparse*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparse

//______________________________________________________________________________
template <> void THnSparseT<TArrayD>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayD>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayD>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayD>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArrayDgR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayD> : new ::THnSparseT<TArrayD>;
   }
   static void *newArray_THnSparseTlETArrayDgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayD>[nElements] : new ::THnSparseT<TArrayD>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArrayDgR(void *p) {
      delete (static_cast<::THnSparseT<TArrayD>*>(p));
   }
   static void deleteArray_THnSparseTlETArrayDgR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayD>*>(p));
   }
   static void destruct_THnSparseTlETArrayDgR(void *p) {
      typedef ::THnSparseT<TArrayD> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArrayDgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayD>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayD>

//______________________________________________________________________________
template <> void THnSparseT<TArrayF>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayF>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayF>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayF>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArrayFgR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayF> : new ::THnSparseT<TArrayF>;
   }
   static void *newArray_THnSparseTlETArrayFgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayF>[nElements] : new ::THnSparseT<TArrayF>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArrayFgR(void *p) {
      delete (static_cast<::THnSparseT<TArrayF>*>(p));
   }
   static void deleteArray_THnSparseTlETArrayFgR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayF>*>(p));
   }
   static void destruct_THnSparseTlETArrayFgR(void *p) {
      typedef ::THnSparseT<TArrayF> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArrayFgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayF>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayF>

//______________________________________________________________________________
template <> void THnSparseT<TArrayL64>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayL64>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayL64>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayL64>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArrayL64gR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayL64> : new ::THnSparseT<TArrayL64>;
   }
   static void *newArray_THnSparseTlETArrayL64gR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayL64>[nElements] : new ::THnSparseT<TArrayL64>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArrayL64gR(void *p) {
      delete (static_cast<::THnSparseT<TArrayL64>*>(p));
   }
   static void deleteArray_THnSparseTlETArrayL64gR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayL64>*>(p));
   }
   static void destruct_THnSparseTlETArrayL64gR(void *p) {
      typedef ::THnSparseT<TArrayL64> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArrayL64gR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayL64>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayL64>

//______________________________________________________________________________
template <> void THnSparseT<TArrayI>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayI>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayI>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayI>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArrayIgR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayI> : new ::THnSparseT<TArrayI>;
   }
   static void *newArray_THnSparseTlETArrayIgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayI>[nElements] : new ::THnSparseT<TArrayI>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArrayIgR(void *p) {
      delete (static_cast<::THnSparseT<TArrayI>*>(p));
   }
   static void deleteArray_THnSparseTlETArrayIgR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayI>*>(p));
   }
   static void destruct_THnSparseTlETArrayIgR(void *p) {
      typedef ::THnSparseT<TArrayI> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArrayIgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayI>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayI>

//______________________________________________________________________________
template <> void THnSparseT<TArrayS>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayS>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayS>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayS>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArraySgR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayS> : new ::THnSparseT<TArrayS>;
   }
   static void *newArray_THnSparseTlETArraySgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayS>[nElements] : new ::THnSparseT<TArrayS>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArraySgR(void *p) {
      delete (static_cast<::THnSparseT<TArrayS>*>(p));
   }
   static void deleteArray_THnSparseTlETArraySgR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayS>*>(p));
   }
   static void destruct_THnSparseTlETArraySgR(void *p) {
      typedef ::THnSparseT<TArrayS> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArraySgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayS>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayS>

//______________________________________________________________________________
template <> void THnSparseT<TArrayC>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayC>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayC>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayC>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArrayCgR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayC> : new ::THnSparseT<TArrayC>;
   }
   static void *newArray_THnSparseTlETArrayCgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayC>[nElements] : new ::THnSparseT<TArrayC>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArrayCgR(void *p) {
      delete (static_cast<::THnSparseT<TArrayC>*>(p));
   }
   static void deleteArray_THnSparseTlETArrayCgR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayC>*>(p));
   }
   static void destruct_THnSparseTlETArrayCgR(void *p) {
      typedef ::THnSparseT<TArrayC> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArrayCgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayC>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayC>

//______________________________________________________________________________
template <> void THnSparseT<TArrayL>::Streamer(TBuffer &R__b)
{
   // Stream an object of class THnSparseT<TArrayL>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THnSparseT<TArrayL>::Class(),this);
   } else {
      R__b.WriteClassBuffer(THnSparseT<TArrayL>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THnSparseTlETArrayLgR(void *p) {
      return  p ? new(p) ::THnSparseT<TArrayL> : new ::THnSparseT<TArrayL>;
   }
   static void *newArray_THnSparseTlETArrayLgR(Long_t nElements, void *p) {
      return p ? new(p) ::THnSparseT<TArrayL>[nElements] : new ::THnSparseT<TArrayL>[nElements];
   }
   // Wrapper around operator delete
   static void delete_THnSparseTlETArrayLgR(void *p) {
      delete (static_cast<::THnSparseT<TArrayL>*>(p));
   }
   static void deleteArray_THnSparseTlETArrayLgR(void *p) {
      delete [] (static_cast<::THnSparseT<TArrayL>*>(p));
   }
   static void destruct_THnSparseTlETArrayLgR(void *p) {
      typedef ::THnSparseT<TArrayL> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THnSparseTlETArrayLgR(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THnSparseT<TArrayL>*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THnSparseT<TArrayL>

//______________________________________________________________________________
void THStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class THStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(THStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THStack(void *p) {
      return  p ? new(p) ::THStack : new ::THStack;
   }
   static void *newArray_THStack(Long_t nElements, void *p) {
      return p ? new(p) ::THStack[nElements] : new ::THStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_THStack(void *p) {
      delete (static_cast<::THStack*>(p));
   }
   static void deleteArray_THStack(void *p) {
      delete [] (static_cast<::THStack*>(p));
   }
   static void destruct_THStack(void *p) {
      typedef ::THStack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t merge_THStack(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::THStack*)obj)->Merge(coll,info);
   }
} // end of namespace ROOT for class ::THStack

//______________________________________________________________________________
void TKDE::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKDE.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TKDE::Class(),this);
   } else {
      R__b.WriteClassBuffer(TKDE::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKDE(void *p) {
      return  p ? new(p) ::TKDE : new ::TKDE;
   }
   static void *newArray_TKDE(Long_t nElements, void *p) {
      return p ? new(p) ::TKDE[nElements] : new ::TKDE[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKDE(void *p) {
      delete (static_cast<::TKDE*>(p));
   }
   static void deleteArray_TKDE(void *p) {
      delete [] (static_cast<::TKDE*>(p));
   }
   static void destruct_TKDE(void *p) {
      typedef ::TKDE current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TKDE

//______________________________________________________________________________
void TLimitDataSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLimitDataSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLimitDataSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLimitDataSource::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLimitDataSource(void *p) {
      return  p ? new(p) ::TLimitDataSource : new ::TLimitDataSource;
   }
   static void *newArray_TLimitDataSource(Long_t nElements, void *p) {
      return p ? new(p) ::TLimitDataSource[nElements] : new ::TLimitDataSource[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLimitDataSource(void *p) {
      delete (static_cast<::TLimitDataSource*>(p));
   }
   static void deleteArray_TLimitDataSource(void *p) {
      delete [] (static_cast<::TLimitDataSource*>(p));
   }
   static void destruct_TLimitDataSource(void *p) {
      typedef ::TLimitDataSource current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLimitDataSource

//______________________________________________________________________________
void TLimit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLimit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLimit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLimit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLimit(void *p) {
      return  p ? new(p) ::TLimit : new ::TLimit;
   }
   static void *newArray_TLimit(Long_t nElements, void *p) {
      return p ? new(p) ::TLimit[nElements] : new ::TLimit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLimit(void *p) {
      delete (static_cast<::TLimit*>(p));
   }
   static void deleteArray_TLimit(void *p) {
      delete [] (static_cast<::TLimit*>(p));
   }
   static void destruct_TLimit(void *p) {
      typedef ::TLimit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLimit

//______________________________________________________________________________
void TMultiDimFit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMultiDimFit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMultiDimFit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMultiDimFit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMultiDimFit(void *p) {
      return  p ? new(p) ::TMultiDimFit : new ::TMultiDimFit;
   }
   static void *newArray_TMultiDimFit(Long_t nElements, void *p) {
      return p ? new(p) ::TMultiDimFit[nElements] : new ::TMultiDimFit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMultiDimFit(void *p) {
      delete (static_cast<::TMultiDimFit*>(p));
   }
   static void deleteArray_TMultiDimFit(void *p) {
      delete [] (static_cast<::TMultiDimFit*>(p));
   }
   static void destruct_TMultiDimFit(void *p) {
      typedef ::TMultiDimFit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMultiDimFit

//______________________________________________________________________________
void TMultiGraph::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMultiGraph.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMultiGraph::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMultiGraph::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMultiGraph(void *p) {
      return  p ? new(p) ::TMultiGraph : new ::TMultiGraph;
   }
   static void *newArray_TMultiGraph(Long_t nElements, void *p) {
      return p ? new(p) ::TMultiGraph[nElements] : new ::TMultiGraph[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMultiGraph(void *p) {
      delete (static_cast<::TMultiGraph*>(p));
   }
   static void deleteArray_TMultiGraph(void *p) {
      delete [] (static_cast<::TMultiGraph*>(p));
   }
   static void destruct_TMultiGraph(void *p) {
      typedef ::TMultiGraph current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMultiGraph

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPolyMarker(void *p) {
      return  p ? new(p) ::TPolyMarker : new ::TPolyMarker;
   }
   static void *newArray_TPolyMarker(Long_t nElements, void *p) {
      return p ? new(p) ::TPolyMarker[nElements] : new ::TPolyMarker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPolyMarker(void *p) {
      delete (static_cast<::TPolyMarker*>(p));
   }
   static void deleteArray_TPolyMarker(void *p) {
      delete [] (static_cast<::TPolyMarker*>(p));
   }
   static void destruct_TPolyMarker(void *p) {
      typedef ::TPolyMarker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPolyMarker(TBuffer &buf, void *obj) {
      ((::TPolyMarker*)obj)->::TPolyMarker::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TPolyMarker(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TPolyMarker*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TPolyMarker

//______________________________________________________________________________
void TPrincipal::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPrincipal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPrincipal::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPrincipal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPrincipal(void *p) {
      return  p ? new(p) ::TPrincipal : new ::TPrincipal;
   }
   static void *newArray_TPrincipal(Long_t nElements, void *p) {
      return p ? new(p) ::TPrincipal[nElements] : new ::TPrincipal[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPrincipal(void *p) {
      delete (static_cast<::TPrincipal*>(p));
   }
   static void deleteArray_TPrincipal(void *p) {
      delete [] (static_cast<::TPrincipal*>(p));
   }
   static void destruct_TPrincipal(void *p) {
      typedef ::TPrincipal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPrincipal

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProfile(void *p) {
      return  p ? new(p) ::TProfile : new ::TProfile;
   }
   static void *newArray_TProfile(Long_t nElements, void *p) {
      return p ? new(p) ::TProfile[nElements] : new ::TProfile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProfile(void *p) {
      delete (static_cast<::TProfile*>(p));
   }
   static void deleteArray_TProfile(void *p) {
      delete [] (static_cast<::TProfile*>(p));
   }
   static void destruct_TProfile(void *p) {
      typedef ::TProfile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TProfile(void *p, TDirectory *dir) {
      ((::TProfile*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProfile(TBuffer &buf, void *obj) {
      ((::TProfile*)obj)->::TProfile::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProfile(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProfile*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProfile

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProfile2D(void *p) {
      return  p ? new(p) ::TProfile2D : new ::TProfile2D;
   }
   static void *newArray_TProfile2D(Long_t nElements, void *p) {
      return p ? new(p) ::TProfile2D[nElements] : new ::TProfile2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProfile2D(void *p) {
      delete (static_cast<::TProfile2D*>(p));
   }
   static void deleteArray_TProfile2D(void *p) {
      delete [] (static_cast<::TProfile2D*>(p));
   }
   static void destruct_TProfile2D(void *p) {
      typedef ::TProfile2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TProfile2D(void *p, TDirectory *dir) {
      ((::TProfile2D*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TProfile2D(TBuffer &buf, void *obj) {
      ((::TProfile2D*)obj)->::TProfile2D::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProfile2D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProfile2D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProfile2D

//______________________________________________________________________________
void TProfile2PolyBin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProfile2PolyBin.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProfile2PolyBin::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProfile2PolyBin::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProfile2PolyBin(void *p) {
      return  p ? new(p) ::TProfile2PolyBin : new ::TProfile2PolyBin;
   }
   static void *newArray_TProfile2PolyBin(Long_t nElements, void *p) {
      return p ? new(p) ::TProfile2PolyBin[nElements] : new ::TProfile2PolyBin[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProfile2PolyBin(void *p) {
      delete (static_cast<::TProfile2PolyBin*>(p));
   }
   static void deleteArray_TProfile2PolyBin(void *p) {
      delete [] (static_cast<::TProfile2PolyBin*>(p));
   }
   static void destruct_TProfile2PolyBin(void *p) {
      typedef ::TProfile2PolyBin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TProfile2PolyBin

//______________________________________________________________________________
void TProfile2Poly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProfile2Poly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProfile2Poly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProfile2Poly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProfile2Poly(void *p) {
      return  p ? new(p) ::TProfile2Poly : new ::TProfile2Poly;
   }
   static void *newArray_TProfile2Poly(Long_t nElements, void *p) {
      return p ? new(p) ::TProfile2Poly[nElements] : new ::TProfile2Poly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProfile2Poly(void *p) {
      delete (static_cast<::TProfile2Poly*>(p));
   }
   static void deleteArray_TProfile2Poly(void *p) {
      delete [] (static_cast<::TProfile2Poly*>(p));
   }
   static void destruct_TProfile2Poly(void *p) {
      typedef ::TProfile2Poly current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TProfile2Poly(void *p, TDirectory *dir) {
      ((::TProfile2Poly*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProfile2Poly(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProfile2Poly*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProfile2Poly

//______________________________________________________________________________
void TProfile3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProfile3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TProfile3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TProfile3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TProfile3D(void *p) {
      return  p ? new(p) ::TProfile3D : new ::TProfile3D;
   }
   static void *newArray_TProfile3D(Long_t nElements, void *p) {
      return p ? new(p) ::TProfile3D[nElements] : new ::TProfile3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TProfile3D(void *p) {
      delete (static_cast<::TProfile3D*>(p));
   }
   static void deleteArray_TProfile3D(void *p) {
      delete [] (static_cast<::TProfile3D*>(p));
   }
   static void destruct_TProfile3D(void *p) {
      typedef ::TProfile3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the directory auto add.
   static void directoryAutoAdd_TProfile3D(void *p, TDirectory *dir) {
      ((::TProfile3D*)p)->DirectoryAutoAdd(dir);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TProfile3D(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TProfile3D*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TProfile3D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSpline(void *p) {
      delete (static_cast<::TSpline*>(p));
   }
   static void deleteArray_TSpline(void *p) {
      delete [] (static_cast<::TSpline*>(p));
   }
   static void destruct_TSpline(void *p) {
      typedef ::TSpline current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSpline(TBuffer &buf, void *obj) {
      ((::TSpline*)obj)->::TSpline::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSpline

//______________________________________________________________________________
void TSplinePoly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSplinePoly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSplinePoly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSplinePoly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSplinePoly(void *p) {
      return  p ? new(p) ::TSplinePoly : new ::TSplinePoly;
   }
   static void *newArray_TSplinePoly(Long_t nElements, void *p) {
      return p ? new(p) ::TSplinePoly[nElements] : new ::TSplinePoly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSplinePoly(void *p) {
      delete (static_cast<::TSplinePoly*>(p));
   }
   static void deleteArray_TSplinePoly(void *p) {
      delete [] (static_cast<::TSplinePoly*>(p));
   }
   static void destruct_TSplinePoly(void *p) {
      typedef ::TSplinePoly current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSplinePoly

//______________________________________________________________________________
void TSplinePoly3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSplinePoly3.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSplinePoly3::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSplinePoly3::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSplinePoly3(void *p) {
      return  p ? new(p) ::TSplinePoly3 : new ::TSplinePoly3;
   }
   static void *newArray_TSplinePoly3(Long_t nElements, void *p) {
      return p ? new(p) ::TSplinePoly3[nElements] : new ::TSplinePoly3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSplinePoly3(void *p) {
      delete (static_cast<::TSplinePoly3*>(p));
   }
   static void deleteArray_TSplinePoly3(void *p) {
      delete [] (static_cast<::TSplinePoly3*>(p));
   }
   static void destruct_TSplinePoly3(void *p) {
      typedef ::TSplinePoly3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSplinePoly3

//______________________________________________________________________________
void TSplinePoly5::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSplinePoly5.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSplinePoly5::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSplinePoly5::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSplinePoly5(void *p) {
      return  p ? new(p) ::TSplinePoly5 : new ::TSplinePoly5;
   }
   static void *newArray_TSplinePoly5(Long_t nElements, void *p) {
      return p ? new(p) ::TSplinePoly5[nElements] : new ::TSplinePoly5[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSplinePoly5(void *p) {
      delete (static_cast<::TSplinePoly5*>(p));
   }
   static void deleteArray_TSplinePoly5(void *p) {
      delete [] (static_cast<::TSplinePoly5*>(p));
   }
   static void destruct_TSplinePoly5(void *p) {
      typedef ::TSplinePoly5 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSplinePoly5

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpline3(void *p) {
      return  p ? new(p) ::TSpline3 : new ::TSpline3;
   }
   static void *newArray_TSpline3(Long_t nElements, void *p) {
      return p ? new(p) ::TSpline3[nElements] : new ::TSpline3[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpline3(void *p) {
      delete (static_cast<::TSpline3*>(p));
   }
   static void deleteArray_TSpline3(void *p) {
      delete [] (static_cast<::TSpline3*>(p));
   }
   static void destruct_TSpline3(void *p) {
      typedef ::TSpline3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSpline3(TBuffer &buf, void *obj) {
      ((::TSpline3*)obj)->::TSpline3::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSpline3

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpline5(void *p) {
      return  p ? new(p) ::TSpline5 : new ::TSpline5;
   }
   static void *newArray_TSpline5(Long_t nElements, void *p) {
      return p ? new(p) ::TSpline5[nElements] : new ::TSpline5[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpline5(void *p) {
      delete (static_cast<::TSpline5*>(p));
   }
   static void deleteArray_TSpline5(void *p) {
      delete [] (static_cast<::TSpline5*>(p));
   }
   static void destruct_TSpline5(void *p) {
      typedef ::TSpline5 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSpline5(TBuffer &buf, void *obj) {
      ((::TSpline5*)obj)->::TSpline5::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSpline5

//______________________________________________________________________________
void TSVDUnfold::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSVDUnfold.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSVDUnfold::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSVDUnfold::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSVDUnfold(void *p) {
      delete (static_cast<::TSVDUnfold*>(p));
   }
   static void deleteArray_TSVDUnfold(void *p) {
      delete [] (static_cast<::TSVDUnfold*>(p));
   }
   static void destruct_TSVDUnfold(void *p) {
      typedef ::TSVDUnfold current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSVDUnfold

//______________________________________________________________________________
void TVirtualGraphPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGraphPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGraphPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGraphPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGraphPainter(void *p) {
      delete (static_cast<::TVirtualGraphPainter*>(p));
   }
   static void deleteArray_TVirtualGraphPainter(void *p) {
      delete [] (static_cast<::TVirtualGraphPainter*>(p));
   }
   static void destruct_TVirtualGraphPainter(void *p) {
      typedef ::TVirtualGraphPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGraphPainter

//______________________________________________________________________________
void TVirtualHistPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualHistPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualHistPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualHistPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualHistPainter(void *p) {
      delete (static_cast<::TVirtualHistPainter*>(p));
   }
   static void deleteArray_TVirtualHistPainter(void *p) {
      delete [] (static_cast<::TVirtualHistPainter*>(p));
   }
   static void destruct_TVirtualHistPainter(void *p) {
      typedef ::TVirtualHistPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualHistPainter

//______________________________________________________________________________
void TVirtualPaveStats::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualPaveStats.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualPaveStats::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualPaveStats::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualPaveStats(void *p) {
      delete (static_cast<::TVirtualPaveStats*>(p));
   }
   static void deleteArray_TVirtualPaveStats(void *p) {
      delete [] (static_cast<::TVirtualPaveStats*>(p));
   }
   static void destruct_TVirtualPaveStats(void *p) {
      typedef ::TVirtualPaveStats current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualPaveStats

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR(void *p) {
      delete (static_cast<::ROOT::Math::WrappedMultiTF1Templ<double>*>(p));
   }
   static void deleteArray_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Math::WrappedMultiTF1Templ<double>*>(p));
   }
   static void destruct_ROOTcLcLMathcLcLWrappedMultiTF1TempllEdoublegR(void *p) {
      typedef ::ROOT::Math::WrappedMultiTF1Templ<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::WrappedMultiTF1Templ<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLWrappedTF1(void *p) {
      delete (static_cast<::ROOT::Math::WrappedTF1*>(p));
   }
   static void deleteArray_ROOTcLcLMathcLcLWrappedTF1(void *p) {
      delete [] (static_cast<::ROOT::Math::WrappedTF1*>(p));
   }
   static void destruct_ROOTcLcLMathcLcLWrappedTF1(void *p) {
      typedef ::ROOT::Math::WrappedTF1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::WrappedTF1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLv5cLcLTFormula(void *p) {
      return  p ? new(p) ::ROOT::v5::TFormula : new ::ROOT::v5::TFormula;
   }
   static void *newArray_ROOTcLcLv5cLcLTFormula(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::v5::TFormula[nElements] : new ::ROOT::v5::TFormula[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLv5cLcLTFormula(void *p) {
      delete (static_cast<::ROOT::v5::TFormula*>(p));
   }
   static void deleteArray_ROOTcLcLv5cLcLTFormula(void *p) {
      delete [] (static_cast<::ROOT::v5::TFormula*>(p));
   }
   static void destruct_ROOTcLcLv5cLcLTFormula(void *p) {
      typedef ::ROOT::v5::TFormula current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLv5cLcLTFormula(TBuffer &buf, void *obj) {
      ((::ROOT::v5::TFormula*)obj)->::ROOT::v5::TFormula::Streamer(buf);
   }
   // Wrapper around a custom streamer member function.
   static void conv_streamer_ROOTcLcLv5cLcLTFormula(TBuffer &buf, void *obj, const TClass *onfile_class) {
      ((::ROOT::v5::TFormula*)obj)->::ROOT::v5::TFormula::Streamer(buf,onfile_class);
   }
} // end of namespace ROOT for class ::ROOT::v5::TFormula

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLv5cLcLTF1Data(void *p) {
      return  p ? new(p) ::ROOT::v5::TF1Data : new ::ROOT::v5::TF1Data;
   }
   static void *newArray_ROOTcLcLv5cLcLTF1Data(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::v5::TF1Data[nElements] : new ::ROOT::v5::TF1Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLv5cLcLTF1Data(void *p) {
      delete (static_cast<::ROOT::v5::TF1Data*>(p));
   }
   static void deleteArray_ROOTcLcLv5cLcLTF1Data(void *p) {
      delete [] (static_cast<::ROOT::v5::TF1Data*>(p));
   }
   static void destruct_ROOTcLcLv5cLcLTF1Data(void *p) {
      typedef ::ROOT::v5::TF1Data current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLv5cLcLTF1Data(TBuffer &buf, void *obj) {
      ((::ROOT::v5::TF1Data*)obj)->::ROOT::v5::TF1Data::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::v5::TF1Data

namespace ROOT {
   namespace v5 {
//______________________________________________________________________________
void TFormulaPrimitive::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::v5::TFormulaPrimitive.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::v5::TFormulaPrimitive::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::v5::TFormulaPrimitive::Class(),this);
   }
}

} // namespace ROOT::v5
} // namespace ROOT::v5
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLv5cLcLTFormulaPrimitive(void *p) {
      return  p ? new(p) ::ROOT::v5::TFormulaPrimitive : new ::ROOT::v5::TFormulaPrimitive;
   }
   static void *newArray_ROOTcLcLv5cLcLTFormulaPrimitive(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::v5::TFormulaPrimitive[nElements] : new ::ROOT::v5::TFormulaPrimitive[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLv5cLcLTFormulaPrimitive(void *p) {
      delete (static_cast<::ROOT::v5::TFormulaPrimitive*>(p));
   }
   static void deleteArray_ROOTcLcLv5cLcLTFormulaPrimitive(void *p) {
      delete [] (static_cast<::ROOT::v5::TFormulaPrimitive*>(p));
   }
   static void destruct_ROOTcLcLv5cLcLTFormulaPrimitive(void *p) {
      typedef ::ROOT::v5::TFormulaPrimitive current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::v5::TFormulaPrimitive

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "functional", 86,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned short>","std::__1::vector<unsigned short, std::__1::allocator<unsigned short>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned short>*>(nullptr))->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete (static_cast<vector<unsigned short>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] (static_cast<vector<unsigned short>*>(p));
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "functional", 86,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned long>","std::__1::vector<unsigned long, std::__1::allocator<unsigned long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr))->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete (static_cast<vector<unsigned long>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<vector<unsigned long>*>(p));
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

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
   static TClass *vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR_Dictionary();
   static void vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p);
   static void deleteArray_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p);
   static void destruct_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >*)
   {
      vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >", -2, "functional", 86,
                  typeid(vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >) );
      instance.SetNew(&new_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TF1AbsComposition*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >","std::__1::vector<std::__1::unique_ptr<TF1AbsComposition, std::__1::default_delete<TF1AbsComposition>>, std::__1::allocator<std::__1::unique_ptr<TF1AbsComposition, std::__1::default_delete<TF1AbsComposition>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >*>(nullptr))->GetClass();
      vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > > : new vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >;
   }
   static void *newArray_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >[nElements] : new vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p) {
      delete (static_cast<vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >*>(p));
   }
   static void deleteArray_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >*>(p));
   }
   static void destruct_vectorlEunique_ptrlETF1AbsCompositioncOdefault_deletelETF1AbsCompositiongRsPgRsPgR(void *p) {
      typedef vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unique_ptr<TF1AbsComposition,default_delete<TF1AbsComposition> > >

namespace ROOT {
   static TClass *vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR_Dictionary();
   static void vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p);
   static void deleteArray_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p);
   static void destruct_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unique_ptr<TF1,default_delete<TF1> > >*)
   {
      vector<unique_ptr<TF1,default_delete<TF1> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unique_ptr<TF1,default_delete<TF1> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unique_ptr<TF1,default_delete<TF1> > >", -2, "functional", 86,
                  typeid(vector<unique_ptr<TF1,default_delete<TF1> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unique_ptr<TF1,default_delete<TF1> > >) );
      instance.SetNew(&new_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TF1*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unique_ptr<TF1,default_delete<TF1> > >","std::__1::vector<std::__1::unique_ptr<TF1, std::__1::default_delete<TF1>>, std::__1::allocator<std::__1::unique_ptr<TF1, std::__1::default_delete<TF1>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unique_ptr<TF1,default_delete<TF1> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unique_ptr<TF1,default_delete<TF1> > >*>(nullptr))->GetClass();
      vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unique_ptr<TF1,default_delete<TF1> > > : new vector<unique_ptr<TF1,default_delete<TF1> > >;
   }
   static void *newArray_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unique_ptr<TF1,default_delete<TF1> > >[nElements] : new vector<unique_ptr<TF1,default_delete<TF1> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p) {
      delete (static_cast<vector<unique_ptr<TF1,default_delete<TF1> > >*>(p));
   }
   static void deleteArray_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<unique_ptr<TF1,default_delete<TF1> > >*>(p));
   }
   static void destruct_vectorlEunique_ptrlETF1cOdefault_deletelETF1gRsPgRsPgR(void *p) {
      typedef vector<unique_ptr<TF1,default_delete<TF1> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unique_ptr<TF1,default_delete<TF1> > >

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
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = nullptr);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "functional", 86,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<short>","std::__1::vector<short, std::__1::allocator<short>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<short>*>(nullptr))->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete (static_cast<vector<short>*>(p));
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] (static_cast<vector<short>*>(p));
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace ROOT {
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<double,double> >*)
   {
      vector<pair<double,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<double,double> >", -2, "functional", 86,
                  typeid(vector<pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<double,double> >) );
      instance.SetNew(&new_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<double,double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<pair<double,double> >","std::__1::vector<std::__1::pair<double, double>, std::__1::allocator<std::__1::pair<double, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<pair<double,double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<pair<double,double> >*>(nullptr))->GetClass();
      vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<double,double> > : new vector<pair<double,double> >;
   }
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<pair<double,double> >[nElements] : new vector<pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete (static_cast<vector<pair<double,double> >*>(p));
   }
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<pair<double,double> >*>(p));
   }
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      typedef vector<pair<double,double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<pair<double,double> >

namespace ROOT {
   static TClass *vectorlElonggR_Dictionary();
   static void vectorlElonggR_TClassManip(TClass*);
   static void *new_vectorlElonggR(void *p = nullptr);
   static void *newArray_vectorlElonggR(Long_t size, void *p);
   static void delete_vectorlElonggR(void *p);
   static void deleteArray_vectorlElonggR(void *p);
   static void destruct_vectorlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long>*)
   {
      vector<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long>", -2, "functional", 86,
                  typeid(vector<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<long>) );
      instance.SetNew(&new_vectorlElonggR);
      instance.SetNewArray(&newArray_vectorlElonggR);
      instance.SetDelete(&delete_vectorlElonggR);
      instance.SetDeleteArray(&deleteArray_vectorlElonggR);
      instance.SetDestructor(&destruct_vectorlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<long>","std::__1::vector<long, std::__1::allocator<long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<long>*>(nullptr))->GetClass();
      vectorlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<long> : new vector<long>;
   }
   static void *newArray_vectorlElonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<long>[nElements] : new vector<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElonggR(void *p) {
      delete (static_cast<vector<long>*>(p));
   }
   static void deleteArray_vectorlElonggR(void *p) {
      delete [] (static_cast<vector<long>*>(p));
   }
   static void destruct_vectorlElonggR(void *p) {
      typedef vector<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<long>

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
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "functional", 86,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<float>","std::__1::vector<float, std::__1::allocator<float>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr))->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete (static_cast<vector<float>*>(p));
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] (static_cast<vector<float>*>(p));
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<float>

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
   static TClass *vectorlEchargR_Dictionary();
   static void vectorlEchargR_TClassManip(TClass*);
   static void *new_vectorlEchargR(void *p = nullptr);
   static void *newArray_vectorlEchargR(Long_t size, void *p);
   static void delete_vectorlEchargR(void *p);
   static void deleteArray_vectorlEchargR(void *p);
   static void destruct_vectorlEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<char>*)
   {
      vector<char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<char>", -2, "functional", 86,
                  typeid(vector<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<char>) );
      instance.SetNew(&new_vectorlEchargR);
      instance.SetNewArray(&newArray_vectorlEchargR);
      instance.SetDelete(&delete_vectorlEchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEchargR);
      instance.SetDestructor(&destruct_vectorlEchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<char> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<char>","std::__1::vector<char, std::__1::allocator<char>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<char>*>(nullptr))->GetClass();
      vectorlEchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<char> : new vector<char>;
   }
   static void *newArray_vectorlEchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<char>[nElements] : new vector<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEchargR(void *p) {
      delete (static_cast<vector<char>*>(p));
   }
   static void deleteArray_vectorlEchargR(void *p) {
      delete [] (static_cast<vector<char>*>(p));
   }
   static void destruct_vectorlEchargR(void *p) {
      typedef vector<char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<char>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 76,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bool>","std::__1::vector<bool, std::__1::allocator<bool>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr))->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete (static_cast<vector<bool>*>(p));
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] (static_cast<vector<bool>*>(p));
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = nullptr);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "functional", 86,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ULong64_t>","std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ULong64_t>*>(nullptr))->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete (static_cast<vector<ULong64_t>*>(p));
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] (static_cast<vector<ULong64_t>*>(p));
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = nullptr);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "functional", 86,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TString>","std::__1::vector<TString, std::__1::allocator<TString>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TString>*>(nullptr))->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete (static_cast<vector<TString>*>(p));
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] (static_cast<vector<TString>*>(p));
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlETObjectmUgR_Dictionary();
   static void vectorlETObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlETObjectmUgR(void *p = nullptr);
   static void *newArray_vectorlETObjectmUgR(Long_t size, void *p);
   static void delete_vectorlETObjectmUgR(void *p);
   static void deleteArray_vectorlETObjectmUgR(void *p);
   static void destruct_vectorlETObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TObject*>*)
   {
      vector<TObject*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TObject*>", -2, "functional", 86,
                  typeid(vector<TObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETObjectmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TObject*>) );
      instance.SetNew(&new_vectorlETObjectmUgR);
      instance.SetNewArray(&newArray_vectorlETObjectmUgR);
      instance.SetDelete(&delete_vectorlETObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETObjectmUgR);
      instance.SetDestructor(&destruct_vectorlETObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TObject*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TObject*>","std::__1::vector<TObject*, std::__1::allocator<TObject*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TObject*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TObject*>*>(nullptr))->GetClass();
      vectorlETObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETObjectmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TObject*> : new vector<TObject*>;
   }
   static void *newArray_vectorlETObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TObject*>[nElements] : new vector<TObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETObjectmUgR(void *p) {
      delete (static_cast<vector<TObject*>*>(p));
   }
   static void deleteArray_vectorlETObjectmUgR(void *p) {
      delete [] (static_cast<vector<TObject*>*>(p));
   }
   static void destruct_vectorlETObjectmUgR(void *p) {
      typedef vector<TObject*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TObject*>

namespace ROOT {
   static TClass *vectorlETF1AbsCompositionmUgR_Dictionary();
   static void vectorlETF1AbsCompositionmUgR_TClassManip(TClass*);
   static void *new_vectorlETF1AbsCompositionmUgR(void *p = nullptr);
   static void *newArray_vectorlETF1AbsCompositionmUgR(Long_t size, void *p);
   static void delete_vectorlETF1AbsCompositionmUgR(void *p);
   static void deleteArray_vectorlETF1AbsCompositionmUgR(void *p);
   static void destruct_vectorlETF1AbsCompositionmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TF1AbsComposition*>*)
   {
      vector<TF1AbsComposition*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TF1AbsComposition*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TF1AbsComposition*>", -2, "functional", 86,
                  typeid(vector<TF1AbsComposition*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETF1AbsCompositionmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TF1AbsComposition*>) );
      instance.SetNew(&new_vectorlETF1AbsCompositionmUgR);
      instance.SetNewArray(&newArray_vectorlETF1AbsCompositionmUgR);
      instance.SetDelete(&delete_vectorlETF1AbsCompositionmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETF1AbsCompositionmUgR);
      instance.SetDestructor(&destruct_vectorlETF1AbsCompositionmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TF1AbsComposition*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TF1AbsComposition*>","std::__1::vector<TF1AbsComposition*, std::__1::allocator<TF1AbsComposition*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TF1AbsComposition*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETF1AbsCompositionmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TF1AbsComposition*>*>(nullptr))->GetClass();
      vectorlETF1AbsCompositionmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETF1AbsCompositionmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETF1AbsCompositionmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TF1AbsComposition*> : new vector<TF1AbsComposition*>;
   }
   static void *newArray_vectorlETF1AbsCompositionmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TF1AbsComposition*>[nElements] : new vector<TF1AbsComposition*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETF1AbsCompositionmUgR(void *p) {
      delete (static_cast<vector<TF1AbsComposition*>*>(p));
   }
   static void deleteArray_vectorlETF1AbsCompositionmUgR(void *p) {
      delete [] (static_cast<vector<TF1AbsComposition*>*>(p));
   }
   static void destruct_vectorlETF1AbsCompositionmUgR(void *p) {
      typedef vector<TF1AbsComposition*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TF1AbsComposition*>

namespace ROOT {
   static TClass *vectorlETF1mUgR_Dictionary();
   static void vectorlETF1mUgR_TClassManip(TClass*);
   static void *new_vectorlETF1mUgR(void *p = nullptr);
   static void *newArray_vectorlETF1mUgR(Long_t size, void *p);
   static void delete_vectorlETF1mUgR(void *p);
   static void deleteArray_vectorlETF1mUgR(void *p);
   static void destruct_vectorlETF1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TF1*>*)
   {
      vector<TF1*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TF1*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TF1*>", -2, "functional", 86,
                  typeid(vector<TF1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETF1mUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TF1*>) );
      instance.SetNew(&new_vectorlETF1mUgR);
      instance.SetNewArray(&newArray_vectorlETF1mUgR);
      instance.SetDelete(&delete_vectorlETF1mUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETF1mUgR);
      instance.SetDestructor(&destruct_vectorlETF1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TF1*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TF1*>","std::__1::vector<TF1*, std::__1::allocator<TF1*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TF1*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETF1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TF1*>*>(nullptr))->GetClass();
      vectorlETF1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETF1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETF1mUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TF1*> : new vector<TF1*>;
   }
   static void *newArray_vectorlETF1mUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TF1*>[nElements] : new vector<TF1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETF1mUgR(void *p) {
      delete (static_cast<vector<TF1*>*>(p));
   }
   static void deleteArray_vectorlETF1mUgR(void *p) {
      delete [] (static_cast<vector<TF1*>*>(p));
   }
   static void destruct_vectorlETF1mUgR(void *p) {
      typedef vector<TF1*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TF1*>

namespace ROOT {
   static TClass *vectorlETAttLinegR_Dictionary();
   static void vectorlETAttLinegR_TClassManip(TClass*);
   static void *new_vectorlETAttLinegR(void *p = nullptr);
   static void *newArray_vectorlETAttLinegR(Long_t size, void *p);
   static void delete_vectorlETAttLinegR(void *p);
   static void deleteArray_vectorlETAttLinegR(void *p);
   static void destruct_vectorlETAttLinegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TAttLine>*)
   {
      vector<TAttLine> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TAttLine>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TAttLine>", -2, "functional", 86,
                  typeid(vector<TAttLine>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETAttLinegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TAttLine>) );
      instance.SetNew(&new_vectorlETAttLinegR);
      instance.SetNewArray(&newArray_vectorlETAttLinegR);
      instance.SetDelete(&delete_vectorlETAttLinegR);
      instance.SetDeleteArray(&deleteArray_vectorlETAttLinegR);
      instance.SetDestructor(&destruct_vectorlETAttLinegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TAttLine> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TAttLine>","std::__1::vector<TAttLine, std::__1::allocator<TAttLine>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TAttLine>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETAttLinegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TAttLine>*>(nullptr))->GetClass();
      vectorlETAttLinegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETAttLinegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETAttLinegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TAttLine> : new vector<TAttLine>;
   }
   static void *newArray_vectorlETAttLinegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TAttLine>[nElements] : new vector<TAttLine>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETAttLinegR(void *p) {
      delete (static_cast<vector<TAttLine>*>(p));
   }
   static void deleteArray_vectorlETAttLinegR(void *p) {
      delete [] (static_cast<vector<TAttLine>*>(p));
   }
   static void destruct_vectorlETAttLinegR(void *p) {
      typedef vector<TAttLine> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TAttLine>

namespace ROOT {
   static TClass *vectorlETAttFillgR_Dictionary();
   static void vectorlETAttFillgR_TClassManip(TClass*);
   static void *new_vectorlETAttFillgR(void *p = nullptr);
   static void *newArray_vectorlETAttFillgR(Long_t size, void *p);
   static void delete_vectorlETAttFillgR(void *p);
   static void deleteArray_vectorlETAttFillgR(void *p);
   static void destruct_vectorlETAttFillgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TAttFill>*)
   {
      vector<TAttFill> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TAttFill>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TAttFill>", -2, "functional", 86,
                  typeid(vector<TAttFill>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETAttFillgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TAttFill>) );
      instance.SetNew(&new_vectorlETAttFillgR);
      instance.SetNewArray(&newArray_vectorlETAttFillgR);
      instance.SetDelete(&delete_vectorlETAttFillgR);
      instance.SetDeleteArray(&deleteArray_vectorlETAttFillgR);
      instance.SetDestructor(&destruct_vectorlETAttFillgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TAttFill> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TAttFill>","std::__1::vector<TAttFill, std::__1::allocator<TAttFill>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TAttFill>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETAttFillgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TAttFill>*>(nullptr))->GetClass();
      vectorlETAttFillgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETAttFillgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETAttFillgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TAttFill> : new vector<TAttFill>;
   }
   static void *newArray_vectorlETAttFillgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TAttFill>[nElements] : new vector<TAttFill>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETAttFillgR(void *p) {
      delete (static_cast<vector<TAttFill>*>(p));
   }
   static void deleteArray_vectorlETAttFillgR(void *p) {
      delete [] (static_cast<vector<TAttFill>*>(p));
   }
   static void destruct_vectorlETAttFillgR(void *p) {
      typedef vector<TAttFill> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TAttFill>

namespace ROOT {
   static TClass *vectorlETArrayDgR_Dictionary();
   static void vectorlETArrayDgR_TClassManip(TClass*);
   static void *new_vectorlETArrayDgR(void *p = nullptr);
   static void *newArray_vectorlETArrayDgR(Long_t size, void *p);
   static void delete_vectorlETArrayDgR(void *p);
   static void deleteArray_vectorlETArrayDgR(void *p);
   static void destruct_vectorlETArrayDgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArrayD>*)
   {
      vector<TArrayD> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArrayD>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArrayD>", -2, "functional", 86,
                  typeid(vector<TArrayD>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArrayDgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArrayD>) );
      instance.SetNew(&new_vectorlETArrayDgR);
      instance.SetNewArray(&newArray_vectorlETArrayDgR);
      instance.SetDelete(&delete_vectorlETArrayDgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArrayDgR);
      instance.SetDestructor(&destruct_vectorlETArrayDgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArrayD> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArrayD>","std::__1::vector<TArrayD, std::__1::allocator<TArrayD>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArrayD>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArrayDgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArrayD>*>(nullptr))->GetClass();
      vectorlETArrayDgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArrayDgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArrayDgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArrayD> : new vector<TArrayD>;
   }
   static void *newArray_vectorlETArrayDgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArrayD>[nElements] : new vector<TArrayD>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArrayDgR(void *p) {
      delete (static_cast<vector<TArrayD>*>(p));
   }
   static void deleteArray_vectorlETArrayDgR(void *p) {
      delete [] (static_cast<vector<TArrayD>*>(p));
   }
   static void destruct_vectorlETArrayDgR(void *p) {
      typedef vector<TArrayD> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArrayD>

namespace ROOT {
   static TClass *vectorlELong64_tgR_Dictionary();
   static void vectorlELong64_tgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tgR(void *p = nullptr);
   static void *newArray_vectorlELong64_tgR(Long_t size, void *p);
   static void delete_vectorlELong64_tgR(void *p);
   static void deleteArray_vectorlELong64_tgR(void *p);
   static void destruct_vectorlELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t>*)
   {
      vector<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t>", -2, "functional", 86,
                  typeid(vector<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Long64_t>) );
      instance.SetNew(&new_vectorlELong64_tgR);
      instance.SetNewArray(&newArray_vectorlELong64_tgR);
      instance.SetDelete(&delete_vectorlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tgR);
      instance.SetDestructor(&destruct_vectorlELong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<Long64_t>","std::__1::vector<long long, std::__1::allocator<long long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<Long64_t>*>(nullptr))->GetClass();
      vectorlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<Long64_t> : new vector<Long64_t>;
   }
   static void *newArray_vectorlELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<Long64_t>[nElements] : new vector<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tgR(void *p) {
      delete (static_cast<vector<Long64_t>*>(p));
   }
   static void deleteArray_vectorlELong64_tgR(void *p) {
      delete [] (static_cast<vector<Long64_t>*>(p));
   }
   static void destruct_vectorlELong64_tgR(void *p) {
      typedef vector<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t>

namespace ROOT {
   static TClass *maplETStringcOintcOTFormulaParamOrdergR_Dictionary();
   static void maplETStringcOintcOTFormulaParamOrdergR_TClassManip(TClass*);
   static void *new_maplETStringcOintcOTFormulaParamOrdergR(void *p = nullptr);
   static void *newArray_maplETStringcOintcOTFormulaParamOrdergR(Long_t size, void *p);
   static void delete_maplETStringcOintcOTFormulaParamOrdergR(void *p);
   static void deleteArray_maplETStringcOintcOTFormulaParamOrdergR(void *p);
   static void destruct_maplETStringcOintcOTFormulaParamOrdergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int,TFormulaParamOrder>*)
   {
      map<TString,int,TFormulaParamOrder> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int,TFormulaParamOrder>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int,TFormulaParamOrder>", -2, "map", 975,
                  typeid(map<TString,int,TFormulaParamOrder>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintcOTFormulaParamOrdergR_Dictionary, isa_proxy, 4,
                  sizeof(map<TString,int,TFormulaParamOrder>) );
      instance.SetNew(&new_maplETStringcOintcOTFormulaParamOrdergR);
      instance.SetNewArray(&newArray_maplETStringcOintcOTFormulaParamOrdergR);
      instance.SetDelete(&delete_maplETStringcOintcOTFormulaParamOrdergR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintcOTFormulaParamOrdergR);
      instance.SetDestructor(&destruct_maplETStringcOintcOTFormulaParamOrdergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int,TFormulaParamOrder> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<TString,int,TFormulaParamOrder>","std::__1::map<TString, int, TFormulaParamOrder, std::__1::allocator<std::__1::pair<TString const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<TString,int,TFormulaParamOrder>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintcOTFormulaParamOrdergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<TString,int,TFormulaParamOrder>*>(nullptr))->GetClass();
      maplETStringcOintcOTFormulaParamOrdergR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintcOTFormulaParamOrdergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintcOTFormulaParamOrdergR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,int,TFormulaParamOrder> : new map<TString,int,TFormulaParamOrder>;
   }
   static void *newArray_maplETStringcOintcOTFormulaParamOrdergR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<TString,int,TFormulaParamOrder>[nElements] : new map<TString,int,TFormulaParamOrder>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintcOTFormulaParamOrdergR(void *p) {
      delete (static_cast<map<TString,int,TFormulaParamOrder>*>(p));
   }
   static void deleteArray_maplETStringcOintcOTFormulaParamOrdergR(void *p) {
      delete [] (static_cast<map<TString,int,TFormulaParamOrder>*>(p));
   }
   static void destruct_maplETStringcOintcOTFormulaParamOrdergR(void *p) {
      typedef map<TString,int,TFormulaParamOrder> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<TString,int,TFormulaParamOrder>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libHist() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libHist) = RecordReadRules_libHist();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libHist));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libHist_Impl() {
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
      TROOT::RegisterModule("libHist",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHist_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHist_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHist() {
  TriggerDictionaryInitialization_libHist_Impl();
}
