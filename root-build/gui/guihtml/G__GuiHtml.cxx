// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__GuiHtml
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
#include "TGHtml.h"
#include "TGHtmlBrowser.h"
#include "TGHtmlTokens.h"
#include "TGHtmlUri.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TGHtml(void *p);
   static void deleteArray_TGHtml(void *p);
   static void destruct_TGHtml(void *p);
   static void streamer_TGHtml(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHtml*)
   {
      ::TGHtml *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHtml >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHtml", ::TGHtml::Class_Version(), "TGHtml.h", 873,
                  typeid(::TGHtml), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHtml::Dictionary, isa_proxy, 16,
                  sizeof(::TGHtml) );
      instance.SetDelete(&delete_TGHtml);
      instance.SetDeleteArray(&deleteArray_TGHtml);
      instance.SetDestructor(&destruct_TGHtml);
      instance.SetStreamerFunc(&streamer_TGHtml);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHtml*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHtml*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHtml*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGHtmlBrowser(void *p = nullptr);
   static void *newArray_TGHtmlBrowser(Long_t size, void *p);
   static void delete_TGHtmlBrowser(void *p);
   static void deleteArray_TGHtmlBrowser(void *p);
   static void destruct_TGHtmlBrowser(void *p);
   static void streamer_TGHtmlBrowser(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGHtmlBrowser*)
   {
      ::TGHtmlBrowser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGHtmlBrowser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGHtmlBrowser", ::TGHtmlBrowser::Class_Version(), "TGHtmlBrowser.h", 34,
                  typeid(::TGHtmlBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGHtmlBrowser::Dictionary, isa_proxy, 16,
                  sizeof(::TGHtmlBrowser) );
      instance.SetNew(&new_TGHtmlBrowser);
      instance.SetNewArray(&newArray_TGHtmlBrowser);
      instance.SetDelete(&delete_TGHtmlBrowser);
      instance.SetDeleteArray(&deleteArray_TGHtmlBrowser);
      instance.SetDestructor(&destruct_TGHtmlBrowser);
      instance.SetStreamerFunc(&streamer_TGHtmlBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGHtmlBrowser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGHtmlBrowser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGHtmlBrowser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGHtml::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHtml::Class_Name()
{
   return "TGHtml";
}

//______________________________________________________________________________
const char *TGHtml::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHtml::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHtml::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHtml::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtml*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGHtmlBrowser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGHtmlBrowser::Class_Name()
{
   return "TGHtmlBrowser";
}

//______________________________________________________________________________
const char *TGHtmlBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGHtmlBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGHtmlBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGHtmlBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGHtmlBrowser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGHtml::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHtml.

   TGView::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGHtml(void *p) {
      delete (static_cast<::TGHtml*>(p));
   }
   static void deleteArray_TGHtml(void *p) {
      delete [] (static_cast<::TGHtml*>(p));
   }
   static void destruct_TGHtml(void *p) {
      typedef ::TGHtml current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHtml(TBuffer &buf, void *obj) {
      ((::TGHtml*)obj)->::TGHtml::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHtml

//______________________________________________________________________________
void TGHtmlBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGHtmlBrowser.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGHtmlBrowser(void *p) {
      return  p ? new(p) ::TGHtmlBrowser : new ::TGHtmlBrowser;
   }
   static void *newArray_TGHtmlBrowser(Long_t nElements, void *p) {
      return p ? new(p) ::TGHtmlBrowser[nElements] : new ::TGHtmlBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGHtmlBrowser(void *p) {
      delete (static_cast<::TGHtmlBrowser*>(p));
   }
   static void deleteArray_TGHtmlBrowser(void *p) {
      delete [] (static_cast<::TGHtmlBrowser*>(p));
   }
   static void destruct_TGHtmlBrowser(void *p) {
      typedef ::TGHtmlBrowser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGHtmlBrowser(TBuffer &buf, void *obj) {
      ((::TGHtmlBrowser*)obj)->::TGHtmlBrowser::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGHtmlBrowser

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGuiHtml() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGuiHtml) = RecordReadRules_libGuiHtml();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGuiHtml));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGuiHtml_Impl() {
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
      TROOT::RegisterModule("libGuiHtml",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGuiHtml_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGuiHtml_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGuiHtml() {
  TriggerDictionaryInitialization_libGuiHtml_Impl();
}
