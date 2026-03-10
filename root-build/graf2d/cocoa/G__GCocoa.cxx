// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GCocoa
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
#include "TGCocoa.h"
#include "TGOSXGL.h"
#include "TGQuartz.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TGCocoa(void *p = nullptr);
   static void *newArray_TGCocoa(Long_t size, void *p);
   static void delete_TGCocoa(void *p);
   static void deleteArray_TGCocoa(void *p);
   static void destruct_TGCocoa(void *p);
   static void streamer_TGCocoa(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGCocoa*)
   {
      ::TGCocoa *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGCocoa >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGCocoa", ::TGCocoa::Class_Version(), "TGCocoa.h", 58,
                  typeid(::TGCocoa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGCocoa::Dictionary, isa_proxy, 16,
                  sizeof(::TGCocoa) );
      instance.SetNew(&new_TGCocoa);
      instance.SetNewArray(&newArray_TGCocoa);
      instance.SetDelete(&delete_TGCocoa);
      instance.SetDeleteArray(&deleteArray_TGCocoa);
      instance.SetDestructor(&destruct_TGCocoa);
      instance.SetStreamerFunc(&streamer_TGCocoa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGCocoa*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGCocoa*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGCocoa*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGOSXGLManager(void *p = nullptr);
   static void *newArray_TGOSXGLManager(Long_t size, void *p);
   static void delete_TGOSXGLManager(void *p);
   static void deleteArray_TGOSXGLManager(void *p);
   static void destruct_TGOSXGLManager(void *p);
   static void streamer_TGOSXGLManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGOSXGLManager*)
   {
      ::TGOSXGLManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGOSXGLManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGOSXGLManager", ::TGOSXGLManager::Class_Version(), "TGOSXGL.h", 15,
                  typeid(::TGOSXGLManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGOSXGLManager::Dictionary, isa_proxy, 16,
                  sizeof(::TGOSXGLManager) );
      instance.SetNew(&new_TGOSXGLManager);
      instance.SetNewArray(&newArray_TGOSXGLManager);
      instance.SetDelete(&delete_TGOSXGLManager);
      instance.SetDeleteArray(&deleteArray_TGOSXGLManager);
      instance.SetDestructor(&destruct_TGOSXGLManager);
      instance.SetStreamerFunc(&streamer_TGOSXGLManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGOSXGLManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGOSXGLManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGOSXGLManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGQuartz(void *p = nullptr);
   static void *newArray_TGQuartz(Long_t size, void *p);
   static void delete_TGQuartz(void *p);
   static void deleteArray_TGQuartz(void *p);
   static void destruct_TGQuartz(void *p);
   static void streamer_TGQuartz(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGQuartz*)
   {
      ::TGQuartz *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGQuartz >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGQuartz", ::TGQuartz::Class_Version(), "TGQuartz.h", 28,
                  typeid(::TGQuartz), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGQuartz::Dictionary, isa_proxy, 16,
                  sizeof(::TGQuartz) );
      instance.SetNew(&new_TGQuartz);
      instance.SetNewArray(&newArray_TGQuartz);
      instance.SetDelete(&delete_TGQuartz);
      instance.SetDeleteArray(&deleteArray_TGQuartz);
      instance.SetDestructor(&destruct_TGQuartz);
      instance.SetStreamerFunc(&streamer_TGQuartz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGQuartz*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGQuartz*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGQuartz*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGCocoa::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGCocoa::Class_Name()
{
   return "TGCocoa";
}

//______________________________________________________________________________
const char *TGCocoa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCocoa*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGCocoa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGCocoa*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGCocoa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCocoa*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGCocoa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGCocoa*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGOSXGLManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGOSXGLManager::Class_Name()
{
   return "TGOSXGLManager";
}

//______________________________________________________________________________
const char *TGOSXGLManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGOSXGLManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGOSXGLManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGOSXGLManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGOSXGLManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGOSXGLManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGOSXGLManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGOSXGLManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGQuartz::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGQuartz::Class_Name()
{
   return "TGQuartz";
}

//______________________________________________________________________________
const char *TGQuartz::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGQuartz*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGQuartz::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGQuartz*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGQuartz::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGQuartz*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGQuartz::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGQuartz*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGCocoa::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGCocoa.

   TVirtualX::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGCocoa(void *p) {
      return  p ? new(p) ::TGCocoa : new ::TGCocoa;
   }
   static void *newArray_TGCocoa(Long_t nElements, void *p) {
      return p ? new(p) ::TGCocoa[nElements] : new ::TGCocoa[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGCocoa(void *p) {
      delete (static_cast<::TGCocoa*>(p));
   }
   static void deleteArray_TGCocoa(void *p) {
      delete [] (static_cast<::TGCocoa*>(p));
   }
   static void destruct_TGCocoa(void *p) {
      typedef ::TGCocoa current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGCocoa(TBuffer &buf, void *obj) {
      ((::TGCocoa*)obj)->::TGCocoa::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGCocoa

//______________________________________________________________________________
void TGOSXGLManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGOSXGLManager.

   TGLManager::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGOSXGLManager(void *p) {
      return  p ? new(p) ::TGOSXGLManager : new ::TGOSXGLManager;
   }
   static void *newArray_TGOSXGLManager(Long_t nElements, void *p) {
      return p ? new(p) ::TGOSXGLManager[nElements] : new ::TGOSXGLManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGOSXGLManager(void *p) {
      delete (static_cast<::TGOSXGLManager*>(p));
   }
   static void deleteArray_TGOSXGLManager(void *p) {
      delete [] (static_cast<::TGOSXGLManager*>(p));
   }
   static void destruct_TGOSXGLManager(void *p) {
      typedef ::TGOSXGLManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGOSXGLManager(TBuffer &buf, void *obj) {
      ((::TGOSXGLManager*)obj)->::TGOSXGLManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGOSXGLManager

//______________________________________________________________________________
void TGQuartz::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGQuartz.

   TGCocoa::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGQuartz(void *p) {
      return  p ? new(p) ::TGQuartz : new ::TGQuartz;
   }
   static void *newArray_TGQuartz(Long_t nElements, void *p) {
      return p ? new(p) ::TGQuartz[nElements] : new ::TGQuartz[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGQuartz(void *p) {
      delete (static_cast<::TGQuartz*>(p));
   }
   static void deleteArray_TGQuartz(void *p) {
      delete [] (static_cast<::TGQuartz*>(p));
   }
   static void destruct_TGQuartz(void *p) {
      typedef ::TGQuartz current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGQuartz(TBuffer &buf, void *obj) {
      ((::TGQuartz*)obj)->::TGQuartz::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGQuartz

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGCocoa() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGCocoa) = RecordReadRules_libGCocoa();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGCocoa));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGCocoa_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks/OpenGL.framework",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGCocoa",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGCocoa_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGCocoa_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGCocoa() {
  TriggerDictionaryInitialization_libGCocoa_Impl();
}
