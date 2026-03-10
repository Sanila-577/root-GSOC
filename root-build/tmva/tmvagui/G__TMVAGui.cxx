// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TMVAGui
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

// Header files passed as explicit arguments
#include "TMVA/BDT.h"
#include "TMVA/BDTControlPlots.h"
#include "TMVA/BDT_Reg.h"
#include "TMVA/BoostControlPlots.h"
#include "TMVA/CorrGui.h"
#include "TMVA/CorrGuiMultiClass.h"
#include "TMVA/MovieMaker.h"
#include "TMVA/PlotFoams.h"
#include "TMVA/TMVAGui.h"
#include "TMVA/TMVAMultiClassGui.h"
#include "TMVA/TMVARegGui.h"
#include "TMVA/annconvergencetest.h"
#include "TMVA/compareanapp.h"
#include "TMVA/correlations.h"
#include "TMVA/correlationsMultiClass.h"
#include "TMVA/correlationscatters.h"
#include "TMVA/correlationscattersMultiClass.h"
#include "TMVA/deviations.h"
#include "TMVA/efficiencies.h"
#include "TMVA/efficienciesMulticlass.h"
#include "TMVA/likelihoodrefs.h"
#include "TMVA/mvaeffs.h"
#include "TMVA/mvas.h"
#include "TMVA/mvasMulticlass.h"
#include "TMVA/mvaweights.h"
#include "TMVA/network.h"
#include "TMVA/paracoor.h"
#include "TMVA/probas.h"
#include "TMVA/regression_averagedevs.h"
#include "TMVA/rulevis.h"
#include "TMVA/rulevisCorr.h"
#include "TMVA/rulevisHists.h"
#include "TMVA/tmvaglob.h"
#include "TMVA/training_history.h"
#include "TMVA/variables.h"
#include "TMVA/variablesMultiClass.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace TMVA {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TMVA_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TMVA", 0 /*version*/, "TMVA/Types.h", 47,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TMVA_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TMVA_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *TMVAcLcLStatDialogBDT_Dictionary();
   static void TMVAcLcLStatDialogBDT_TClassManip(TClass*);
   static void delete_TMVAcLcLStatDialogBDT(void *p);
   static void deleteArray_TMVAcLcLStatDialogBDT(void *p);
   static void destruct_TMVAcLcLStatDialogBDT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::StatDialogBDT*)
   {
      ::TMVA::StatDialogBDT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::StatDialogBDT));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::StatDialogBDT", "TMVA/BDT.h", 46,
                  typeid(::TMVA::StatDialogBDT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLStatDialogBDT_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::StatDialogBDT) );
      instance.SetDelete(&delete_TMVAcLcLStatDialogBDT);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLStatDialogBDT);
      instance.SetDestructor(&destruct_TMVAcLcLStatDialogBDT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::StatDialogBDT*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::StatDialogBDT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::StatDialogBDT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLStatDialogBDT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::StatDialogBDT*>(nullptr))->GetClass();
      TMVAcLcLStatDialogBDT_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLStatDialogBDT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLStatDialogBDTReg_Dictionary();
   static void TMVAcLcLStatDialogBDTReg_TClassManip(TClass*);
   static void delete_TMVAcLcLStatDialogBDTReg(void *p);
   static void deleteArray_TMVAcLcLStatDialogBDTReg(void *p);
   static void destruct_TMVAcLcLStatDialogBDTReg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::StatDialogBDTReg*)
   {
      ::TMVA::StatDialogBDTReg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::StatDialogBDTReg));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::StatDialogBDTReg", "TMVA/BDT_Reg.h", 36,
                  typeid(::TMVA::StatDialogBDTReg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLStatDialogBDTReg_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::StatDialogBDTReg) );
      instance.SetDelete(&delete_TMVAcLcLStatDialogBDTReg);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLStatDialogBDTReg);
      instance.SetDestructor(&destruct_TMVAcLcLStatDialogBDTReg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::StatDialogBDTReg*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::StatDialogBDTReg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::StatDialogBDTReg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLStatDialogBDTReg_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::StatDialogBDTReg*>(nullptr))->GetClass();
      TMVAcLcLStatDialogBDTReg_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLStatDialogBDTReg_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLTMVAGUI_Dictionary();
   static void TMVAcLcLTMVAGUI_TClassManip(TClass*);
   static void *new_TMVAcLcLTMVAGUI(void *p = nullptr);
   static void *newArray_TMVAcLcLTMVAGUI(Long_t size, void *p);
   static void delete_TMVAcLcLTMVAGUI(void *p);
   static void deleteArray_TMVAcLcLTMVAGUI(void *p);
   static void destruct_TMVAcLcLTMVAGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::TMVAGUI*)
   {
      ::TMVA::TMVAGUI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::TMVAGUI));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::TMVAGUI", "TMVA/TMVAGui.h", 25,
                  typeid(::TMVA::TMVAGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLTMVAGUI_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::TMVAGUI) );
      instance.SetNew(&new_TMVAcLcLTMVAGUI);
      instance.SetNewArray(&newArray_TMVAcLcLTMVAGUI);
      instance.SetDelete(&delete_TMVAcLcLTMVAGUI);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLTMVAGUI);
      instance.SetDestructor(&destruct_TMVAcLcLTMVAGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::TMVAGUI*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::TMVAGUI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::TMVAGUI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLTMVAGUI_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::TMVAGUI*>(nullptr))->GetClass();
      TMVAcLcLTMVAGUI_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLTMVAGUI_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLMethodInfo(void *p = nullptr);
   static void *newArray_TMVAcLcLMethodInfo(Long_t size, void *p);
   static void delete_TMVAcLcLMethodInfo(void *p);
   static void deleteArray_TMVAcLcLMethodInfo(void *p);
   static void destruct_TMVAcLcLMethodInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodInfo*)
   {
      ::TMVA::MethodInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodInfo", ::TMVA::MethodInfo::Class_Version(), "TMVA/mvaeffs.h", 26,
                  typeid(::TMVA::MethodInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodInfo) );
      instance.SetNew(&new_TMVAcLcLMethodInfo);
      instance.SetNewArray(&newArray_TMVAcLcLMethodInfo);
      instance.SetDelete(&delete_TMVAcLcLMethodInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodInfo);
      instance.SetDestructor(&destruct_TMVAcLcLMethodInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::MethodInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::MethodInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLStatDialogMVAEffs_Dictionary();
   static void TMVAcLcLStatDialogMVAEffs_TClassManip(TClass*);
   static void delete_TMVAcLcLStatDialogMVAEffs(void *p);
   static void deleteArray_TMVAcLcLStatDialogMVAEffs(void *p);
   static void destruct_TMVAcLcLStatDialogMVAEffs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::StatDialogMVAEffs*)
   {
      ::TMVA::StatDialogMVAEffs *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::StatDialogMVAEffs));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::StatDialogMVAEffs", "TMVA/mvaeffs.h", 72,
                  typeid(::TMVA::StatDialogMVAEffs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLStatDialogMVAEffs_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::StatDialogMVAEffs) );
      instance.SetDelete(&delete_TMVAcLcLStatDialogMVAEffs);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLStatDialogMVAEffs);
      instance.SetDestructor(&destruct_TMVAcLcLStatDialogMVAEffs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::StatDialogMVAEffs*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::StatDialogMVAEffs*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::StatDialogMVAEffs*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLStatDialogMVAEffs_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::StatDialogMVAEffs*>(nullptr))->GetClass();
      TMVAcLcLStatDialogMVAEffs_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLStatDialogMVAEffs_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodInfo::Class_Name()
{
   return "TMVA::MethodInfo";
}

//______________________________________________________________________________
const char *MethodInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MethodInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLStatDialogBDT(void *p) {
      delete (static_cast<::TMVA::StatDialogBDT*>(p));
   }
   static void deleteArray_TMVAcLcLStatDialogBDT(void *p) {
      delete [] (static_cast<::TMVA::StatDialogBDT*>(p));
   }
   static void destruct_TMVAcLcLStatDialogBDT(void *p) {
      typedef ::TMVA::StatDialogBDT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::StatDialogBDT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLStatDialogBDTReg(void *p) {
      delete (static_cast<::TMVA::StatDialogBDTReg*>(p));
   }
   static void deleteArray_TMVAcLcLStatDialogBDTReg(void *p) {
      delete [] (static_cast<::TMVA::StatDialogBDTReg*>(p));
   }
   static void destruct_TMVAcLcLStatDialogBDTReg(void *p) {
      typedef ::TMVA::StatDialogBDTReg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::StatDialogBDTReg

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLTMVAGUI(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::TMVAGUI : new ::TMVA::TMVAGUI;
   }
   static void *newArray_TMVAcLcLTMVAGUI(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::TMVAGUI[nElements] : new ::TMVA::TMVAGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLTMVAGUI(void *p) {
      delete (static_cast<::TMVA::TMVAGUI*>(p));
   }
   static void deleteArray_TMVAcLcLTMVAGUI(void *p) {
      delete [] (static_cast<::TMVA::TMVAGUI*>(p));
   }
   static void destruct_TMVAcLcLTMVAGUI(void *p) {
      typedef ::TMVA::TMVAGUI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::TMVAGUI

namespace TMVA {
//______________________________________________________________________________
void MethodInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodInfo::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLMethodInfo(void *p) {
      return  p ? new(p) ::TMVA::MethodInfo : new ::TMVA::MethodInfo;
   }
   static void *newArray_TMVAcLcLMethodInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TMVA::MethodInfo[nElements] : new ::TMVA::MethodInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodInfo(void *p) {
      delete (static_cast<::TMVA::MethodInfo*>(p));
   }
   static void deleteArray_TMVAcLcLMethodInfo(void *p) {
      delete [] (static_cast<::TMVA::MethodInfo*>(p));
   }
   static void destruct_TMVAcLcLMethodInfo(void *p) {
      typedef ::TMVA::MethodInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodInfo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLStatDialogMVAEffs(void *p) {
      delete (static_cast<::TMVA::StatDialogMVAEffs*>(p));
   }
   static void deleteArray_TMVAcLcLStatDialogMVAEffs(void *p) {
      delete [] (static_cast<::TMVA::StatDialogMVAEffs*>(p));
   }
   static void destruct_TMVAcLcLStatDialogMVAEffs(void *p) {
      typedef ::TMVA::StatDialogMVAEffs current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::StatDialogMVAEffs

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libTMVAGui() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libTMVAGui) = RecordReadRules_libTMVAGui();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libTMVAGui));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libTMVAGui_Impl() {
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
      TROOT::RegisterModule("libTMVAGui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTMVAGui_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTMVAGui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTMVAGui() {
  TriggerDictionaryInitialization_libTMVAGui_Impl();
}
