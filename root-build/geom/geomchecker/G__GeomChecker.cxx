// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GeomChecker
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
#include "TGeoOverlap.h"
#include "TGeoChecker.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TGeoOverlap(void *p = nullptr);
   static void *newArray_TGeoOverlap(Long_t size, void *p);
   static void delete_TGeoOverlap(void *p);
   static void deleteArray_TGeoOverlap(void *p);
   static void destruct_TGeoOverlap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoOverlap*)
   {
      ::TGeoOverlap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoOverlap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoOverlap", ::TGeoOverlap::Class_Version(), "TGeoOverlap.h", 37,
                  typeid(::TGeoOverlap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoOverlap::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoOverlap) );
      instance.SetNew(&new_TGeoOverlap);
      instance.SetNewArray(&newArray_TGeoOverlap);
      instance.SetDelete(&delete_TGeoOverlap);
      instance.SetDeleteArray(&deleteArray_TGeoOverlap);
      instance.SetDestructor(&destruct_TGeoOverlap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoOverlap*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoOverlap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoOverlap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoChecker(void *p = nullptr);
   static void *newArray_TGeoChecker(Long_t size, void *p);
   static void delete_TGeoChecker(void *p);
   static void deleteArray_TGeoChecker(void *p);
   static void destruct_TGeoChecker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoChecker*)
   {
      ::TGeoChecker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoChecker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoChecker", ::TGeoChecker::Class_Version(), "TGeoChecker.h", 41,
                  typeid(::TGeoChecker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoChecker::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoChecker) );
      instance.SetNew(&new_TGeoChecker);
      instance.SetNewArray(&newArray_TGeoChecker);
      instance.SetDelete(&delete_TGeoChecker);
      instance.SetDeleteArray(&deleteArray_TGeoChecker);
      instance.SetDestructor(&destruct_TGeoChecker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoChecker*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoChecker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoChecker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGeoOverlap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoOverlap::Class_Name()
{
   return "TGeoOverlap";
}

//______________________________________________________________________________
const char *TGeoOverlap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoOverlap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoOverlap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoOverlap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoOverlap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoChecker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoChecker::Class_Name()
{
   return "TGeoChecker";
}

//______________________________________________________________________________
const char *TGeoChecker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoChecker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoChecker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoChecker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoChecker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGeoOverlap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoOverlap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoOverlap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoOverlap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoOverlap(void *p) {
      return  p ? new(p) ::TGeoOverlap : new ::TGeoOverlap;
   }
   static void *newArray_TGeoOverlap(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoOverlap[nElements] : new ::TGeoOverlap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoOverlap(void *p) {
      delete (static_cast<::TGeoOverlap*>(p));
   }
   static void deleteArray_TGeoOverlap(void *p) {
      delete [] (static_cast<::TGeoOverlap*>(p));
   }
   static void destruct_TGeoOverlap(void *p) {
      typedef ::TGeoOverlap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoOverlap

//______________________________________________________________________________
void TGeoChecker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoChecker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoChecker::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoChecker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoChecker(void *p) {
      return  p ? new(p) ::TGeoChecker : new ::TGeoChecker;
   }
   static void *newArray_TGeoChecker(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoChecker[nElements] : new ::TGeoChecker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoChecker(void *p) {
      delete (static_cast<::TGeoChecker*>(p));
   }
   static void deleteArray_TGeoChecker(void *p) {
      delete [] (static_cast<::TGeoChecker*>(p));
   }
   static void destruct_TGeoChecker(void *p) {
      typedef ::TGeoChecker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoChecker

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGeomChecker() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGeomChecker) = RecordReadRules_libGeomChecker();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGeomChecker));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGeomChecker_Impl() {
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
      TROOT::RegisterModule("libGeomChecker",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGeomChecker_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGeomChecker_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGeomChecker() {
  TriggerDictionaryInitialization_libGeomChecker_Impl();
}
