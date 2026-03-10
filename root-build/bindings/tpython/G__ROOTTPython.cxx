// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTTPython
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
#include "TPyArg.h"
#include "TPyReturn.h"
#include "TPython.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TPyArg(void *p);
   static void deleteArray_TPyArg(void *p);
   static void destruct_TPyArg(void *p);
   static void streamer_TPyArg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyArg*)
   {
      ::TPyArg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyArg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPyArg", ::TPyArg::Class_Version(), "TPyArg.h", 26,
                  typeid(::TPyArg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyArg::Dictionary, isa_proxy, 16,
                  sizeof(::TPyArg) );
      instance.SetDelete(&delete_TPyArg);
      instance.SetDeleteArray(&deleteArray_TPyArg);
      instance.SetDestructor(&destruct_TPyArg);
      instance.SetStreamerFunc(&streamer_TPyArg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyArg*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPyArg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPyArg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPyReturn(void *p = nullptr);
   static void *newArray_TPyReturn(Long_t size, void *p);
   static void delete_TPyReturn(void *p);
   static void deleteArray_TPyReturn(void *p);
   static void destruct_TPyReturn(void *p);
   static void streamer_TPyReturn(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyReturn*)
   {
      ::TPyReturn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyReturn >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPyReturn", ::TPyReturn::Class_Version(), "TPyReturn.h", 23,
                  typeid(::TPyReturn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyReturn::Dictionary, isa_proxy, 16,
                  sizeof(::TPyReturn) );
      instance.SetNew(&new_TPyReturn);
      instance.SetNewArray(&newArray_TPyReturn);
      instance.SetDelete(&delete_TPyReturn);
      instance.SetDeleteArray(&deleteArray_TPyReturn);
      instance.SetDestructor(&destruct_TPyReturn);
      instance.SetStreamerFunc(&streamer_TPyReturn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyReturn*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPyReturn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPyReturn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPython(void *p = nullptr);
   static void *newArray_TPython(Long_t size, void *p);
   static void delete_TPython(void *p);
   static void deleteArray_TPython(void *p);
   static void destruct_TPython(void *p);
   static void streamer_TPython(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPython*)
   {
      ::TPython *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPython >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPython", ::TPython::Class_Version(), "TPython.h", 36,
                  typeid(::TPython), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPython::Dictionary, isa_proxy, 16,
                  sizeof(::TPython) );
      instance.SetNew(&new_TPython);
      instance.SetNewArray(&newArray_TPython);
      instance.SetDelete(&delete_TPython);
      instance.SetDeleteArray(&deleteArray_TPython);
      instance.SetDestructor(&destruct_TPython);
      instance.SetStreamerFunc(&streamer_TPython);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPython*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPython*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPython*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TPyArg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyArg::Class_Name()
{
   return "TPyArg";
}

//______________________________________________________________________________
const char *TPyArg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPyArg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyArg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPyReturn::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyReturn::Class_Name()
{
   return "TPyReturn";
}

//______________________________________________________________________________
const char *TPyReturn::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPyReturn::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyReturn::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyReturn::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPython::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPython::Class_Name()
{
   return "TPython";
}

//______________________________________________________________________________
const char *TPython::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPython*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPython::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPython*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPython::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPython*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPython::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPython*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TPyArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyArg.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyArg::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyArg::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPyArg(void *p) {
      delete (static_cast<::TPyArg*>(p));
   }
   static void deleteArray_TPyArg(void *p) {
      delete [] (static_cast<::TPyArg*>(p));
   }
   static void destruct_TPyArg(void *p) {
      typedef ::TPyArg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyArg(TBuffer &buf, void *obj) {
      ((::TPyArg*)obj)->::TPyArg::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyArg

//______________________________________________________________________________
void TPyReturn::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyReturn.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyReturn::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyReturn::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPyReturn(void *p) {
      return  p ? new(p) ::TPyReturn : new ::TPyReturn;
   }
   static void *newArray_TPyReturn(Long_t nElements, void *p) {
      return p ? new(p) ::TPyReturn[nElements] : new ::TPyReturn[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPyReturn(void *p) {
      delete (static_cast<::TPyReturn*>(p));
   }
   static void deleteArray_TPyReturn(void *p) {
      delete [] (static_cast<::TPyReturn*>(p));
   }
   static void destruct_TPyReturn(void *p) {
      typedef ::TPyReturn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyReturn(TBuffer &buf, void *obj) {
      ((::TPyReturn*)obj)->::TPyReturn::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyReturn

//______________________________________________________________________________
void TPython::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPython.

   ::Error("TPython::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPython(void *p) {
      return  p ? new(p) ::TPython : new ::TPython;
   }
   static void *newArray_TPython(Long_t nElements, void *p) {
      return p ? new(p) ::TPython[nElements] : new ::TPython[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPython(void *p) {
      delete (static_cast<::TPython*>(p));
   }
   static void deleteArray_TPython(void *p) {
      delete [] (static_cast<::TPython*>(p));
   }
   static void destruct_TPython(void *p) {
      typedef ::TPython current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPython(TBuffer &buf, void *obj) {
      ((::TPython*)obj)->::TPython::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPython

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTTPython() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTTPython) = RecordReadRules_libROOTTPython();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTTPython));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTTPython_Impl() {
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
      TROOT::RegisterModule("libROOTTPython",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTTPython_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTTPython_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTTPython() {
  TriggerDictionaryInitialization_libROOTTPython_Impl();
}
