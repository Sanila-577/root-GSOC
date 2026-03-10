// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GeomPainter
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
#include "TGeoPainter.h"
#include "TGeoTrack.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TGeoPainter(void *p);
   static void deleteArray_TGeoPainter(void *p);
   static void destruct_TGeoPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPainter*)
   {
      ::TGeoPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPainter", ::TGeoPainter::Class_Version(), "TGeoPainter.h", 37,
                  typeid(::TGeoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPainter) );
      instance.SetDelete(&delete_TGeoPainter);
      instance.SetDeleteArray(&deleteArray_TGeoPainter);
      instance.SetDestructor(&destruct_TGeoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrack(void *p = nullptr);
   static void *newArray_TGeoTrack(Long_t size, void *p);
   static void delete_TGeoTrack(void *p);
   static void deleteArray_TGeoTrack(void *p);
   static void destruct_TGeoTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrack*)
   {
      ::TGeoTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrack", ::TGeoTrack::Class_Version(), "TGeoTrack.h", 26,
                  typeid(::TGeoTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrack) );
      instance.SetNew(&new_TGeoTrack);
      instance.SetNewArray(&newArray_TGeoTrack);
      instance.SetDelete(&delete_TGeoTrack);
      instance.SetDeleteArray(&deleteArray_TGeoTrack);
      instance.SetDestructor(&destruct_TGeoTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGeoPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPainter::Class_Name()
{
   return "TGeoPainter";
}

//______________________________________________________________________________
const char *TGeoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrack::Class_Name()
{
   return "TGeoTrack";
}

//______________________________________________________________________________
const char *TGeoTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGeoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoPainter(void *p) {
      delete (static_cast<::TGeoPainter*>(p));
   }
   static void deleteArray_TGeoPainter(void *p) {
      delete [] (static_cast<::TGeoPainter*>(p));
   }
   static void destruct_TGeoPainter(void *p) {
      typedef ::TGeoPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPainter

//______________________________________________________________________________
void TGeoTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrack(void *p) {
      return  p ? new(p) ::TGeoTrack : new ::TGeoTrack;
   }
   static void *newArray_TGeoTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrack[nElements] : new ::TGeoTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrack(void *p) {
      delete (static_cast<::TGeoTrack*>(p));
   }
   static void deleteArray_TGeoTrack(void *p) {
      delete [] (static_cast<::TGeoTrack*>(p));
   }
   static void destruct_TGeoTrack(void *p) {
      typedef ::TGeoTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrack

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGeomPainter() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGeomPainter) = RecordReadRules_libGeomPainter();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGeomPainter));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGeomPainter_Impl() {
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
      TROOT::RegisterModule("libGeomPainter",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGeomPainter_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGeomPainter_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGeomPainter() {
  TriggerDictionaryInitialization_libGeomPainter_Impl();
}
