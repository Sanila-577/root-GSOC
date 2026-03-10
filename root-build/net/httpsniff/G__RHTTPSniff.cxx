// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RHTTPSniff
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
#include "TRootSnifferFull.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TRootSnifferFull(void *p = nullptr);
   static void *newArray_TRootSnifferFull(Long_t size, void *p);
   static void delete_TRootSnifferFull(void *p);
   static void deleteArray_TRootSnifferFull(void *p);
   static void destruct_TRootSnifferFull(void *p);
   static void streamer_TRootSnifferFull(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSnifferFull*)
   {
      ::TRootSnifferFull *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSnifferFull >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSnifferFull", ::TRootSnifferFull::Class_Version(), "TRootSnifferFull.h", 20,
                  typeid(::TRootSnifferFull), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSnifferFull::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSnifferFull) );
      instance.SetNew(&new_TRootSnifferFull);
      instance.SetNewArray(&newArray_TRootSnifferFull);
      instance.SetDelete(&delete_TRootSnifferFull);
      instance.SetDeleteArray(&deleteArray_TRootSnifferFull);
      instance.SetDestructor(&destruct_TRootSnifferFull);
      instance.SetStreamerFunc(&streamer_TRootSnifferFull);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSnifferFull*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRootSnifferFull*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRootSnifferFull*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TRootSnifferFull::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSnifferFull::Class_Name()
{
   return "TRootSnifferFull";
}

//______________________________________________________________________________
const char *TRootSnifferFull::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSnifferFull::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSnifferFull::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSnifferFull::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TRootSnifferFull::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSnifferFull.

   TRootSniffer::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootSnifferFull(void *p) {
      return  p ? new(p) ::TRootSnifferFull : new ::TRootSnifferFull;
   }
   static void *newArray_TRootSnifferFull(Long_t nElements, void *p) {
      return p ? new(p) ::TRootSnifferFull[nElements] : new ::TRootSnifferFull[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootSnifferFull(void *p) {
      delete (static_cast<::TRootSnifferFull*>(p));
   }
   static void deleteArray_TRootSnifferFull(void *p) {
      delete [] (static_cast<::TRootSnifferFull*>(p));
   }
   static void destruct_TRootSnifferFull(void *p) {
      typedef ::TRootSnifferFull current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSnifferFull(TBuffer &buf, void *obj) {
      ((::TRootSnifferFull*)obj)->::TRootSnifferFull::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSnifferFull

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRHTTPSniff() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRHTTPSniff) = RecordReadRules_libRHTTPSniff();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRHTTPSniff));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRHTTPSniff_Impl() {
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
      TROOT::RegisterModule("libRHTTPSniff",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRHTTPSniff_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRHTTPSniff_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRHTTPSniff() {
  TriggerDictionaryInitialization_libRHTTPSniff_Impl();
}
