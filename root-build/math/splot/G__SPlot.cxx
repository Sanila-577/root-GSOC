// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__SPlot
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
#include "TSPlot.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TSPlot(void *p = nullptr);
   static void *newArray_TSPlot(Long_t size, void *p);
   static void delete_TSPlot(void *p);
   static void deleteArray_TSPlot(void *p);
   static void destruct_TSPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSPlot*)
   {
      ::TSPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSPlot", ::TSPlot::Class_Version(), "TSPlot.h", 21,
                  typeid(::TSPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSPlot::Dictionary, isa_proxy, 4,
                  sizeof(::TSPlot) );
      instance.SetNew(&new_TSPlot);
      instance.SetNewArray(&newArray_TSPlot);
      instance.SetDelete(&delete_TSPlot);
      instance.SetDeleteArray(&deleteArray_TSPlot);
      instance.SetDestructor(&destruct_TSPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSPlot::Class_Name()
{
   return "TSPlot";
}

//______________________________________________________________________________
const char *TSPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSPlot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSPlot(void *p) {
      return  p ? new(p) ::TSPlot : new ::TSPlot;
   }
   static void *newArray_TSPlot(Long_t nElements, void *p) {
      return p ? new(p) ::TSPlot[nElements] : new ::TSPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSPlot(void *p) {
      delete (static_cast<::TSPlot*>(p));
   }
   static void deleteArray_TSPlot(void *p) {
      delete [] (static_cast<::TSPlot*>(p));
   }
   static void destruct_TSPlot(void *p) {
      typedef ::TSPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSPlot

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libSPlot() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libSPlot) = RecordReadRules_libSPlot();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libSPlot));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libSPlot_Impl() {
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
      TROOT::RegisterModule("libSPlot",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSPlot_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSPlot_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSPlot() {
  TriggerDictionaryInitialization_libSPlot_Impl();
}
