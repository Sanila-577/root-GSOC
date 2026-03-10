// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Rint
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
#include "TRint.h"
#include "TTabCom.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TRint(void *p);
   static void deleteArray_TRint(void *p);
   static void destruct_TRint(void *p);
   static void streamer_TRint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRint*)
   {
      ::TRint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRint", ::TRint::Class_Version(), "TRint.h", 31,
                  typeid(::TRint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRint::Dictionary, isa_proxy, 16,
                  sizeof(::TRint) );
      instance.SetDelete(&delete_TRint);
      instance.SetDeleteArray(&deleteArray_TRint);
      instance.SetDestructor(&destruct_TRint);
      instance.SetStreamerFunc(&streamer_TRint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRint*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRint*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRint*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTabCom(void *p = nullptr);
   static void *newArray_TTabCom(Long_t size, void *p);
   static void delete_TTabCom(void *p);
   static void deleteArray_TTabCom(void *p);
   static void destruct_TTabCom(void *p);
   static void streamer_TTabCom(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTabCom*)
   {
      ::TTabCom *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTabCom >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTabCom", ::TTabCom::Class_Version(), "TTabCom.h", 52,
                  typeid(::TTabCom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTabCom::Dictionary, isa_proxy, 16,
                  sizeof(::TTabCom) );
      instance.SetNew(&new_TTabCom);
      instance.SetNewArray(&newArray_TTabCom);
      instance.SetDelete(&delete_TTabCom);
      instance.SetDeleteArray(&deleteArray_TTabCom);
      instance.SetDestructor(&destruct_TTabCom);
      instance.SetStreamerFunc(&streamer_TTabCom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTabCom*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTabCom*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTabCom*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TRint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRint::Class_Name()
{
   return "TRint";
}

//______________________________________________________________________________
const char *TRint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTabCom::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTabCom::Class_Name()
{
   return "TTabCom";
}

//______________________________________________________________________________
const char *TTabCom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTabCom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTabCom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTabCom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTabCom*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TRint::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRint.

   TApplication::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRint(void *p) {
      delete (static_cast<::TRint*>(p));
   }
   static void deleteArray_TRint(void *p) {
      delete [] (static_cast<::TRint*>(p));
   }
   static void destruct_TRint(void *p) {
      typedef ::TRint current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRint(TBuffer &buf, void *obj) {
      ((::TRint*)obj)->::TRint::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRint

//______________________________________________________________________________
void TTabCom::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTabCom.

   ::Error("TTabCom::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTabCom(void *p) {
      return  p ? new(p) ::TTabCom : new ::TTabCom;
   }
   static void *newArray_TTabCom(Long_t nElements, void *p) {
      return p ? new(p) ::TTabCom[nElements] : new ::TTabCom[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTabCom(void *p) {
      delete (static_cast<::TTabCom*>(p));
   }
   static void deleteArray_TTabCom(void *p) {
      delete [] (static_cast<::TTabCom*>(p));
   }
   static void destruct_TTabCom(void *p) {
      typedef ::TTabCom current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTabCom(TBuffer &buf, void *obj) {
      ((::TTabCom*)obj)->::TTabCom::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTabCom

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRint() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRint) = RecordReadRules_libRint();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRint));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRint_Impl() {
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
      TROOT::RegisterModule("libRint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRint_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRint() {
  TriggerDictionaryInitialization_libRint_Impl();
}
