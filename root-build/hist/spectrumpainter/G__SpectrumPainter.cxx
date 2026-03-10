// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__SpectrumPainter
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
#include "TSpectrum2Painter.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TSpectrum2Painter(void *p);
   static void deleteArray_TSpectrum2Painter(void *p);
   static void destruct_TSpectrum2Painter(void *p);
   static void streamer_TSpectrum2Painter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpectrum2Painter*)
   {
      ::TSpectrum2Painter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpectrum2Painter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSpectrum2Painter", ::TSpectrum2Painter::Class_Version(), "TSpectrum2Painter.h", 30,
                  typeid(::TSpectrum2Painter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpectrum2Painter::Dictionary, isa_proxy, 16,
                  sizeof(::TSpectrum2Painter) );
      instance.SetDelete(&delete_TSpectrum2Painter);
      instance.SetDeleteArray(&deleteArray_TSpectrum2Painter);
      instance.SetDestructor(&destruct_TSpectrum2Painter);
      instance.SetStreamerFunc(&streamer_TSpectrum2Painter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpectrum2Painter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSpectrum2Painter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSpectrum2Painter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSpectrum2Painter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpectrum2Painter::Class_Name()
{
   return "TSpectrum2Painter";
}

//______________________________________________________________________________
const char *TSpectrum2Painter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSpectrum2Painter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpectrum2Painter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpectrum2Painter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpectrum2Painter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSpectrum2Painter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpectrum2Painter.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSpectrum2Painter(void *p) {
      delete (static_cast<::TSpectrum2Painter*>(p));
   }
   static void deleteArray_TSpectrum2Painter(void *p) {
      delete [] (static_cast<::TSpectrum2Painter*>(p));
   }
   static void destruct_TSpectrum2Painter(void *p) {
      typedef ::TSpectrum2Painter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSpectrum2Painter(TBuffer &buf, void *obj) {
      ((::TSpectrum2Painter*)obj)->::TSpectrum2Painter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSpectrum2Painter

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libSpectrumPainter() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libSpectrumPainter) = RecordReadRules_libSpectrumPainter();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libSpectrumPainter));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libSpectrumPainter_Impl() {
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
      TROOT::RegisterModule("libSpectrumPainter",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libSpectrumPainter_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libSpectrumPainter_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libSpectrumPainter() {
  TriggerDictionaryInitialization_libSpectrumPainter_Impl();
}
