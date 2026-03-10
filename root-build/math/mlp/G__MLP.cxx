// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MLP
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
#include "TMLPAnalyzer.h"
#include "TMultiLayerPerceptron.h"
#include "TNeuron.h"
#include "TSynapse.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TMLPAnalyzer(void *p);
   static void deleteArray_TMLPAnalyzer(void *p);
   static void destruct_TMLPAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMLPAnalyzer*)
   {
      ::TMLPAnalyzer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMLPAnalyzer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMLPAnalyzer", ::TMLPAnalyzer::Class_Version(), "TMLPAnalyzer.h", 25,
                  typeid(::TMLPAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMLPAnalyzer::Dictionary, isa_proxy, 4,
                  sizeof(::TMLPAnalyzer) );
      instance.SetDelete(&delete_TMLPAnalyzer);
      instance.SetDeleteArray(&deleteArray_TMLPAnalyzer);
      instance.SetDestructor(&destruct_TMLPAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMLPAnalyzer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMLPAnalyzer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMLPAnalyzer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNeuron(void *p = nullptr);
   static void *newArray_TNeuron(Long_t size, void *p);
   static void delete_TNeuron(void *p);
   static void deleteArray_TNeuron(void *p);
   static void destruct_TNeuron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNeuron*)
   {
      ::TNeuron *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNeuron >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNeuron", ::TNeuron::Class_Version(), "TNeuron.h", 25,
                  typeid(::TNeuron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNeuron::Dictionary, isa_proxy, 4,
                  sizeof(::TNeuron) );
      instance.SetNew(&new_TNeuron);
      instance.SetNewArray(&newArray_TNeuron);
      instance.SetDelete(&delete_TNeuron);
      instance.SetDeleteArray(&deleteArray_TNeuron);
      instance.SetDestructor(&destruct_TNeuron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNeuron*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNeuron*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNeuron*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMultiLayerPerceptron(void *p = nullptr);
   static void *newArray_TMultiLayerPerceptron(Long_t size, void *p);
   static void delete_TMultiLayerPerceptron(void *p);
   static void deleteArray_TMultiLayerPerceptron(void *p);
   static void destruct_TMultiLayerPerceptron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMultiLayerPerceptron*)
   {
      ::TMultiLayerPerceptron *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMultiLayerPerceptron >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMultiLayerPerceptron", ::TMultiLayerPerceptron::Class_Version(), "TMultiLayerPerceptron.h", 26,
                  typeid(::TMultiLayerPerceptron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMultiLayerPerceptron::Dictionary, isa_proxy, 4,
                  sizeof(::TMultiLayerPerceptron) );
      instance.SetNew(&new_TMultiLayerPerceptron);
      instance.SetNewArray(&newArray_TMultiLayerPerceptron);
      instance.SetDelete(&delete_TMultiLayerPerceptron);
      instance.SetDeleteArray(&deleteArray_TMultiLayerPerceptron);
      instance.SetDestructor(&destruct_TMultiLayerPerceptron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMultiLayerPerceptron*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMultiLayerPerceptron*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMultiLayerPerceptron*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSynapse(void *p = nullptr);
   static void *newArray_TSynapse(Long_t size, void *p);
   static void delete_TSynapse(void *p);
   static void deleteArray_TSynapse(void *p);
   static void destruct_TSynapse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSynapse*)
   {
      ::TSynapse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSynapse >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSynapse", ::TSynapse::Class_Version(), "TSynapse.h", 20,
                  typeid(::TSynapse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSynapse::Dictionary, isa_proxy, 4,
                  sizeof(::TSynapse) );
      instance.SetNew(&new_TSynapse);
      instance.SetNewArray(&newArray_TSynapse);
      instance.SetDelete(&delete_TSynapse);
      instance.SetDeleteArray(&deleteArray_TSynapse);
      instance.SetDestructor(&destruct_TSynapse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSynapse*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSynapse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSynapse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMLPAnalyzer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMLPAnalyzer::Class_Name()
{
   return "TMLPAnalyzer";
}

//______________________________________________________________________________
const char *TMLPAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMLPAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMLPAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMLPAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMLPAnalyzer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNeuron::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TNeuron::Class_Name()
{
   return "TNeuron";
}

//______________________________________________________________________________
const char *TNeuron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TNeuron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNeuron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNeuron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNeuron*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMultiLayerPerceptron::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMultiLayerPerceptron::Class_Name()
{
   return "TMultiLayerPerceptron";
}

//______________________________________________________________________________
const char *TMultiLayerPerceptron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMultiLayerPerceptron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMultiLayerPerceptron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMultiLayerPerceptron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMultiLayerPerceptron*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSynapse::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSynapse::Class_Name()
{
   return "TSynapse";
}

//______________________________________________________________________________
const char *TSynapse::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSynapse::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSynapse::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSynapse::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSynapse*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TMLPAnalyzer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMLPAnalyzer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMLPAnalyzer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMLPAnalyzer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMLPAnalyzer(void *p) {
      delete (static_cast<::TMLPAnalyzer*>(p));
   }
   static void deleteArray_TMLPAnalyzer(void *p) {
      delete [] (static_cast<::TMLPAnalyzer*>(p));
   }
   static void destruct_TMLPAnalyzer(void *p) {
      typedef ::TMLPAnalyzer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMLPAnalyzer

//______________________________________________________________________________
void TNeuron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNeuron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TNeuron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TNeuron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNeuron(void *p) {
      return  p ? new(p) ::TNeuron : new ::TNeuron;
   }
   static void *newArray_TNeuron(Long_t nElements, void *p) {
      return p ? new(p) ::TNeuron[nElements] : new ::TNeuron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNeuron(void *p) {
      delete (static_cast<::TNeuron*>(p));
   }
   static void deleteArray_TNeuron(void *p) {
      delete [] (static_cast<::TNeuron*>(p));
   }
   static void destruct_TNeuron(void *p) {
      typedef ::TNeuron current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TNeuron

//______________________________________________________________________________
void TMultiLayerPerceptron::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMultiLayerPerceptron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMultiLayerPerceptron::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMultiLayerPerceptron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMultiLayerPerceptron(void *p) {
      return  p ? new(p) ::TMultiLayerPerceptron : new ::TMultiLayerPerceptron;
   }
   static void *newArray_TMultiLayerPerceptron(Long_t nElements, void *p) {
      return p ? new(p) ::TMultiLayerPerceptron[nElements] : new ::TMultiLayerPerceptron[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMultiLayerPerceptron(void *p) {
      delete (static_cast<::TMultiLayerPerceptron*>(p));
   }
   static void deleteArray_TMultiLayerPerceptron(void *p) {
      delete [] (static_cast<::TMultiLayerPerceptron*>(p));
   }
   static void destruct_TMultiLayerPerceptron(void *p) {
      typedef ::TMultiLayerPerceptron current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMultiLayerPerceptron

//______________________________________________________________________________
void TSynapse::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSynapse.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSynapse::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSynapse::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSynapse(void *p) {
      return  p ? new(p) ::TSynapse : new ::TSynapse;
   }
   static void *newArray_TSynapse(Long_t nElements, void *p) {
      return p ? new(p) ::TSynapse[nElements] : new ::TSynapse[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSynapse(void *p) {
      delete (static_cast<::TSynapse*>(p));
   }
   static void deleteArray_TSynapse(void *p) {
      delete [] (static_cast<::TSynapse*>(p));
   }
   static void destruct_TSynapse(void *p) {
      typedef ::TSynapse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSynapse

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libMLP() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libMLP) = RecordReadRules_libMLP();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libMLP));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libMLP_Impl() {
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
      TROOT::RegisterModule("libMLP",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMLP_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMLP_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMLP() {
  TriggerDictionaryInitialization_libMLP_Impl();
}
