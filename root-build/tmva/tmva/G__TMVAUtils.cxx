// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TMVAUtils
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
#include "TMVA/RTensorUtils.hxx"
#include "TMVA/RStandardScaler.hxx"
#include "TMVA/RReader.hxx"
#include "TMVA/RInferenceUtils.hxx"
#include "TMVA/RBDT.hxx"
#include "TMVA/RSofieReader.hxx"
#include "RConfigure.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR_Dictionary();
   static void TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void delete_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::RTensor<float,vector<float> >*)
   {
      ::TMVA::Experimental::RTensor<float,vector<float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::RTensor<float,vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::RTensor<float,vector<float> >", "TMVA/RTensor.hxx", 163,
                  typeid(::TMVA::Experimental::RTensor<float,vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::TMVA::Experimental::RTensor<float,vector<float> >) );
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TMVA::Experimental::RTensor<float,vector<float> >","TMVA::Experimental::RTensor<float,std::vector<float> >"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TMVA::Experimental::RTensor<float,vector<float> >","TMVA::Experimental::RTensor<float, std::__1::vector<float, std::__1::allocator<float>>>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::RTensor<float,vector<float> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::RTensor<float,vector<float> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::RTensor<float,vector<float> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::RTensor<float,vector<float> >*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLExperimentalcLcLRBDT(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLRBDT(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLRBDT(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLRBDT(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLRBDT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::RBDT*)
   {
      ::TMVA::Experimental::RBDT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Experimental::RBDT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::RBDT", ::TMVA::Experimental::RBDT::Class_Version(), "TMVA/RBDT.hxx", 37,
                  typeid(::TMVA::Experimental::RBDT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Experimental::RBDT::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::RBDT) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLRBDT);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLRBDT);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLRBDT);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLRBDT);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLRBDT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::RBDT*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::RBDT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::RBDT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace TMVA {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr RBDT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RBDT::Class_Name()
{
   return "TMVA::Experimental::RBDT";
}

//______________________________________________________________________________
const char *RBDT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::RBDT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RBDT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::RBDT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RBDT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::RBDT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RBDT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::RBDT*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA::Experimental
} // namespace TMVA::Experimental
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR(void *p) {
      delete (static_cast<::TMVA::Experimental::RTensor<float,vector<float> >*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR(void *p) {
      delete [] (static_cast<::TMVA::Experimental::RTensor<float,vector<float> >*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLRTensorlEfloatcOvectorlEfloatgRsPgR(void *p) {
      typedef ::TMVA::Experimental::RTensor<float,vector<float> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::RTensor<float,vector<float> >

namespace TMVA {
   namespace Experimental {
//______________________________________________________________________________
void RBDT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::Experimental::RBDT.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::Experimental::RBDT::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::Experimental::RBDT::Class(),this);
   }
}

} // namespace TMVA::Experimental
} // namespace TMVA::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLRBDT(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::RBDT : new ::TMVA::Experimental::RBDT;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLRBDT(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::RBDT[nElements] : new ::TMVA::Experimental::RBDT[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLRBDT(void *p) {
      delete (static_cast<::TMVA::Experimental::RBDT*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLRBDT(void *p) {
      delete [] (static_cast<::TMVA::Experimental::RBDT*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLRBDT(void *p) {
      typedef ::TMVA::Experimental::RBDT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::RBDT

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
   // Registration Schema evolution read functions
   int RecordReadRules_libTMVAUtils() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libTMVAUtils) = RecordReadRules_libTMVAUtils();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libTMVAUtils));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libTMVAUtils_Impl() {
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
      TROOT::RegisterModule("libTMVAUtils",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTMVAUtils_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTMVAUtils_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTMVAUtils() {
  TriggerDictionaryInitialization_libTMVAUtils_Impl();
}
