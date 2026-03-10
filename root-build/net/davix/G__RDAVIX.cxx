// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RDAVIX
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
#include "ROOT/RRawFileDavix.hxx"
#include "TDavixFile.h"
#include "TDavixSystem.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRRawFileDavix_Dictionary();
   static void ROOTcLcLInternalcLcLRRawFileDavix_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRRawFileDavix(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRRawFileDavix(void *p);
   static void destruct_ROOTcLcLInternalcLcLRRawFileDavix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RRawFileDavix*)
   {
      ::ROOT::Internal::RRawFileDavix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RRawFileDavix));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RRawFileDavix", "ROOT/RRawFileDavix.hxx", 35,
                  typeid(::ROOT::Internal::RRawFileDavix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRRawFileDavix_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::RRawFileDavix) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRRawFileDavix);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRRawFileDavix);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRRawFileDavix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RRawFileDavix*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RRawFileDavix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RRawFileDavix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRRawFileDavix_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RRawFileDavix*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRRawFileDavix_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRRawFileDavix_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TDavixFile(void *p);
   static void deleteArray_TDavixFile(void *p);
   static void destruct_TDavixFile(void *p);
   static void reset_TDavixFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDavixFile*)
   {
      ::TDavixFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDavixFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDavixFile", ::TDavixFile::Class_Version(), "TDavixFile.h", 67,
                  typeid(::TDavixFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDavixFile::Dictionary, isa_proxy, 4,
                  sizeof(::TDavixFile) );
      instance.SetDelete(&delete_TDavixFile);
      instance.SetDeleteArray(&deleteArray_TDavixFile);
      instance.SetDestructor(&destruct_TDavixFile);
      instance.SetResetAfterMerge(&reset_TDavixFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDavixFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDavixFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDavixFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TDavixSystem(void *p = nullptr);
   static void *newArray_TDavixSystem(Long_t size, void *p);
   static void delete_TDavixSystem(void *p);
   static void deleteArray_TDavixSystem(void *p);
   static void destruct_TDavixSystem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDavixSystem*)
   {
      ::TDavixSystem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDavixSystem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDavixSystem", ::TDavixSystem::Class_Version(), "TDavixSystem.h", 36,
                  typeid(::TDavixSystem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDavixSystem::Dictionary, isa_proxy, 4,
                  sizeof(::TDavixSystem) );
      instance.SetNew(&new_TDavixSystem);
      instance.SetNewArray(&newArray_TDavixSystem);
      instance.SetDelete(&delete_TDavixSystem);
      instance.SetDeleteArray(&deleteArray_TDavixSystem);
      instance.SetDestructor(&destruct_TDavixSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDavixSystem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDavixSystem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDavixSystem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TDavixFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDavixFile::Class_Name()
{
   return "TDavixFile";
}

//______________________________________________________________________________
const char *TDavixFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDavixFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDavixFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDavixFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDavixFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDavixFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDavixFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDavixFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TDavixSystem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDavixSystem::Class_Name()
{
   return "TDavixSystem";
}

//______________________________________________________________________________
const char *TDavixSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDavixSystem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDavixSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDavixSystem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDavixSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDavixSystem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDavixSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDavixSystem*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRRawFileDavix(void *p) {
      delete (static_cast<::ROOT::Internal::RRawFileDavix*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRRawFileDavix(void *p) {
      delete [] (static_cast<::ROOT::Internal::RRawFileDavix*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRRawFileDavix(void *p) {
      typedef ::ROOT::Internal::RRawFileDavix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RRawFileDavix

//______________________________________________________________________________
void TDavixFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDavixFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDavixFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDavixFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TDavixFile(void *p) {
      delete (static_cast<::TDavixFile*>(p));
   }
   static void deleteArray_TDavixFile(void *p) {
      delete [] (static_cast<::TDavixFile*>(p));
   }
   static void destruct_TDavixFile(void *p) {
      typedef ::TDavixFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_TDavixFile(void *obj,TFileMergeInfo *info) {
      ((::TDavixFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TDavixFile

//______________________________________________________________________________
void TDavixSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TDavixSystem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TDavixSystem::Class(),this);
   } else {
      R__b.WriteClassBuffer(TDavixSystem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDavixSystem(void *p) {
      return  p ? new(p) ::TDavixSystem : new ::TDavixSystem;
   }
   static void *newArray_TDavixSystem(Long_t nElements, void *p) {
      return p ? new(p) ::TDavixSystem[nElements] : new ::TDavixSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDavixSystem(void *p) {
      delete (static_cast<::TDavixSystem*>(p));
   }
   static void deleteArray_TDavixSystem(void *p) {
      delete [] (static_cast<::TDavixSystem*>(p));
   }
   static void destruct_TDavixSystem(void *p) {
      typedef ::TDavixSystem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TDavixSystem

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRDAVIX() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRDAVIX) = RecordReadRules_libRDAVIX();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRDAVIX));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRDAVIX_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/opt/homebrew/include",
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRDAVIX",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRDAVIX_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRDAVIX_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRDAVIX() {
  TriggerDictionaryInitialization_libRDAVIX_Impl();
}
