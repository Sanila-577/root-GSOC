// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__MultiProc
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
#include "MPCode.h"
#include "MPSendRecv.h"
#include "PoolUtils.h"
#include "TMPClient.h"
#include "TMPWorker.h"
#include "TMPWorkerExecutor.h"
#include "TProcPool.h"
#include "ROOT/TProcessExecutor.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *TMPWorker_Dictionary();
   static void TMPWorker_TClassManip(TClass*);
   static void *new_TMPWorker(void *p = nullptr);
   static void *newArray_TMPWorker(Long_t size, void *p);
   static void delete_TMPWorker(void *p);
   static void deleteArray_TMPWorker(void *p);
   static void destruct_TMPWorker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMPWorker*)
   {
      ::TMPWorker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMPWorker));
      static ::ROOT::TGenericClassInfo 
         instance("TMPWorker", "TMPWorker.h", 25,
                  typeid(::TMPWorker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMPWorker_Dictionary, isa_proxy, 0,
                  sizeof(::TMPWorker) );
      instance.SetNew(&new_TMPWorker);
      instance.SetNewArray(&newArray_TMPWorker);
      instance.SetDelete(&delete_TMPWorker);
      instance.SetDeleteArray(&deleteArray_TMPWorker);
      instance.SetDestructor(&destruct_TMPWorker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMPWorker*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMPWorker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMPWorker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMPWorker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMPWorker*>(nullptr))->GetClass();
      TMPWorker_TClassManip(theClass);
   return theClass;
   }

   static void TMPWorker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMPClient_Dictionary();
   static void TMPClient_TClassManip(TClass*);
   static void *new_TMPClient(void *p = nullptr);
   static void *newArray_TMPClient(Long_t size, void *p);
   static void delete_TMPClient(void *p);
   static void deleteArray_TMPClient(void *p);
   static void destruct_TMPClient(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMPClient*)
   {
      ::TMPClient *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMPClient));
      static ::ROOT::TGenericClassInfo 
         instance("TMPClient", "TMPClient.h", 23,
                  typeid(::TMPClient), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMPClient_Dictionary, isa_proxy, 0,
                  sizeof(::TMPClient) );
      instance.SetNew(&new_TMPClient);
      instance.SetNewArray(&newArray_TMPClient);
      instance.SetDelete(&delete_TMPClient);
      instance.SetDeleteArray(&deleteArray_TMPClient);
      instance.SetDestructor(&destruct_TMPClient);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMPClient*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMPClient*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMPClient*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMPClient_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMPClient*>(nullptr))->GetClass();
      TMPClient_TClassManip(theClass);
   return theClass;
   }

   static void TMPClient_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLTProcessExecutor_Dictionary();
   static void ROOTcLcLTProcessExecutor_TClassManip(TClass*);
   static void *new_ROOTcLcLTProcessExecutor(void *p = nullptr);
   static void *newArray_ROOTcLcLTProcessExecutor(Long_t size, void *p);
   static void delete_ROOTcLcLTProcessExecutor(void *p);
   static void deleteArray_ROOTcLcLTProcessExecutor(void *p);
   static void destruct_ROOTcLcLTProcessExecutor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TProcessExecutor*)
   {
      ::ROOT::TProcessExecutor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TProcessExecutor));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TProcessExecutor", "ROOT/TProcessExecutor.hxx", 37,
                  typeid(::ROOT::TProcessExecutor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTProcessExecutor_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::TProcessExecutor) );
      instance.SetNew(&new_ROOTcLcLTProcessExecutor);
      instance.SetNewArray(&newArray_ROOTcLcLTProcessExecutor);
      instance.SetDelete(&delete_ROOTcLcLTProcessExecutor);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTProcessExecutor);
      instance.SetDestructor(&destruct_ROOTcLcLTProcessExecutor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TProcessExecutor*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::TProcessExecutor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::TProcessExecutor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTProcessExecutor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::TProcessExecutor*>(nullptr))->GetClass();
      ROOTcLcLTProcessExecutor_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTProcessExecutor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMPWorker(void *p) {
      return  p ? new(p) ::TMPWorker : new ::TMPWorker;
   }
   static void *newArray_TMPWorker(Long_t nElements, void *p) {
      return p ? new(p) ::TMPWorker[nElements] : new ::TMPWorker[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMPWorker(void *p) {
      delete (static_cast<::TMPWorker*>(p));
   }
   static void deleteArray_TMPWorker(void *p) {
      delete [] (static_cast<::TMPWorker*>(p));
   }
   static void destruct_TMPWorker(void *p) {
      typedef ::TMPWorker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMPWorker

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMPClient(void *p) {
      return  p ? new(p) ::TMPClient : new ::TMPClient;
   }
   static void *newArray_TMPClient(Long_t nElements, void *p) {
      return p ? new(p) ::TMPClient[nElements] : new ::TMPClient[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMPClient(void *p) {
      delete (static_cast<::TMPClient*>(p));
   }
   static void deleteArray_TMPClient(void *p) {
      delete [] (static_cast<::TMPClient*>(p));
   }
   static void destruct_TMPClient(void *p) {
      typedef ::TMPClient current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMPClient

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLTProcessExecutor(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::TProcessExecutor : new ::ROOT::TProcessExecutor;
   }
   static void *newArray_ROOTcLcLTProcessExecutor(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::TProcessExecutor[nElements] : new ::ROOT::TProcessExecutor[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLTProcessExecutor(void *p) {
      delete (static_cast<::ROOT::TProcessExecutor*>(p));
   }
   static void deleteArray_ROOTcLcLTProcessExecutor(void *p) {
      delete [] (static_cast<::ROOT::TProcessExecutor*>(p));
   }
   static void destruct_ROOTcLcLTProcessExecutor(void *p) {
      typedef ::ROOT::TProcessExecutor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TProcessExecutor

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libMultiProc() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libMultiProc) = RecordReadRules_libMultiProc();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libMultiProc));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libMultiProc_Impl() {
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
      TROOT::RegisterModule("libMultiProc",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMultiProc_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMultiProc_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMultiProc() {
  TriggerDictionaryInitialization_libMultiProc_Impl();
}
