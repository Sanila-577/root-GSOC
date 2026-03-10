// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RCurlHttp
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
#include "ROOT/RCurlConnection.hxx"
#include "ROOT/RRawFileCurl.hxx"
#include "TCurlFile.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRRawFileCurl_Dictionary();
   static void ROOTcLcLInternalcLcLRRawFileCurl_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRRawFileCurl(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRRawFileCurl(void *p);
   static void destruct_ROOTcLcLInternalcLcLRRawFileCurl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RRawFileCurl*)
   {
      ::ROOT::Internal::RRawFileCurl *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RRawFileCurl));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RRawFileCurl", "ROOT/RRawFileCurl.hxx", 29,
                  typeid(::ROOT::Internal::RRawFileCurl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRRawFileCurl_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::RRawFileCurl) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRRawFileCurl);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRRawFileCurl);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRRawFileCurl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RRawFileCurl*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RRawFileCurl*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RRawFileCurl*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRRawFileCurl_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RRawFileCurl*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRRawFileCurl_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRRawFileCurl_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TCurlFile(void *p);
   static void deleteArray_TCurlFile(void *p);
   static void destruct_TCurlFile(void *p);
   static void reset_TCurlFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlFile*)
   {
      ::TCurlFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlFile", ::TCurlFile::Class_Version(), "TCurlFile.h", 20,
                  typeid(::TCurlFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlFile::Dictionary, isa_proxy, 4,
                  sizeof(::TCurlFile) );
      instance.SetDelete(&delete_TCurlFile);
      instance.SetDeleteArray(&deleteArray_TCurlFile);
      instance.SetDestructor(&destruct_TCurlFile);
      instance.SetResetAfterMerge(&reset_TCurlFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCurlFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCurlFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TCurlFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlFile::Class_Name()
{
   return "TCurlFile";
}

//______________________________________________________________________________
const char *TCurlFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlFile*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRRawFileCurl(void *p) {
      delete (static_cast<::ROOT::Internal::RRawFileCurl*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRRawFileCurl(void *p) {
      delete [] (static_cast<::ROOT::Internal::RRawFileCurl*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRRawFileCurl(void *p) {
      typedef ::ROOT::Internal::RRawFileCurl current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RRawFileCurl

//______________________________________________________________________________
void TCurlFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCurlFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCurlFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TCurlFile(void *p) {
      delete (static_cast<::TCurlFile*>(p));
   }
   static void deleteArray_TCurlFile(void *p) {
      delete [] (static_cast<::TCurlFile*>(p));
   }
   static void destruct_TCurlFile(void *p) {
      typedef ::TCurlFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the Reset function.
   static void reset_TCurlFile(void *obj,TFileMergeInfo *info) {
      ((::TCurlFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TCurlFile

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRCurlHttp() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRCurlHttp) = RecordReadRules_libRCurlHttp();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRCurlHttp));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRCurlHttp_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
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
      TROOT::RegisterModule("libRCurlHttp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRCurlHttp_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRCurlHttp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRCurlHttp() {
  TriggerDictionaryInitialization_libRCurlHttp_Impl();
}
