// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__HistPainter
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
#include "Hoption.h"
#include "Hparam.h"
#include "TGraph2DPainter.h"
#include "TGraphPainter.h"
#include "THistPainter.h"
#include "TPaletteAxis.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TGraph2DPainter(void *p = nullptr);
   static void *newArray_TGraph2DPainter(Long_t size, void *p);
   static void delete_TGraph2DPainter(void *p);
   static void deleteArray_TGraph2DPainter(void *p);
   static void destruct_TGraph2DPainter(void *p);
   static void streamer_TGraph2DPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraph2DPainter*)
   {
      ::TGraph2DPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraph2DPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraph2DPainter", ::TGraph2DPainter::Class_Version(), "TGraph2DPainter.h", 31,
                  typeid(::TGraph2DPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraph2DPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGraph2DPainter) );
      instance.SetNew(&new_TGraph2DPainter);
      instance.SetNewArray(&newArray_TGraph2DPainter);
      instance.SetDelete(&delete_TGraph2DPainter);
      instance.SetDeleteArray(&deleteArray_TGraph2DPainter);
      instance.SetDestructor(&destruct_TGraph2DPainter);
      instance.SetStreamerFunc(&streamer_TGraph2DPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraph2DPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraph2DPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraph2DPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphPainter(void *p = nullptr);
   static void *newArray_TGraphPainter(Long_t size, void *p);
   static void delete_TGraphPainter(void *p);
   static void deleteArray_TGraphPainter(void *p);
   static void destruct_TGraphPainter(void *p);
   static void streamer_TGraphPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphPainter*)
   {
      ::TGraphPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphPainter", ::TGraphPainter::Class_Version(), "TGraphPainter.h", 32,
                  typeid(::TGraphPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphPainter::Dictionary, isa_proxy, 16,
                  sizeof(::TGraphPainter) );
      instance.SetNew(&new_TGraphPainter);
      instance.SetNewArray(&newArray_TGraphPainter);
      instance.SetDelete(&delete_TGraphPainter);
      instance.SetDeleteArray(&deleteArray_TGraphPainter);
      instance.SetDestructor(&destruct_TGraphPainter);
      instance.SetStreamerFunc(&streamer_TGraphPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THistPainter(void *p = nullptr);
   static void *newArray_THistPainter(Long_t size, void *p);
   static void delete_THistPainter(void *p);
   static void deleteArray_THistPainter(void *p);
   static void destruct_THistPainter(void *p);
   static void streamer_THistPainter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THistPainter*)
   {
      ::THistPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THistPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("THistPainter", ::THistPainter::Class_Version(), "THistPainter.h", 50,
                  typeid(::THistPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THistPainter::Dictionary, isa_proxy, 16,
                  sizeof(::THistPainter) );
      instance.SetNew(&new_THistPainter);
      instance.SetNewArray(&newArray_THistPainter);
      instance.SetDelete(&delete_THistPainter);
      instance.SetDeleteArray(&deleteArray_THistPainter);
      instance.SetDestructor(&destruct_THistPainter);
      instance.SetStreamerFunc(&streamer_THistPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THistPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::THistPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::THistPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaletteAxis(void *p = nullptr);
   static void *newArray_TPaletteAxis(Long_t size, void *p);
   static void delete_TPaletteAxis(void *p);
   static void deleteArray_TPaletteAxis(void *p);
   static void destruct_TPaletteAxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaletteAxis*)
   {
      ::TPaletteAxis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaletteAxis >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPaletteAxis", ::TPaletteAxis::Class_Version(), "TPaletteAxis.h", 28,
                  typeid(::TPaletteAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaletteAxis::Dictionary, isa_proxy, 4,
                  sizeof(::TPaletteAxis) );
      instance.SetNew(&new_TPaletteAxis);
      instance.SetNewArray(&newArray_TPaletteAxis);
      instance.SetDelete(&delete_TPaletteAxis);
      instance.SetDeleteArray(&deleteArray_TPaletteAxis);
      instance.SetDestructor(&destruct_TPaletteAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaletteAxis*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPaletteAxis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPaletteAxis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGraph2DPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraph2DPainter::Class_Name()
{
   return "TGraph2DPainter";
}

//______________________________________________________________________________
const char *TGraph2DPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraph2DPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraph2DPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraph2DPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraph2DPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphPainter::Class_Name()
{
   return "TGraphPainter";
}

//______________________________________________________________________________
const char *TGraphPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THistPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *THistPainter::Class_Name()
{
   return "THistPainter";
}

//______________________________________________________________________________
const char *THistPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int THistPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THistPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THistPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THistPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaletteAxis::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaletteAxis::Class_Name()
{
   return "TPaletteAxis";
}

//______________________________________________________________________________
const char *TPaletteAxis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPaletteAxis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaletteAxis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaletteAxis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaletteAxis*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGraph2DPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraph2DPainter.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraph2DPainter(void *p) {
      return  p ? new(p) ::TGraph2DPainter : new ::TGraph2DPainter;
   }
   static void *newArray_TGraph2DPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TGraph2DPainter[nElements] : new ::TGraph2DPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraph2DPainter(void *p) {
      delete (static_cast<::TGraph2DPainter*>(p));
   }
   static void deleteArray_TGraph2DPainter(void *p) {
      delete [] (static_cast<::TGraph2DPainter*>(p));
   }
   static void destruct_TGraph2DPainter(void *p) {
      typedef ::TGraph2DPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraph2DPainter(TBuffer &buf, void *obj) {
      ((::TGraph2DPainter*)obj)->::TGraph2DPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraph2DPainter

//______________________________________________________________________________
void TGraphPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphPainter.

   TVirtualGraphPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphPainter(void *p) {
      return  p ? new(p) ::TGraphPainter : new ::TGraphPainter;
   }
   static void *newArray_TGraphPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphPainter[nElements] : new ::TGraphPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphPainter(void *p) {
      delete (static_cast<::TGraphPainter*>(p));
   }
   static void deleteArray_TGraphPainter(void *p) {
      delete [] (static_cast<::TGraphPainter*>(p));
   }
   static void destruct_TGraphPainter(void *p) {
      typedef ::TGraphPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphPainter(TBuffer &buf, void *obj) {
      ((::TGraphPainter*)obj)->::TGraphPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphPainter

//______________________________________________________________________________
void THistPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class THistPainter.

   TVirtualHistPainter::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THistPainter(void *p) {
      return  p ? new(p) ::THistPainter : new ::THistPainter;
   }
   static void *newArray_THistPainter(Long_t nElements, void *p) {
      return p ? new(p) ::THistPainter[nElements] : new ::THistPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_THistPainter(void *p) {
      delete (static_cast<::THistPainter*>(p));
   }
   static void deleteArray_THistPainter(void *p) {
      delete [] (static_cast<::THistPainter*>(p));
   }
   static void destruct_THistPainter(void *p) {
      typedef ::THistPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_THistPainter(TBuffer &buf, void *obj) {
      ((::THistPainter*)obj)->::THistPainter::Streamer(buf);
   }
} // end of namespace ROOT for class ::THistPainter

//______________________________________________________________________________
void TPaletteAxis::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaletteAxis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPaletteAxis::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPaletteAxis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaletteAxis(void *p) {
      return  p ? new(p) ::TPaletteAxis : new ::TPaletteAxis;
   }
   static void *newArray_TPaletteAxis(Long_t nElements, void *p) {
      return p ? new(p) ::TPaletteAxis[nElements] : new ::TPaletteAxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaletteAxis(void *p) {
      delete (static_cast<::TPaletteAxis*>(p));
   }
   static void deleteArray_TPaletteAxis(void *p) {
      delete [] (static_cast<::TPaletteAxis*>(p));
   }
   static void destruct_TPaletteAxis(void *p) {
      typedef ::TPaletteAxis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPaletteAxis

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libHistPainter() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libHistPainter) = RecordReadRules_libHistPainter();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libHistPainter));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libHistPainter_Impl() {
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
      TROOT::RegisterModule("libHistPainter",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHistPainter_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHistPainter_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHistPainter() {
  TriggerDictionaryInitialization_libHistPainter_Impl();
}
