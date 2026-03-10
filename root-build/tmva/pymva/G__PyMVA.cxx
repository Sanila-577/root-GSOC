// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__PyMVA
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
#include "TMVA/MethodPyAdaBoost.h"
#include "TMVA/MethodPyGTB.h"
#include "TMVA/MethodPyKeras.h"
#include "TMVA/MethodPyRandomForest.h"
#include "TMVA/MethodPyTorch.h"
#include "TMVA/PyMethodBase.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TMVAcLcLPyMethodBase(void *p);
   static void deleteArray_TMVAcLcLPyMethodBase(void *p);
   static void destruct_TMVAcLcLPyMethodBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::PyMethodBase*)
   {
      ::TMVA::PyMethodBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::PyMethodBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::PyMethodBase", ::TMVA::PyMethodBase::Class_Version(), "TMVA/PyMethodBase.h", 54,
                  typeid(::TMVA::PyMethodBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::PyMethodBase::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::PyMethodBase) );
      instance.SetDelete(&delete_TMVAcLcLPyMethodBase);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLPyMethodBase);
      instance.SetDestructor(&destruct_TMVAcLcLPyMethodBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::PyMethodBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::PyMethodBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::PyMethodBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPyAdaBoost(void *p);
   static void deleteArray_TMVAcLcLMethodPyAdaBoost(void *p);
   static void destruct_TMVAcLcLMethodPyAdaBoost(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPyAdaBoost*)
   {
      ::TMVA::MethodPyAdaBoost *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPyAdaBoost >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPyAdaBoost", ::TMVA::MethodPyAdaBoost::Class_Version(), "TMVA/MethodPyAdaBoost.h", 35,
                  typeid(::TMVA::MethodPyAdaBoost), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPyAdaBoost::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPyAdaBoost) );
      instance.SetDelete(&delete_TMVAcLcLMethodPyAdaBoost);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPyAdaBoost);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPyAdaBoost);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPyAdaBoost*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::MethodPyAdaBoost*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::MethodPyAdaBoost*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPyGTB(void *p);
   static void deleteArray_TMVAcLcLMethodPyGTB(void *p);
   static void destruct_TMVAcLcLMethodPyGTB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPyGTB*)
   {
      ::TMVA::MethodPyGTB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPyGTB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPyGTB", ::TMVA::MethodPyGTB::Class_Version(), "TMVA/MethodPyGTB.h", 33,
                  typeid(::TMVA::MethodPyGTB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPyGTB::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPyGTB) );
      instance.SetDelete(&delete_TMVAcLcLMethodPyGTB);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPyGTB);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPyGTB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPyGTB*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::MethodPyGTB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::MethodPyGTB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPyKeras(void *p);
   static void deleteArray_TMVAcLcLMethodPyKeras(void *p);
   static void destruct_TMVAcLcLMethodPyKeras(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPyKeras*)
   {
      ::TMVA::MethodPyKeras *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPyKeras >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPyKeras", ::TMVA::MethodPyKeras::Class_Version(), "TMVA/MethodPyKeras.h", 36,
                  typeid(::TMVA::MethodPyKeras), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPyKeras::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPyKeras) );
      instance.SetDelete(&delete_TMVAcLcLMethodPyKeras);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPyKeras);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPyKeras);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPyKeras*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::MethodPyKeras*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::MethodPyKeras*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPyRandomForest(void *p);
   static void deleteArray_TMVAcLcLMethodPyRandomForest(void *p);
   static void destruct_TMVAcLcLMethodPyRandomForest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPyRandomForest*)
   {
      ::TMVA::MethodPyRandomForest *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPyRandomForest >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPyRandomForest", ::TMVA::MethodPyRandomForest::Class_Version(), "TMVA/MethodPyRandomForest.h", 33,
                  typeid(::TMVA::MethodPyRandomForest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPyRandomForest::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPyRandomForest) );
      instance.SetDelete(&delete_TMVAcLcLMethodPyRandomForest);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPyRandomForest);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPyRandomForest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPyRandomForest*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::MethodPyRandomForest*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::MethodPyRandomForest*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMVAcLcLMethodPyTorch(void *p);
   static void deleteArray_TMVAcLcLMethodPyTorch(void *p);
   static void destruct_TMVAcLcLMethodPyTorch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::MethodPyTorch*)
   {
      ::TMVA::MethodPyTorch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::MethodPyTorch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::MethodPyTorch", ::TMVA::MethodPyTorch::Class_Version(), "TMVA/MethodPyTorch.h", 34,
                  typeid(::TMVA::MethodPyTorch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::MethodPyTorch::Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::MethodPyTorch) );
      instance.SetDelete(&delete_TMVAcLcLMethodPyTorch);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLMethodPyTorch);
      instance.SetDestructor(&destruct_TMVAcLcLMethodPyTorch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::MethodPyTorch*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::MethodPyTorch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::MethodPyTorch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr PyMethodBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PyMethodBase::Class_Name()
{
   return "TMVA::PyMethodBase";
}

//______________________________________________________________________________
const char *PyMethodBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PyMethodBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PyMethodBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PyMethodBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PyMethodBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PyMethodBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PyMethodBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::PyMethodBase*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPyAdaBoost::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPyAdaBoost::Class_Name()
{
   return "TMVA::MethodPyAdaBoost";
}

//______________________________________________________________________________
const char *MethodPyAdaBoost::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyAdaBoost*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPyAdaBoost::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyAdaBoost*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPyAdaBoost::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyAdaBoost*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPyAdaBoost::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyAdaBoost*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPyGTB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPyGTB::Class_Name()
{
   return "TMVA::MethodPyGTB";
}

//______________________________________________________________________________
const char *MethodPyGTB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyGTB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPyGTB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyGTB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPyGTB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyGTB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPyGTB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyGTB*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPyKeras::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPyKeras::Class_Name()
{
   return "TMVA::MethodPyKeras";
}

//______________________________________________________________________________
const char *MethodPyKeras::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyKeras*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPyKeras::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyKeras*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPyKeras::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyKeras*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPyKeras::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyKeras*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPyRandomForest::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPyRandomForest::Class_Name()
{
   return "TMVA::MethodPyRandomForest";
}

//______________________________________________________________________________
const char *MethodPyRandomForest::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyRandomForest*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPyRandomForest::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyRandomForest*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPyRandomForest::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyRandomForest*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPyRandomForest::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyRandomForest*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
atomic_TClass_ptr MethodPyTorch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MethodPyTorch::Class_Name()
{
   return "TMVA::MethodPyTorch";
}

//______________________________________________________________________________
const char *MethodPyTorch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyTorch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MethodPyTorch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyTorch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MethodPyTorch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyTorch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MethodPyTorch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::MethodPyTorch*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA
namespace TMVA {
//______________________________________________________________________________
void PyMethodBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::PyMethodBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::PyMethodBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::PyMethodBase::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLPyMethodBase(void *p) {
      delete (static_cast<::TMVA::PyMethodBase*>(p));
   }
   static void deleteArray_TMVAcLcLPyMethodBase(void *p) {
      delete [] (static_cast<::TMVA::PyMethodBase*>(p));
   }
   static void destruct_TMVAcLcLPyMethodBase(void *p) {
      typedef ::TMVA::PyMethodBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::PyMethodBase

namespace TMVA {
//______________________________________________________________________________
void MethodPyAdaBoost::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPyAdaBoost.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPyAdaBoost::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPyAdaBoost::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPyAdaBoost(void *p) {
      delete (static_cast<::TMVA::MethodPyAdaBoost*>(p));
   }
   static void deleteArray_TMVAcLcLMethodPyAdaBoost(void *p) {
      delete [] (static_cast<::TMVA::MethodPyAdaBoost*>(p));
   }
   static void destruct_TMVAcLcLMethodPyAdaBoost(void *p) {
      typedef ::TMVA::MethodPyAdaBoost current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPyAdaBoost

namespace TMVA {
//______________________________________________________________________________
void MethodPyGTB::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPyGTB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPyGTB::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPyGTB::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPyGTB(void *p) {
      delete (static_cast<::TMVA::MethodPyGTB*>(p));
   }
   static void deleteArray_TMVAcLcLMethodPyGTB(void *p) {
      delete [] (static_cast<::TMVA::MethodPyGTB*>(p));
   }
   static void destruct_TMVAcLcLMethodPyGTB(void *p) {
      typedef ::TMVA::MethodPyGTB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPyGTB

namespace TMVA {
//______________________________________________________________________________
void MethodPyKeras::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPyKeras.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPyKeras::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPyKeras::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPyKeras(void *p) {
      delete (static_cast<::TMVA::MethodPyKeras*>(p));
   }
   static void deleteArray_TMVAcLcLMethodPyKeras(void *p) {
      delete [] (static_cast<::TMVA::MethodPyKeras*>(p));
   }
   static void destruct_TMVAcLcLMethodPyKeras(void *p) {
      typedef ::TMVA::MethodPyKeras current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPyKeras

namespace TMVA {
//______________________________________________________________________________
void MethodPyRandomForest::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPyRandomForest.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPyRandomForest::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPyRandomForest::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPyRandomForest(void *p) {
      delete (static_cast<::TMVA::MethodPyRandomForest*>(p));
   }
   static void deleteArray_TMVAcLcLMethodPyRandomForest(void *p) {
      delete [] (static_cast<::TMVA::MethodPyRandomForest*>(p));
   }
   static void destruct_TMVAcLcLMethodPyRandomForest(void *p) {
      typedef ::TMVA::MethodPyRandomForest current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPyRandomForest

namespace TMVA {
//______________________________________________________________________________
void MethodPyTorch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMVA::MethodPyTorch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMVA::MethodPyTorch::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMVA::MethodPyTorch::Class(),this);
   }
}

} // namespace TMVA
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLMethodPyTorch(void *p) {
      delete (static_cast<::TMVA::MethodPyTorch*>(p));
   }
   static void deleteArray_TMVAcLcLMethodPyTorch(void *p) {
      delete [] (static_cast<::TMVA::MethodPyTorch*>(p));
   }
   static void destruct_TMVAcLcLMethodPyTorch(void *p) {
      typedef ::TMVA::MethodPyTorch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::MethodPyTorch

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libPyMVA() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libPyMVA) = RecordReadRules_libPyMVA();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libPyMVA));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libPyMVA_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/Users/sanilawijesekara/.local/share/uv/python/cpython-3.12.12-macos-aarch64-none/include/python3.12",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPyMVA",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPyMVA_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPyMVA_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPyMVA() {
  TriggerDictionaryInitialization_libPyMVA_Impl();
}
