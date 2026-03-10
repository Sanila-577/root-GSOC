// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTGeomViewer
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
#include "ROOT/RGeomData.hxx"
#include "ROOT/RGeomHierarchy.hxx"
#include "ROOT/RGeomViewer.hxx"
#include "ROOT/RGeoPainter.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLRGeomNodeBase_Dictionary();
   static void ROOTcLcLRGeomNodeBase_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomNodeBase(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomNodeBase(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomNodeBase(void *p);
   static void deleteArray_ROOTcLcLRGeomNodeBase(void *p);
   static void destruct_ROOTcLcLRGeomNodeBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomNodeBase*)
   {
      ::ROOT::RGeomNodeBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomNodeBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomNodeBase", "ROOT/RGeomData.hxx", 41,
                  typeid(::ROOT::RGeomNodeBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomNodeBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomNodeBase) );
      instance.SetNew(&new_ROOTcLcLRGeomNodeBase);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomNodeBase);
      instance.SetDelete(&delete_ROOTcLcLRGeomNodeBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomNodeBase);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomNodeBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomNodeBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomNodeBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomNodeBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomNodeBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomNodeBase*>(nullptr))->GetClass();
      ROOTcLcLRGeomNodeBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomNodeBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomNode_Dictionary();
   static void ROOTcLcLRGeomNode_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomNode(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomNode(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomNode(void *p);
   static void deleteArray_ROOTcLcLRGeomNode(void *p);
   static void destruct_ROOTcLcLRGeomNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomNode*)
   {
      ::ROOT::RGeomNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomNode));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomNode", "ROOT/RGeomData.hxx", 68,
                  typeid(::ROOT::RGeomNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomNode_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomNode) );
      instance.SetNew(&new_ROOTcLcLRGeomNode);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomNode);
      instance.SetDelete(&delete_ROOTcLcLRGeomNode);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomNode);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomNode*>(nullptr))->GetClass();
      ROOTcLcLRGeomNode_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomNode_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeoItem_Dictionary();
   static void ROOTcLcLRGeoItem_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeoItem(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeoItem(Long_t size, void *p);
   static void delete_ROOTcLcLRGeoItem(void *p);
   static void deleteArray_ROOTcLcLRGeoItem(void *p);
   static void destruct_ROOTcLcLRGeoItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeoItem*)
   {
      ::ROOT::RGeoItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeoItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeoItem", "ROOT/RGeomData.hxx", 88,
                  typeid(::ROOT::RGeoItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeoItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeoItem) );
      instance.SetNew(&new_ROOTcLcLRGeoItem);
      instance.SetNewArray(&newArray_ROOTcLcLRGeoItem);
      instance.SetDelete(&delete_ROOTcLcLRGeoItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeoItem);
      instance.SetDestructor(&destruct_ROOTcLcLRGeoItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeoItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeoItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeoItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeoItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeoItem*>(nullptr))->GetClass();
      ROOTcLcLRGeoItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeoItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomRenderInfo_Dictionary();
   static void ROOTcLcLRGeomRenderInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomRenderInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomRenderInfo(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomRenderInfo(void *p);
   static void deleteArray_ROOTcLcLRGeomRenderInfo(void *p);
   static void destruct_ROOTcLcLRGeomRenderInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomRenderInfo*)
   {
      ::ROOT::RGeomRenderInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomRenderInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomRenderInfo", "ROOT/RGeomData.hxx", 117,
                  typeid(::ROOT::RGeomRenderInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomRenderInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomRenderInfo) );
      instance.SetNew(&new_ROOTcLcLRGeomRenderInfo);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomRenderInfo);
      instance.SetDelete(&delete_ROOTcLcLRGeomRenderInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomRenderInfo);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomRenderInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomRenderInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomRenderInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomRenderInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomRenderInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomRenderInfo*>(nullptr))->GetClass();
      ROOTcLcLRGeomRenderInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomRenderInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomRawRenderInfo_Dictionary();
   static void ROOTcLcLRGeomRawRenderInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomRawRenderInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomRawRenderInfo(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomRawRenderInfo(void *p);
   static void deleteArray_ROOTcLcLRGeomRawRenderInfo(void *p);
   static void destruct_ROOTcLcLRGeomRawRenderInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomRawRenderInfo*)
   {
      ::ROOT::RGeomRawRenderInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomRawRenderInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomRawRenderInfo", "ROOT/RGeomData.hxx", 124,
                  typeid(::ROOT::RGeomRawRenderInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomRawRenderInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomRawRenderInfo) );
      instance.SetNew(&new_ROOTcLcLRGeomRawRenderInfo);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomRawRenderInfo);
      instance.SetDelete(&delete_ROOTcLcLRGeomRawRenderInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomRawRenderInfo);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomRawRenderInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomRawRenderInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomRawRenderInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomRawRenderInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomRawRenderInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomRawRenderInfo*>(nullptr))->GetClass();
      ROOTcLcLRGeomRawRenderInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomRawRenderInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomShapeRenderInfo_Dictionary();
   static void ROOTcLcLRGeomShapeRenderInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomShapeRenderInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomShapeRenderInfo(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomShapeRenderInfo(void *p);
   static void deleteArray_ROOTcLcLRGeomShapeRenderInfo(void *p);
   static void destruct_ROOTcLcLRGeomShapeRenderInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomShapeRenderInfo*)
   {
      ::ROOT::RGeomShapeRenderInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomShapeRenderInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomShapeRenderInfo", "ROOT/RGeomData.hxx", 132,
                  typeid(::ROOT::RGeomShapeRenderInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomShapeRenderInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomShapeRenderInfo) );
      instance.SetNew(&new_ROOTcLcLRGeomShapeRenderInfo);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomShapeRenderInfo);
      instance.SetDelete(&delete_ROOTcLcLRGeomShapeRenderInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomShapeRenderInfo);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomShapeRenderInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomShapeRenderInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomShapeRenderInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomShapeRenderInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomShapeRenderInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomShapeRenderInfo*>(nullptr))->GetClass();
      ROOTcLcLRGeomShapeRenderInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomShapeRenderInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomVisible_Dictionary();
   static void ROOTcLcLRGeomVisible_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomVisible(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomVisible(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomVisible(void *p);
   static void deleteArray_ROOTcLcLRGeomVisible(void *p);
   static void destruct_ROOTcLcLRGeomVisible(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomVisible*)
   {
      ::ROOT::RGeomVisible *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomVisible));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomVisible", "ROOT/RGeomData.hxx", 142,
                  typeid(::ROOT::RGeomVisible), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomVisible_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomVisible) );
      instance.SetNew(&new_ROOTcLcLRGeomVisible);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomVisible);
      instance.SetDelete(&delete_ROOTcLcLRGeomVisible);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomVisible);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomVisible);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomVisible*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomVisible*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomVisible*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomVisible_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomVisible*>(nullptr))->GetClass();
      ROOTcLcLRGeomVisible_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomVisible_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomConfig_Dictionary();
   static void ROOTcLcLRGeomConfig_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomConfig(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomConfig(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomConfig(void *p);
   static void deleteArray_ROOTcLcLRGeomConfig(void *p);
   static void destruct_ROOTcLcLRGeomConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomConfig*)
   {
      ::ROOT::RGeomConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomConfig));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomConfig", "ROOT/RGeomData.hxx", 159,
                  typeid(::ROOT::RGeomConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomConfig_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomConfig) );
      instance.SetNew(&new_ROOTcLcLRGeomConfig);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomConfig);
      instance.SetDelete(&delete_ROOTcLcLRGeomConfig);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomConfig);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomConfig*>(nullptr))->GetClass();
      ROOTcLcLRGeomConfig_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomDrawing_Dictionary();
   static void ROOTcLcLRGeomDrawing_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomDrawing(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomDrawing(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomDrawing(void *p);
   static void deleteArray_ROOTcLcLRGeomDrawing(void *p);
   static void destruct_ROOTcLcLRGeomDrawing(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomDrawing*)
   {
      ::ROOT::RGeomDrawing *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomDrawing));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomDrawing", "ROOT/RGeomData.hxx", 174,
                  typeid(::ROOT::RGeomDrawing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomDrawing_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomDrawing) );
      instance.SetNew(&new_ROOTcLcLRGeomDrawing);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomDrawing);
      instance.SetDelete(&delete_ROOTcLcLRGeomDrawing);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomDrawing);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomDrawing);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomDrawing*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomDrawing*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomDrawing*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomDrawing_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomDrawing*>(nullptr))->GetClass();
      ROOTcLcLRGeomDrawing_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomDrawing_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomNodeInfo_Dictionary();
   static void ROOTcLcLRGeomNodeInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomNodeInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomNodeInfo(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomNodeInfo(void *p);
   static void deleteArray_ROOTcLcLRGeomNodeInfo(void *p);
   static void destruct_ROOTcLcLRGeomNodeInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomNodeInfo*)
   {
      ::ROOT::RGeomNodeInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomNodeInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomNodeInfo", "ROOT/RGeomData.hxx", 184,
                  typeid(::ROOT::RGeomNodeInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomNodeInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomNodeInfo) );
      instance.SetNew(&new_ROOTcLcLRGeomNodeInfo);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomNodeInfo);
      instance.SetDelete(&delete_ROOTcLcLRGeomNodeInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomNodeInfo);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomNodeInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomNodeInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomNodeInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomNodeInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomNodeInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomNodeInfo*>(nullptr))->GetClass();
      ROOTcLcLRGeomNodeInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomNodeInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomDescription_Dictionary();
   static void ROOTcLcLRGeomDescription_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomDescription(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomDescription(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomDescription(void *p);
   static void deleteArray_ROOTcLcLRGeomDescription(void *p);
   static void destruct_ROOTcLcLRGeomDescription(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomDescription*)
   {
      ::ROOT::RGeomDescription *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomDescription));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomDescription", "ROOT/RGeomData.hxx", 207,
                  typeid(::ROOT::RGeomDescription), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomDescription_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomDescription) );
      instance.SetNew(&new_ROOTcLcLRGeomDescription);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomDescription);
      instance.SetDelete(&delete_ROOTcLcLRGeomDescription);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomDescription);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomDescription);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomDescription*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomDescription*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomDescription*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomDescription_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomDescription*>(nullptr))->GetClass();
      ROOTcLcLRGeomDescription_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomDescription_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomHierarchy_Dictionary();
   static void ROOTcLcLRGeomHierarchy_TClassManip(TClass*);
   static void delete_ROOTcLcLRGeomHierarchy(void *p);
   static void deleteArray_ROOTcLcLRGeomHierarchy(void *p);
   static void destruct_ROOTcLcLRGeomHierarchy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomHierarchy*)
   {
      ::ROOT::RGeomHierarchy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomHierarchy));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomHierarchy", "ROOT/RGeomHierarchy.hxx", 26,
                  typeid(::ROOT::RGeomHierarchy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomHierarchy_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomHierarchy) );
      instance.SetDelete(&delete_ROOTcLcLRGeomHierarchy);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomHierarchy);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomHierarchy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomHierarchy*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomHierarchy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomHierarchy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomHierarchy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomHierarchy*>(nullptr))->GetClass();
      ROOTcLcLRGeomHierarchy_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomHierarchy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRGeomViewer_Dictionary();
   static void ROOTcLcLRGeomViewer_TClassManip(TClass*);
   static void *new_ROOTcLcLRGeomViewer(void *p = nullptr);
   static void *newArray_ROOTcLcLRGeomViewer(Long_t size, void *p);
   static void delete_ROOTcLcLRGeomViewer(void *p);
   static void deleteArray_ROOTcLcLRGeomViewer(void *p);
   static void destruct_ROOTcLcLRGeomViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeomViewer*)
   {
      ::ROOT::RGeomViewer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RGeomViewer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeomViewer", "ROOT/RGeomViewer.hxx", 27,
                  typeid(::ROOT::RGeomViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRGeomViewer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeomViewer) );
      instance.SetNew(&new_ROOTcLcLRGeomViewer);
      instance.SetNewArray(&newArray_ROOTcLcLRGeomViewer);
      instance.SetDelete(&delete_ROOTcLcLRGeomViewer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeomViewer);
      instance.SetDestructor(&destruct_ROOTcLcLRGeomViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeomViewer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeomViewer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomViewer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRGeomViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeomViewer*>(nullptr))->GetClass();
      ROOTcLcLRGeomViewer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRGeomViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLRGeoPainter(void *p);
   static void deleteArray_ROOTcLcLRGeoPainter(void *p);
   static void destruct_ROOTcLcLRGeoPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RGeoPainter*)
   {
      ::ROOT::RGeoPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::RGeoPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RGeoPainter", ::ROOT::RGeoPainter::Class_Version(), "ROOT/RGeoPainter.hxx", 20,
                  typeid(::ROOT::RGeoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::RGeoPainter::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RGeoPainter) );
      instance.SetDelete(&delete_ROOTcLcLRGeoPainter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRGeoPainter);
      instance.SetDestructor(&destruct_ROOTcLcLRGeoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RGeoPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RGeoPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RGeoPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
//______________________________________________________________________________
atomic_TClass_ptr RGeoPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RGeoPainter::Class_Name()
{
   return "ROOT::RGeoPainter";
}

//______________________________________________________________________________
const char *RGeoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RGeoPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RGeoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RGeoPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RGeoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RGeoPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RGeoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RGeoPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomNodeBase(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomNodeBase : new ::ROOT::RGeomNodeBase;
   }
   static void *newArray_ROOTcLcLRGeomNodeBase(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomNodeBase[nElements] : new ::ROOT::RGeomNodeBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomNodeBase(void *p) {
      delete (static_cast<::ROOT::RGeomNodeBase*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomNodeBase(void *p) {
      delete [] (static_cast<::ROOT::RGeomNodeBase*>(p));
   }
   static void destruct_ROOTcLcLRGeomNodeBase(void *p) {
      typedef ::ROOT::RGeomNodeBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomNodeBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomNode(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomNode : new ::ROOT::RGeomNode;
   }
   static void *newArray_ROOTcLcLRGeomNode(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomNode[nElements] : new ::ROOT::RGeomNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomNode(void *p) {
      delete (static_cast<::ROOT::RGeomNode*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomNode(void *p) {
      delete [] (static_cast<::ROOT::RGeomNode*>(p));
   }
   static void destruct_ROOTcLcLRGeomNode(void *p) {
      typedef ::ROOT::RGeomNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomNode

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeoItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeoItem : new ::ROOT::RGeoItem;
   }
   static void *newArray_ROOTcLcLRGeoItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeoItem[nElements] : new ::ROOT::RGeoItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeoItem(void *p) {
      delete (static_cast<::ROOT::RGeoItem*>(p));
   }
   static void deleteArray_ROOTcLcLRGeoItem(void *p) {
      delete [] (static_cast<::ROOT::RGeoItem*>(p));
   }
   static void destruct_ROOTcLcLRGeoItem(void *p) {
      typedef ::ROOT::RGeoItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeoItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomRenderInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomRenderInfo : new ::ROOT::RGeomRenderInfo;
   }
   static void *newArray_ROOTcLcLRGeomRenderInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomRenderInfo[nElements] : new ::ROOT::RGeomRenderInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomRenderInfo(void *p) {
      delete (static_cast<::ROOT::RGeomRenderInfo*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomRenderInfo(void *p) {
      delete [] (static_cast<::ROOT::RGeomRenderInfo*>(p));
   }
   static void destruct_ROOTcLcLRGeomRenderInfo(void *p) {
      typedef ::ROOT::RGeomRenderInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomRenderInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomRawRenderInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomRawRenderInfo : new ::ROOT::RGeomRawRenderInfo;
   }
   static void *newArray_ROOTcLcLRGeomRawRenderInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomRawRenderInfo[nElements] : new ::ROOT::RGeomRawRenderInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomRawRenderInfo(void *p) {
      delete (static_cast<::ROOT::RGeomRawRenderInfo*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomRawRenderInfo(void *p) {
      delete [] (static_cast<::ROOT::RGeomRawRenderInfo*>(p));
   }
   static void destruct_ROOTcLcLRGeomRawRenderInfo(void *p) {
      typedef ::ROOT::RGeomRawRenderInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomRawRenderInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomShapeRenderInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomShapeRenderInfo : new ::ROOT::RGeomShapeRenderInfo;
   }
   static void *newArray_ROOTcLcLRGeomShapeRenderInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomShapeRenderInfo[nElements] : new ::ROOT::RGeomShapeRenderInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomShapeRenderInfo(void *p) {
      delete (static_cast<::ROOT::RGeomShapeRenderInfo*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomShapeRenderInfo(void *p) {
      delete [] (static_cast<::ROOT::RGeomShapeRenderInfo*>(p));
   }
   static void destruct_ROOTcLcLRGeomShapeRenderInfo(void *p) {
      typedef ::ROOT::RGeomShapeRenderInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomShapeRenderInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomVisible(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomVisible : new ::ROOT::RGeomVisible;
   }
   static void *newArray_ROOTcLcLRGeomVisible(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomVisible[nElements] : new ::ROOT::RGeomVisible[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomVisible(void *p) {
      delete (static_cast<::ROOT::RGeomVisible*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomVisible(void *p) {
      delete [] (static_cast<::ROOT::RGeomVisible*>(p));
   }
   static void destruct_ROOTcLcLRGeomVisible(void *p) {
      typedef ::ROOT::RGeomVisible current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomVisible

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomConfig(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomConfig : new ::ROOT::RGeomConfig;
   }
   static void *newArray_ROOTcLcLRGeomConfig(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomConfig[nElements] : new ::ROOT::RGeomConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomConfig(void *p) {
      delete (static_cast<::ROOT::RGeomConfig*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomConfig(void *p) {
      delete [] (static_cast<::ROOT::RGeomConfig*>(p));
   }
   static void destruct_ROOTcLcLRGeomConfig(void *p) {
      typedef ::ROOT::RGeomConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomDrawing(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomDrawing : new ::ROOT::RGeomDrawing;
   }
   static void *newArray_ROOTcLcLRGeomDrawing(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomDrawing[nElements] : new ::ROOT::RGeomDrawing[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomDrawing(void *p) {
      delete (static_cast<::ROOT::RGeomDrawing*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomDrawing(void *p) {
      delete [] (static_cast<::ROOT::RGeomDrawing*>(p));
   }
   static void destruct_ROOTcLcLRGeomDrawing(void *p) {
      typedef ::ROOT::RGeomDrawing current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomDrawing

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomNodeInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomNodeInfo : new ::ROOT::RGeomNodeInfo;
   }
   static void *newArray_ROOTcLcLRGeomNodeInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomNodeInfo[nElements] : new ::ROOT::RGeomNodeInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomNodeInfo(void *p) {
      delete (static_cast<::ROOT::RGeomNodeInfo*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomNodeInfo(void *p) {
      delete [] (static_cast<::ROOT::RGeomNodeInfo*>(p));
   }
   static void destruct_ROOTcLcLRGeomNodeInfo(void *p) {
      typedef ::ROOT::RGeomNodeInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomNodeInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomDescription(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomDescription : new ::ROOT::RGeomDescription;
   }
   static void *newArray_ROOTcLcLRGeomDescription(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomDescription[nElements] : new ::ROOT::RGeomDescription[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomDescription(void *p) {
      delete (static_cast<::ROOT::RGeomDescription*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomDescription(void *p) {
      delete [] (static_cast<::ROOT::RGeomDescription*>(p));
   }
   static void destruct_ROOTcLcLRGeomDescription(void *p) {
      typedef ::ROOT::RGeomDescription current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomDescription

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomHierarchy(void *p) {
      delete (static_cast<::ROOT::RGeomHierarchy*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomHierarchy(void *p) {
      delete [] (static_cast<::ROOT::RGeomHierarchy*>(p));
   }
   static void destruct_ROOTcLcLRGeomHierarchy(void *p) {
      typedef ::ROOT::RGeomHierarchy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomHierarchy

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRGeomViewer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomViewer : new ::ROOT::RGeomViewer;
   }
   static void *newArray_ROOTcLcLRGeomViewer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RGeomViewer[nElements] : new ::ROOT::RGeomViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeomViewer(void *p) {
      delete (static_cast<::ROOT::RGeomViewer*>(p));
   }
   static void deleteArray_ROOTcLcLRGeomViewer(void *p) {
      delete [] (static_cast<::ROOT::RGeomViewer*>(p));
   }
   static void destruct_ROOTcLcLRGeomViewer(void *p) {
      typedef ::ROOT::RGeomViewer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeomViewer

namespace ROOT {
//______________________________________________________________________________
void RGeoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::RGeoPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::RGeoPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::RGeoPainter::Class(),this);
   }
}

} // namespace ROOT
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRGeoPainter(void *p) {
      delete (static_cast<::ROOT::RGeoPainter*>(p));
   }
   static void deleteArray_ROOTcLcLRGeoPainter(void *p) {
      delete [] (static_cast<::ROOT::RGeoPainter*>(p));
   }
   static void destruct_ROOTcLcLRGeoPainter(void *p) {
      typedef ::ROOT::RGeoPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RGeoPainter

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "functional", 86,
                  typeid(vector<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned char>","std::__1::vector<unsigned char, std::__1::allocator<unsigned char>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned char>*>(nullptr))->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete (static_cast<vector<unsigned char>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] (static_cast<vector<unsigned char>*>(p));
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

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
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "functional", 86,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<float>","std::__1::vector<float, std::__1::allocator<float>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr))->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete (static_cast<vector<float>*>(p));
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] (static_cast<vector<float>*>(p));
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEROOTcLcLRGeomVisiblegR_Dictionary();
   static void vectorlEROOTcLcLRGeomVisiblegR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLRGeomVisiblegR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLRGeomVisiblegR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLRGeomVisiblegR(void *p);
   static void deleteArray_vectorlEROOTcLcLRGeomVisiblegR(void *p);
   static void destruct_vectorlEROOTcLcLRGeomVisiblegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::RGeomVisible>*)
   {
      vector<ROOT::RGeomVisible> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::RGeomVisible>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::RGeomVisible>", -2, "functional", 86,
                  typeid(vector<ROOT::RGeomVisible>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLRGeomVisiblegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::RGeomVisible>) );
      instance.SetNew(&new_vectorlEROOTcLcLRGeomVisiblegR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLRGeomVisiblegR);
      instance.SetDelete(&delete_vectorlEROOTcLcLRGeomVisiblegR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLRGeomVisiblegR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLRGeomVisiblegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::RGeomVisible> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::RGeomVisible>","std::__1::vector<ROOT::RGeomVisible, std::__1::allocator<ROOT::RGeomVisible>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::RGeomVisible>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLRGeomVisiblegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::RGeomVisible>*>(nullptr))->GetClass();
      vectorlEROOTcLcLRGeomVisiblegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLRGeomVisiblegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLRGeomVisiblegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::RGeomVisible> : new vector<ROOT::RGeomVisible>;
   }
   static void *newArray_vectorlEROOTcLcLRGeomVisiblegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::RGeomVisible>[nElements] : new vector<ROOT::RGeomVisible>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLRGeomVisiblegR(void *p) {
      delete (static_cast<vector<ROOT::RGeomVisible>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLRGeomVisiblegR(void *p) {
      delete [] (static_cast<vector<ROOT::RGeomVisible>*>(p));
   }
   static void destruct_vectorlEROOTcLcLRGeomVisiblegR(void *p) {
      typedef vector<ROOT::RGeomVisible> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::RGeomVisible>

namespace ROOT {
   static TClass *vectorlEROOTcLcLRGeomNodemUgR_Dictionary();
   static void vectorlEROOTcLcLRGeomNodemUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLRGeomNodemUgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLRGeomNodemUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLRGeomNodemUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLRGeomNodemUgR(void *p);
   static void destruct_vectorlEROOTcLcLRGeomNodemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::RGeomNode*>*)
   {
      vector<ROOT::RGeomNode*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::RGeomNode*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::RGeomNode*>", -2, "functional", 86,
                  typeid(vector<ROOT::RGeomNode*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLRGeomNodemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::RGeomNode*>) );
      instance.SetNew(&new_vectorlEROOTcLcLRGeomNodemUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLRGeomNodemUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLRGeomNodemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLRGeomNodemUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLRGeomNodemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::RGeomNode*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::RGeomNode*>","std::__1::vector<ROOT::RGeomNode*, std::__1::allocator<ROOT::RGeomNode*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::RGeomNode*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLRGeomNodemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::RGeomNode*>*>(nullptr))->GetClass();
      vectorlEROOTcLcLRGeomNodemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLRGeomNodemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLRGeomNodemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::RGeomNode*> : new vector<ROOT::RGeomNode*>;
   }
   static void *newArray_vectorlEROOTcLcLRGeomNodemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::RGeomNode*>[nElements] : new vector<ROOT::RGeomNode*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLRGeomNodemUgR(void *p) {
      delete (static_cast<vector<ROOT::RGeomNode*>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLRGeomNodemUgR(void *p) {
      delete [] (static_cast<vector<ROOT::RGeomNode*>*>(p));
   }
   static void destruct_vectorlEROOTcLcLRGeomNodemUgR(void *p) {
      typedef vector<ROOT::RGeomNode*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::RGeomNode*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTGeomViewer() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTGeomViewer) = RecordReadRules_libROOTGeomViewer();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTGeomViewer));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTGeomViewer_Impl() {
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
      TROOT::RegisterModule("libROOTGeomViewer",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTGeomViewer_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTGeomViewer_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTGeomViewer() {
  TriggerDictionaryInitialization_libROOTGeomViewer_Impl();
}
