// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RSQLite
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
#include "TSQLiteResult.h"
#include "TSQLiteRow.h"
#include "TSQLiteServer.h"
#include "TSQLiteStatement.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TSQLiteResult(void *p);
   static void deleteArray_TSQLiteResult(void *p);
   static void destruct_TSQLiteResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLiteResult*)
   {
      ::TSQLiteResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLiteResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLiteResult", ::TSQLiteResult::Class_Version(), "TSQLiteResult.h", 19,
                  typeid(::TSQLiteResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLiteResult::Dictionary, isa_proxy, 4,
                  sizeof(::TSQLiteResult) );
      instance.SetDelete(&delete_TSQLiteResult);
      instance.SetDeleteArray(&deleteArray_TSQLiteResult);
      instance.SetDestructor(&destruct_TSQLiteResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLiteResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSQLiteResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSQLiteResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLiteRow(void *p);
   static void deleteArray_TSQLiteRow(void *p);
   static void destruct_TSQLiteRow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLiteRow*)
   {
      ::TSQLiteRow *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLiteRow >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLiteRow", ::TSQLiteRow::Class_Version(), "TSQLiteRow.h", 19,
                  typeid(::TSQLiteRow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLiteRow::Dictionary, isa_proxy, 4,
                  sizeof(::TSQLiteRow) );
      instance.SetDelete(&delete_TSQLiteRow);
      instance.SetDeleteArray(&deleteArray_TSQLiteRow);
      instance.SetDestructor(&destruct_TSQLiteRow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLiteRow*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSQLiteRow*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSQLiteRow*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLiteServer(void *p);
   static void deleteArray_TSQLiteServer(void *p);
   static void destruct_TSQLiteServer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLiteServer*)
   {
      ::TSQLiteServer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLiteServer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLiteServer", ::TSQLiteServer::Class_Version(), "TSQLiteServer.h", 19,
                  typeid(::TSQLiteServer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLiteServer::Dictionary, isa_proxy, 4,
                  sizeof(::TSQLiteServer) );
      instance.SetDelete(&delete_TSQLiteServer);
      instance.SetDeleteArray(&deleteArray_TSQLiteServer);
      instance.SetDestructor(&destruct_TSQLiteServer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLiteServer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSQLiteServer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSQLiteServer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TSQLiteStatement(void *p);
   static void deleteArray_TSQLiteStatement(void *p);
   static void destruct_TSQLiteStatement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSQLiteStatement*)
   {
      ::TSQLiteStatement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSQLiteStatement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSQLiteStatement", ::TSQLiteStatement::Class_Version(), "TSQLiteStatement.h", 25,
                  typeid(::TSQLiteStatement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSQLiteStatement::Dictionary, isa_proxy, 4,
                  sizeof(::TSQLiteStatement) );
      instance.SetDelete(&delete_TSQLiteStatement);
      instance.SetDeleteArray(&deleteArray_TSQLiteStatement);
      instance.SetDestructor(&destruct_TSQLiteStatement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSQLiteStatement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSQLiteStatement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSQLiteStatement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TSQLiteResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLiteResult::Class_Name()
{
   return "TSQLiteResult";
}

//______________________________________________________________________________
const char *TSQLiteResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLiteResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLiteResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLiteResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteResult*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLiteRow::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLiteRow::Class_Name()
{
   return "TSQLiteRow";
}

//______________________________________________________________________________
const char *TSQLiteRow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteRow*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLiteRow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteRow*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLiteRow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteRow*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLiteRow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteRow*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLiteServer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLiteServer::Class_Name()
{
   return "TSQLiteServer";
}

//______________________________________________________________________________
const char *TSQLiteServer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteServer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLiteServer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteServer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLiteServer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteServer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLiteServer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteServer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSQLiteStatement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSQLiteStatement::Class_Name()
{
   return "TSQLiteStatement";
}

//______________________________________________________________________________
const char *TSQLiteStatement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteStatement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSQLiteStatement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteStatement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSQLiteStatement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteStatement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSQLiteStatement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSQLiteStatement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TSQLiteResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLiteResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSQLiteResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSQLiteResult::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLiteResult(void *p) {
      delete (static_cast<::TSQLiteResult*>(p));
   }
   static void deleteArray_TSQLiteResult(void *p) {
      delete [] (static_cast<::TSQLiteResult*>(p));
   }
   static void destruct_TSQLiteResult(void *p) {
      typedef ::TSQLiteResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSQLiteResult

//______________________________________________________________________________
void TSQLiteRow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLiteRow.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSQLiteRow::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSQLiteRow::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLiteRow(void *p) {
      delete (static_cast<::TSQLiteRow*>(p));
   }
   static void deleteArray_TSQLiteRow(void *p) {
      delete [] (static_cast<::TSQLiteRow*>(p));
   }
   static void destruct_TSQLiteRow(void *p) {
      typedef ::TSQLiteRow current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSQLiteRow

//______________________________________________________________________________
void TSQLiteServer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLiteServer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSQLiteServer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSQLiteServer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLiteServer(void *p) {
      delete (static_cast<::TSQLiteServer*>(p));
   }
   static void deleteArray_TSQLiteServer(void *p) {
      delete [] (static_cast<::TSQLiteServer*>(p));
   }
   static void destruct_TSQLiteServer(void *p) {
      typedef ::TSQLiteServer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSQLiteServer

//______________________________________________________________________________
void TSQLiteStatement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSQLiteStatement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSQLiteStatement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSQLiteStatement::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TSQLiteStatement(void *p) {
      delete (static_cast<::TSQLiteStatement*>(p));
   }
   static void deleteArray_TSQLiteStatement(void *p) {
      delete [] (static_cast<::TSQLiteStatement*>(p));
   }
   static void destruct_TSQLiteStatement(void *p) {
      typedef ::TSQLiteStatement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSQLiteStatement

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRSQLite() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRSQLite) = RecordReadRules_libRSQLite();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRSQLite));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRSQLite_Impl() {
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
      TROOT::RegisterModule("libRSQLite",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRSQLite_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRSQLite_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRSQLite() {
  TriggerDictionaryInitialization_libRSQLite_Impl();
}
