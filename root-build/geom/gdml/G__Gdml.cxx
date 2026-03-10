// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Gdml
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
#include "TGDMLParse.h"
#include "TGDMLWrite.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TGDMLRefl(void *p = nullptr);
   static void *newArray_TGDMLRefl(Long_t size, void *p);
   static void delete_TGDMLRefl(void *p);
   static void deleteArray_TGDMLRefl(void *p);
   static void destruct_TGDMLRefl(void *p);
   static void streamer_TGDMLRefl(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLRefl*)
   {
      ::TGDMLRefl *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLRefl >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLRefl", ::TGDMLRefl::Class_Version(), "TGDMLParse.h", 30,
                  typeid(::TGDMLRefl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLRefl::Dictionary, isa_proxy, 16,
                  sizeof(::TGDMLRefl) );
      instance.SetNew(&new_TGDMLRefl);
      instance.SetNewArray(&newArray_TGDMLRefl);
      instance.SetDelete(&delete_TGDMLRefl);
      instance.SetDeleteArray(&deleteArray_TGDMLRefl);
      instance.SetDestructor(&destruct_TGDMLRefl);
      instance.SetStreamerFunc(&streamer_TGDMLRefl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLRefl*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDMLRefl*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDMLRefl*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDMLParse(void *p = nullptr);
   static void *newArray_TGDMLParse(Long_t size, void *p);
   static void delete_TGDMLParse(void *p);
   static void deleteArray_TGDMLParse(void *p);
   static void destruct_TGDMLParse(void *p);
   static void streamer_TGDMLParse(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLParse*)
   {
      ::TGDMLParse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLParse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLParse", ::TGDMLParse::Class_Version(), "TGDMLParse.h", 95,
                  typeid(::TGDMLParse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLParse::Dictionary, isa_proxy, 16,
                  sizeof(::TGDMLParse) );
      instance.SetNew(&new_TGDMLParse);
      instance.SetNewArray(&newArray_TGDMLParse);
      instance.SetDelete(&delete_TGDMLParse);
      instance.SetDeleteArray(&deleteArray_TGDMLParse);
      instance.SetDestructor(&destruct_TGDMLParse);
      instance.SetStreamerFunc(&streamer_TGDMLParse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLParse*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDMLParse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDMLParse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDMLWrite(void *p = nullptr);
   static void *newArray_TGDMLWrite(Long_t size, void *p);
   static void delete_TGDMLWrite(void *p);
   static void deleteArray_TGDMLWrite(void *p);
   static void destruct_TGDMLWrite(void *p);
   static void streamer_TGDMLWrite(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLWrite*)
   {
      ::TGDMLWrite *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLWrite >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLWrite", ::TGDMLWrite::Class_Version(), "TGDMLWrite.h", 56,
                  typeid(::TGDMLWrite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLWrite::Dictionary, isa_proxy, 16,
                  sizeof(::TGDMLWrite) );
      instance.SetNew(&new_TGDMLWrite);
      instance.SetNewArray(&newArray_TGDMLWrite);
      instance.SetDelete(&delete_TGDMLWrite);
      instance.SetDeleteArray(&deleteArray_TGDMLWrite);
      instance.SetDestructor(&destruct_TGDMLWrite);
      instance.SetStreamerFunc(&streamer_TGDMLWrite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLWrite*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDMLWrite*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDMLWrite*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGDMLRefl::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLRefl::Class_Name()
{
   return "TGDMLRefl";
}

//______________________________________________________________________________
const char *TGDMLRefl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLRefl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLRefl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLRefl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLRefl*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDMLParse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLParse::Class_Name()
{
   return "TGDMLParse";
}

//______________________________________________________________________________
const char *TGDMLParse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLParse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLParse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLParse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLParse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGDMLWrite::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLWrite::Class_Name()
{
   return "TGDMLWrite";
}

//______________________________________________________________________________
const char *TGDMLWrite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLWrite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLWrite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLWrite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLWrite*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGDMLRefl::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLRefl.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLRefl(void *p) {
      return  p ? new(p) ::TGDMLRefl : new ::TGDMLRefl;
   }
   static void *newArray_TGDMLRefl(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLRefl[nElements] : new ::TGDMLRefl[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLRefl(void *p) {
      delete (static_cast<::TGDMLRefl*>(p));
   }
   static void deleteArray_TGDMLRefl(void *p) {
      delete [] (static_cast<::TGDMLRefl*>(p));
   }
   static void destruct_TGDMLRefl(void *p) {
      typedef ::TGDMLRefl current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDMLRefl(TBuffer &buf, void *obj) {
      ((::TGDMLRefl*)obj)->::TGDMLRefl::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDMLRefl

//______________________________________________________________________________
void TGDMLParse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLParse.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLParse(void *p) {
      return  p ? new(p) ::TGDMLParse : new ::TGDMLParse;
   }
   static void *newArray_TGDMLParse(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLParse[nElements] : new ::TGDMLParse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLParse(void *p) {
      delete (static_cast<::TGDMLParse*>(p));
   }
   static void deleteArray_TGDMLParse(void *p) {
      delete [] (static_cast<::TGDMLParse*>(p));
   }
   static void destruct_TGDMLParse(void *p) {
      typedef ::TGDMLParse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDMLParse(TBuffer &buf, void *obj) {
      ((::TGDMLParse*)obj)->::TGDMLParse::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDMLParse

//______________________________________________________________________________
void TGDMLWrite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLWrite.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLWrite(void *p) {
      return  p ? new(p) ::TGDMLWrite : new ::TGDMLWrite;
   }
   static void *newArray_TGDMLWrite(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLWrite[nElements] : new ::TGDMLWrite[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLWrite(void *p) {
      delete (static_cast<::TGDMLWrite*>(p));
   }
   static void deleteArray_TGDMLWrite(void *p) {
      delete [] (static_cast<::TGDMLWrite*>(p));
   }
   static void destruct_TGDMLWrite(void *p) {
      typedef ::TGDMLWrite current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGDMLWrite(TBuffer &buf, void *obj) {
      ((::TGDMLWrite*)obj)->::TGDMLWrite::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGDMLWrite

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGdml() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGdml) = RecordReadRules_libGdml();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGdml));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGdml_Impl() {
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
      TROOT::RegisterModule("libGdml",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGdml_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGdml_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGdml() {
  TriggerDictionaryInitialization_libGdml_Impl();
}
