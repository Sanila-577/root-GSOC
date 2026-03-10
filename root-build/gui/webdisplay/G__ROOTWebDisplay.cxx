// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTWebDisplay
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
#include "ROOT/RWebDisplayArgs.hxx"
#include "ROOT/RWebDisplayHandle.hxx"
#include "ROOT/RWebWindow.hxx"
#include "ROOT/RWebWindowsManager.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLRWebDisplayArgs_Dictionary();
   static void ROOTcLcLRWebDisplayArgs_TClassManip(TClass*);
   static void *new_ROOTcLcLRWebDisplayArgs(void *p = nullptr);
   static void *newArray_ROOTcLcLRWebDisplayArgs(Long_t size, void *p);
   static void delete_ROOTcLcLRWebDisplayArgs(void *p);
   static void deleteArray_ROOTcLcLRWebDisplayArgs(void *p);
   static void destruct_ROOTcLcLRWebDisplayArgs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RWebDisplayArgs*)
   {
      ::ROOT::RWebDisplayArgs *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RWebDisplayArgs));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RWebDisplayArgs", "ROOT/RWebDisplayArgs.hxx", 30,
                  typeid(::ROOT::RWebDisplayArgs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRWebDisplayArgs_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RWebDisplayArgs) );
      instance.SetNew(&new_ROOTcLcLRWebDisplayArgs);
      instance.SetNewArray(&newArray_ROOTcLcLRWebDisplayArgs);
      instance.SetDelete(&delete_ROOTcLcLRWebDisplayArgs);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRWebDisplayArgs);
      instance.SetDestructor(&destruct_ROOTcLcLRWebDisplayArgs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RWebDisplayArgs*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RWebDisplayArgs*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebDisplayArgs*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRWebDisplayArgs_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebDisplayArgs*>(nullptr))->GetClass();
      ROOTcLcLRWebDisplayArgs_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRWebDisplayArgs_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRWebDisplayHandle_Dictionary();
   static void ROOTcLcLRWebDisplayHandle_TClassManip(TClass*);
   static void delete_ROOTcLcLRWebDisplayHandle(void *p);
   static void deleteArray_ROOTcLcLRWebDisplayHandle(void *p);
   static void destruct_ROOTcLcLRWebDisplayHandle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RWebDisplayHandle*)
   {
      ::ROOT::RWebDisplayHandle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RWebDisplayHandle));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RWebDisplayHandle", "ROOT/RWebDisplayHandle.hxx", 26,
                  typeid(::ROOT::RWebDisplayHandle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRWebDisplayHandle_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RWebDisplayHandle) );
      instance.SetDelete(&delete_ROOTcLcLRWebDisplayHandle);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRWebDisplayHandle);
      instance.SetDestructor(&destruct_ROOTcLcLRWebDisplayHandle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RWebDisplayHandle*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RWebDisplayHandle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebDisplayHandle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRWebDisplayHandle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebDisplayHandle*>(nullptr))->GetClass();
      ROOTcLcLRWebDisplayHandle_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRWebDisplayHandle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRWebWindow_Dictionary();
   static void ROOTcLcLRWebWindow_TClassManip(TClass*);
   static void *new_ROOTcLcLRWebWindow(void *p = nullptr);
   static void *newArray_ROOTcLcLRWebWindow(Long_t size, void *p);
   static void delete_ROOTcLcLRWebWindow(void *p);
   static void deleteArray_ROOTcLcLRWebWindow(void *p);
   static void destruct_ROOTcLcLRWebWindow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RWebWindow*)
   {
      ::ROOT::RWebWindow *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RWebWindow));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RWebWindow", "ROOT/RWebWindow.hxx", 54,
                  typeid(::ROOT::RWebWindow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRWebWindow_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RWebWindow) );
      instance.SetNew(&new_ROOTcLcLRWebWindow);
      instance.SetNewArray(&newArray_ROOTcLcLRWebWindow);
      instance.SetDelete(&delete_ROOTcLcLRWebWindow);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRWebWindow);
      instance.SetDestructor(&destruct_ROOTcLcLRWebWindow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RWebWindow*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RWebWindow*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebWindow*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRWebWindow_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebWindow*>(nullptr))->GetClass();
      ROOTcLcLRWebWindow_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRWebWindow_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRWebWindowsManager_Dictionary();
   static void ROOTcLcLRWebWindowsManager_TClassManip(TClass*);
   static void *new_ROOTcLcLRWebWindowsManager(void *p = nullptr);
   static void *newArray_ROOTcLcLRWebWindowsManager(Long_t size, void *p);
   static void delete_ROOTcLcLRWebWindowsManager(void *p);
   static void deleteArray_ROOTcLcLRWebWindowsManager(void *p);
   static void destruct_ROOTcLcLRWebWindowsManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RWebWindowsManager*)
   {
      ::ROOT::RWebWindowsManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RWebWindowsManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RWebWindowsManager", "ROOT/RWebWindowsManager.hxx", 40,
                  typeid(::ROOT::RWebWindowsManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRWebWindowsManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RWebWindowsManager) );
      instance.SetNew(&new_ROOTcLcLRWebWindowsManager);
      instance.SetNewArray(&newArray_ROOTcLcLRWebWindowsManager);
      instance.SetDelete(&delete_ROOTcLcLRWebWindowsManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRWebWindowsManager);
      instance.SetDestructor(&destruct_ROOTcLcLRWebWindowsManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RWebWindowsManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RWebWindowsManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebWindowsManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRWebWindowsManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RWebWindowsManager*>(nullptr))->GetClass();
      ROOTcLcLRWebWindowsManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRWebWindowsManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRWebDisplayArgs(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebDisplayArgs : new ::ROOT::RWebDisplayArgs;
   }
   static void *newArray_ROOTcLcLRWebDisplayArgs(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebDisplayArgs[nElements] : new ::ROOT::RWebDisplayArgs[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRWebDisplayArgs(void *p) {
      delete (static_cast<::ROOT::RWebDisplayArgs*>(p));
   }
   static void deleteArray_ROOTcLcLRWebDisplayArgs(void *p) {
      delete [] (static_cast<::ROOT::RWebDisplayArgs*>(p));
   }
   static void destruct_ROOTcLcLRWebDisplayArgs(void *p) {
      typedef ::ROOT::RWebDisplayArgs current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RWebDisplayArgs

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRWebDisplayHandle(void *p) {
      delete (static_cast<::ROOT::RWebDisplayHandle*>(p));
   }
   static void deleteArray_ROOTcLcLRWebDisplayHandle(void *p) {
      delete [] (static_cast<::ROOT::RWebDisplayHandle*>(p));
   }
   static void destruct_ROOTcLcLRWebDisplayHandle(void *p) {
      typedef ::ROOT::RWebDisplayHandle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RWebDisplayHandle

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRWebWindow(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebWindow : new ::ROOT::RWebWindow;
   }
   static void *newArray_ROOTcLcLRWebWindow(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebWindow[nElements] : new ::ROOT::RWebWindow[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRWebWindow(void *p) {
      delete (static_cast<::ROOT::RWebWindow*>(p));
   }
   static void deleteArray_ROOTcLcLRWebWindow(void *p) {
      delete [] (static_cast<::ROOT::RWebWindow*>(p));
   }
   static void destruct_ROOTcLcLRWebWindow(void *p) {
      typedef ::ROOT::RWebWindow current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RWebWindow

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRWebWindowsManager(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebWindowsManager : new ::ROOT::RWebWindowsManager;
   }
   static void *newArray_ROOTcLcLRWebWindowsManager(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RWebWindowsManager[nElements] : new ::ROOT::RWebWindowsManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRWebWindowsManager(void *p) {
      delete (static_cast<::ROOT::RWebWindowsManager*>(p));
   }
   static void deleteArray_ROOTcLcLRWebWindowsManager(void *p) {
      delete [] (static_cast<::ROOT::RWebWindowsManager*>(p));
   }
   static void destruct_ROOTcLcLRWebWindowsManager(void *p) {
      typedef ::ROOT::RWebWindowsManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RWebWindowsManager

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTWebDisplay() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTWebDisplay) = RecordReadRules_libROOTWebDisplay();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTWebDisplay));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTWebDisplay_Impl() {
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
      TROOT::RegisterModule("libROOTWebDisplay",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTWebDisplay_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTWebDisplay_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTWebDisplay() {
  TriggerDictionaryInitialization_libROOTWebDisplay_Impl();
}
