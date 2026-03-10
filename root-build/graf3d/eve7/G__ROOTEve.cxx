// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTEve
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
#include "ROOT/REveChunkManager.hxx"
#include "ROOT/REveClient.hxx"
#include "ROOT/REveCompound.hxx"
#include "ROOT/REveBox.hxx"
#include "ROOT/REveBoxSet.hxx"
#include "ROOT/REveCaloData.hxx"
#include "ROOT/REveCalo.hxx"
#include "ROOT/REveDataCollection.hxx"
#include "ROOT/REveDataProxyBuilderBase.hxx"
#include "ROOT/REveDataSimpleProxyBuilder.hxx"
#include "ROOT/REveDataSimpleProxyBuilderTemplate.hxx"
#include "ROOT/REveDataTable.hxx"
#include "ROOT/REveDigitSet.hxx"
#include "ROOT/REveElement.hxx"
#include "ROOT/REveFrameBox.hxx"
#include "ROOT/REveGeoPolyShape.hxx"
#include "ROOT/REveGeoShapeExtract.hxx"
#include "ROOT/REveGeoShape.hxx"
#include "ROOT/REveGeoTopNode.hxx"
#include "ROOT/REveGluTess.hxx"
#include "ROOT/REveJetCone.hxx"
#include "ROOT/REveEllipsoid.hxx"
#include "ROOT/REveLine.hxx"
#include "ROOT/REveManager.hxx"
#include "ROOT/REvePathMark.hxx"
#include "ROOT/REvePointSet.hxx"
#include "ROOT/REvePolygonSetProjected.hxx"
#include "ROOT/REveProjectionBases.hxx"
#include "ROOT/REveProjectionManager.hxx"
#include "ROOT/REveProjections.hxx"
#include "ROOT/REveRenderData.hxx"
#include "ROOT/REveRGBAPalette.hxx"
#include "ROOT/REveScalableStraightLineSet.hxx"
#include "ROOT/REveScene.hxx"
#include "ROOT/REveSceneInfo.hxx"
#include "ROOT/REveSecondarySelectable.hxx"
#include "ROOT/REveSelection.hxx"
#include "ROOT/REveShape.hxx"
#include "ROOT/REveStraightLineSet.hxx"
#include "ROOT/REveSystem.hxx"
#include "ROOT/REveTableInfo.hxx"
#include "ROOT/REveTableProxyBuilder.hxx"
#include "ROOT/REveText.hxx"
#include "ROOT/REveTrack.hxx"
#include "ROOT/REveTrackProjected.hxx"
#include "ROOT/REveTrackPropagator.hxx"
#include "ROOT/REveTrans.hxx"
#include "ROOT/REveTreeTools.hxx"
#include "ROOT/REveTypes.hxx"
#include "ROOT/REveUtil.hxx"
#include "ROOT/REveVector.hxx"
#include "ROOT/REveViewer.hxx"
#include "ROOT/REveViewContext.hxx"
#include "ROOT/REveVSD.hxx"
#include "ROOT/REveVSDStructs.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveException_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveException_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveException(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveException(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveException(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveException(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveException*)
   {
      ::ROOT::Experimental::REveException *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveException));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveException", "ROOT/REveTypes.hxx", 42,
                  typeid(::ROOT::Experimental::REveException), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveException_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveException) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveException);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveException);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveException);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveException);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveException*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveException*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveException*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveException_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveException*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveException_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveException_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveUtil_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveUtil_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveUtil(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveUtil(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveUtil(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveUtil(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveUtil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveUtil*)
   {
      ::ROOT::Experimental::REveUtil *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveUtil));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveUtil", "ROOT/REveUtil.hxx", 34,
                  typeid(::ROOT::Experimental::REveUtil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveUtil_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveUtil) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveUtil);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveUtil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveUtil*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveUtil*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveUtil*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveUtil_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveUtil*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveUtil_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveUtil_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoManagerHolder_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoManagerHolder_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoManagerHolder*)
   {
      ::ROOT::Experimental::REveGeoManagerHolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoManagerHolder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoManagerHolder", "ROOT/REveUtil.hxx", 89,
                  typeid(::ROOT::Experimental::REveGeoManagerHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoManagerHolder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoManagerHolder) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoManagerHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoManagerHolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveGeoManagerHolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoManagerHolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoManagerHolder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoManagerHolder*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoManagerHolder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoManagerHolder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRefCnt_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRefCnt_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveRefCnt(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefCnt(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRefCnt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRefCnt*)
   {
      ::ROOT::Experimental::REveRefCnt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRefCnt));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRefCnt", "ROOT/REveUtil.hxx", 105,
                  typeid(::ROOT::Experimental::REveRefCnt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRefCnt_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRefCnt) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRefCnt);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRefCnt);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRefCnt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRefCnt*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRefCnt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRefCnt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRefCnt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRefCnt*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRefCnt_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRefCnt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRefBackPtr_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRefBackPtr_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRefBackPtr*)
   {
      ::ROOT::Experimental::REveRefBackPtr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRefBackPtr));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRefBackPtr", "ROOT/REveUtil.hxx", 132,
                  typeid(::ROOT::Experimental::REveRefBackPtr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRefBackPtr_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRefBackPtr) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRefBackPtr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRefBackPtr*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRefBackPtr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRefBackPtr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRefBackPtr_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRefBackPtr*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRefBackPtr_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRefBackPtr_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveChunkManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveChunkManager(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveChunkManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveChunkManager*)
   {
      ::ROOT::Experimental::REveChunkManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveChunkManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveChunkManager", "ROOT/REveChunkManager.hxx", 29,
                  typeid(::ROOT::Experimental::REveChunkManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveChunkManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveChunkManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveChunkManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveChunkManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveChunkManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveChunkManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveChunkManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveChunkManager*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveChunkManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveChunkManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveChunkManager::iterator*)
   {
      ::ROOT::Experimental::REveChunkManager::iterator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveChunkManager::iterator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveChunkManager::iterator", "ROOT/REveChunkManager.hxx", 72,
                  typeid(::ROOT::Experimental::REveChunkManager::iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::REveChunkManager::iterator) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveChunkManager::iterator*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveChunkManager::iterator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveChunkManager::iterator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveChunkManager::iterator*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVectorT<float>*)
   {
      ::ROOT::Experimental::REveVectorT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVectorT<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVectorT<float>", "ROOT/REveVector.hxx", 29,
                  typeid(::ROOT::Experimental::REveVectorT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVectorT<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveVectorT<float>","ROOT::Experimental::REveVectorT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVectorT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVectorT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVectorT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVectorT<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVectorT<double>*)
   {
      ::ROOT::Experimental::REveVectorT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVectorT<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVectorT<double>", "ROOT/REveVector.hxx", 29,
                  typeid(::ROOT::Experimental::REveVectorT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVectorT<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveVectorT<double>","ROOT::Experimental::REveVectorT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVectorT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVectorT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVectorT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVectorT<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector4T<float>*)
   {
      ::ROOT::Experimental::REveVector4T<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector4T<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector4T<float>", "ROOT/REveVector.hxx", 238,
                  typeid(::ROOT::Experimental::REveVector4T<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector4T<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveVector4T<float>","ROOT::Experimental::REveVector4T<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector4T<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVector4T<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector4T<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector4T<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector4T<double>*)
   {
      ::ROOT::Experimental::REveVector4T<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector4T<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector4T<double>", "ROOT/REveVector.hxx", 238,
                  typeid(::ROOT::Experimental::REveVector4T<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector4T<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveVector4T<double>","ROOT::Experimental::REveVector4T<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector4T<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVector4T<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector4T<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector4T<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector2T<float>*)
   {
      ::ROOT::Experimental::REveVector2T<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector2T<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector2T<float>", "ROOT/REveVector.hxx", 304,
                  typeid(::ROOT::Experimental::REveVector2T<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector2T<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveVector2T<float>","ROOT::Experimental::REveVector2T<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector2T<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVector2T<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector2T<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector2T<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVector2T<double>*)
   {
      ::ROOT::Experimental::REveVector2T<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveVector2T<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVector2T<double>", "ROOT/REveVector.hxx", 304,
                  typeid(::ROOT::Experimental::REveVector2T<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVector2T<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveVector2T<double>","ROOT::Experimental::REveVector2T<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVector2T<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVector2T<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector2T<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVector2T<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjectable_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjectable_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveProjectable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjectable*)
   {
      ::ROOT::Experimental::REveProjectable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjectable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjectable", "ROOT/REveProjectionBases.hxx", 37,
                  typeid(::ROOT::Experimental::REveProjectable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjectable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjectable) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjectable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjectable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjectable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjectable*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveProjectable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjectable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjectable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjectable*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveProjectable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjectable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjected_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjected*)
   {
      ::ROOT::Experimental::REveProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjected", "ROOT/REveProjectionBases.hxx", 81,
                  typeid(::ROOT::Experimental::REveProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjected) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveElement_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveElement_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveElement(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveElement(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveElement(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveElement(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveElement*)
   {
      ::ROOT::Experimental::REveElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveElement", "ROOT/REveElement.hxx", 45,
                  typeid(::ROOT::Experimental::REveElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveElement_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveElement) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveElement);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveElement_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveElement*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveElement_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveElement_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveAunt_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveAunt_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveAunt(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAunt(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveAunt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveAunt*)
   {
      ::ROOT::Experimental::REveAunt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveAunt));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveAunt", "ROOT/REveElement.hxx", 378,
                  typeid(::ROOT::Experimental::REveAunt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveAunt_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveAunt) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveAunt);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveAunt);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveAunt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveAunt*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveAunt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveAunt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveAunt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveAunt*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveAunt_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveAunt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveAuntAsList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveAuntAsList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveAuntAsList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveAuntAsList*)
   {
      ::ROOT::Experimental::REveAuntAsList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveAuntAsList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveAuntAsList", "ROOT/REveElement.hxx", 411,
                  typeid(::ROOT::Experimental::REveAuntAsList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveAuntAsList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveAuntAsList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveAuntAsList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveAuntAsList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveAuntAsList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveAuntAsList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveAuntAsList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveAuntAsList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveAuntAsList*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveAuntAsList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveAuntAsList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCompound_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCompound_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCompound(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompound(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCompound(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompound(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCompound(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCompound*)
   {
      ::ROOT::Experimental::REveCompound *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCompound));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCompound", "ROOT/REveCompound.hxx", 26,
                  typeid(::ROOT::Experimental::REveCompound), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCompound_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCompound) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCompound);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCompound);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCompound*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCompound*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCompound*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCompound_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCompound*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCompound_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCompound_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCompoundProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCompoundProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCompoundProjected*)
   {
      ::ROOT::Experimental::REveCompoundProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCompoundProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCompoundProjected", "ROOT/REveCompound.hxx", 64,
                  typeid(::ROOT::Experimental::REveCompoundProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCompoundProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCompoundProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCompoundProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCompoundProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCompoundProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCompoundProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCompoundProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCompoundProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCompoundProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCompoundProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveShape_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveShape_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveShape(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveShape(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveShape*)
   {
      ::ROOT::Experimental::REveShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveShape));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveShape", "ROOT/REveShape.hxx", 29,
                  typeid(::ROOT::Experimental::REveShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveShape_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveShape) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveShape);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveShape);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveShape_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveShape*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveShape_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveShape_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveBox_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveBox(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveBox(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveBox*)
   {
      ::ROOT::Experimental::REveBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveBox", "ROOT/REveBox.hxx", 24,
                  typeid(::ROOT::Experimental::REveBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveBox) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveBox*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveBoxProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveBoxProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveBoxProjected*)
   {
      ::ROOT::Experimental::REveBoxProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveBoxProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveBoxProjected", "ROOT/REveBox.hxx", 58,
                  typeid(::ROOT::Experimental::REveBoxProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveBoxProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveBoxProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveBoxProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveBoxProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveBoxProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveBoxProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveBoxProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveBoxProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveBoxProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveBoxProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveBoxProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveFrameBox_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveFrameBox_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveFrameBox(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveFrameBox(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveFrameBox(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveFrameBox(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveFrameBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveFrameBox*)
   {
      ::ROOT::Experimental::REveFrameBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveFrameBox));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveFrameBox", "ROOT/REveFrameBox.hxx", 20,
                  typeid(::ROOT::Experimental::REveFrameBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveFrameBox_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveFrameBox) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveFrameBox);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveFrameBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveFrameBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveFrameBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveFrameBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveFrameBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveFrameBox*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveFrameBox_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveFrameBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRGBAPalette_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRGBAPalette_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRGBAPalette*)
   {
      ::ROOT::Experimental::REveRGBAPalette *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRGBAPalette));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRGBAPalette", "ROOT/REveRGBAPalette.hxx", 23,
                  typeid(::ROOT::Experimental::REveRGBAPalette), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRGBAPalette_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRGBAPalette) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRGBAPalette);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRGBAPalette*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRGBAPalette*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRGBAPalette*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRGBAPalette_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRGBAPalette*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRGBAPalette_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRGBAPalette_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSecondarySelectable_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSecondarySelectable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSecondarySelectable*)
   {
      ::ROOT::Experimental::REveSecondarySelectable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSecondarySelectable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSecondarySelectable", "ROOT/REveSecondarySelectable.hxx", 24,
                  typeid(::ROOT::Experimental::REveSecondarySelectable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSecondarySelectable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSecondarySelectable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSecondarySelectable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSecondarySelectable*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveSecondarySelectable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSecondarySelectable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSecondarySelectable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSecondarySelectable*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveSecondarySelectable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSecondarySelectable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDigitSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDigitSet_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDigitSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDigitSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDigitSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDigitSet*)
   {
      ::ROOT::Experimental::REveDigitSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDigitSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDigitSet", "ROOT/REveDigitSet.hxx", 31,
                  typeid(::ROOT::Experimental::REveDigitSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDigitSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDigitSet) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDigitSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDigitSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDigitSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDigitSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDigitSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDigitSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDigitSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDigitSet*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDigitSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDigitSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveBoxSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveBoxSet_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveBoxSet(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxSet(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveBoxSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveBoxSet*)
   {
      ::ROOT::Experimental::REveBoxSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveBoxSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveBoxSet", "ROOT/REveBoxSet.hxx", 23,
                  typeid(::ROOT::Experimental::REveBoxSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveBoxSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveBoxSet) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveBoxSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveBoxSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveBoxSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveBoxSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveBoxSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveBoxSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveBoxSet*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveBoxSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveBoxSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloData_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloData_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloData(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloData(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloData*)
   {
      ::ROOT::Experimental::REveCaloData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloData", "ROOT/REveCaloData.hxx", 30,
                  typeid(::ROOT::Experimental::REveCaloData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloData) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloData);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCaloData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloData*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloData::SliceInfo_t*)
   {
      ::ROOT::Experimental::REveCaloData::SliceInfo_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloData::SliceInfo_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloData::SliceInfo_t", "ROOT/REveCaloData.hxx", 35,
                  typeid(::ROOT::Experimental::REveCaloData::SliceInfo_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloData::SliceInfo_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloData::SliceInfo_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCaloData::SliceInfo_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloData::SliceInfo_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloData::SliceInfo_t*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataVec_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloDataVec_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloDataVec*)
   {
      ::ROOT::Experimental::REveCaloDataVec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloDataVec));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloDataVec", "ROOT/REveCaloData.hxx", 240,
                  typeid(::ROOT::Experimental::REveCaloDataVec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloDataVec_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::REveCaloDataVec) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloDataVec);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataVec);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloDataVec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloDataVec*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCaloDataVec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloDataVec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataVec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloDataVec*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloDataVec_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloDataVec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataHist_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloDataHist_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloDataHist*)
   {
      ::ROOT::Experimental::REveCaloDataHist *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloDataHist));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloDataHist", "ROOT/REveCaloData.hxx", 295,
                  typeid(::ROOT::Experimental::REveCaloDataHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloDataHist_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloDataHist) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloDataHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloDataHist*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCaloDataHist*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloDataHist*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloDataHist_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloDataHist*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloDataHist_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloDataHist_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjection_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjection*)
   {
      ::ROOT::Experimental::REveProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjection", "ROOT/REveProjections.hxx", 30,
                  typeid(::ROOT::Experimental::REveProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjection) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*)
   {
      ::ROOT::Experimental::REveProjection::PreScaleEntry_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjection::PreScaleEntry_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjection::PreScaleEntry_t", "ROOT/REveProjections.hxx", 37,
                  typeid(::ROOT::Experimental::REveProjection::PreScaleEntry_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjection::PreScaleEntry_t) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveProjection::PreScaleEntry_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjection::PreScaleEntry_t*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRhoZProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRhoZProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRhoZProjection*)
   {
      ::ROOT::Experimental::REveRhoZProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRhoZProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRhoZProjection", "ROOT/REveProjections.hxx", 156,
                  typeid(::ROOT::Experimental::REveRhoZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRhoZProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRhoZProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRhoZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRhoZProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRhoZProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRhoZProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRhoZProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRhoZProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRhoZProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRhoZProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRPhiProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRPhiProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRPhiProjection*)
   {
      ::ROOT::Experimental::REveRPhiProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRPhiProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRPhiProjection", "ROOT/REveProjections.hxx", 184,
                  typeid(::ROOT::Experimental::REveRPhiProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRPhiProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRPhiProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRPhiProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRPhiProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRPhiProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRPhiProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRPhiProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRPhiProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRPhiProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRPhiProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveXZProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveXZProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveXZProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveXZProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveXZProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveXZProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveXZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveXZProjection*)
   {
      ::ROOT::Experimental::REveXZProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveXZProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveXZProjection", "ROOT/REveProjections.hxx", 200,
                  typeid(::ROOT::Experimental::REveXZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveXZProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveXZProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveXZProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveXZProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveXZProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveXZProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveXZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveXZProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveXZProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveXZProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveXZProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveXZProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveXZProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveXZProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveYZProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveYZProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveYZProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveYZProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveYZProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveYZProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveYZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveYZProjection*)
   {
      ::ROOT::Experimental::REveYZProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveYZProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveYZProjection", "ROOT/REveProjections.hxx", 224,
                  typeid(::ROOT::Experimental::REveYZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveYZProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveYZProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveYZProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveYZProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveYZProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveYZProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveYZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveYZProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveYZProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveYZProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveYZProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveYZProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveYZProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveYZProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveZXProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveZXProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveZXProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveZXProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveZXProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveZXProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveZXProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveZXProjection*)
   {
      ::ROOT::Experimental::REveZXProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveZXProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveZXProjection", "ROOT/REveProjections.hxx", 248,
                  typeid(::ROOT::Experimental::REveZXProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveZXProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveZXProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveZXProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveZXProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveZXProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveZXProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveZXProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveZXProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveZXProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveZXProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveZXProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveZXProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveZXProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveZXProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveZYProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveZYProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveZYProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveZYProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveZYProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveZYProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveZYProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveZYProjection*)
   {
      ::ROOT::Experimental::REveZYProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveZYProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveZYProjection", "ROOT/REveProjections.hxx", 272,
                  typeid(::ROOT::Experimental::REveZYProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveZYProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveZYProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveZYProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveZYProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveZYProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveZYProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveZYProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveZYProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveZYProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveZYProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveZYProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveZYProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveZYProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveZYProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREve3DProjection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREve3DProjection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREve3DProjection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREve3DProjection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREve3DProjection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREve3DProjection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREve3DProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REve3DProjection*)
   {
      ::ROOT::Experimental::REve3DProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REve3DProjection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REve3DProjection", "ROOT/REveProjections.hxx", 296,
                  typeid(::ROOT::Experimental::REve3DProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREve3DProjection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REve3DProjection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREve3DProjection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREve3DProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REve3DProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REve3DProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REve3DProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREve3DProjection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REve3DProjection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREve3DProjection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREve3DProjection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveProjectionManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveProjectionManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectionManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveProjectionManager*)
   {
      ::ROOT::Experimental::REveProjectionManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveProjectionManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveProjectionManager", "ROOT/REveProjectionManager.hxx", 27,
                  typeid(::ROOT::Experimental::REveProjectionManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveProjectionManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveProjectionManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveProjectionManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveProjectionManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveProjectionManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveProjectionManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjectionManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveProjectionManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveProjectionManager*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveProjectionManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveProjectionManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloViz_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloViz_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloViz(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloViz(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloViz(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloViz*)
   {
      ::ROOT::Experimental::REveCaloViz *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloViz));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloViz", "ROOT/REveCalo.hxx", 29,
                  typeid(::ROOT::Experimental::REveCaloViz), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloViz_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloViz) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloViz);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloViz);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloViz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloViz*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCaloViz*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloViz*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloViz_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloViz*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloViz_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloViz_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCalo3D_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCalo3D_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCalo3D(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo3D(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCalo3D(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo3D(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCalo3D*)
   {
      ::ROOT::Experimental::REveCalo3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCalo3D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCalo3D", "ROOT/REveCalo.hxx", 156,
                  typeid(::ROOT::Experimental::REveCalo3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCalo3D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCalo3D) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCalo3D);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCalo3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCalo3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCalo3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCalo3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCalo3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCalo3D*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCalo3D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCalo3D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCalo2D_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCalo2D_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCalo2D(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo2D(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCalo2D(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo2D(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCalo2D*)
   {
      ::ROOT::Experimental::REveCalo2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCalo2D));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCalo2D", "ROOT/REveCalo.hxx", 204,
                  typeid(::ROOT::Experimental::REveCalo2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCalo2D_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCalo2D) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCalo2D);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCalo2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCalo2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCalo2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCalo2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCalo2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCalo2D*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCalo2D_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCalo2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCaloLego_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCaloLego_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveCaloLego(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloLego(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloLego(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCaloLego*)
   {
      ::ROOT::Experimental::REveCaloLego *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCaloLego));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCaloLego", "ROOT/REveCalo.hxx", 265,
                  typeid(::ROOT::Experimental::REveCaloLego), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCaloLego_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCaloLego) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCaloLego);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCaloLego);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCaloLego);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCaloLego*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCaloLego*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloLego*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCaloLego_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCaloLego*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCaloLego_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCaloLego_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataTable_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataTable_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataTable(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataTable(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataTable(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataTable(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataTable*)
   {
      ::ROOT::Experimental::REveDataTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataTable));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataTable", "ROOT/REveDataTable.hxx", 23,
                  typeid(::ROOT::Experimental::REveDataTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataTable_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataTable) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataTable);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataTable*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataTable_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataTable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataColumn_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataColumn_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataColumn(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataColumn(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataColumn(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataColumn(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataColumn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataColumn*)
   {
      ::ROOT::Experimental::REveDataColumn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataColumn));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataColumn", "ROOT/REveDataTable.hxx", 43,
                  typeid(::ROOT::Experimental::REveDataColumn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataColumn_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataColumn) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataColumn);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataColumn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataColumn*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataColumn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataColumn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataColumn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataColumn*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataColumn_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataColumn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataItem_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDataItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataItem*)
   {
      ::ROOT::Experimental::REveDataItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataItem", "ROOT/REveDataCollection.hxx", 34,
                  typeid(::ROOT::Experimental::REveDataItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataItem) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataItem*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataItemList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataItemList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataItemList(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataItemList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataItemList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItemList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItemList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataItemList*)
   {
      ::ROOT::Experimental::REveDataItemList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataItemList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataItemList", "ROOT/REveDataCollection.hxx", 60,
                  typeid(::ROOT::Experimental::REveDataItemList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataItemList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataItemList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataItemList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataItemList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataItemList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataItemList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataItemList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataItemList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataItemList*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataItemList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataItemList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataCollection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataCollection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveDataCollection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataCollection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveDataCollection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataCollection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataCollection*)
   {
      ::ROOT::Experimental::REveDataCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataCollection", "ROOT/REveDataCollection.hxx", 115,
                  typeid(::ROOT::Experimental::REveDataCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataCollection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataCollection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataCollection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataCollection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataProxyBuilderBase*)
   {
      ::ROOT::Experimental::REveDataProxyBuilderBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataProxyBuilderBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataProxyBuilderBase", "ROOT/REveDataProxyBuilderBase.hxx", 25,
                  typeid(::ROOT::Experimental::REveDataProxyBuilderBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataProxyBuilderBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataProxyBuilderBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataProxyBuilderBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataProxyBuilderBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataProxyBuilderBase*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveDataSimpleProxyBuilder*)
   {
      ::ROOT::Experimental::REveDataSimpleProxyBuilder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveDataSimpleProxyBuilder));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveDataSimpleProxyBuilder", "ROOT/REveDataSimpleProxyBuilder.hxx", 39,
                  typeid(::ROOT::Experimental::REveDataSimpleProxyBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveDataSimpleProxyBuilder) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveDataSimpleProxyBuilder*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveDataSimpleProxyBuilder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataSimpleProxyBuilder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveDataSimpleProxyBuilder*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoPolyShape*)
   {
      ::ROOT::Experimental::REveGeoPolyShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveGeoPolyShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoPolyShape", ::ROOT::Experimental::REveGeoPolyShape::Class_Version(), "ROOT/REveGeoPolyShape.hxx", 28,
                  typeid(::ROOT::Experimental::REveGeoPolyShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveGeoPolyShape::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoPolyShape) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoPolyShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoPolyShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveGeoPolyShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoPolyShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoShapeExtract*)
   {
      ::ROOT::Experimental::REveGeoShapeExtract *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveGeoShapeExtract >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoShapeExtract", ::ROOT::Experimental::REveGeoShapeExtract::Class_Version(), "ROOT/REveGeoShapeExtract.hxx", 23,
                  typeid(::ROOT::Experimental::REveGeoShapeExtract), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveGeoShapeExtract::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoShapeExtract) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoShapeExtract);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoShapeExtract*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveGeoShapeExtract*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoShapeExtract*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShape_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoShape_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShape(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShape(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShape(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShape(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoShape*)
   {
      ::ROOT::Experimental::REveGeoShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoShape));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoShape", "ROOT/REveGeoShape.hxx", 34,
                  typeid(::ROOT::Experimental::REveGeoShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoShape_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoShape) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoShape);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveGeoShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShape_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoShape*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoShape_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoShape_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShapeProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoShapeProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoShapeProjected*)
   {
      ::ROOT::Experimental::REveGeoShapeProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoShapeProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoShapeProjected", "ROOT/REveGeoShape.hxx", 86,
                  typeid(::ROOT::Experimental::REveGeoShapeProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoShapeProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoShapeProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoShapeProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoShapeProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveGeoShapeProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoShapeProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoShapeProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoShapeProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoShapeProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoShapeProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveGeoTopNodeData_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveGeoTopNodeData_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveGeoTopNodeData*)
   {
      ::ROOT::Experimental::REveGeoTopNodeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveGeoTopNodeData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveGeoTopNodeData", "ROOT/REveGeoTopNode.hxx", 15,
                  typeid(::ROOT::Experimental::REveGeoTopNodeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveGeoTopNodeData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveGeoTopNodeData) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveGeoTopNodeData);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveGeoTopNodeData);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveGeoTopNodeData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveGeoTopNodeData);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveGeoTopNodeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveGeoTopNodeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveGeoTopNodeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoTopNodeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveGeoTopNodeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveGeoTopNodeData*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveGeoTopNodeData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveGeoTopNodeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveJetCone_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveJetCone_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveJetCone(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetCone(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveJetCone(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetCone(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveJetCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveJetCone*)
   {
      ::ROOT::Experimental::REveJetCone *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveJetCone));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveJetCone", "ROOT/REveJetCone.hxx", 25,
                  typeid(::ROOT::Experimental::REveJetCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveJetCone_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveJetCone) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveJetCone);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveJetCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveJetCone*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveJetCone*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveJetCone*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveJetCone_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveJetCone*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveJetCone_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveJetCone_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveJetConeProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveJetConeProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveJetConeProjected*)
   {
      ::ROOT::Experimental::REveJetConeProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveJetConeProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveJetConeProjected", "ROOT/REveJetCone.hxx", 82,
                  typeid(::ROOT::Experimental::REveJetConeProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveJetConeProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveJetConeProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveJetConeProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveJetConeProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveJetConeProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveJetConeProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveJetConeProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveJetConeProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveJetConeProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveJetConeProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveTrans(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrans(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrans(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrans(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrans(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLREveTrans(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrans*)
   {
      ::ROOT::Experimental::REveTrans *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveTrans >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrans", ::ROOT::Experimental::REveTrans::Class_Version(), "ROOT/REveTrans.hxx", 29,
                  typeid(::ROOT::Experimental::REveTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveTrans::Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::REveTrans) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrans);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLREveTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrans*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTrans*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrans*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveStraightLineSet_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveStraightLineSet*)
   {
      ::ROOT::Experimental::REveStraightLineSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveStraightLineSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveStraightLineSet", "ROOT/REveStraightLineSet.hxx", 36,
                  typeid(::ROOT::Experimental::REveStraightLineSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveStraightLineSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveStraightLineSet) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveStraightLineSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveStraightLineSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveStraightLineSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveStraightLineSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveStraightLineSet*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveStraightLineSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveStraightLineSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveStraightLineSetProjected*)
   {
      ::ROOT::Experimental::REveStraightLineSetProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveStraightLineSetProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveStraightLineSetProjected", "ROOT/REveStraightLineSet.hxx", 130,
                  typeid(::ROOT::Experimental::REveStraightLineSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveStraightLineSetProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveStraightLineSetProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveStraightLineSetProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveStraightLineSetProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveStraightLineSetProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveStraightLineSetProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoid_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveEllipsoid_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoid(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveEllipsoid*)
   {
      ::ROOT::Experimental::REveEllipsoid *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveEllipsoid));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveEllipsoid", "ROOT/REveEllipsoid.hxx", 27,
                  typeid(::ROOT::Experimental::REveEllipsoid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveEllipsoid_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveEllipsoid) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoid);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveEllipsoid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveEllipsoid*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveEllipsoid*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveEllipsoid*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveEllipsoid*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveEllipsoid_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveEllipsoid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoidProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveEllipsoidProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveEllipsoidProjected*)
   {
      ::ROOT::Experimental::REveEllipsoidProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveEllipsoidProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveEllipsoidProjected", "ROOT/REveEllipsoid.hxx", 60,
                  typeid(::ROOT::Experimental::REveEllipsoidProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveEllipsoidProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveEllipsoidProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveEllipsoidProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveEllipsoidProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveEllipsoidProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveEllipsoidProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveEllipsoidProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveEllipsoidProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveEllipsoidProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveEllipsoidProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSet_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSet_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePointSet(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSet(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSet(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSet(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSet*)
   {
      ::ROOT::Experimental::REvePointSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSet));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSet", "ROOT/REvePointSet.hxx", 35,
                  typeid(::ROOT::Experimental::REvePointSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSet_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSet) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSet);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePointSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSet*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSet_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetArray_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSetArray_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSetArray*)
   {
      ::ROOT::Experimental::REvePointSetArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSetArray));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSetArray", "ROOT/REvePointSet.hxx", 96,
                  typeid(::ROOT::Experimental::REvePointSetArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSetArray_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSetArray) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSetArray);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSetArray);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSetArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSetArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePointSetArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSetArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSetArray*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSetArray_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSetArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSetProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSetProjected*)
   {
      ::ROOT::Experimental::REvePointSetProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSetProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSetProjected", "ROOT/REvePointSet.hxx", 149,
                  typeid(::ROOT::Experimental::REvePointSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSetProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSetProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSetProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePointSetProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSetProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSetProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSetProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSetProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSetProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveLine_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveLine_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveLine(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveLine(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveLine(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLine(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveLine*)
   {
      ::ROOT::Experimental::REveLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveLine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveLine", "ROOT/REveLine.hxx", 28,
                  typeid(::ROOT::Experimental::REveLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveLine_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveLine) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveLine);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveLine*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveLine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveLineProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveLineProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveLineProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveLineProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveLineProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLineProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveLineProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveLineProjected*)
   {
      ::ROOT::Experimental::REveLineProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveLineProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveLineProjected", "ROOT/REveLine.hxx", 81,
                  typeid(::ROOT::Experimental::REveLineProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveLineProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveLineProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveLineProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveLineProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveLineProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveLineProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveLineProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveLineProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveLineProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveLineProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveLineProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveManager_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveManager_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveManager(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveManager(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveManager(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManager(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveManager*)
   {
      ::ROOT::Experimental::REveManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveManager", "ROOT/REveManager.hxx", 46,
                  typeid(::ROOT::Experimental::REveManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveManager_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveManager) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveManager);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveManager*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePathMarkT<float>*)
   {
      ::ROOT::Experimental::REvePathMarkT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePathMarkT<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePathMarkT<float>", "ROOT/REvePathMark.hxx", 25,
                  typeid(::ROOT::Experimental::REvePathMarkT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePathMarkT<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REvePathMarkT<float>","ROOT::Experimental::REvePathMarkT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePathMarkT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePathMarkT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePathMarkT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePathMarkT<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePathMarkT<double>*)
   {
      ::ROOT::Experimental::REvePathMarkT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePathMarkT<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePathMarkT<double>", "ROOT/REvePathMark.hxx", 25,
                  typeid(::ROOT::Experimental::REvePathMarkT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePathMarkT<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REvePathMarkT<double>","ROOT::Experimental::REvePathMarkT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePathMarkT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePathMarkT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePathMarkT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePathMarkT<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePolygonSetProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePolygonSetProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePolygonSetProjected*)
   {
      ::ROOT::Experimental::REvePolygonSetProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePolygonSetProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePolygonSetProjected", "ROOT/REvePolygonSetProjected.hxx", 30,
                  typeid(::ROOT::Experimental::REvePolygonSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePolygonSetProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePolygonSetProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePolygonSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePolygonSetProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePolygonSetProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePolygonSetProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePolygonSetProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePolygonSetProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePolygonSetProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePolygonSetProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRenderData_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRenderData_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRenderData(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRenderData(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRenderData(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRenderData(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRenderData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRenderData*)
   {
      ::ROOT::Experimental::REveRenderData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRenderData));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRenderData", "ROOT/REveRenderData.hxx", 23,
                  typeid(::ROOT::Experimental::REveRenderData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRenderData_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRenderData) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRenderData);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRenderData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRenderData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRenderData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRenderData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRenderData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRenderData*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRenderData_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRenderData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveScene_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveScene_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveScene(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveScene(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveScene(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveScene(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveScene(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveScene*)
   {
      ::ROOT::Experimental::REveScene *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveScene));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveScene", "ROOT/REveScene.hxx", 33,
                  typeid(::ROOT::Experimental::REveScene), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveScene_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveScene) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveScene);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveScene);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveScene*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveScene*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveScene*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveScene_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveScene*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveScene_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveScene_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSceneList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSceneList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveSceneList(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveSceneList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveSceneList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSceneList*)
   {
      ::ROOT::Experimental::REveSceneList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSceneList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSceneList", "ROOT/REveScene.hxx", 127,
                  typeid(::ROOT::Experimental::REveSceneList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSceneList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSceneList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSceneList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSceneList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSceneList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveSceneList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSceneList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSceneList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSceneList*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveSceneList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSceneList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSceneInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSceneInfo_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSceneInfo*)
   {
      ::ROOT::Experimental::REveSceneInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSceneInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSceneInfo", "ROOT/REveSceneInfo.hxx", 28,
                  typeid(::ROOT::Experimental::REveSceneInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSceneInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSceneInfo) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSceneInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSceneInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSceneInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSceneInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveSceneInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSceneInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSceneInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSceneInfo*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveSceneInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSceneInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveSelection_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveSelection_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveSelection(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveSelection(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveSelection(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelection(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSelection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSelection*)
   {
      ::ROOT::Experimental::REveSelection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveSelection));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSelection", "ROOT/REveSelection.hxx", 27,
                  typeid(::ROOT::Experimental::REveSelection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveSelection_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSelection) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSelection);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSelection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSelection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveSelection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSelection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveSelection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSelection*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveSelection_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveSelection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTableViewInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTableViewInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTableViewInfo*)
   {
      ::ROOT::Experimental::REveTableViewInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTableViewInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTableViewInfo", "ROOT/REveTableInfo.hxx", 91,
                  typeid(::ROOT::Experimental::REveTableViewInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTableViewInfo_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Experimental::REveTableViewInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTableViewInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTableViewInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTableViewInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTableViewInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTableViewInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTableViewInfo*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveTableViewInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTableViewInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveText_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveText_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveText(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveText(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveText(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveText(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveText*)
   {
      ::ROOT::Experimental::REveText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveText));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveText", "ROOT/REveText.hxx", 25,
                  typeid(::ROOT::Experimental::REveText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveText_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveText) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveText);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveText);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveText);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveText);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveText*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveText_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveText*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveText_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveText_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveMCTrack(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCTrack(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveMCTrack(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCTrack(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMCTrack*)
   {
      ::ROOT::Experimental::REveMCTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveMCTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMCTrack", ::ROOT::Experimental::REveMCTrack::Class_Version(), "ROOT/REveVSDStructs.hxx", 44,
                  typeid(::ROOT::Experimental::REveMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMCTrack) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMCTrack);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMCTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveMCTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMCTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveHit_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveHit_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveHit(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveHit(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveHit(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveHit(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveHit*)
   {
      ::ROOT::Experimental::REveHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveHit));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveHit", "ROOT/REveVSDStructs.hxx", 82,
                  typeid(::ROOT::Experimental::REveHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveHit_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveHit) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveHit);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveHit*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveHit_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveCluster_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveCluster_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveCluster(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveCluster(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveCluster(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCluster(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveCluster*)
   {
      ::ROOT::Experimental::REveCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveCluster));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveCluster", "ROOT/REveVSDStructs.hxx", 106,
                  typeid(::ROOT::Experimental::REveCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveCluster_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveCluster) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveCluster);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveCluster*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveCluster_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecTrackT<float>*)
   {
      ::ROOT::Experimental::REveRecTrackT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecTrackT<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecTrackT<float>", "ROOT/REveVSDStructs.hxx", 129,
                  typeid(::ROOT::Experimental::REveRecTrackT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecTrackT<float>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveRecTrackT<float>","ROOT::Experimental::REveRecTrackT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecTrackT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRecTrackT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecTrackT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecTrackT<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecTrackT<double>*)
   {
      ::ROOT::Experimental::REveRecTrackT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecTrackT<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecTrackT<double>", "ROOT/REveVSDStructs.hxx", 129,
                  typeid(::ROOT::Experimental::REveRecTrackT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecTrackT<double>) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::REveRecTrackT<double>","ROOT::Experimental::REveRecTrackT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecTrackT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRecTrackT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecTrackT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecTrackT<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecKink_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecKink_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecKink(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecKink(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecKink(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecKink(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecKink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecKink*)
   {
      ::ROOT::Experimental::REveRecKink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecKink));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecKink", "ROOT/REveVSDStructs.hxx", 161,
                  typeid(::ROOT::Experimental::REveRecKink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecKink_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecKink) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecKink);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecKink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecKink*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRecKink*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecKink*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecKink_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecKink*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRecKink_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecKink_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecV0_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecV0_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecV0(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecV0(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecV0(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecV0(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecV0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecV0*)
   {
      ::ROOT::Experimental::REveRecV0 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecV0));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecV0", "ROOT/REveVSDStructs.hxx", 192,
                  typeid(::ROOT::Experimental::REveRecV0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecV0_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecV0) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecV0);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecV0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecV0*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRecV0*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecV0*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecV0_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecV0*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRecV0_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecV0_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveRecCascade_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveRecCascade_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveRecCascade(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecCascade(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveRecCascade(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecCascade(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveRecCascade(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveRecCascade*)
   {
      ::ROOT::Experimental::REveRecCascade *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveRecCascade));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveRecCascade", "ROOT/REveVSDStructs.hxx", 218,
                  typeid(::ROOT::Experimental::REveRecCascade), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveRecCascade_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveRecCascade) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveRecCascade);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveRecCascade);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveRecCascade*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveRecCascade*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecCascade*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveRecCascade_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveRecCascade*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveRecCascade_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveRecCascade_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMCRecCrossRef_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMCRecCrossRef_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMCRecCrossRef*)
   {
      ::ROOT::Experimental::REveMCRecCrossRef *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMCRecCrossRef));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMCRecCrossRef", "ROOT/REveVSDStructs.hxx", 243,
                  typeid(::ROOT::Experimental::REveMCRecCrossRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMCRecCrossRef_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMCRecCrossRef) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMCRecCrossRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMCRecCrossRef*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveMCRecCrossRef*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMCRecCrossRef*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMCRecCrossRef_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMCRecCrossRef*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveMCRecCrossRef_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMCRecCrossRef_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrack_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrack_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrack(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrack(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrack(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrack(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrack*)
   {
      ::ROOT::Experimental::REveTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrack));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrack", "ROOT/REveTrack.hxx", 39,
                  typeid(::ROOT::Experimental::REveTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrack_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrack) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrack);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrack*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveTrack_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackList(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackList*)
   {
      ::ROOT::Experimental::REveTrackList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackList", "ROOT/REveTrack.hxx", 142,
                  typeid(::ROOT::Experimental::REveTrackList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTrackList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackList*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackProjected*)
   {
      ::ROOT::Experimental::REveTrackProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackProjected", "ROOT/REveTrackProjected.hxx", 26,
                  typeid(::ROOT::Experimental::REveTrackProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTrackProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackListProjected_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackListProjected_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackListProjected*)
   {
      ::ROOT::Experimental::REveTrackListProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackListProjected));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackListProjected", "ROOT/REveTrackProjected.hxx", 65,
                  typeid(::ROOT::Experimental::REveTrackListProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackListProjected_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackListProjected) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackListProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackListProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTrackListProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackListProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackListProjected_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackListProjected*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackListProjected_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackListProjected_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMagField_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMagField_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveMagField(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagField(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMagField*)
   {
      ::ROOT::Experimental::REveMagField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMagField));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMagField", "ROOT/REveTrackPropagator.hxx", 33,
                  typeid(::ROOT::Experimental::REveMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMagField_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMagField) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMagField);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMagField);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMagField*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveMagField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMagField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMagField_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMagField*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveMagField_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMagField_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldConst_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMagFieldConst_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMagFieldConst*)
   {
      ::ROOT::Experimental::REveMagFieldConst *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMagFieldConst));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMagFieldConst", "ROOT/REveTrackPropagator.hxx", 61,
                  typeid(::ROOT::Experimental::REveMagFieldConst), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMagFieldConst_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMagFieldConst) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMagFieldConst);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldConst);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMagFieldConst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMagFieldConst*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveMagFieldConst*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMagFieldConst*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldConst_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMagFieldConst*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveMagFieldConst_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMagFieldConst_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldDuo_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveMagFieldDuo_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveMagFieldDuo*)
   {
      ::ROOT::Experimental::REveMagFieldDuo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveMagFieldDuo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveMagFieldDuo", "ROOT/REveTrackPropagator.hxx", 79,
                  typeid(::ROOT::Experimental::REveMagFieldDuo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveMagFieldDuo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveMagFieldDuo) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveMagFieldDuo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldDuo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveMagFieldDuo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveMagFieldDuo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveMagFieldDuo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMagFieldDuo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveMagFieldDuo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveMagFieldDuo*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveMagFieldDuo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveMagFieldDuo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveTrackPropagator_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveTrackPropagator_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveTrackPropagator*)
   {
      ::ROOT::Experimental::REveTrackPropagator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveTrackPropagator));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveTrackPropagator", "ROOT/REveTrackPropagator.hxx", 111,
                  typeid(::ROOT::Experimental::REveTrackPropagator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveTrackPropagator_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveTrackPropagator) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveTrackPropagator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveTrackPropagator*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveTrackPropagator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackPropagator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveTrackPropagator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveTrackPropagator*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveTrackPropagator_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveTrackPropagator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveSelectorToEventList*)
   {
      ::ROOT::Experimental::REveSelectorToEventList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveSelectorToEventList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveSelectorToEventList", ::ROOT::Experimental::REveSelectorToEventList::Class_Version(), "ROOT/REveTreeTools.hxx", 26,
                  typeid(::ROOT::Experimental::REveSelectorToEventList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveSelectorToEventList::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveSelectorToEventList) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveSelectorToEventList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveSelectorToEventList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveSelectorToEventList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveSelectorToEventList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveSelectorToEventList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveSelectorToEventList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_Dictionary();
   static void ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSelectorConsumer*)
   {
      ::ROOT::Experimental::REvePointSelectorConsumer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REvePointSelectorConsumer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSelectorConsumer", "ROOT/REveTreeTools.hxx", 52,
                  typeid(::ROOT::Experimental::REvePointSelectorConsumer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSelectorConsumer) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSelectorConsumer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePointSelectorConsumer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSelectorConsumer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSelectorConsumer*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREvePointSelectorConsumer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREvePointSelector(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSelector(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelector(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelector(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REvePointSelector*)
   {
      ::ROOT::Experimental::REvePointSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REvePointSelector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REvePointSelector", ::ROOT::Experimental::REvePointSelector::Class_Version(), "ROOT/REveTreeTools.hxx", 76,
                  typeid(::ROOT::Experimental::REvePointSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REvePointSelector::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REvePointSelector) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREvePointSelector);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREvePointSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REvePointSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REvePointSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REvePointSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveViewer_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveViewer_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveViewer(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewer(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveViewer(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewer(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveViewer*)
   {
      ::ROOT::Experimental::REveViewer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveViewer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveViewer", "ROOT/REveViewer.hxx", 27,
                  typeid(::ROOT::Experimental::REveViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveViewer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveViewer) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveViewer);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveViewer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveViewer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveViewer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveViewer*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveViewer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveViewerList_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveViewerList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveViewerList(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewerList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveViewerList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewerList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveViewerList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveViewerList*)
   {
      ::ROOT::Experimental::REveViewerList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveViewerList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveViewerList", "ROOT/REveViewer.hxx", 116,
                  typeid(::ROOT::Experimental::REveViewerList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveViewerList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveViewerList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveViewerList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveViewerList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveViewerList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveViewerList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveViewerList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveViewerList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveViewerList*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveViewerList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveViewerList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLREveViewContext_Dictionary();
   static void ROOTcLcLExperimentalcLcLREveViewContext_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLREveViewContext(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewContext(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveViewContext(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewContext(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveViewContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveViewContext*)
   {
      ::ROOT::Experimental::REveViewContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::REveViewContext));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveViewContext", "ROOT/REveViewContext.hxx", 21,
                  typeid(::ROOT::Experimental::REveViewContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLREveViewContext_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveViewContext) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveViewContext);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveViewContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveViewContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveViewContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveViewContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLREveViewContext_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveViewContext*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLREveViewContext_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLREveViewContext_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLREveVSD(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLREveVSD(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLREveVSD(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVSD(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLREveVSD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::REveVSD*)
   {
      ::ROOT::Experimental::REveVSD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::REveVSD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::REveVSD", ::ROOT::Experimental::REveVSD::Class_Version(), "ROOT/REveVSD.hxx", 25,
                  typeid(::ROOT::Experimental::REveVSD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::REveVSD::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::REveVSD) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLREveVSD);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLREveVSD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::REveVSD*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::REveVSD*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::REveVSD*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveGeoPolyShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REveGeoPolyShape::Class_Name()
{
   return "ROOT::Experimental::REveGeoPolyShape";
}

//______________________________________________________________________________
const char *REveGeoPolyShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REveGeoPolyShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveGeoPolyShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveGeoPolyShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoPolyShape*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveGeoShapeExtract::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REveGeoShapeExtract::Class_Name()
{
   return "ROOT::Experimental::REveGeoShapeExtract";
}

//______________________________________________________________________________
const char *REveGeoShapeExtract::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REveGeoShapeExtract::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveGeoShapeExtract::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveGeoShapeExtract::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveGeoShapeExtract*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveTrans::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REveTrans::Class_Name()
{
   return "ROOT::Experimental::REveTrans";
}

//______________________________________________________________________________
const char *REveTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REveTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveTrans*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveMCTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REveMCTrack::Class_Name()
{
   return "ROOT::Experimental::REveMCTrack";
}

//______________________________________________________________________________
const char *REveMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REveMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveMCTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveSelectorToEventList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REveSelectorToEventList::Class_Name()
{
   return "ROOT::Experimental::REveSelectorToEventList";
}

//______________________________________________________________________________
const char *REveSelectorToEventList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REveSelectorToEventList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveSelectorToEventList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveSelectorToEventList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveSelectorToEventList*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REvePointSelector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REvePointSelector::Class_Name()
{
   return "ROOT::Experimental::REvePointSelector";
}

//______________________________________________________________________________
const char *REvePointSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REvePointSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REvePointSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REvePointSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REvePointSelector*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr REveVSD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *REveVSD::Class_Name()
{
   return "ROOT::Experimental::REveVSD";
}

//______________________________________________________________________________
const char *REveVSD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int REveVSD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *REveVSD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *REveVSD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::REveVSD*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveException(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveException : new ::ROOT::Experimental::REveException;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveException(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveException[nElements] : new ::ROOT::Experimental::REveException[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveException(void *p) {
      delete (static_cast<::ROOT::Experimental::REveException*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveException(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveException*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveException(void *p) {
      typedef ::ROOT::Experimental::REveException current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveException

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveUtil : new ::ROOT::Experimental::REveUtil;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveUtil(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveUtil[nElements] : new ::ROOT::Experimental::REveUtil[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      delete (static_cast<::ROOT::Experimental::REveUtil*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveUtil*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveUtil(void *p) {
      typedef ::ROOT::Experimental::REveUtil current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveUtil

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoManagerHolder : new ::ROOT::Experimental::REveGeoManagerHolder;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoManagerHolder[nElements] : new ::ROOT::Experimental::REveGeoManagerHolder[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      delete (static_cast<::ROOT::Experimental::REveGeoManagerHolder*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveGeoManagerHolder*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoManagerHolder(void *p) {
      typedef ::ROOT::Experimental::REveGeoManagerHolder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoManagerHolder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRefCnt*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRefCnt*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRefCnt(void *p) {
      typedef ::ROOT::Experimental::REveRefCnt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRefCnt

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRefBackPtr*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRefBackPtr*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRefBackPtr(void *p) {
      typedef ::ROOT::Experimental::REveRefBackPtr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRefBackPtr

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveChunkManager : new ::ROOT::Experimental::REveChunkManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveChunkManager(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveChunkManager[nElements] : new ::ROOT::Experimental::REveChunkManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      delete (static_cast<::ROOT::Experimental::REveChunkManager*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveChunkManager*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManager(void *p) {
      typedef ::ROOT::Experimental::REveChunkManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveChunkManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p) {
      delete (static_cast<::ROOT::Experimental::REveChunkManager::iterator*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveChunkManager::iterator*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveChunkManagercLcLiterator(void *p) {
      typedef ::ROOT::Experimental::REveChunkManager::iterator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveChunkManager::iterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVectorT<float> : new ::ROOT::Experimental::REveVectorT<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVectorT<float>[nElements] : new ::ROOT::Experimental::REveVectorT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVectorT<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVectorT<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveVectorT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVectorT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVectorT<double> : new ::ROOT::Experimental::REveVectorT<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVectorT<double>[nElements] : new ::ROOT::Experimental::REveVectorT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVectorT<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVectorT<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVectorTlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveVectorT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVectorT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector4T<float> : new ::ROOT::Experimental::REveVector4T<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector4T<float>[nElements] : new ::ROOT::Experimental::REveVector4T<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVector4T<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVector4T<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveVector4T<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector4T<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector4T<double> : new ::ROOT::Experimental::REveVector4T<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector4T<double>[nElements] : new ::ROOT::Experimental::REveVector4T<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVector4T<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVector4T<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector4TlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveVector4T<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector4T<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector2T<float> : new ::ROOT::Experimental::REveVector2T<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector2T<float>[nElements] : new ::ROOT::Experimental::REveVector2T<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVector2T<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVector2T<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveVector2T<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector2T<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector2T<double> : new ::ROOT::Experimental::REveVector2T<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveVector2T<double>[nElements] : new ::ROOT::Experimental::REveVector2T<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVector2T<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVector2T<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVector2TlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveVector2T<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVector2T<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjectable(void *p) {
      delete (static_cast<::ROOT::Experimental::REveProjectable*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectable(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveProjectable*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectable(void *p) {
      typedef ::ROOT::Experimental::REveProjectable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjectable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjected(void *p) {
      typedef ::ROOT::Experimental::REveProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveElement : new ::ROOT::Experimental::REveElement;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveElement(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveElement[nElements] : new ::ROOT::Experimental::REveElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      delete (static_cast<::ROOT::Experimental::REveElement*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveElement*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveElement(void *p) {
      typedef ::ROOT::Experimental::REveElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveElement

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveAunt(void *p) {
      delete (static_cast<::ROOT::Experimental::REveAunt*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAunt(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveAunt*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveAunt(void *p) {
      typedef ::ROOT::Experimental::REveAunt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveAunt

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveAuntAsList : new ::ROOT::Experimental::REveAuntAsList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveAuntAsList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveAuntAsList[nElements] : new ::ROOT::Experimental::REveAuntAsList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      delete (static_cast<::ROOT::Experimental::REveAuntAsList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveAuntAsList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveAuntAsList(void *p) {
      typedef ::ROOT::Experimental::REveAuntAsList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveAuntAsList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCompound : new ::ROOT::Experimental::REveCompound;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompound(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCompound[nElements] : new ::ROOT::Experimental::REveCompound[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCompound*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCompound*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCompound(void *p) {
      typedef ::ROOT::Experimental::REveCompound current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCompound

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCompoundProjected : new ::ROOT::Experimental::REveCompoundProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCompoundProjected[nElements] : new ::ROOT::Experimental::REveCompoundProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCompoundProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCompoundProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCompoundProjected(void *p) {
      typedef ::ROOT::Experimental::REveCompoundProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCompoundProjected

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveShape(void *p) {
      delete (static_cast<::ROOT::Experimental::REveShape*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveShape(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveShape*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveShape(void *p) {
      typedef ::ROOT::Experimental::REveShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveBox : new ::ROOT::Experimental::REveBox;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveBox(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveBox[nElements] : new ::ROOT::Experimental::REveBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      delete (static_cast<::ROOT::Experimental::REveBox*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveBox*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveBox(void *p) {
      typedef ::ROOT::Experimental::REveBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveBoxProjected : new ::ROOT::Experimental::REveBoxProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveBoxProjected[nElements] : new ::ROOT::Experimental::REveBoxProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveBoxProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveBoxProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxProjected(void *p) {
      typedef ::ROOT::Experimental::REveBoxProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveBoxProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveFrameBox : new ::ROOT::Experimental::REveFrameBox;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveFrameBox(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveFrameBox[nElements] : new ::ROOT::Experimental::REveFrameBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      delete (static_cast<::ROOT::Experimental::REveFrameBox*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveFrameBox*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveFrameBox(void *p) {
      typedef ::ROOT::Experimental::REveFrameBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveFrameBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRGBAPalette : new ::ROOT::Experimental::REveRGBAPalette;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRGBAPalette[nElements] : new ::ROOT::Experimental::REveRGBAPalette[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRGBAPalette*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRGBAPalette*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRGBAPalette(void *p) {
      typedef ::ROOT::Experimental::REveRGBAPalette current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRGBAPalette

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveSecondarySelectable : new ::ROOT::Experimental::REveSecondarySelectable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveSecondarySelectable[nElements] : new ::ROOT::Experimental::REveSecondarySelectable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      delete (static_cast<::ROOT::Experimental::REveSecondarySelectable*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveSecondarySelectable*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSecondarySelectable(void *p) {
      typedef ::ROOT::Experimental::REveSecondarySelectable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSecondarySelectable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDigitSet(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDigitSet*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDigitSet(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDigitSet*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDigitSet(void *p) {
      typedef ::ROOT::Experimental::REveDigitSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDigitSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveBoxSet : new ::ROOT::Experimental::REveBoxSet;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveBoxSet(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveBoxSet[nElements] : new ::ROOT::Experimental::REveBoxSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      delete (static_cast<::ROOT::Experimental::REveBoxSet*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveBoxSet*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveBoxSet(void *p) {
      typedef ::ROOT::Experimental::REveBoxSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveBoxSet

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloData(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCaloData*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloData(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCaloData*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloData(void *p) {
      typedef ::ROOT::Experimental::REveCaloData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCaloData::SliceInfo_t : new ::ROOT::Experimental::REveCaloData::SliceInfo_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCaloData::SliceInfo_t[nElements] : new ::ROOT::Experimental::REveCaloData::SliceInfo_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCaloData::SliceInfo_t*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCaloData::SliceInfo_t*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_t(void *p) {
      typedef ::ROOT::Experimental::REveCaloData::SliceInfo_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloData::SliceInfo_t

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCaloDataVec*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCaloDataVec*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataVec(void *p) {
      typedef ::ROOT::Experimental::REveCaloDataVec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloDataVec

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCaloDataHist : new ::ROOT::Experimental::REveCaloDataHist;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCaloDataHist[nElements] : new ::ROOT::Experimental::REveCaloDataHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCaloDataHist*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCaloDataHist*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloDataHist(void *p) {
      typedef ::ROOT::Experimental::REveCaloDataHist current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloDataHist

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjection(void *p) {
      typedef ::ROOT::Experimental::REveProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveProjection::PreScaleEntry_t : new ::ROOT::Experimental::REveProjection::PreScaleEntry_t;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveProjection::PreScaleEntry_t[nElements] : new ::ROOT::Experimental::REveProjection::PreScaleEntry_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      delete (static_cast<::ROOT::Experimental::REveProjection::PreScaleEntry_t*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveProjection::PreScaleEntry_t*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_t(void *p) {
      typedef ::ROOT::Experimental::REveProjection::PreScaleEntry_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjection::PreScaleEntry_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRhoZProjection : new ::ROOT::Experimental::REveRhoZProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRhoZProjection[nElements] : new ::ROOT::Experimental::REveRhoZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRhoZProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRhoZProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRhoZProjection(void *p) {
      typedef ::ROOT::Experimental::REveRhoZProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRhoZProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRPhiProjection : new ::ROOT::Experimental::REveRPhiProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRPhiProjection[nElements] : new ::ROOT::Experimental::REveRPhiProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRPhiProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRPhiProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRPhiProjection(void *p) {
      typedef ::ROOT::Experimental::REveRPhiProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRPhiProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveXZProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveXZProjection : new ::ROOT::Experimental::REveXZProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveXZProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveXZProjection[nElements] : new ::ROOT::Experimental::REveXZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveXZProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveXZProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveXZProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveXZProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveXZProjection(void *p) {
      typedef ::ROOT::Experimental::REveXZProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveXZProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveYZProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveYZProjection : new ::ROOT::Experimental::REveYZProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveYZProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveYZProjection[nElements] : new ::ROOT::Experimental::REveYZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveYZProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveYZProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveYZProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveYZProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveYZProjection(void *p) {
      typedef ::ROOT::Experimental::REveYZProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveYZProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveZXProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveZXProjection : new ::ROOT::Experimental::REveZXProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveZXProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveZXProjection[nElements] : new ::ROOT::Experimental::REveZXProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveZXProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveZXProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveZXProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveZXProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveZXProjection(void *p) {
      typedef ::ROOT::Experimental::REveZXProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveZXProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveZYProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveZYProjection : new ::ROOT::Experimental::REveZYProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveZYProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveZYProjection[nElements] : new ::ROOT::Experimental::REveZYProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveZYProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveZYProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveZYProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveZYProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveZYProjection(void *p) {
      typedef ::ROOT::Experimental::REveZYProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveZYProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REve3DProjection : new ::ROOT::Experimental::REve3DProjection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREve3DProjection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REve3DProjection[nElements] : new ::ROOT::Experimental::REve3DProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      delete (static_cast<::ROOT::Experimental::REve3DProjection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REve3DProjection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREve3DProjection(void *p) {
      typedef ::ROOT::Experimental::REve3DProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REve3DProjection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveProjectionManager : new ::ROOT::Experimental::REveProjectionManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveProjectionManager(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveProjectionManager[nElements] : new ::ROOT::Experimental::REveProjectionManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      delete (static_cast<::ROOT::Experimental::REveProjectionManager*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveProjectionManager*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveProjectionManager(void *p) {
      typedef ::ROOT::Experimental::REveProjectionManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveProjectionManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloViz(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCaloViz*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloViz(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCaloViz*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloViz(void *p) {
      typedef ::ROOT::Experimental::REveCaloViz current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloViz

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCalo3D : new ::ROOT::Experimental::REveCalo3D;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo3D(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCalo3D[nElements] : new ::ROOT::Experimental::REveCalo3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCalo3D*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCalo3D*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo3D(void *p) {
      typedef ::ROOT::Experimental::REveCalo3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCalo3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCalo2D : new ::ROOT::Experimental::REveCalo2D;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCalo2D(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCalo2D[nElements] : new ::ROOT::Experimental::REveCalo2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCalo2D*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCalo2D*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCalo2D(void *p) {
      typedef ::ROOT::Experimental::REveCalo2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCalo2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCaloLego(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCaloLego*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCaloLego(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCaloLego*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCaloLego(void *p) {
      typedef ::ROOT::Experimental::REveCaloLego current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCaloLego

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataTable : new ::ROOT::Experimental::REveDataTable;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataTable(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataTable[nElements] : new ::ROOT::Experimental::REveDataTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataTable*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataTable*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataTable(void *p) {
      typedef ::ROOT::Experimental::REveDataTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataColumn : new ::ROOT::Experimental::REveDataColumn;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataColumn(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataColumn[nElements] : new ::ROOT::Experimental::REveDataColumn[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataColumn*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataColumn*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataColumn(void *p) {
      typedef ::ROOT::Experimental::REveDataColumn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataColumn

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataItem(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataItem*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItem(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataItem*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItem(void *p) {
      typedef ::ROOT::Experimental::REveDataItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataItemList : new ::ROOT::Experimental::REveDataItemList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataItemList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataItemList[nElements] : new ::ROOT::Experimental::REveDataItemList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataItemList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataItemList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataItemList(void *p) {
      typedef ::ROOT::Experimental::REveDataItemList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataItemList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataCollection : new ::ROOT::Experimental::REveDataCollection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveDataCollection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveDataCollection[nElements] : new ::ROOT::Experimental::REveDataCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataCollection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataCollection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataCollection(void *p) {
      typedef ::ROOT::Experimental::REveDataCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataCollection

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataProxyBuilderBase*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataProxyBuilderBase*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataProxyBuilderBase(void *p) {
      typedef ::ROOT::Experimental::REveDataProxyBuilderBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataProxyBuilderBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p) {
      delete (static_cast<::ROOT::Experimental::REveDataSimpleProxyBuilder*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveDataSimpleProxyBuilder*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveDataSimpleProxyBuilder(void *p) {
      typedef ::ROOT::Experimental::REveDataSimpleProxyBuilder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveDataSimpleProxyBuilder

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveGeoPolyShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveGeoPolyShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveGeoPolyShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveGeoPolyShape::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveGeoPolyShape : new ::ROOT::Experimental::REveGeoPolyShape;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveGeoPolyShape[nElements] : new ::ROOT::Experimental::REveGeoPolyShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      delete (static_cast<::ROOT::Experimental::REveGeoPolyShape*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveGeoPolyShape*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoPolyShape(void *p) {
      typedef ::ROOT::Experimental::REveGeoPolyShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoPolyShape

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveGeoShapeExtract::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveGeoShapeExtract.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveGeoShapeExtract::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveGeoShapeExtract::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveGeoShapeExtract : new ::ROOT::Experimental::REveGeoShapeExtract;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveGeoShapeExtract[nElements] : new ::ROOT::Experimental::REveGeoShapeExtract[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      delete (static_cast<::ROOT::Experimental::REveGeoShapeExtract*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveGeoShapeExtract*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeExtract(void *p) {
      typedef ::ROOT::Experimental::REveGeoShapeExtract current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoShapeExtract

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoShape : new ::ROOT::Experimental::REveGeoShape;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShape(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoShape[nElements] : new ::ROOT::Experimental::REveGeoShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      delete (static_cast<::ROOT::Experimental::REveGeoShape*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveGeoShape*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShape(void *p) {
      typedef ::ROOT::Experimental::REveGeoShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoShapeProjected : new ::ROOT::Experimental::REveGeoShapeProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoShapeProjected[nElements] : new ::ROOT::Experimental::REveGeoShapeProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveGeoShapeProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveGeoShapeProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoShapeProjected(void *p) {
      typedef ::ROOT::Experimental::REveGeoShapeProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoShapeProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoTopNodeData : new ::ROOT::Experimental::REveGeoTopNodeData;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveGeoTopNodeData[nElements] : new ::ROOT::Experimental::REveGeoTopNodeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p) {
      delete (static_cast<::ROOT::Experimental::REveGeoTopNodeData*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveGeoTopNodeData*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveGeoTopNodeData(void *p) {
      typedef ::ROOT::Experimental::REveGeoTopNodeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveGeoTopNodeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveJetCone : new ::ROOT::Experimental::REveJetCone;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetCone(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveJetCone[nElements] : new ::ROOT::Experimental::REveJetCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      delete (static_cast<::ROOT::Experimental::REveJetCone*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveJetCone*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveJetCone(void *p) {
      typedef ::ROOT::Experimental::REveJetCone current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveJetCone

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveJetConeProjected : new ::ROOT::Experimental::REveJetConeProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveJetConeProjected[nElements] : new ::ROOT::Experimental::REveJetConeProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveJetConeProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveJetConeProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveJetConeProjected(void *p) {
      typedef ::ROOT::Experimental::REveJetConeProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveJetConeProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveTrans : new ::ROOT::Experimental::REveTrans;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrans(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveTrans[nElements] : new ::ROOT::Experimental::REveTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTrans*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTrans*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrans(void *p) {
      typedef ::ROOT::Experimental::REveTrans current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLREveTrans(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::REveTrans*)obj)->::ROOT::Experimental::REveTrans::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrans

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveStraightLineSet : new ::ROOT::Experimental::REveStraightLineSet;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveStraightLineSet[nElements] : new ::ROOT::Experimental::REveStraightLineSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      delete (static_cast<::ROOT::Experimental::REveStraightLineSet*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveStraightLineSet*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSet(void *p) {
      typedef ::ROOT::Experimental::REveStraightLineSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveStraightLineSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveStraightLineSetProjected : new ::ROOT::Experimental::REveStraightLineSetProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveStraightLineSetProjected[nElements] : new ::ROOT::Experimental::REveStraightLineSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveStraightLineSetProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveStraightLineSetProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveStraightLineSetProjected(void *p) {
      typedef ::ROOT::Experimental::REveStraightLineSetProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveStraightLineSetProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveEllipsoid : new ::ROOT::Experimental::REveEllipsoid;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoid(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveEllipsoid[nElements] : new ::ROOT::Experimental::REveEllipsoid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      delete (static_cast<::ROOT::Experimental::REveEllipsoid*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveEllipsoid*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoid(void *p) {
      typedef ::ROOT::Experimental::REveEllipsoid current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveEllipsoid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveEllipsoidProjected : new ::ROOT::Experimental::REveEllipsoidProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveEllipsoidProjected[nElements] : new ::ROOT::Experimental::REveEllipsoidProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveEllipsoidProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveEllipsoidProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveEllipsoidProjected(void *p) {
      typedef ::ROOT::Experimental::REveEllipsoidProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveEllipsoidProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePointSet : new ::ROOT::Experimental::REvePointSet;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSet(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePointSet[nElements] : new ::ROOT::Experimental::REvePointSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePointSet*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePointSet*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSet(void *p) {
      typedef ::ROOT::Experimental::REvePointSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSet

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePointSetArray*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePointSetArray*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetArray(void *p) {
      typedef ::ROOT::Experimental::REvePointSetArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSetArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePointSetProjected : new ::ROOT::Experimental::REvePointSetProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePointSetProjected[nElements] : new ::ROOT::Experimental::REvePointSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePointSetProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePointSetProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSetProjected(void *p) {
      typedef ::ROOT::Experimental::REvePointSetProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSetProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveLine : new ::ROOT::Experimental::REveLine;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveLine(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveLine[nElements] : new ::ROOT::Experimental::REveLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      delete (static_cast<::ROOT::Experimental::REveLine*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveLine*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveLine(void *p) {
      typedef ::ROOT::Experimental::REveLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveLineProjected : new ::ROOT::Experimental::REveLineProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveLineProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveLineProjected[nElements] : new ::ROOT::Experimental::REveLineProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveLineProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveLineProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveLineProjected(void *p) {
      typedef ::ROOT::Experimental::REveLineProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveLineProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveManager : new ::ROOT::Experimental::REveManager;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveManager(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveManager[nElements] : new ::ROOT::Experimental::REveManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      delete (static_cast<::ROOT::Experimental::REveManager*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveManager*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveManager(void *p) {
      typedef ::ROOT::Experimental::REveManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePathMarkT<float> : new ::ROOT::Experimental::REvePathMarkT<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePathMarkT<float>[nElements] : new ::ROOT::Experimental::REvePathMarkT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePathMarkT<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePathMarkT<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REvePathMarkT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePathMarkT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePathMarkT<double> : new ::ROOT::Experimental::REvePathMarkT<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePathMarkT<double>[nElements] : new ::ROOT::Experimental::REvePathMarkT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePathMarkT<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePathMarkT<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REvePathMarkT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePathMarkT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePolygonSetProjected : new ::ROOT::Experimental::REvePolygonSetProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REvePolygonSetProjected[nElements] : new ::ROOT::Experimental::REvePolygonSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePolygonSetProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePolygonSetProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePolygonSetProjected(void *p) {
      typedef ::ROOT::Experimental::REvePolygonSetProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePolygonSetProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRenderData : new ::ROOT::Experimental::REveRenderData;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRenderData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRenderData[nElements] : new ::ROOT::Experimental::REveRenderData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRenderData*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRenderData*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRenderData(void *p) {
      typedef ::ROOT::Experimental::REveRenderData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRenderData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveScene : new ::ROOT::Experimental::REveScene;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveScene(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveScene[nElements] : new ::ROOT::Experimental::REveScene[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      delete (static_cast<::ROOT::Experimental::REveScene*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveScene*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveScene(void *p) {
      typedef ::ROOT::Experimental::REveScene current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveScene

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveSceneList : new ::ROOT::Experimental::REveSceneList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveSceneList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveSceneList[nElements] : new ::ROOT::Experimental::REveSceneList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      delete (static_cast<::ROOT::Experimental::REveSceneList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveSceneList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneList(void *p) {
      typedef ::ROOT::Experimental::REveSceneList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSceneList

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p) {
      delete (static_cast<::ROOT::Experimental::REveSceneInfo*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveSceneInfo*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSceneInfo(void *p) {
      typedef ::ROOT::Experimental::REveSceneInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSceneInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveSelection : new ::ROOT::Experimental::REveSelection;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveSelection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveSelection[nElements] : new ::ROOT::Experimental::REveSelection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      delete (static_cast<::ROOT::Experimental::REveSelection*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveSelection*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSelection(void *p) {
      typedef ::ROOT::Experimental::REveSelection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSelection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTableViewInfo : new ::ROOT::Experimental::REveTableViewInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTableViewInfo[nElements] : new ::ROOT::Experimental::REveTableViewInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTableViewInfo*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTableViewInfo*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTableViewInfo(void *p) {
      typedef ::ROOT::Experimental::REveTableViewInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTableViewInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveText(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveText : new ::ROOT::Experimental::REveText;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveText(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveText[nElements] : new ::ROOT::Experimental::REveText[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveText(void *p) {
      delete (static_cast<::ROOT::Experimental::REveText*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveText(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveText*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveText(void *p) {
      typedef ::ROOT::Experimental::REveText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveText

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveMCTrack::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveMCTrack : new ::ROOT::Experimental::REveMCTrack;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveMCTrack[nElements] : new ::ROOT::Experimental::REveMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      delete (static_cast<::ROOT::Experimental::REveMCTrack*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveMCTrack*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMCTrack(void *p) {
      typedef ::ROOT::Experimental::REveMCTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMCTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveHit : new ::ROOT::Experimental::REveHit;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveHit(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveHit[nElements] : new ::ROOT::Experimental::REveHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      delete (static_cast<::ROOT::Experimental::REveHit*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveHit*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveHit(void *p) {
      typedef ::ROOT::Experimental::REveHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCluster : new ::ROOT::Experimental::REveCluster;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveCluster(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveCluster[nElements] : new ::ROOT::Experimental::REveCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      delete (static_cast<::ROOT::Experimental::REveCluster*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveCluster*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveCluster(void *p) {
      typedef ::ROOT::Experimental::REveCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecTrackT<float> : new ::ROOT::Experimental::REveRecTrackT<float>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecTrackT<float>[nElements] : new ::ROOT::Experimental::REveRecTrackT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRecTrackT<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRecTrackT<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::REveRecTrackT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecTrackT<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecTrackT<double> : new ::ROOT::Experimental::REveRecTrackT<double>;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecTrackT<double>[nElements] : new ::ROOT::Experimental::REveRecTrackT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRecTrackT<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRecTrackT<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecTrackTlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::REveRecTrackT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecTrackT<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecKink : new ::ROOT::Experimental::REveRecKink;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecKink(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecKink[nElements] : new ::ROOT::Experimental::REveRecKink[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRecKink*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRecKink*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecKink(void *p) {
      typedef ::ROOT::Experimental::REveRecKink current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecKink

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecV0 : new ::ROOT::Experimental::REveRecV0;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecV0(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecV0[nElements] : new ::ROOT::Experimental::REveRecV0[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRecV0*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRecV0*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecV0(void *p) {
      typedef ::ROOT::Experimental::REveRecV0 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecV0

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecCascade : new ::ROOT::Experimental::REveRecCascade;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveRecCascade(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveRecCascade[nElements] : new ::ROOT::Experimental::REveRecCascade[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      delete (static_cast<::ROOT::Experimental::REveRecCascade*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveRecCascade*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveRecCascade(void *p) {
      typedef ::ROOT::Experimental::REveRecCascade current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveRecCascade

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveMCRecCrossRef : new ::ROOT::Experimental::REveMCRecCrossRef;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveMCRecCrossRef[nElements] : new ::ROOT::Experimental::REveMCRecCrossRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      delete (static_cast<::ROOT::Experimental::REveMCRecCrossRef*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveMCRecCrossRef*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMCRecCrossRef(void *p) {
      typedef ::ROOT::Experimental::REveMCRecCrossRef current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMCRecCrossRef

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrack : new ::ROOT::Experimental::REveTrack;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrack(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrack[nElements] : new ::ROOT::Experimental::REveTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTrack*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTrack*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrack(void *p) {
      typedef ::ROOT::Experimental::REveTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackList : new ::ROOT::Experimental::REveTrackList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackList[nElements] : new ::ROOT::Experimental::REveTrackList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTrackList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTrackList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackList(void *p) {
      typedef ::ROOT::Experimental::REveTrackList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackProjected : new ::ROOT::Experimental::REveTrackProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackProjected[nElements] : new ::ROOT::Experimental::REveTrackProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTrackProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTrackProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackProjected(void *p) {
      typedef ::ROOT::Experimental::REveTrackProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackProjected

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackListProjected : new ::ROOT::Experimental::REveTrackListProjected;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackListProjected[nElements] : new ::ROOT::Experimental::REveTrackListProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTrackListProjected*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTrackListProjected*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackListProjected(void *p) {
      typedef ::ROOT::Experimental::REveTrackListProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackListProjected

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMagField(void *p) {
      delete (static_cast<::ROOT::Experimental::REveMagField*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagField(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveMagField*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMagField(void *p) {
      typedef ::ROOT::Experimental::REveMagField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMagField

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p) {
      delete (static_cast<::ROOT::Experimental::REveMagFieldConst*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveMagFieldConst*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldConst(void *p) {
      typedef ::ROOT::Experimental::REveMagFieldConst current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMagFieldConst

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p) {
      delete (static_cast<::ROOT::Experimental::REveMagFieldDuo*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveMagFieldDuo*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveMagFieldDuo(void *p) {
      typedef ::ROOT::Experimental::REveMagFieldDuo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveMagFieldDuo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackPropagator : new ::ROOT::Experimental::REveTrackPropagator;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveTrackPropagator[nElements] : new ::ROOT::Experimental::REveTrackPropagator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      delete (static_cast<::ROOT::Experimental::REveTrackPropagator*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveTrackPropagator*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveTrackPropagator(void *p) {
      typedef ::ROOT::Experimental::REveTrackPropagator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveTrackPropagator

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveSelectorToEventList::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveSelectorToEventList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveSelectorToEventList::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveSelectorToEventList::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p) {
      delete (static_cast<::ROOT::Experimental::REveSelectorToEventList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveSelectorToEventList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveSelectorToEventList(void *p) {
      typedef ::ROOT::Experimental::REveSelectorToEventList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveSelectorToEventList

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePointSelectorConsumer*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePointSelectorConsumer*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelectorConsumer(void *p) {
      typedef ::ROOT::Experimental::REvePointSelectorConsumer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSelectorConsumer

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REvePointSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REvePointSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REvePointSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REvePointSelector::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REvePointSelector : new ::ROOT::Experimental::REvePointSelector;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREvePointSelector(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REvePointSelector[nElements] : new ::ROOT::Experimental::REvePointSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      delete (static_cast<::ROOT::Experimental::REvePointSelector*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REvePointSelector*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREvePointSelector(void *p) {
      typedef ::ROOT::Experimental::REvePointSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REvePointSelector

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveViewer : new ::ROOT::Experimental::REveViewer;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveViewer[nElements] : new ::ROOT::Experimental::REveViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      delete (static_cast<::ROOT::Experimental::REveViewer*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveViewer*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveViewer(void *p) {
      typedef ::ROOT::Experimental::REveViewer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveViewer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveViewerList : new ::ROOT::Experimental::REveViewerList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewerList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveViewerList[nElements] : new ::ROOT::Experimental::REveViewerList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      delete (static_cast<::ROOT::Experimental::REveViewerList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveViewerList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveViewerList(void *p) {
      typedef ::ROOT::Experimental::REveViewerList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveViewerList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveViewContext : new ::ROOT::Experimental::REveViewContext;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveViewContext(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::REveViewContext[nElements] : new ::ROOT::Experimental::REveViewContext[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      delete (static_cast<::ROOT::Experimental::REveViewContext*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveViewContext*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveViewContext(void *p) {
      typedef ::ROOT::Experimental::REveViewContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveViewContext

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void REveVSD::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::REveVSD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::REveVSD::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::REveVSD::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      return  p ? new(p) ::ROOT::Experimental::REveVSD : new ::ROOT::Experimental::REveVSD;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLREveVSD(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::REveVSD[nElements] : new ::ROOT::Experimental::REveVSD[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      delete (static_cast<::ROOT::Experimental::REveVSD*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      delete [] (static_cast<::ROOT::Experimental::REveVSD*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLREveVSD(void *p) {
      typedef ::ROOT::Experimental::REveVSD current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::REveVSD

namespace ROOT {
   static TClass *vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_Dictionary();
   static void vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p);
   static void deleteArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p);
   static void destruct_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*)
   {
      vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>", -2, "functional", 86,
                  typeid(vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>) );
      instance.SetNew(&new_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetDelete(&delete_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>","std::__1::vector<std::__1::vector<ROOT::Experimental::REveCaloData::CellId_t, std::__1::allocator<ROOT::Experimental::REveCaloData::CellId_t>>*, std::__1::allocator<std::__1::vector<ROOT::Experimental::REveCaloData::CellId_t, std::__1::allocator<ROOT::Experimental::REveCaloData::CellId_t>>*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*>(nullptr))->GetClass();
      vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> : new vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>;
   }
   static void *newArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>[nElements] : new vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      delete (static_cast<vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*>(p));
   }
   static void deleteArray_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      delete [] (static_cast<vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>*>(p));
   }
   static void destruct_vectorlEvectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgRmUgR(void *p) {
      typedef vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<ROOT::Experimental::REveCaloData::CellId_t>*>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "functional", 86,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

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
   static TClass *vectorlETArrayCmUgR_Dictionary();
   static void vectorlETArrayCmUgR_TClassManip(TClass*);
   static void *new_vectorlETArrayCmUgR(void *p = nullptr);
   static void *newArray_vectorlETArrayCmUgR(Long_t size, void *p);
   static void delete_vectorlETArrayCmUgR(void *p);
   static void deleteArray_vectorlETArrayCmUgR(void *p);
   static void destruct_vectorlETArrayCmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TArrayC*>*)
   {
      vector<TArrayC*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TArrayC*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TArrayC*>", -2, "functional", 86,
                  typeid(vector<TArrayC*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETArrayCmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TArrayC*>) );
      instance.SetNew(&new_vectorlETArrayCmUgR);
      instance.SetNewArray(&newArray_vectorlETArrayCmUgR);
      instance.SetDelete(&delete_vectorlETArrayCmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETArrayCmUgR);
      instance.SetDestructor(&destruct_vectorlETArrayCmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TArrayC*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TArrayC*>","std::__1::vector<TArrayC*, std::__1::allocator<TArrayC*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TArrayC*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETArrayCmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TArrayC*>*>(nullptr))->GetClass();
      vectorlETArrayCmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETArrayCmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETArrayCmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArrayC*> : new vector<TArrayC*>;
   }
   static void *newArray_vectorlETArrayCmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TArrayC*>[nElements] : new vector<TArrayC*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETArrayCmUgR(void *p) {
      delete (static_cast<vector<TArrayC*>*>(p));
   }
   static void deleteArray_vectorlETArrayCmUgR(void *p) {
      delete [] (static_cast<vector<TArrayC*>*>(p));
   }
   static void destruct_vectorlETArrayCmUgR(void *p) {
      typedef vector<TArrayC*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TArrayC*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveVectorT<float> >*)
   {
      vector<ROOT::Experimental::REveVectorT<float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveVectorT<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveVectorT<float> >", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveVectorT<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveVectorT<float> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveVectorT<float> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveVectorT<float> >","std::__1::vector<ROOT::Experimental::REveVectorT<float>, std::__1::allocator<ROOT::Experimental::REveVectorT<float>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveVectorT<float> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveVectorT<float> >*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveVectorT<float> > : new vector<ROOT::Experimental::REveVectorT<float> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveVectorT<float> >[nElements] : new vector<ROOT::Experimental::REveVectorT<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveVectorT<float> >*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveVectorT<float> >*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVectorTlEfloatgRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REveVectorT<float> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveVectorT<float> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveVector4T<double> >*)
   {
      vector<ROOT::Experimental::REveVector4T<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveVector4T<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveVector4T<double> >", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveVector4T<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveVector4T<double> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveVector4T<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveVector4T<double> >","std::__1::vector<ROOT::Experimental::REveVector4T<double>, std::__1::allocator<ROOT::Experimental::REveVector4T<double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveVector4T<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveVector4T<double> >*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveVector4T<double> > : new vector<ROOT::Experimental::REveVector4T<double> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveVector4T<double> >[nElements] : new vector<ROOT::Experimental::REveVector4T<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveVector4T<double> >*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveVector4T<double> >*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector4TlEdoublegRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REveVector4T<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveVector4T<double> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveVector2T<float> >*)
   {
      vector<ROOT::Experimental::REveVector2T<float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveVector2T<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveVector2T<float> >", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveVector2T<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveVector2T<float> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveVector2T<float> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveVector2T<float> >","std::__1::vector<ROOT::Experimental::REveVector2T<float>, std::__1::allocator<ROOT::Experimental::REveVector2T<float>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveVector2T<float> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveVector2T<float> >*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveVector2T<float> > : new vector<ROOT::Experimental::REveVector2T<float> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveVector2T<float> >[nElements] : new vector<ROOT::Experimental::REveVector2T<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveVector2T<float> >*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveVector2T<float> >*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveVector2TlEfloatgRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REveVector2T<float> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveVector2T<float> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*)
   {
      vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>","std::__1::vector<ROOT::Experimental::REveProjection::PreScaleEntry_t, std::__1::allocator<ROOT::Experimental::REveProjection::PreScaleEntry_t>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> : new vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>[nElements] : new vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveProjectioncLcLPreScaleEntry_tgR(void *p) {
      typedef vector<ROOT::Experimental::REveProjection::PreScaleEntry_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveProjection::PreScaleEntry_t>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REvePathMarkT<double> >*)
   {
      vector<ROOT::Experimental::REvePathMarkT<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REvePathMarkT<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REvePathMarkT<double> >", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REvePathMarkT<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REvePathMarkT<double> >) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REvePathMarkT<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REvePathMarkT<double> >","std::__1::vector<ROOT::Experimental::REvePathMarkT<double>, std::__1::allocator<ROOT::Experimental::REvePathMarkT<double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REvePathMarkT<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REvePathMarkT<double> >*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REvePathMarkT<double> > : new vector<ROOT::Experimental::REvePathMarkT<double> >;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REvePathMarkT<double> >[nElements] : new vector<ROOT::Experimental::REvePathMarkT<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REvePathMarkT<double> >*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REvePathMarkT<double> >*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREvePathMarkTlEdoublegRsPgR(void *p) {
      typedef vector<ROOT::Experimental::REvePathMarkT<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REvePathMarkT<double> >

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveManager::Conn>*)
   {
      vector<ROOT::Experimental::REveManager::Conn> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveManager::Conn>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveManager::Conn>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveManager::Conn>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveManager::Conn>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveManager::Conn> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveManager::Conn>","std::__1::vector<ROOT::Experimental::REveManager::Conn, std::__1::allocator<ROOT::Experimental::REveManager::Conn>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveManager::Conn>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveManager::Conn>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveManager::Conn> : new vector<ROOT::Experimental::REveManager::Conn>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveManager::Conn>[nElements] : new vector<ROOT::Experimental::REveManager::Conn>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveManager::Conn>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveManager::Conn>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveManagercLcLConngR(void *p) {
      typedef vector<ROOT::Experimental::REveManager::Conn> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveManager::Conn>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*)
   {
      vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>","std::__1::vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*, std::__1::allocator<ROOT::Experimental::REveDataProxyBuilderBase::Product*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> : new vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>[nElements] : new vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataProxyBuilderBasecLcLProductmUgR(void *p) {
      typedef vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveDataProxyBuilderBase::Product*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveDataItemList::TTip*>*)
   {
      vector<ROOT::Experimental::REveDataItemList::TTip*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveDataItemList::TTip*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveDataItemList::TTip*>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveDataItemList::TTip*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveDataItemList::TTip*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveDataItemList::TTip*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveDataItemList::TTip*>","std::__1::vector<ROOT::Experimental::REveDataItemList::TTip*, std::__1::allocator<ROOT::Experimental::REveDataItemList::TTip*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveDataItemList::TTip*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveDataItemList::TTip*>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveDataItemList::TTip*> : new vector<ROOT::Experimental::REveDataItemList::TTip*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveDataItemList::TTip*>[nElements] : new vector<ROOT::Experimental::REveDataItemList::TTip*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveDataItemList::TTip*>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveDataItemList::TTip*>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemListcLcLTTipmUgR(void *p) {
      typedef vector<ROOT::Experimental::REveDataItemList::TTip*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveDataItemList::TTip*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveDataItem*>*)
   {
      vector<ROOT::Experimental::REveDataItem*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveDataItem*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveDataItem*>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveDataItem*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveDataItem*>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveDataItem*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveDataItem*>","std::__1::vector<ROOT::Experimental::REveDataItem*, std::__1::allocator<ROOT::Experimental::REveDataItem*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveDataItem*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveDataItem*>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveDataItem*> : new vector<ROOT::Experimental::REveDataItem*>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveDataItem*>[nElements] : new vector<ROOT::Experimental::REveDataItem*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveDataItem*>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveDataItem*>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveDataItemmUgR(void *p) {
      typedef vector<ROOT::Experimental::REveDataItem*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveDataItem*>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*)
   {
      vector<ROOT::Experimental::REveCaloData::SliceInfo_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveCaloData::SliceInfo_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveCaloData::SliceInfo_t>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveCaloData::SliceInfo_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveCaloData::SliceInfo_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveCaloData::SliceInfo_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveCaloData::SliceInfo_t>","std::__1::vector<ROOT::Experimental::REveCaloData::SliceInfo_t, std::__1::allocator<ROOT::Experimental::REveCaloData::SliceInfo_t>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveCaloData::SliceInfo_t> : new vector<ROOT::Experimental::REveCaloData::SliceInfo_t>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveCaloData::SliceInfo_t>[nElements] : new vector<ROOT::Experimental::REveCaloData::SliceInfo_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveCaloData::SliceInfo_t>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLSliceInfo_tgR(void *p) {
      typedef vector<ROOT::Experimental::REveCaloData::SliceInfo_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveCaloData::SliceInfo_t>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::REveCaloData::CellId_t>*)
   {
      vector<ROOT::Experimental::REveCaloData::CellId_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::REveCaloData::CellId_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::REveCaloData::CellId_t>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::REveCaloData::CellId_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::REveCaloData::CellId_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::REveCaloData::CellId_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::REveCaloData::CellId_t>","std::__1::vector<ROOT::Experimental::REveCaloData::CellId_t, std::__1::allocator<ROOT::Experimental::REveCaloData::CellId_t>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveCaloData::CellId_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::REveCaloData::CellId_t>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveCaloData::CellId_t> : new vector<ROOT::Experimental::REveCaloData::CellId_t>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::REveCaloData::CellId_t>[nElements] : new vector<ROOT::Experimental::REveCaloData::CellId_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::REveCaloData::CellId_t>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::REveCaloData::CellId_t>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLREveCaloDatacLcLCellId_tgR(void *p) {
      typedef vector<ROOT::Experimental::REveCaloData::CellId_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::REveCaloData::CellId_t>

namespace ROOT {
   static TClass *unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary();
   static void unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass*);
   static void *new_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p = nullptr);
   static void *newArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(Long_t size, void *p);
   static void delete_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void deleteArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void destruct_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<unsigned int,ROOT::Experimental::REveElement*>*)
   {
      unordered_map<unsigned int,ROOT::Experimental::REveElement*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<unsigned int,ROOT::Experimental::REveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<unsigned int,ROOT::Experimental::REveElement*>", -2, "unordered_map", 1040,
                  typeid(unordered_map<unsigned int,ROOT::Experimental::REveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<unsigned int,ROOT::Experimental::REveElement*>) );
      instance.SetNew(&new_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetNewArray(&newArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDelete(&delete_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDestructor(&destruct_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<unsigned int,ROOT::Experimental::REveElement*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<unsigned int,ROOT::Experimental::REveElement*>","std::__1::unordered_map<unsigned int, ROOT::Experimental::REveElement*, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, ROOT::Experimental::REveElement*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<unsigned int,ROOT::Experimental::REveElement*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<unsigned int,ROOT::Experimental::REveElement*>*>(nullptr))->GetClass();
      unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<unsigned int,ROOT::Experimental::REveElement*> : new unordered_map<unsigned int,ROOT::Experimental::REveElement*>;
   }
   static void *newArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<unsigned int,ROOT::Experimental::REveElement*>[nElements] : new unordered_map<unsigned int,ROOT::Experimental::REveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete (static_cast<unordered_map<unsigned int,ROOT::Experimental::REveElement*>*>(p));
   }
   static void deleteArray_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete [] (static_cast<unordered_map<unsigned int,ROOT::Experimental::REveElement*>*>(p));
   }
   static void destruct_unordered_maplEunsignedsPintcOROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      typedef unordered_map<unsigned int,ROOT::Experimental::REveElement*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<unsigned int,ROOT::Experimental::REveElement*>

namespace ROOT {
   static TClass *unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR_Dictionary();
   static void unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p);
   static void deleteArray_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p);
   static void destruct_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,shared_ptr<TMethodCall> >*)
   {
      unordered_map<string,shared_ptr<TMethodCall> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,shared_ptr<TMethodCall> >));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,shared_ptr<TMethodCall> >", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,shared_ptr<TMethodCall> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,shared_ptr<TMethodCall> >) );
      instance.SetNew(&new_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR);
      instance.SetDelete(&delete_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,shared_ptr<TMethodCall> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,shared_ptr<TMethodCall> >","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::shared_ptr<TMethodCall>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::shared_ptr<TMethodCall>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,shared_ptr<TMethodCall> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,shared_ptr<TMethodCall> >*>(nullptr))->GetClass();
      unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,shared_ptr<TMethodCall> > : new unordered_map<string,shared_ptr<TMethodCall> >;
   }
   static void *newArray_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,shared_ptr<TMethodCall> >[nElements] : new unordered_map<string,shared_ptr<TMethodCall> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p) {
      delete (static_cast<unordered_map<string,shared_ptr<TMethodCall> >*>(p));
   }
   static void deleteArray_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p) {
      delete [] (static_cast<unordered_map<string,shared_ptr<TMethodCall> >*>(p));
   }
   static void destruct_unordered_maplEstringcOshared_ptrlETMethodCallgRsPgR(void *p) {
      typedef unordered_map<string,shared_ptr<TMethodCall> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,shared_ptr<TMethodCall> >

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = nullptr);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 576,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<int>","std::__1::set<int, std::__1::less<int>, std::__1::allocator<int>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr))->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete (static_cast<set<int>*>(p));
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] (static_cast<set<int>*>(p));
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *setlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary();
   static void setlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass*);
   static void *new_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p = nullptr);
   static void *newArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t size, void *p);
   static void delete_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void deleteArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void destruct_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<ROOT::Experimental::REveElement*>*)
   {
      set<ROOT::Experimental::REveElement*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<ROOT::Experimental::REveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("set<ROOT::Experimental::REveElement*>", -2, "set", 576,
                  typeid(set<ROOT::Experimental::REveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary, isa_proxy, 4,
                  sizeof(set<ROOT::Experimental::REveElement*>) );
      instance.SetNew(&new_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetNewArray(&newArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDelete(&delete_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDeleteArray(&deleteArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDestructor(&destruct_setlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<ROOT::Experimental::REveElement*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<ROOT::Experimental::REveElement*>","std::__1::set<ROOT::Experimental::REveElement*, std::__1::less<ROOT::Experimental::REveElement*>, std::__1::allocator<ROOT::Experimental::REveElement*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<ROOT::Experimental::REveElement*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<ROOT::Experimental::REveElement*>*>(nullptr))->GetClass();
      setlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<ROOT::Experimental::REveElement*> : new set<ROOT::Experimental::REveElement*>;
   }
   static void *newArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<ROOT::Experimental::REveElement*>[nElements] : new set<ROOT::Experimental::REveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete (static_cast<set<ROOT::Experimental::REveElement*>*>(p));
   }
   static void deleteArray_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete [] (static_cast<set<ROOT::Experimental::REveElement*>*>(p));
   }
   static void destruct_setlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      typedef set<ROOT::Experimental::REveElement*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<ROOT::Experimental::REveElement*>

namespace ROOT {
   static TClass *maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_Dictionary();
   static void maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_TClassManip(TClass*);
   static void *new_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p = nullptr);
   static void *newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(Long_t size, void *p);
   static void delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p);
   static void deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p);
   static void destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<ROOT::Experimental::REveElement*,int>*)
   {
      map<ROOT::Experimental::REveElement*,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<ROOT::Experimental::REveElement*,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<ROOT::Experimental::REveElement*,int>", -2, "map", 975,
                  typeid(map<ROOT::Experimental::REveElement*,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<ROOT::Experimental::REveElement*,int>) );
      instance.SetNew(&new_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetNewArray(&newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetDelete(&delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.SetDestructor(&destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<ROOT::Experimental::REveElement*,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<ROOT::Experimental::REveElement*,int>","std::__1::map<ROOT::Experimental::REveElement*, int, std::__1::less<ROOT::Experimental::REveElement*>, std::__1::allocator<std::__1::pair<ROOT::Experimental::REveElement* const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<ROOT::Experimental::REveElement*,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<ROOT::Experimental::REveElement*,int>*>(nullptr))->GetClass();
      maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ROOT::Experimental::REveElement*,int> : new map<ROOT::Experimental::REveElement*,int>;
   }
   static void *newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ROOT::Experimental::REveElement*,int>[nElements] : new map<ROOT::Experimental::REveElement*,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      delete (static_cast<map<ROOT::Experimental::REveElement*,int>*>(p));
   }
   static void deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      delete [] (static_cast<map<ROOT::Experimental::REveElement*,int>*>(p));
   }
   static void destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOintgR(void *p) {
      typedef map<ROOT::Experimental::REveElement*,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<ROOT::Experimental::REveElement*,int>

namespace ROOT {
   static TClass *maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR_Dictionary();
   static void maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR_TClassManip(TClass*);
   static void *new_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p = nullptr);
   static void *newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(Long_t size, void *p);
   static void delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p);
   static void deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p);
   static void destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>*)
   {
      map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>", -2, "map", 975,
                  typeid(map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>) );
      instance.SetNew(&new_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR);
      instance.SetNewArray(&newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR);
      instance.SetDelete(&delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR);
      instance.SetDeleteArray(&deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR);
      instance.SetDestructor(&destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>","std::__1::map<ROOT::Experimental::REveElement*, ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*, std::__1::less<ROOT::Experimental::REveElement*>, std::__1::allocator<std::__1::pair<ROOT::Experimental::REveElement* const, ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>*>(nullptr))->GetClass();
      maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*> : new map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>;
   }
   static void *newArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>[nElements] : new map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p) {
      delete (static_cast<map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>*>(p));
   }
   static void deleteArray_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p) {
      delete [] (static_cast<map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>*>(p));
   }
   static void destruct_maplEROOTcLcLExperimentalcLcLREveElementmUcOROOTcLcLExperimentalcLcLREveDataSimpleProxyBuildercLcLSPBProductmUgR(void *p) {
      typedef map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<ROOT::Experimental::REveElement*,ROOT::Experimental::REveDataSimpleProxyBuilder::SPBProduct*>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p = nullptr);
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::REveProjected*>*)
   {
      list<ROOT::Experimental::REveProjected*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::REveProjected*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::REveProjected*>", -2, "list", 663,
                  typeid(list<ROOT::Experimental::REveProjected*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Experimental::REveProjected*>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::REveProjected*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<ROOT::Experimental::REveProjected*>","std::__1::list<ROOT::Experimental::REveProjected*, std::__1::allocator<ROOT::Experimental::REveProjected*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<ROOT::Experimental::REveProjected*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<ROOT::Experimental::REveProjected*>*>(nullptr))->GetClass();
      listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLREveProjectedmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<ROOT::Experimental::REveProjected*> : new list<ROOT::Experimental::REveProjected*>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<ROOT::Experimental::REveProjected*>[nElements] : new list<ROOT::Experimental::REveProjected*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      delete (static_cast<list<ROOT::Experimental::REveProjected*>*>(p));
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      delete [] (static_cast<list<ROOT::Experimental::REveProjected*>*>(p));
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLREveProjectedmUgR(void *p) {
      typedef list<ROOT::Experimental::REveProjected*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::REveProjected*>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p = nullptr);
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::REveElement*>*)
   {
      list<ROOT::Experimental::REveElement*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::REveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::REveElement*>", -2, "list", 663,
                  typeid(list<ROOT::Experimental::REveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<ROOT::Experimental::REveElement*>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLREveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::REveElement*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<ROOT::Experimental::REveElement*>","std::__1::list<ROOT::Experimental::REveElement*, std::__1::allocator<ROOT::Experimental::REveElement*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<ROOT::Experimental::REveElement*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLREveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<ROOT::Experimental::REveElement*>*>(nullptr))->GetClass();
      listlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLREveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<ROOT::Experimental::REveElement*> : new list<ROOT::Experimental::REveElement*>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<ROOT::Experimental::REveElement*>[nElements] : new list<ROOT::Experimental::REveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete (static_cast<list<ROOT::Experimental::REveElement*>*>(p));
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      delete [] (static_cast<list<ROOT::Experimental::REveElement*>*>(p));
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLREveElementmUgR(void *p) {
      typedef list<ROOT::Experimental::REveElement*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::REveElement*>

namespace ROOT {
   static TClass *listlEROOTcLcLExperimentalcLcLREveAuntmUgR_Dictionary();
   static void listlEROOTcLcLExperimentalcLcLREveAuntmUgR_TClassManip(TClass*);
   static void *new_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p = nullptr);
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(Long_t size, void *p);
   static void delete_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p);
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p);
   static void destruct_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ROOT::Experimental::REveAunt*>*)
   {
      list<ROOT::Experimental::REveAunt*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ROOT::Experimental::REveAunt*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ROOT::Experimental::REveAunt*>", -2, "list", 663,
                  typeid(list<ROOT::Experimental::REveAunt*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEROOTcLcLExperimentalcLcLREveAuntmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ROOT::Experimental::REveAunt*>) );
      instance.SetNew(&new_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetNewArray(&newArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetDelete(&delete_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetDeleteArray(&deleteArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.SetDestructor(&destruct_listlEROOTcLcLExperimentalcLcLREveAuntmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ROOT::Experimental::REveAunt*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<ROOT::Experimental::REveAunt*>","std::__1::list<ROOT::Experimental::REveAunt*, std::__1::allocator<ROOT::Experimental::REveAunt*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<ROOT::Experimental::REveAunt*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEROOTcLcLExperimentalcLcLREveAuntmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<ROOT::Experimental::REveAunt*>*>(nullptr))->GetClass();
      listlEROOTcLcLExperimentalcLcLREveAuntmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEROOTcLcLExperimentalcLcLREveAuntmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<ROOT::Experimental::REveAunt*> : new list<ROOT::Experimental::REveAunt*>;
   }
   static void *newArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<ROOT::Experimental::REveAunt*>[nElements] : new list<ROOT::Experimental::REveAunt*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      delete (static_cast<list<ROOT::Experimental::REveAunt*>*>(p));
   }
   static void deleteArray_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      delete [] (static_cast<list<ROOT::Experimental::REveAunt*>*>(p));
   }
   static void destruct_listlEROOTcLcLExperimentalcLcLREveAuntmUgR(void *p) {
      typedef list<ROOT::Experimental::REveAunt*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<ROOT::Experimental::REveAunt*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTEve() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTEve) = RecordReadRules_libROOTEve();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTEve));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTEve_Impl() {
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
      TROOT::RegisterModule("libROOTEve",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTEve_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTEve_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTEve() {
  TriggerDictionaryInitialization_libROOTEve_Impl();
}
