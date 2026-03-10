// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__WebGui6
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
#include "TWebCanvas.h"
#include "TWebControlBar.h"
#include "TWebMenuItem.h"
#include "TWebPadOptions.h"
#include "TWebPadPainter.h"
#include "TWebPainting.h"
#include "TWebPS.h"
#include "TWebSnapshot.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *TWebObjectOptions_Dictionary();
   static void TWebObjectOptions_TClassManip(TClass*);
   static void *new_TWebObjectOptions(void *p = nullptr);
   static void *newArray_TWebObjectOptions(Long_t size, void *p);
   static void delete_TWebObjectOptions(void *p);
   static void deleteArray_TWebObjectOptions(void *p);
   static void destruct_TWebObjectOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebObjectOptions*)
   {
      ::TWebObjectOptions *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebObjectOptions));
      static ::ROOT::TGenericClassInfo 
         instance("TWebObjectOptions", "TWebPadOptions.h", 24,
                  typeid(::TWebObjectOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebObjectOptions_Dictionary, isa_proxy, 4,
                  sizeof(::TWebObjectOptions) );
      instance.SetNew(&new_TWebObjectOptions);
      instance.SetNewArray(&newArray_TWebObjectOptions);
      instance.SetDelete(&delete_TWebObjectOptions);
      instance.SetDeleteArray(&deleteArray_TWebObjectOptions);
      instance.SetDestructor(&destruct_TWebObjectOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebObjectOptions*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebObjectOptions*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebObjectOptions*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebObjectOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebObjectOptions*>(nullptr))->GetClass();
      TWebObjectOptions_TClassManip(theClass);
   return theClass;
   }

   static void TWebObjectOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebPadOptions_Dictionary();
   static void TWebPadOptions_TClassManip(TClass*);
   static void *new_TWebPadOptions(void *p = nullptr);
   static void *newArray_TWebPadOptions(Long_t size, void *p);
   static void delete_TWebPadOptions(void *p);
   static void deleteArray_TWebPadOptions(void *p);
   static void destruct_TWebPadOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPadOptions*)
   {
      ::TWebPadOptions *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebPadOptions));
      static ::ROOT::TGenericClassInfo 
         instance("TWebPadOptions", "TWebPadOptions.h", 33,
                  typeid(::TWebPadOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebPadOptions_Dictionary, isa_proxy, 4,
                  sizeof(::TWebPadOptions) );
      instance.SetNew(&new_TWebPadOptions);
      instance.SetNewArray(&newArray_TWebPadOptions);
      instance.SetDelete(&delete_TWebPadOptions);
      instance.SetDeleteArray(&deleteArray_TWebPadOptions);
      instance.SetDestructor(&destruct_TWebPadOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPadOptions*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebPadOptions*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebPadOptions*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebPadOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebPadOptions*>(nullptr))->GetClass();
      TWebPadOptions_TClassManip(theClass);
   return theClass;
   }

   static void TWebPadOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebPadClick_Dictionary();
   static void TWebPadClick_TClassManip(TClass*);
   static void *new_TWebPadClick(void *p = nullptr);
   static void *newArray_TWebPadClick(Long_t size, void *p);
   static void delete_TWebPadClick(void *p);
   static void deleteArray_TWebPadClick(void *p);
   static void destruct_TWebPadClick(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPadClick*)
   {
      ::TWebPadClick *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebPadClick));
      static ::ROOT::TGenericClassInfo 
         instance("TWebPadClick", "TWebPadOptions.h", 54,
                  typeid(::TWebPadClick), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebPadClick_Dictionary, isa_proxy, 4,
                  sizeof(::TWebPadClick) );
      instance.SetNew(&new_TWebPadClick);
      instance.SetNewArray(&newArray_TWebPadClick);
      instance.SetDelete(&delete_TWebPadClick);
      instance.SetDeleteArray(&deleteArray_TWebPadClick);
      instance.SetDestructor(&destruct_TWebPadClick);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPadClick*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebPadClick*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebPadClick*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebPadClick_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebPadClick*>(nullptr))->GetClass();
      TWebPadClick_TClassManip(theClass);
   return theClass;
   }

   static void TWebPadClick_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TWebCanvas(void *p);
   static void deleteArray_TWebCanvas(void *p);
   static void destruct_TWebCanvas(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebCanvas*)
   {
      ::TWebCanvas *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebCanvas >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TWebCanvas", ::TWebCanvas::Class_Version(), "TWebCanvas.h", 35,
                  typeid(::TWebCanvas), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebCanvas::Dictionary, isa_proxy, 4,
                  sizeof(::TWebCanvas) );
      instance.SetDelete(&delete_TWebCanvas);
      instance.SetDeleteArray(&deleteArray_TWebCanvas);
      instance.SetDestructor(&destruct_TWebCanvas);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebCanvas*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebCanvas*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebCanvas*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TWebControlBar(void *p);
   static void deleteArray_TWebControlBar(void *p);
   static void destruct_TWebControlBar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebControlBar*)
   {
      ::TWebControlBar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebControlBar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TWebControlBar", ::TWebControlBar::Class_Version(), "TWebControlBar.h", 18,
                  typeid(::TWebControlBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebControlBar::Dictionary, isa_proxy, 4,
                  sizeof(::TWebControlBar) );
      instance.SetDelete(&delete_TWebControlBar);
      instance.SetDeleteArray(&deleteArray_TWebControlBar);
      instance.SetDestructor(&destruct_TWebControlBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebControlBar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebControlBar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebControlBar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebMenuItem_Dictionary();
   static void TWebMenuItem_TClassManip(TClass*);
   static void delete_TWebMenuItem(void *p);
   static void deleteArray_TWebMenuItem(void *p);
   static void destruct_TWebMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebMenuItem*)
   {
      ::TWebMenuItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("TWebMenuItem", "TWebMenuItem.h", 30,
                  typeid(::TWebMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::TWebMenuItem) );
      instance.SetDelete(&delete_TWebMenuItem);
      instance.SetDeleteArray(&deleteArray_TWebMenuItem);
      instance.SetDestructor(&destruct_TWebMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebMenuItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebMenuItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebMenuItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebMenuItem*>(nullptr))->GetClass();
      TWebMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void TWebMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebCheckedMenuItem_Dictionary();
   static void TWebCheckedMenuItem_TClassManip(TClass*);
   static void delete_TWebCheckedMenuItem(void *p);
   static void deleteArray_TWebCheckedMenuItem(void *p);
   static void destruct_TWebCheckedMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebCheckedMenuItem*)
   {
      ::TWebCheckedMenuItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebCheckedMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("TWebCheckedMenuItem", "TWebMenuItem.h", 58,
                  typeid(::TWebCheckedMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebCheckedMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::TWebCheckedMenuItem) );
      instance.SetDelete(&delete_TWebCheckedMenuItem);
      instance.SetDeleteArray(&deleteArray_TWebCheckedMenuItem);
      instance.SetDestructor(&destruct_TWebCheckedMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebCheckedMenuItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebCheckedMenuItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebCheckedMenuItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebCheckedMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebCheckedMenuItem*>(nullptr))->GetClass();
      TWebCheckedMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void TWebCheckedMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebMenuArgument_Dictionary();
   static void TWebMenuArgument_TClassManip(TClass*);
   static void *new_TWebMenuArgument(void *p = nullptr);
   static void *newArray_TWebMenuArgument(Long_t size, void *p);
   static void delete_TWebMenuArgument(void *p);
   static void deleteArray_TWebMenuArgument(void *p);
   static void destruct_TWebMenuArgument(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebMenuArgument*)
   {
      ::TWebMenuArgument *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebMenuArgument));
      static ::ROOT::TGenericClassInfo 
         instance("TWebMenuArgument", "TWebMenuItem.h", 79,
                  typeid(::TWebMenuArgument), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebMenuArgument_Dictionary, isa_proxy, 4,
                  sizeof(::TWebMenuArgument) );
      instance.SetNew(&new_TWebMenuArgument);
      instance.SetNewArray(&newArray_TWebMenuArgument);
      instance.SetDelete(&delete_TWebMenuArgument);
      instance.SetDeleteArray(&deleteArray_TWebMenuArgument);
      instance.SetDestructor(&destruct_TWebMenuArgument);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebMenuArgument*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebMenuArgument*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebMenuArgument*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebMenuArgument_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebMenuArgument*>(nullptr))->GetClass();
      TWebMenuArgument_TClassManip(theClass);
   return theClass;
   }

   static void TWebMenuArgument_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebArgsMenuItem_Dictionary();
   static void TWebArgsMenuItem_TClassManip(TClass*);
   static void delete_TWebArgsMenuItem(void *p);
   static void deleteArray_TWebArgsMenuItem(void *p);
   static void destruct_TWebArgsMenuItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebArgsMenuItem*)
   {
      ::TWebArgsMenuItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebArgsMenuItem));
      static ::ROOT::TGenericClassInfo 
         instance("TWebArgsMenuItem", "TWebMenuItem.h", 99,
                  typeid(::TWebArgsMenuItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebArgsMenuItem_Dictionary, isa_proxy, 4,
                  sizeof(::TWebArgsMenuItem) );
      instance.SetDelete(&delete_TWebArgsMenuItem);
      instance.SetDeleteArray(&deleteArray_TWebArgsMenuItem);
      instance.SetDestructor(&destruct_TWebArgsMenuItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebArgsMenuItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebArgsMenuItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebArgsMenuItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebArgsMenuItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebArgsMenuItem*>(nullptr))->GetClass();
      TWebArgsMenuItem_TClassManip(theClass);
   return theClass;
   }

   static void TWebArgsMenuItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TWebMenuItems_Dictionary();
   static void TWebMenuItems_TClassManip(TClass*);
   static void *new_TWebMenuItems(void *p = nullptr);
   static void *newArray_TWebMenuItems(Long_t size, void *p);
   static void delete_TWebMenuItems(void *p);
   static void deleteArray_TWebMenuItems(void *p);
   static void destruct_TWebMenuItems(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebMenuItems*)
   {
      ::TWebMenuItems *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TWebMenuItems));
      static ::ROOT::TGenericClassInfo 
         instance("TWebMenuItems", "TWebMenuItem.h", 116,
                  typeid(::TWebMenuItems), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TWebMenuItems_Dictionary, isa_proxy, 4,
                  sizeof(::TWebMenuItems) );
      instance.SetNew(&new_TWebMenuItems);
      instance.SetNewArray(&newArray_TWebMenuItems);
      instance.SetDelete(&delete_TWebMenuItems);
      instance.SetDeleteArray(&deleteArray_TWebMenuItems);
      instance.SetDestructor(&destruct_TWebMenuItems);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebMenuItems*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebMenuItems*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebMenuItems*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TWebMenuItems_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TWebMenuItems*>(nullptr))->GetClass();
      TWebMenuItems_TClassManip(theClass);
   return theClass;
   }

   static void TWebMenuItems_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebPainting(void *p = nullptr);
   static void *newArray_TWebPainting(Long_t size, void *p);
   static void delete_TWebPainting(void *p);
   static void deleteArray_TWebPainting(void *p);
   static void destruct_TWebPainting(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPainting*)
   {
      ::TWebPainting *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebPainting >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TWebPainting", ::TWebPainting::Class_Version(), "TWebPainting.h", 25,
                  typeid(::TWebPainting), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebPainting::Dictionary, isa_proxy, 4,
                  sizeof(::TWebPainting) );
      instance.SetNew(&new_TWebPainting);
      instance.SetNewArray(&newArray_TWebPainting);
      instance.SetDelete(&delete_TWebPainting);
      instance.SetDeleteArray(&deleteArray_TWebPainting);
      instance.SetDestructor(&destruct_TWebPainting);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPainting*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebPainting*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebPainting*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebPadPainter(void *p = nullptr);
   static void *newArray_TWebPadPainter(Long_t size, void *p);
   static void delete_TWebPadPainter(void *p);
   static void deleteArray_TWebPadPainter(void *p);
   static void destruct_TWebPadPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPadPainter*)
   {
      ::TWebPadPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebPadPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TWebPadPainter", ::TWebPadPainter::Class_Version(), "TWebPadPainter.h", 26,
                  typeid(::TWebPadPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebPadPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TWebPadPainter) );
      instance.SetNew(&new_TWebPadPainter);
      instance.SetNewArray(&newArray_TWebPadPainter);
      instance.SetDelete(&delete_TWebPadPainter);
      instance.SetDeleteArray(&deleteArray_TWebPadPainter);
      instance.SetDestructor(&destruct_TWebPadPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPadPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebPadPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebPadPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebPS(void *p = nullptr);
   static void *newArray_TWebPS(Long_t size, void *p);
   static void delete_TWebPS(void *p);
   static void deleteArray_TWebPS(void *p);
   static void destruct_TWebPS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebPS*)
   {
      ::TWebPS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebPS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TWebPS", ::TWebPS::Class_Version(), "TWebPS.h", 21,
                  typeid(::TWebPS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebPS::Dictionary, isa_proxy, 4,
                  sizeof(::TWebPS) );
      instance.SetNew(&new_TWebPS);
      instance.SetNewArray(&newArray_TWebPS);
      instance.SetDelete(&delete_TWebPS);
      instance.SetDeleteArray(&deleteArray_TWebPS);
      instance.SetDestructor(&destruct_TWebPS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebPS*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebPS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebPS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TWebSnapshot(void *p = nullptr);
   static void *newArray_TWebSnapshot(Long_t size, void *p);
   static void delete_TWebSnapshot(void *p);
   static void deleteArray_TWebSnapshot(void *p);
   static void destruct_TWebSnapshot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TWebSnapshot*)
   {
      ::TWebSnapshot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TWebSnapshot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TWebSnapshot", ::TWebSnapshot::Class_Version(), "TWebSnapshot.h", 20,
                  typeid(::TWebSnapshot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TWebSnapshot::Dictionary, isa_proxy, 4,
                  sizeof(::TWebSnapshot) );
      instance.SetNew(&new_TWebSnapshot);
      instance.SetNewArray(&newArray_TWebSnapshot);
      instance.SetDelete(&delete_TWebSnapshot);
      instance.SetDeleteArray(&deleteArray_TWebSnapshot);
      instance.SetDestructor(&destruct_TWebSnapshot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TWebSnapshot*)
   {
      return GenerateInitInstanceLocal(static_cast<::TWebSnapshot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TWebSnapshot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPadWebSnapshot(void *p = nullptr);
   static void *newArray_TPadWebSnapshot(Long_t size, void *p);
   static void delete_TPadWebSnapshot(void *p);
   static void deleteArray_TPadWebSnapshot(void *p);
   static void destruct_TPadWebSnapshot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPadWebSnapshot*)
   {
      ::TPadWebSnapshot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPadWebSnapshot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPadWebSnapshot", ::TPadWebSnapshot::Class_Version(), "TWebSnapshot.h", 68,
                  typeid(::TPadWebSnapshot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPadWebSnapshot::Dictionary, isa_proxy, 4,
                  sizeof(::TPadWebSnapshot) );
      instance.SetNew(&new_TPadWebSnapshot);
      instance.SetNewArray(&newArray_TPadWebSnapshot);
      instance.SetDelete(&delete_TPadWebSnapshot);
      instance.SetDeleteArray(&deleteArray_TPadWebSnapshot);
      instance.SetDestructor(&destruct_TPadWebSnapshot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPadWebSnapshot*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPadWebSnapshot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPadWebSnapshot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCanvasWebSnapshot(void *p = nullptr);
   static void *newArray_TCanvasWebSnapshot(Long_t size, void *p);
   static void delete_TCanvasWebSnapshot(void *p);
   static void deleteArray_TCanvasWebSnapshot(void *p);
   static void destruct_TCanvasWebSnapshot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCanvasWebSnapshot*)
   {
      ::TCanvasWebSnapshot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCanvasWebSnapshot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCanvasWebSnapshot", ::TCanvasWebSnapshot::Class_Version(), "TWebSnapshot.h", 110,
                  typeid(::TCanvasWebSnapshot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCanvasWebSnapshot::Dictionary, isa_proxy, 4,
                  sizeof(::TCanvasWebSnapshot) );
      instance.SetNew(&new_TCanvasWebSnapshot);
      instance.SetNewArray(&newArray_TCanvasWebSnapshot);
      instance.SetDelete(&delete_TCanvasWebSnapshot);
      instance.SetDeleteArray(&deleteArray_TCanvasWebSnapshot);
      instance.SetDestructor(&destruct_TCanvasWebSnapshot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCanvasWebSnapshot*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCanvasWebSnapshot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCanvasWebSnapshot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TWebCanvas::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebCanvas::Class_Name()
{
   return "TWebCanvas";
}

//______________________________________________________________________________
const char *TWebCanvas::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TWebCanvas::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebCanvas::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebCanvas::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebCanvas*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebControlBar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebControlBar::Class_Name()
{
   return "TWebControlBar";
}

//______________________________________________________________________________
const char *TWebControlBar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebControlBar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TWebControlBar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebControlBar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebControlBar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebControlBar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebControlBar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebControlBar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebPainting::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebPainting::Class_Name()
{
   return "TWebPainting";
}

//______________________________________________________________________________
const char *TWebPainting::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TWebPainting::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebPainting::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebPainting::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPainting*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebPadPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebPadPainter::Class_Name()
{
   return "TWebPadPainter";
}

//______________________________________________________________________________
const char *TWebPadPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TWebPadPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebPadPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebPadPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPadPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebPS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebPS::Class_Name()
{
   return "TWebPS";
}

//______________________________________________________________________________
const char *TWebPS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TWebPS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebPS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebPS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebPS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TWebSnapshot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TWebSnapshot::Class_Name()
{
   return "TWebSnapshot";
}

//______________________________________________________________________________
const char *TWebSnapshot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TWebSnapshot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TWebSnapshot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TWebSnapshot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TWebSnapshot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPadWebSnapshot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPadWebSnapshot::Class_Name()
{
   return "TPadWebSnapshot";
}

//______________________________________________________________________________
const char *TPadWebSnapshot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPadWebSnapshot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPadWebSnapshot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPadWebSnapshot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadWebSnapshot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCanvasWebSnapshot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCanvasWebSnapshot::Class_Name()
{
   return "TCanvasWebSnapshot";
}

//______________________________________________________________________________
const char *TCanvasWebSnapshot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCanvasWebSnapshot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCanvasWebSnapshot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCanvasWebSnapshot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCanvasWebSnapshot*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebObjectOptions(void *p) {
      return  p ? new(p) ::TWebObjectOptions : new ::TWebObjectOptions;
   }
   static void *newArray_TWebObjectOptions(Long_t nElements, void *p) {
      return p ? new(p) ::TWebObjectOptions[nElements] : new ::TWebObjectOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebObjectOptions(void *p) {
      delete (static_cast<::TWebObjectOptions*>(p));
   }
   static void deleteArray_TWebObjectOptions(void *p) {
      delete [] (static_cast<::TWebObjectOptions*>(p));
   }
   static void destruct_TWebObjectOptions(void *p) {
      typedef ::TWebObjectOptions current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebObjectOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPadOptions(void *p) {
      return  p ? new(p) ::TWebPadOptions : new ::TWebPadOptions;
   }
   static void *newArray_TWebPadOptions(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPadOptions[nElements] : new ::TWebPadOptions[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPadOptions(void *p) {
      delete (static_cast<::TWebPadOptions*>(p));
   }
   static void deleteArray_TWebPadOptions(void *p) {
      delete [] (static_cast<::TWebPadOptions*>(p));
   }
   static void destruct_TWebPadOptions(void *p) {
      typedef ::TWebPadOptions current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebPadOptions

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPadClick(void *p) {
      return  p ? new(p) ::TWebPadClick : new ::TWebPadClick;
   }
   static void *newArray_TWebPadClick(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPadClick[nElements] : new ::TWebPadClick[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPadClick(void *p) {
      delete (static_cast<::TWebPadClick*>(p));
   }
   static void deleteArray_TWebPadClick(void *p) {
      delete [] (static_cast<::TWebPadClick*>(p));
   }
   static void destruct_TWebPadClick(void *p) {
      typedef ::TWebPadClick current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebPadClick

//______________________________________________________________________________
void TWebCanvas::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebCanvas.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebCanvas::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebCanvas::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebCanvas(void *p) {
      delete (static_cast<::TWebCanvas*>(p));
   }
   static void deleteArray_TWebCanvas(void *p) {
      delete [] (static_cast<::TWebCanvas*>(p));
   }
   static void destruct_TWebCanvas(void *p) {
      typedef ::TWebCanvas current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebCanvas

//______________________________________________________________________________
void TWebControlBar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebControlBar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebControlBar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebControlBar::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebControlBar(void *p) {
      delete (static_cast<::TWebControlBar*>(p));
   }
   static void deleteArray_TWebControlBar(void *p) {
      delete [] (static_cast<::TWebControlBar*>(p));
   }
   static void destruct_TWebControlBar(void *p) {
      typedef ::TWebControlBar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebControlBar

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebMenuItem(void *p) {
      delete (static_cast<::TWebMenuItem*>(p));
   }
   static void deleteArray_TWebMenuItem(void *p) {
      delete [] (static_cast<::TWebMenuItem*>(p));
   }
   static void destruct_TWebMenuItem(void *p) {
      typedef ::TWebMenuItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebMenuItem

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebCheckedMenuItem(void *p) {
      delete (static_cast<::TWebCheckedMenuItem*>(p));
   }
   static void deleteArray_TWebCheckedMenuItem(void *p) {
      delete [] (static_cast<::TWebCheckedMenuItem*>(p));
   }
   static void destruct_TWebCheckedMenuItem(void *p) {
      typedef ::TWebCheckedMenuItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebCheckedMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebMenuArgument(void *p) {
      return  p ? new(p) ::TWebMenuArgument : new ::TWebMenuArgument;
   }
   static void *newArray_TWebMenuArgument(Long_t nElements, void *p) {
      return p ? new(p) ::TWebMenuArgument[nElements] : new ::TWebMenuArgument[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebMenuArgument(void *p) {
      delete (static_cast<::TWebMenuArgument*>(p));
   }
   static void deleteArray_TWebMenuArgument(void *p) {
      delete [] (static_cast<::TWebMenuArgument*>(p));
   }
   static void destruct_TWebMenuArgument(void *p) {
      typedef ::TWebMenuArgument current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebMenuArgument

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TWebArgsMenuItem(void *p) {
      delete (static_cast<::TWebArgsMenuItem*>(p));
   }
   static void deleteArray_TWebArgsMenuItem(void *p) {
      delete [] (static_cast<::TWebArgsMenuItem*>(p));
   }
   static void destruct_TWebArgsMenuItem(void *p) {
      typedef ::TWebArgsMenuItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebArgsMenuItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebMenuItems(void *p) {
      return  p ? new(p) ::TWebMenuItems : new ::TWebMenuItems;
   }
   static void *newArray_TWebMenuItems(Long_t nElements, void *p) {
      return p ? new(p) ::TWebMenuItems[nElements] : new ::TWebMenuItems[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebMenuItems(void *p) {
      delete (static_cast<::TWebMenuItems*>(p));
   }
   static void deleteArray_TWebMenuItems(void *p) {
      delete [] (static_cast<::TWebMenuItems*>(p));
   }
   static void destruct_TWebMenuItems(void *p) {
      typedef ::TWebMenuItems current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebMenuItems

//______________________________________________________________________________
void TWebPainting::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebPainting.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebPainting::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebPainting::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPainting(void *p) {
      return  p ? new(p) ::TWebPainting : new ::TWebPainting;
   }
   static void *newArray_TWebPainting(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPainting[nElements] : new ::TWebPainting[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPainting(void *p) {
      delete (static_cast<::TWebPainting*>(p));
   }
   static void deleteArray_TWebPainting(void *p) {
      delete [] (static_cast<::TWebPainting*>(p));
   }
   static void destruct_TWebPainting(void *p) {
      typedef ::TWebPainting current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebPainting

//______________________________________________________________________________
void TWebPadPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebPadPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebPadPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebPadPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPadPainter(void *p) {
      return  p ? new(p) ::TWebPadPainter : new ::TWebPadPainter;
   }
   static void *newArray_TWebPadPainter(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPadPainter[nElements] : new ::TWebPadPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPadPainter(void *p) {
      delete (static_cast<::TWebPadPainter*>(p));
   }
   static void deleteArray_TWebPadPainter(void *p) {
      delete [] (static_cast<::TWebPadPainter*>(p));
   }
   static void destruct_TWebPadPainter(void *p) {
      typedef ::TWebPadPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebPadPainter

//______________________________________________________________________________
void TWebPS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebPS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebPS::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebPS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebPS(void *p) {
      return  p ? new(p) ::TWebPS : new ::TWebPS;
   }
   static void *newArray_TWebPS(Long_t nElements, void *p) {
      return p ? new(p) ::TWebPS[nElements] : new ::TWebPS[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebPS(void *p) {
      delete (static_cast<::TWebPS*>(p));
   }
   static void deleteArray_TWebPS(void *p) {
      delete [] (static_cast<::TWebPS*>(p));
   }
   static void destruct_TWebPS(void *p) {
      typedef ::TWebPS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebPS

//______________________________________________________________________________
void TWebSnapshot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TWebSnapshot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TWebSnapshot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TWebSnapshot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TWebSnapshot(void *p) {
      return  p ? new(p) ::TWebSnapshot : new ::TWebSnapshot;
   }
   static void *newArray_TWebSnapshot(Long_t nElements, void *p) {
      return p ? new(p) ::TWebSnapshot[nElements] : new ::TWebSnapshot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TWebSnapshot(void *p) {
      delete (static_cast<::TWebSnapshot*>(p));
   }
   static void deleteArray_TWebSnapshot(void *p) {
      delete [] (static_cast<::TWebSnapshot*>(p));
   }
   static void destruct_TWebSnapshot(void *p) {
      typedef ::TWebSnapshot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TWebSnapshot

//______________________________________________________________________________
void TPadWebSnapshot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPadWebSnapshot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TPadWebSnapshot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TPadWebSnapshot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPadWebSnapshot(void *p) {
      return  p ? new(p) ::TPadWebSnapshot : new ::TPadWebSnapshot;
   }
   static void *newArray_TPadWebSnapshot(Long_t nElements, void *p) {
      return p ? new(p) ::TPadWebSnapshot[nElements] : new ::TPadWebSnapshot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPadWebSnapshot(void *p) {
      delete (static_cast<::TPadWebSnapshot*>(p));
   }
   static void deleteArray_TPadWebSnapshot(void *p) {
      delete [] (static_cast<::TPadWebSnapshot*>(p));
   }
   static void destruct_TPadWebSnapshot(void *p) {
      typedef ::TPadWebSnapshot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TPadWebSnapshot

//______________________________________________________________________________
void TCanvasWebSnapshot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCanvasWebSnapshot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCanvasWebSnapshot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCanvasWebSnapshot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCanvasWebSnapshot(void *p) {
      return  p ? new(p) ::TCanvasWebSnapshot : new ::TCanvasWebSnapshot;
   }
   static void *newArray_TCanvasWebSnapshot(Long_t nElements, void *p) {
      return p ? new(p) ::TCanvasWebSnapshot[nElements] : new ::TCanvasWebSnapshot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCanvasWebSnapshot(void *p) {
      delete (static_cast<::TCanvasWebSnapshot*>(p));
   }
   static void deleteArray_TCanvasWebSnapshot(void *p) {
      delete [] (static_cast<::TCanvasWebSnapshot*>(p));
   }
   static void destruct_TCanvasWebSnapshot(void *p) {
      typedef ::TCanvasWebSnapshot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCanvasWebSnapshot

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "functional", 86,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::__1::vector<int, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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
   static TClass *vectorlETWebSnapshotmUgR_Dictionary();
   static void vectorlETWebSnapshotmUgR_TClassManip(TClass*);
   static void *new_vectorlETWebSnapshotmUgR(void *p = nullptr);
   static void *newArray_vectorlETWebSnapshotmUgR(Long_t size, void *p);
   static void delete_vectorlETWebSnapshotmUgR(void *p);
   static void deleteArray_vectorlETWebSnapshotmUgR(void *p);
   static void destruct_vectorlETWebSnapshotmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebSnapshot*>*)
   {
      vector<TWebSnapshot*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebSnapshot*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebSnapshot*>", -2, "functional", 86,
                  typeid(vector<TWebSnapshot*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebSnapshotmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebSnapshot*>) );
      instance.SetNew(&new_vectorlETWebSnapshotmUgR);
      instance.SetNewArray(&newArray_vectorlETWebSnapshotmUgR);
      instance.SetDelete(&delete_vectorlETWebSnapshotmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebSnapshotmUgR);
      instance.SetDestructor(&destruct_vectorlETWebSnapshotmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebSnapshot*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TWebSnapshot*>","std::__1::vector<TWebSnapshot*, std::__1::allocator<TWebSnapshot*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TWebSnapshot*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebSnapshotmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TWebSnapshot*>*>(nullptr))->GetClass();
      vectorlETWebSnapshotmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebSnapshotmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebSnapshotmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebSnapshot*> : new vector<TWebSnapshot*>;
   }
   static void *newArray_vectorlETWebSnapshotmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebSnapshot*>[nElements] : new vector<TWebSnapshot*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebSnapshotmUgR(void *p) {
      delete (static_cast<vector<TWebSnapshot*>*>(p));
   }
   static void deleteArray_vectorlETWebSnapshotmUgR(void *p) {
      delete [] (static_cast<vector<TWebSnapshot*>*>(p));
   }
   static void destruct_vectorlETWebSnapshotmUgR(void *p) {
      typedef vector<TWebSnapshot*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TWebSnapshot*>

namespace ROOT {
   static TClass *vectorlETWebObjectOptionsgR_Dictionary();
   static void vectorlETWebObjectOptionsgR_TClassManip(TClass*);
   static void *new_vectorlETWebObjectOptionsgR(void *p = nullptr);
   static void *newArray_vectorlETWebObjectOptionsgR(Long_t size, void *p);
   static void delete_vectorlETWebObjectOptionsgR(void *p);
   static void deleteArray_vectorlETWebObjectOptionsgR(void *p);
   static void destruct_vectorlETWebObjectOptionsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebObjectOptions>*)
   {
      vector<TWebObjectOptions> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebObjectOptions>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebObjectOptions>", -2, "functional", 86,
                  typeid(vector<TWebObjectOptions>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebObjectOptionsgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebObjectOptions>) );
      instance.SetNew(&new_vectorlETWebObjectOptionsgR);
      instance.SetNewArray(&newArray_vectorlETWebObjectOptionsgR);
      instance.SetDelete(&delete_vectorlETWebObjectOptionsgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebObjectOptionsgR);
      instance.SetDestructor(&destruct_vectorlETWebObjectOptionsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebObjectOptions> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TWebObjectOptions>","std::__1::vector<TWebObjectOptions, std::__1::allocator<TWebObjectOptions>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TWebObjectOptions>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebObjectOptionsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TWebObjectOptions>*>(nullptr))->GetClass();
      vectorlETWebObjectOptionsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebObjectOptionsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebObjectOptionsgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebObjectOptions> : new vector<TWebObjectOptions>;
   }
   static void *newArray_vectorlETWebObjectOptionsgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebObjectOptions>[nElements] : new vector<TWebObjectOptions>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebObjectOptionsgR(void *p) {
      delete (static_cast<vector<TWebObjectOptions>*>(p));
   }
   static void deleteArray_vectorlETWebObjectOptionsgR(void *p) {
      delete [] (static_cast<vector<TWebObjectOptions>*>(p));
   }
   static void destruct_vectorlETWebObjectOptionsgR(void *p) {
      typedef vector<TWebObjectOptions> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TWebObjectOptions>

namespace ROOT {
   static TClass *vectorlETWebMenuItemmUgR_Dictionary();
   static void vectorlETWebMenuItemmUgR_TClassManip(TClass*);
   static void *new_vectorlETWebMenuItemmUgR(void *p = nullptr);
   static void *newArray_vectorlETWebMenuItemmUgR(Long_t size, void *p);
   static void delete_vectorlETWebMenuItemmUgR(void *p);
   static void deleteArray_vectorlETWebMenuItemmUgR(void *p);
   static void destruct_vectorlETWebMenuItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebMenuItem*>*)
   {
      vector<TWebMenuItem*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebMenuItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebMenuItem*>", -2, "functional", 86,
                  typeid(vector<TWebMenuItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebMenuItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebMenuItem*>) );
      instance.SetNew(&new_vectorlETWebMenuItemmUgR);
      instance.SetNewArray(&newArray_vectorlETWebMenuItemmUgR);
      instance.SetDelete(&delete_vectorlETWebMenuItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebMenuItemmUgR);
      instance.SetDestructor(&destruct_vectorlETWebMenuItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebMenuItem*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TWebMenuItem*>","std::__1::vector<TWebMenuItem*, std::__1::allocator<TWebMenuItem*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TWebMenuItem*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebMenuItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TWebMenuItem*>*>(nullptr))->GetClass();
      vectorlETWebMenuItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebMenuItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebMenuItemmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebMenuItem*> : new vector<TWebMenuItem*>;
   }
   static void *newArray_vectorlETWebMenuItemmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebMenuItem*>[nElements] : new vector<TWebMenuItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebMenuItemmUgR(void *p) {
      delete (static_cast<vector<TWebMenuItem*>*>(p));
   }
   static void deleteArray_vectorlETWebMenuItemmUgR(void *p) {
      delete [] (static_cast<vector<TWebMenuItem*>*>(p));
   }
   static void destruct_vectorlETWebMenuItemmUgR(void *p) {
      typedef vector<TWebMenuItem*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TWebMenuItem*>

namespace ROOT {
   static TClass *vectorlETWebMenuArgumentgR_Dictionary();
   static void vectorlETWebMenuArgumentgR_TClassManip(TClass*);
   static void *new_vectorlETWebMenuArgumentgR(void *p = nullptr);
   static void *newArray_vectorlETWebMenuArgumentgR(Long_t size, void *p);
   static void delete_vectorlETWebMenuArgumentgR(void *p);
   static void deleteArray_vectorlETWebMenuArgumentgR(void *p);
   static void destruct_vectorlETWebMenuArgumentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TWebMenuArgument>*)
   {
      vector<TWebMenuArgument> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TWebMenuArgument>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TWebMenuArgument>", -2, "functional", 86,
                  typeid(vector<TWebMenuArgument>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETWebMenuArgumentgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TWebMenuArgument>) );
      instance.SetNew(&new_vectorlETWebMenuArgumentgR);
      instance.SetNewArray(&newArray_vectorlETWebMenuArgumentgR);
      instance.SetDelete(&delete_vectorlETWebMenuArgumentgR);
      instance.SetDeleteArray(&deleteArray_vectorlETWebMenuArgumentgR);
      instance.SetDestructor(&destruct_vectorlETWebMenuArgumentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TWebMenuArgument> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TWebMenuArgument>","std::__1::vector<TWebMenuArgument, std::__1::allocator<TWebMenuArgument>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TWebMenuArgument>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETWebMenuArgumentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TWebMenuArgument>*>(nullptr))->GetClass();
      vectorlETWebMenuArgumentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETWebMenuArgumentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETWebMenuArgumentgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebMenuArgument> : new vector<TWebMenuArgument>;
   }
   static void *newArray_vectorlETWebMenuArgumentgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TWebMenuArgument>[nElements] : new vector<TWebMenuArgument>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETWebMenuArgumentgR(void *p) {
      delete (static_cast<vector<TWebMenuArgument>*>(p));
   }
   static void deleteArray_vectorlETWebMenuArgumentgR(void *p) {
      delete [] (static_cast<vector<TWebMenuArgument>*>(p));
   }
   static void destruct_vectorlETWebMenuArgumentgR(void *p) {
      typedef vector<TWebMenuArgument> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TWebMenuArgument>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libWebGui6() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libWebGui6) = RecordReadRules_libWebGui6();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libWebGui6));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libWebGui6_Impl() {
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
      TROOT::RegisterModule("libWebGui6",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libWebGui6_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libWebGui6_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libWebGui6() {
  TriggerDictionaryInitialization_libWebGui6_Impl();
}
