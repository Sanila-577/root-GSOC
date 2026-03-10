// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTGraphicsPrimitives
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
#include "ROOT/RBox.hxx"
#include "ROOT/RFont.hxx"
#include "ROOT/RFrameTitle.hxx"
#include "ROOT/RLegend.hxx"
#include "ROOT/RLine.hxx"
#include "ROOT/RMarker.hxx"
#include "ROOT/RPaveText.hxx"
#include "ROOT/RText.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLRBox_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRBox(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRBox(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RBox*)
   {
      ::ROOT::Experimental::RBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RBox", "ROOT/RBox.hxx", 30,
                  typeid(::ROOT::Experimental::RBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RBox) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRBox);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRBox);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RBox*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFont_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFont_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFont(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFont(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFont(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFont(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFont(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFont*)
   {
      ::ROOT::Experimental::RFont *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFont));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFont", "ROOT/RFont.hxx", 28,
                  typeid(::ROOT::Experimental::RFont), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFont_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFont) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFont);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFont);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFont);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFont);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFont);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFont*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFont*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFont*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFont_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFont*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFont_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFont_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFrameTitle_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFrameTitle_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFrameTitle(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFrameTitle(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFrameTitle(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFrameTitle(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFrameTitle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFrameTitle*)
   {
      ::ROOT::Experimental::RFrameTitle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFrameTitle));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFrameTitle", "ROOT/RFrameTitle.hxx", 31,
                  typeid(::ROOT::Experimental::RFrameTitle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFrameTitle_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFrameTitle) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFrameTitle);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFrameTitle);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFrameTitle);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFrameTitle);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFrameTitle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFrameTitle*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFrameTitle*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFrameTitle*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFrameTitle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFrameTitle*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFrameTitle_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFrameTitle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRLegend_Dictionary();
   static void ROOTcLcLExperimentalcLcLRLegend_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRLegend(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRLegend(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRLegend(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRLegend(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRLegend(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RLegend*)
   {
      ::ROOT::Experimental::RLegend *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RLegend));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RLegend", "ROOT/RLegend.hxx", 33,
                  typeid(::ROOT::Experimental::RLegend), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRLegend_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RLegend) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRLegend);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRLegend);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRLegend);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRLegend);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRLegend);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RLegend*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RLegend*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLegend*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRLegend_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLegend*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRLegend_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRLegend_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable_Dictionary();
   static void ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RLegend::RCustomDrawable*)
   {
      ::ROOT::Experimental::RLegend::RCustomDrawable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RLegend::RCustomDrawable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RLegend::RCustomDrawable", "ROOT/RLegend.hxx", 46,
                  typeid(::ROOT::Experimental::RLegend::RCustomDrawable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RLegend::RCustomDrawable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RLegend::RCustomDrawable*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RLegend::RCustomDrawable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLegend::RCustomDrawable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLegend::RCustomDrawable*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRLegendcLcLREntry_Dictionary();
   static void ROOTcLcLExperimentalcLcLRLegendcLcLREntry_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RLegend::REntry*)
   {
      ::ROOT::Experimental::RLegend::REntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RLegend::REntry));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RLegend::REntry", "ROOT/RLegend.hxx", 64,
                  typeid(::ROOT::Experimental::RLegend::REntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRLegendcLcLREntry_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RLegend::REntry) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRLegendcLcLREntry);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRLegendcLcLREntry);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRLegendcLcLREntry);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRLegendcLcLREntry);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRLegendcLcLREntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RLegend::REntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RLegend::REntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLegend::REntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRLegendcLcLREntry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLegend::REntry*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRLegendcLcLREntry_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRLegendcLcLREntry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRLine_Dictionary();
   static void ROOTcLcLExperimentalcLcLRLine_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRLine(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRLine(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRLine(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRLine(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RLine*)
   {
      ::ROOT::Experimental::RLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RLine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RLine", "ROOT/RLine.hxx", 29,
                  typeid(::ROOT::Experimental::RLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRLine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RLine) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRLine);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRLine);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRLine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRLine);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RLine*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRLine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRMarker_Dictionary();
   static void ROOTcLcLExperimentalcLcLRMarker_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRMarker(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRMarker(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRMarker(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRMarker(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRMarker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RMarker*)
   {
      ::ROOT::Experimental::RMarker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RMarker));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RMarker", "ROOT/RMarker.hxx", 29,
                  typeid(::ROOT::Experimental::RMarker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRMarker_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RMarker) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRMarker);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRMarker);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRMarker);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRMarker);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRMarker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RMarker*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RMarker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RMarker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRMarker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RMarker*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRMarker_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRMarker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRPaveText_Dictionary();
   static void ROOTcLcLExperimentalcLcLRPaveText_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRPaveText(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRPaveText(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRPaveText(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRPaveText(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRPaveText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RPaveText*)
   {
      ::ROOT::Experimental::RPaveText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RPaveText));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RPaveText", "ROOT/RPaveText.hxx", 26,
                  typeid(::ROOT::Experimental::RPaveText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRPaveText_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RPaveText) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRPaveText);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRPaveText);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRPaveText);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRPaveText);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRPaveText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RPaveText*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RPaveText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RPaveText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRPaveText_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RPaveText*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRPaveText_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRPaveText_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRText_Dictionary();
   static void ROOTcLcLExperimentalcLcLRText_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRText(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRText(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRText(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRText(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RText*)
   {
      ::ROOT::Experimental::RText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RText));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RText", "ROOT/RText.hxx", 31,
                  typeid(::ROOT::Experimental::RText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRText_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RText) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRText);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRText);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRText);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRText);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RText*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRText_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RText*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRText_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRText_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRBox(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RBox : new ::ROOT::Experimental::RBox;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRBox(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RBox[nElements] : new ::ROOT::Experimental::RBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRBox(void *p) {
      delete (static_cast<::ROOT::Experimental::RBox*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRBox(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RBox*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRBox(void *p) {
      typedef ::ROOT::Experimental::RBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFont(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFont : new ::ROOT::Experimental::RFont;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFont(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFont[nElements] : new ::ROOT::Experimental::RFont[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFont(void *p) {
      delete (static_cast<::ROOT::Experimental::RFont*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFont(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFont*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFont(void *p) {
      typedef ::ROOT::Experimental::RFont current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFont

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFrameTitle(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFrameTitle : new ::ROOT::Experimental::RFrameTitle;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFrameTitle(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFrameTitle[nElements] : new ::ROOT::Experimental::RFrameTitle[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFrameTitle(void *p) {
      delete (static_cast<::ROOT::Experimental::RFrameTitle*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFrameTitle(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFrameTitle*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFrameTitle(void *p) {
      typedef ::ROOT::Experimental::RFrameTitle current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFrameTitle

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRLegend(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLegend : new ::ROOT::Experimental::RLegend;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRLegend(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLegend[nElements] : new ::ROOT::Experimental::RLegend[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRLegend(void *p) {
      delete (static_cast<::ROOT::Experimental::RLegend*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRLegend(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RLegend*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRLegend(void *p) {
      typedef ::ROOT::Experimental::RLegend current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RLegend

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLegend::RCustomDrawable : new ::ROOT::Experimental::RLegend::RCustomDrawable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLegend::RCustomDrawable[nElements] : new ::ROOT::Experimental::RLegend::RCustomDrawable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p) {
      delete (static_cast<::ROOT::Experimental::RLegend::RCustomDrawable*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RLegend::RCustomDrawable*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRLegendcLcLRCustomDrawable(void *p) {
      typedef ::ROOT::Experimental::RLegend::RCustomDrawable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RLegend::RCustomDrawable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLegend::REntry : new ::ROOT::Experimental::RLegend::REntry;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLegend::REntry[nElements] : new ::ROOT::Experimental::RLegend::REntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p) {
      delete (static_cast<::ROOT::Experimental::RLegend::REntry*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RLegend::REntry*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRLegendcLcLREntry(void *p) {
      typedef ::ROOT::Experimental::RLegend::REntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RLegend::REntry

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRLine(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLine : new ::ROOT::Experimental::RLine;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRLine(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RLine[nElements] : new ::ROOT::Experimental::RLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRLine(void *p) {
      delete (static_cast<::ROOT::Experimental::RLine*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRLine(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RLine*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRLine(void *p) {
      typedef ::ROOT::Experimental::RLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRMarker(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RMarker : new ::ROOT::Experimental::RMarker;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRMarker(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RMarker[nElements] : new ::ROOT::Experimental::RMarker[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRMarker(void *p) {
      delete (static_cast<::ROOT::Experimental::RMarker*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRMarker(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RMarker*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRMarker(void *p) {
      typedef ::ROOT::Experimental::RMarker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RMarker

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRPaveText(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RPaveText : new ::ROOT::Experimental::RPaveText;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRPaveText(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RPaveText[nElements] : new ::ROOT::Experimental::RPaveText[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRPaveText(void *p) {
      delete (static_cast<::ROOT::Experimental::RPaveText*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRPaveText(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RPaveText*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRPaveText(void *p) {
      typedef ::ROOT::Experimental::RPaveText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RPaveText

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRText(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RText : new ::ROOT::Experimental::RText;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRText(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RText[nElements] : new ::ROOT::Experimental::RText[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRText(void *p) {
      delete (static_cast<::ROOT::Experimental::RText*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRText(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RText*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRText(void *p) {
      typedef ::ROOT::Experimental::RText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RText

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "functional", 86,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RLegend::REntry>*)
   {
      vector<ROOT::Experimental::RLegend::REntry> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RLegend::REntry>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RLegend::REntry>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RLegend::REntry>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RLegend::REntry>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RLegend::REntry> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RLegend::REntry>","std::__1::vector<ROOT::Experimental::RLegend::REntry, std::__1::allocator<ROOT::Experimental::RLegend::REntry>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RLegend::REntry>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RLegend::REntry>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RLegend::REntry> : new vector<ROOT::Experimental::RLegend::REntry>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RLegend::REntry>[nElements] : new vector<ROOT::Experimental::RLegend::REntry>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RLegend::REntry>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RLegend::REntry>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRLegendcLcLREntrygR(void *p) {
      typedef vector<ROOT::Experimental::RLegend::REntry> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RLegend::REntry>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTGraphicsPrimitives() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTGraphicsPrimitives) = RecordReadRules_libROOTGraphicsPrimitives();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTGraphicsPrimitives));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTGraphicsPrimitives_Impl() {
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
      TROOT::RegisterModule("libROOTGraphicsPrimitives",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTGraphicsPrimitives_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTGraphicsPrimitives_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTGraphicsPrimitives() {
  TriggerDictionaryInitialization_libROOTGraphicsPrimitives_Impl();
}
