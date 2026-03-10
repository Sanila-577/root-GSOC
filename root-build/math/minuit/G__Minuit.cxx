// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Minuit
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
#include "TFitter.h"
#include "TLinearFitter.h"
#include "TLinearMinimizer.h"
#include "TMinuit.h"
#include "TMinuitMinimizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TFitter(void *p = nullptr);
   static void *newArray_TFitter(Long_t size, void *p);
   static void delete_TFitter(void *p);
   static void deleteArray_TFitter(void *p);
   static void destruct_TFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitter*)
   {
      ::TFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitter", ::TFitter::Class_Version(), "TFitter.h", 19,
                  typeid(::TFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitter::Dictionary, isa_proxy, 4,
                  sizeof(::TFitter) );
      instance.SetNew(&new_TFitter);
      instance.SetNewArray(&newArray_TFitter);
      instance.SetDelete(&delete_TFitter);
      instance.SetDeleteArray(&deleteArray_TFitter);
      instance.SetDestructor(&destruct_TFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLinearFitter(void *p = nullptr);
   static void *newArray_TLinearFitter(Long_t size, void *p);
   static void delete_TLinearFitter(void *p);
   static void deleteArray_TLinearFitter(void *p);
   static void destruct_TLinearFitter(void *p);
   static void streamer_TLinearFitter(TBuffer &buf, void *obj);
   static Long64_t merge_TLinearFitter(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLinearFitter*)
   {
      ::TLinearFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLinearFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLinearFitter", ::TLinearFitter::Class_Version(), "TLinearFitter.h", 153,
                  typeid(::TLinearFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLinearFitter::Dictionary, isa_proxy, 17,
                  sizeof(::TLinearFitter) );
      instance.SetNew(&new_TLinearFitter);
      instance.SetNewArray(&newArray_TLinearFitter);
      instance.SetDelete(&delete_TLinearFitter);
      instance.SetDeleteArray(&deleteArray_TLinearFitter);
      instance.SetDestructor(&destruct_TLinearFitter);
      instance.SetStreamerFunc(&streamer_TLinearFitter);
      instance.SetMerge(&merge_TLinearFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLinearFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLinearFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLinearFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLinearMinimizer(void *p = nullptr);
   static void *newArray_TLinearMinimizer(Long_t size, void *p);
   static void delete_TLinearMinimizer(void *p);
   static void deleteArray_TLinearMinimizer(void *p);
   static void destruct_TLinearMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLinearMinimizer*)
   {
      ::TLinearMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLinearMinimizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLinearMinimizer", ::TLinearMinimizer::Class_Version(), "TLinearMinimizer.h", 31,
                  typeid(::TLinearMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLinearMinimizer::Dictionary, isa_proxy, 4,
                  sizeof(::TLinearMinimizer) );
      instance.SetNew(&new_TLinearMinimizer);
      instance.SetNewArray(&newArray_TLinearMinimizer);
      instance.SetDelete(&delete_TLinearMinimizer);
      instance.SetDeleteArray(&deleteArray_TLinearMinimizer);
      instance.SetDestructor(&destruct_TLinearMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLinearMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLinearMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLinearMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMinuit(void *p = nullptr);
   static void *newArray_TMinuit(Long_t size, void *p);
   static void delete_TMinuit(void *p);
   static void deleteArray_TMinuit(void *p);
   static void destruct_TMinuit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMinuit*)
   {
      ::TMinuit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMinuit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMinuit", ::TMinuit::Class_Version(), "TMinuit.h", 27,
                  typeid(::TMinuit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMinuit::Dictionary, isa_proxy, 4,
                  sizeof(::TMinuit) );
      instance.SetNew(&new_TMinuit);
      instance.SetNewArray(&newArray_TMinuit);
      instance.SetDelete(&delete_TMinuit);
      instance.SetDeleteArray(&deleteArray_TMinuit);
      instance.SetDestructor(&destruct_TMinuit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMinuit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMinuit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMinuit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMinuitMinimizer(void *p = nullptr);
   static void *newArray_TMinuitMinimizer(Long_t size, void *p);
   static void delete_TMinuitMinimizer(void *p);
   static void deleteArray_TMinuitMinimizer(void *p);
   static void destruct_TMinuitMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMinuitMinimizer*)
   {
      ::TMinuitMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMinuitMinimizer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMinuitMinimizer", ::TMinuitMinimizer::Class_Version(), "TMinuitMinimizer.h", 51,
                  typeid(::TMinuitMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMinuitMinimizer::Dictionary, isa_proxy, 4,
                  sizeof(::TMinuitMinimizer) );
      instance.SetNew(&new_TMinuitMinimizer);
      instance.SetNewArray(&newArray_TMinuitMinimizer);
      instance.SetDelete(&delete_TMinuitMinimizer);
      instance.SetDeleteArray(&deleteArray_TMinuitMinimizer);
      instance.SetDestructor(&destruct_TMinuitMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMinuitMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMinuitMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMinuitMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitter::Class_Name()
{
   return "TFitter";
}

//______________________________________________________________________________
const char *TFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLinearFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLinearFitter::Class_Name()
{
   return "TLinearFitter";
}

//______________________________________________________________________________
const char *TLinearFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLinearFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLinearFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLinearFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLinearFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLinearFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLinearFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLinearFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLinearMinimizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLinearMinimizer::Class_Name()
{
   return "TLinearMinimizer";
}

//______________________________________________________________________________
const char *TLinearMinimizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLinearMinimizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLinearMinimizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLinearMinimizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLinearMinimizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLinearMinimizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLinearMinimizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLinearMinimizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMinuit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMinuit::Class_Name()
{
   return "TMinuit";
}

//______________________________________________________________________________
const char *TMinuit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMinuit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMinuit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMinuit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMinuitMinimizer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMinuitMinimizer::Class_Name()
{
   return "TMinuitMinimizer";
}

//______________________________________________________________________________
const char *TMinuitMinimizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuitMinimizer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMinuitMinimizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuitMinimizer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMinuitMinimizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuitMinimizer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMinuitMinimizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuitMinimizer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFitter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFitter(void *p) {
      return  p ? new(p) ::TFitter : new ::TFitter;
   }
   static void *newArray_TFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TFitter[nElements] : new ::TFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFitter(void *p) {
      delete (static_cast<::TFitter*>(p));
   }
   static void deleteArray_TFitter(void *p) {
      delete [] (static_cast<::TFitter*>(p));
   }
   static void destruct_TFitter(void *p) {
      typedef ::TFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFitter

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLinearFitter(void *p) {
      return  p ? new(p) ::TLinearFitter : new ::TLinearFitter;
   }
   static void *newArray_TLinearFitter(Long_t nElements, void *p) {
      return p ? new(p) ::TLinearFitter[nElements] : new ::TLinearFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLinearFitter(void *p) {
      delete (static_cast<::TLinearFitter*>(p));
   }
   static void deleteArray_TLinearFitter(void *p) {
      delete [] (static_cast<::TLinearFitter*>(p));
   }
   static void destruct_TLinearFitter(void *p) {
      typedef ::TLinearFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLinearFitter(TBuffer &buf, void *obj) {
      ((::TLinearFitter*)obj)->::TLinearFitter::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TLinearFitter(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TLinearFitter*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TLinearFitter

//______________________________________________________________________________
void TLinearMinimizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLinearMinimizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TLinearMinimizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TLinearMinimizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLinearMinimizer(void *p) {
      return  p ? new(p) ::TLinearMinimizer : new ::TLinearMinimizer;
   }
   static void *newArray_TLinearMinimizer(Long_t nElements, void *p) {
      return p ? new(p) ::TLinearMinimizer[nElements] : new ::TLinearMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLinearMinimizer(void *p) {
      delete (static_cast<::TLinearMinimizer*>(p));
   }
   static void deleteArray_TLinearMinimizer(void *p) {
      delete [] (static_cast<::TLinearMinimizer*>(p));
   }
   static void destruct_TLinearMinimizer(void *p) {
      typedef ::TLinearMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TLinearMinimizer

//______________________________________________________________________________
void TMinuit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMinuit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMinuit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMinuit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMinuit(void *p) {
      return  p ? new(p) ::TMinuit : new ::TMinuit;
   }
   static void *newArray_TMinuit(Long_t nElements, void *p) {
      return p ? new(p) ::TMinuit[nElements] : new ::TMinuit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMinuit(void *p) {
      delete (static_cast<::TMinuit*>(p));
   }
   static void deleteArray_TMinuit(void *p) {
      delete [] (static_cast<::TMinuit*>(p));
   }
   static void destruct_TMinuit(void *p) {
      typedef ::TMinuit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMinuit

//______________________________________________________________________________
void TMinuitMinimizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMinuitMinimizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TMinuitMinimizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TMinuitMinimizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMinuitMinimizer(void *p) {
      return  p ? new(p) ::TMinuitMinimizer : new ::TMinuitMinimizer;
   }
   static void *newArray_TMinuitMinimizer(Long_t nElements, void *p) {
      return p ? new(p) ::TMinuitMinimizer[nElements] : new ::TMinuitMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMinuitMinimizer(void *p) {
      delete (static_cast<::TMinuitMinimizer*>(p));
   }
   static void deleteArray_TMinuitMinimizer(void *p) {
      delete [] (static_cast<::TMinuitMinimizer*>(p));
   }
   static void destruct_TMinuitMinimizer(void *p) {
      typedef ::TMinuitMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMinuitMinimizer

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "functional", 86,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::__1::vector<double, std::__1::allocator<double>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libMinuit() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libMinuit) = RecordReadRules_libMinuit();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libMinuit));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libMinuit_Impl() {
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
      TROOT::RegisterModule("libMinuit",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMinuit_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMinuit_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMinuit() {
  TriggerDictionaryInitialization_libMinuit_Impl();
}
