// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Eve
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
#include "TEveBrowser.h"
#include "TEveChunkManager.h"
#include "TEveCompound.h"
#include "TEveElementEditor.h"
#include "TEveElement.h"
#include "TEveEventManager.h"
#include "TEveGedEditor.h"
#include "TEveGValuators.h"
#include "TEveMacro.h"
#include "TEveManager.h"
#include "TEvePad.h"
#include "TEveParamList.h"
#include "TEvePathMark.h"
#include "TEveProjectionAxes.h"
#include "TEveProjectionAxesEditor.h"
#include "TEveProjectionAxesGL.h"
#include "TEveProjectionBases.h"
#include "TEveProjectionManager.h"
#include "TEveProjectionManagerEditor.h"
#include "TEveProjections.h"
#include "TEveScene.h"
#include "TEveSceneInfo.h"
#include "TEveSecondarySelectable.h"
#include "TEveSelection.h"
#include "TEveTrans.h"
#include "TEveTransEditor.h"
#include "TEveTreeTools.h"
#include "TEveUtil.h"
#include "TEveVector.h"
#include "TEveViewer.h"
#include "TEveViewerListEditor.h"
#include "TEveVSD.h"
#include "TEveWindow.h"
#include "TEveWindowEditor.h"
#include "TEveWindowManager.h"
#include "TEveArrowEditor.h"
#include "TEveArrowGL.h"
#include "TEveArrow.h"
#include "TEveBoxGL.h"
#include "TEveBox.h"
#include "TEveBoxSetGL.h"
#include "TEveBoxSet.h"
#include "TEveCalo2DGL.h"
#include "TEveCalo3DGL.h"
#include "TEveCaloData.h"
#include "TEveCalo.h"
#include "TEveCaloLegoEditor.h"
#include "TEveCaloLegoGL.h"
#include "TEveCaloLegoOverlay.h"
#include "TEveCaloVizEditor.h"
#include "TEveDigitSetEditor.h"
#include "TEveDigitSetGL.h"
#include "TEveDigitSet.h"
#include "TEveFrameBoxGL.h"
#include "TEveFrameBox.h"
#include "TEveGeoNodeEditor.h"
#include "TEveGeoNode.h"
#include "TEveGeoPolyShape.h"
#include "TEveGeoShapeExtract.h"
#include "TEveGeoShape.h"
#include "TEveGridStepperEditor.h"
#include "TEveGridStepper.h"
#include "TEveJetCone.h"
#include "TEveJetConeEditor.h"
#include "TEveJetConeGL.h"
#include "TEveLegoEventHandler.h"
#include "TEveLineEditor.h"
#include "TEveLineGL.h"
#include "TEveLine.h"
#include "TEvePlot3D.h"
#include "TEvePlot3DGL.h"
#include "TEvePointSetArrayEditor.h"
#include "TEvePointSet.h"
#include "TEvePolygonSetProjected.h"
#include "TEvePolygonSetProjectedGL.h"
#include "TEveQuadSet.h"
#include "TEveQuadSetGL.h"
#include "TEveRGBAPalette.h"
#include "TEveRGBAPaletteEditor.h"
#include "TEveRGBAPaletteOverlay.h"
#include "TEveScalableStraightLineSet.h"
#include "TEveShape.h"
#include "TEveShapeEditor.h"
#include "TEveStraightLineSet.h"
#include "TEveStraightLineSetEditor.h"
#include "TEveStraightLineSetGL.h"
#include "TEveText.h"
#include "TEveTextEditor.h"
#include "TEveTextGL.h"
#include "TEveTrack.h"
#include "TEveTrackEditor.h"
#include "TEveTrackGL.h"
#include "TEveTrackProjected.h"
#include "TEveTrackProjectedGL.h"
#include "TEveTrackPropagator.h"
#include "TEveTrackPropagatorEditor.h"
#include "TEveTriangleSet.h"
#include "TEveTriangleSetEditor.h"
#include "TEveTriangleSetGL.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *__wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR_Dictionary();
   static void __wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR_TClassManip(TClass*);
   static void *new___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p = nullptr);
   static void *newArray___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(Long_t size, void *p);
   static void delete___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p);
   static void deleteArray___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p);
   static void destruct___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__wrap_iter<TEveProjection::PreScaleEntry_t*>*)
   {
      ::__wrap_iter<TEveProjection::PreScaleEntry_t*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__wrap_iter<TEveProjection::PreScaleEntry_t*>));
      static ::ROOT::TGenericClassInfo 
         instance("__wrap_iter<TEveProjection::PreScaleEntry_t*>", "iterator", 35,
                  typeid(::__wrap_iter<TEveProjection::PreScaleEntry_t*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR_Dictionary, isa_proxy, 0,
                  sizeof(::__wrap_iter<TEveProjection::PreScaleEntry_t*>) );
      instance.SetNew(&new___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR);
      instance.SetNewArray(&newArray___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR);
      instance.SetDelete(&delete___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR);
      instance.SetDeleteArray(&deleteArray___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR);
      instance.SetDestructor(&destruct___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__wrap_iter<TEveProjection::PreScaleEntry_t*>","vector<TEveProjection::PreScaleEntry_t>::iterator"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__wrap_iter<TEveProjection::PreScaleEntry_t*>","std::__1::__wrap_iter<TEveProjection::PreScaleEntry_t*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::__wrap_iter<TEveProjection::PreScaleEntry_t*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::__wrap_iter<TEveProjection::PreScaleEntry_t*>*>(nullptr))->GetClass();
      __wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR_TClassManip(theClass);
   return theClass;
   }

   static void __wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__list_const_iteratorlETEveElementmUcOvoidmUgR_Dictionary();
   static void __list_const_iteratorlETEveElementmUcOvoidmUgR_TClassManip(TClass*);
   static void *new___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p = nullptr);
   static void *newArray___list_const_iteratorlETEveElementmUcOvoidmUgR(Long_t size, void *p);
   static void delete___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p);
   static void deleteArray___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p);
   static void destruct___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__list_const_iterator<TEveElement*,void*>*)
   {
      ::__list_const_iterator<TEveElement*,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__list_const_iterator<TEveElement*,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("__list_const_iterator<TEveElement*,void*>", "list", 413,
                  typeid(::__list_const_iterator<TEveElement*,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__list_const_iteratorlETEveElementmUcOvoidmUgR_Dictionary, isa_proxy, 0,
                  sizeof(::__list_const_iterator<TEveElement*,void*>) );
      instance.SetNew(&new___list_const_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetNewArray(&newArray___list_const_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetDelete(&delete___list_const_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray___list_const_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetDestructor(&destruct___list_const_iteratorlETEveElementmUcOvoidmUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__list_const_iterator<TEveElement*,void*>","list<TEveElement*>::const_iterator"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__list_const_iterator<TEveElement*,void*>","std::__1::__list_const_iterator<TEveElement*, void*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::__list_const_iterator<TEveElement*,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__list_const_iteratorlETEveElementmUcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::__list_const_iterator<TEveElement*,void*>*>(nullptr))->GetClass();
      __list_const_iteratorlETEveElementmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void __list_const_iteratorlETEveElementmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__list_iteratorlETEveElementmUcOvoidmUgR_Dictionary();
   static void __list_iteratorlETEveElementmUcOvoidmUgR_TClassManip(TClass*);
   static void *new___list_iteratorlETEveElementmUcOvoidmUgR(void *p = nullptr);
   static void *newArray___list_iteratorlETEveElementmUcOvoidmUgR(Long_t size, void *p);
   static void delete___list_iteratorlETEveElementmUcOvoidmUgR(void *p);
   static void deleteArray___list_iteratorlETEveElementmUcOvoidmUgR(void *p);
   static void destruct___list_iteratorlETEveElementmUcOvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__list_iterator<TEveElement*,void*>*)
   {
      ::__list_iterator<TEveElement*,void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__list_iterator<TEveElement*,void*>));
      static ::ROOT::TGenericClassInfo 
         instance("__list_iterator<TEveElement*,void*>", "list", 355,
                  typeid(::__list_iterator<TEveElement*,void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__list_iteratorlETEveElementmUcOvoidmUgR_Dictionary, isa_proxy, 0,
                  sizeof(::__list_iterator<TEveElement*,void*>) );
      instance.SetNew(&new___list_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetNewArray(&newArray___list_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetDelete(&delete___list_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetDeleteArray(&deleteArray___list_iteratorlETEveElementmUcOvoidmUgR);
      instance.SetDestructor(&destruct___list_iteratorlETEveElementmUcOvoidmUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__list_iterator<TEveElement*,void*>","list<TEveElement*>::iterator"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__list_iterator<TEveElement*,void*>","std::__1::__list_iterator<TEveElement*, void*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::__list_iterator<TEveElement*,void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__list_iteratorlETEveElementmUcOvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::__list_iterator<TEveElement*,void*>*>(nullptr))->GetClass();
      __list_iteratorlETEveElementmUcOvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void __list_iteratorlETEveElementmUcOvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR_Dictionary();
   static void __tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR_TClassManip(TClass*);
   static void *new___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p = nullptr);
   static void *newArray___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(Long_t size, void *p);
   static void delete___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p);
   static void deleteArray___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p);
   static void destruct___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>*)
   {
      ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>));
      static ::ROOT::TGenericClassInfo 
         instance("__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>", "__tree", 794,
                  typeid(::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR_Dictionary, isa_proxy, 0,
                  sizeof(::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>) );
      instance.SetNew(&new___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR);
      instance.SetNewArray(&newArray___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR);
      instance.SetDelete(&delete___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR);
      instance.SetDeleteArray(&deleteArray___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR);
      instance.SetDestructor(&destruct___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>","set<TEveElement*>::iterator"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>","std::__1::__tree_const_iterator<TEveElement*, std::__1::__tree_node<TEveElement*, void*>*, long>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>*>(nullptr))->GetClass();
      __tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR_TClassManip(theClass);
   return theClass;
   }

   static void __tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveUtil(void *p = nullptr);
   static void *newArray_TEveUtil(Long_t size, void *p);
   static void delete_TEveUtil(void *p);
   static void deleteArray_TEveUtil(void *p);
   static void destruct_TEveUtil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveUtil*)
   {
      ::TEveUtil *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveUtil >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveUtil", ::TEveUtil::Class_Version(), "TEveUtil.h", 34,
                  typeid(::TEveUtil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveUtil::Dictionary, isa_proxy, 4,
                  sizeof(::TEveUtil) );
      instance.SetNew(&new_TEveUtil);
      instance.SetNewArray(&newArray_TEveUtil);
      instance.SetDelete(&delete_TEveUtil);
      instance.SetDeleteArray(&deleteArray_TEveUtil);
      instance.SetDestructor(&destruct_TEveUtil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveUtil*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveUtil*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveUtil*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveException(void *p = nullptr);
   static void *newArray_TEveException(Long_t size, void *p);
   static void delete_TEveException(void *p);
   static void deleteArray_TEveException(void *p);
   static void destruct_TEveException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveException*)
   {
      ::TEveException *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveException >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveException", ::TEveException::Class_Version(), "TEveUtil.h", 101,
                  typeid(::TEveException), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveException::Dictionary, isa_proxy, 4,
                  sizeof(::TEveException) );
      instance.SetNew(&new_TEveException);
      instance.SetNewArray(&newArray_TEveException);
      instance.SetDelete(&delete_TEveException);
      instance.SetDeleteArray(&deleteArray_TEveException);
      instance.SetDestructor(&destruct_TEveException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveException*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveException*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveException*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEvePadHolder(void *p);
   static void deleteArray_TEvePadHolder(void *p);
   static void destruct_TEvePadHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePadHolder*)
   {
      ::TEvePadHolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePadHolder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePadHolder", ::TEvePadHolder::Class_Version(), "TEveUtil.h", 125,
                  typeid(::TEvePadHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePadHolder::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePadHolder) );
      instance.SetDelete(&delete_TEvePadHolder);
      instance.SetDeleteArray(&deleteArray_TEvePadHolder);
      instance.SetDestructor(&destruct_TEvePadHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePadHolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePadHolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePadHolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoManagerHolder(void *p = nullptr);
   static void *newArray_TEveGeoManagerHolder(Long_t size, void *p);
   static void delete_TEveGeoManagerHolder(void *p);
   static void deleteArray_TEveGeoManagerHolder(void *p);
   static void destruct_TEveGeoManagerHolder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoManagerHolder*)
   {
      ::TEveGeoManagerHolder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoManagerHolder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoManagerHolder", ::TEveGeoManagerHolder::Class_Version(), "TEveUtil.h", 141,
                  typeid(::TEveGeoManagerHolder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoManagerHolder::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoManagerHolder) );
      instance.SetNew(&new_TEveGeoManagerHolder);
      instance.SetNewArray(&newArray_TEveGeoManagerHolder);
      instance.SetDelete(&delete_TEveGeoManagerHolder);
      instance.SetDeleteArray(&deleteArray_TEveGeoManagerHolder);
      instance.SetDestructor(&destruct_TEveGeoManagerHolder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoManagerHolder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoManagerHolder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoManagerHolder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRefCnt(void *p = nullptr);
   static void *newArray_TEveRefCnt(Long_t size, void *p);
   static void delete_TEveRefCnt(void *p);
   static void deleteArray_TEveRefCnt(void *p);
   static void destruct_TEveRefCnt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRefCnt*)
   {
      ::TEveRefCnt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRefCnt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRefCnt", ::TEveRefCnt::Class_Version(), "TEveUtil.h", 162,
                  typeid(::TEveRefCnt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRefCnt::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRefCnt) );
      instance.SetNew(&new_TEveRefCnt);
      instance.SetNewArray(&newArray_TEveRefCnt);
      instance.SetDelete(&delete_TEveRefCnt);
      instance.SetDeleteArray(&deleteArray_TEveRefCnt);
      instance.SetDestructor(&destruct_TEveRefCnt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRefCnt*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRefCnt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRefCnt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRefBackPtr(void *p = nullptr);
   static void *newArray_TEveRefBackPtr(Long_t size, void *p);
   static void delete_TEveRefBackPtr(void *p);
   static void deleteArray_TEveRefBackPtr(void *p);
   static void destruct_TEveRefBackPtr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRefBackPtr*)
   {
      ::TEveRefBackPtr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRefBackPtr >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRefBackPtr", ::TEveRefBackPtr::Class_Version(), "TEveUtil.h", 186,
                  typeid(::TEveRefBackPtr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRefBackPtr::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRefBackPtr) );
      instance.SetNew(&new_TEveRefBackPtr);
      instance.SetNewArray(&newArray_TEveRefBackPtr);
      instance.SetDelete(&delete_TEveRefBackPtr);
      instance.SetDeleteArray(&deleteArray_TEveRefBackPtr);
      instance.SetDestructor(&destruct_TEveRefBackPtr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRefBackPtr*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRefBackPtr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRefBackPtr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveProjectable(void *p);
   static void deleteArray_TEveProjectable(void *p);
   static void destruct_TEveProjectable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjectable*)
   {
      ::TEveProjectable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjectable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjectable", ::TEveProjectable::Class_Version(), "TEveProjectionBases.h", 34,
                  typeid(::TEveProjectable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjectable::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjectable) );
      instance.SetDelete(&delete_TEveProjectable);
      instance.SetDeleteArray(&deleteArray_TEveProjectable);
      instance.SetDestructor(&destruct_TEveProjectable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjectable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjectable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjectable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveProjected(void *p);
   static void deleteArray_TEveProjected(void *p);
   static void destruct_TEveProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjected*)
   {
      ::TEveProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjected", ::TEveProjected::Class_Version(), "TEveProjectionBases.h", 83,
                  typeid(::TEveProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjected) );
      instance.SetDelete(&delete_TEveProjected);
      instance.SetDeleteArray(&deleteArray_TEveProjected);
      instance.SetDestructor(&destruct_TEveProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveElement(void *p = nullptr);
   static void *newArray_TEveElement(Long_t size, void *p);
   static void delete_TEveElement(void *p);
   static void deleteArray_TEveElement(void *p);
   static void destruct_TEveElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveElement*)
   {
      ::TEveElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveElement", ::TEveElement::Class_Version(), "TEveElement.h", 35,
                  typeid(::TEveElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveElement::Dictionary, isa_proxy, 4,
                  sizeof(::TEveElement) );
      instance.SetNew(&new_TEveElement);
      instance.SetNewArray(&newArray_TEveElement);
      instance.SetDelete(&delete_TEveElement);
      instance.SetDeleteArray(&deleteArray_TEveElement);
      instance.SetDestructor(&destruct_TEveElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveElementcLcLTEveListTreeInfo(void *p = nullptr);
   static void *newArray_TEveElementcLcLTEveListTreeInfo(Long_t size, void *p);
   static void delete_TEveElementcLcLTEveListTreeInfo(void *p);
   static void deleteArray_TEveElementcLcLTEveListTreeInfo(void *p);
   static void destruct_TEveElementcLcLTEveListTreeInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveElement::TEveListTreeInfo*)
   {
      ::TEveElement::TEveListTreeInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveElement::TEveListTreeInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveElement::TEveListTreeInfo", ::TEveElement::TEveListTreeInfo::Class_Version(), "TEveElement.h", 42,
                  typeid(::TEveElement::TEveListTreeInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveElement::TEveListTreeInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TEveElement::TEveListTreeInfo) );
      instance.SetNew(&new_TEveElementcLcLTEveListTreeInfo);
      instance.SetNewArray(&newArray_TEveElementcLcLTEveListTreeInfo);
      instance.SetDelete(&delete_TEveElementcLcLTEveListTreeInfo);
      instance.SetDeleteArray(&deleteArray_TEveElementcLcLTEveListTreeInfo);
      instance.SetDestructor(&destruct_TEveElementcLcLTEveListTreeInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveElement::TEveListTreeInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveElement::TEveListTreeInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveElement::TEveListTreeInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveElementList(void *p = nullptr);
   static void *newArray_TEveElementList(Long_t size, void *p);
   static void delete_TEveElementList(void *p);
   static void deleteArray_TEveElementList(void *p);
   static void destruct_TEveElementList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveElementList*)
   {
      ::TEveElementList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveElementList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveElementList", ::TEveElementList::Class_Version(), "TEveElement.h", 438,
                  typeid(::TEveElementList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveElementList::Dictionary, isa_proxy, 4,
                  sizeof(::TEveElementList) );
      instance.SetNew(&new_TEveElementList);
      instance.SetNewArray(&newArray_TEveElementList);
      instance.SetDelete(&delete_TEveElementList);
      instance.SetDeleteArray(&deleteArray_TEveElementList);
      instance.SetDestructor(&destruct_TEveElementList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveElementList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveElementList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveElementList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveElementListProjected(void *p = nullptr);
   static void *newArray_TEveElementListProjected(Long_t size, void *p);
   static void delete_TEveElementListProjected(void *p);
   static void deleteArray_TEveElementListProjected(void *p);
   static void destruct_TEveElementListProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveElementListProjected*)
   {
      ::TEveElementListProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveElementListProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveElementListProjected", ::TEveElementListProjected::Class_Version(), "TEveElement.h", 487,
                  typeid(::TEveElementListProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveElementListProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveElementListProjected) );
      instance.SetNew(&new_TEveElementListProjected);
      instance.SetNewArray(&newArray_TEveElementListProjected);
      instance.SetDelete(&delete_TEveElementListProjected);
      instance.SetDeleteArray(&deleteArray_TEveElementListProjected);
      instance.SetDestructor(&destruct_TEveElementListProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveElementListProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveElementListProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveElementListProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveListTreeItem(void *p);
   static void deleteArray_TEveListTreeItem(void *p);
   static void destruct_TEveListTreeItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveListTreeItem*)
   {
      ::TEveListTreeItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveListTreeItem >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveListTreeItem", ::TEveListTreeItem::Class_Version(), "TEveBrowser.h", 29,
                  typeid(::TEveListTreeItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveListTreeItem::Dictionary, isa_proxy, 4,
                  sizeof(::TEveListTreeItem) );
      instance.SetDelete(&delete_TEveListTreeItem);
      instance.SetDeleteArray(&deleteArray_TEveListTreeItem);
      instance.SetDestructor(&destruct_TEveListTreeItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveListTreeItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveListTreeItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveListTreeItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGListTreeEditorFrame(void *p = nullptr);
   static void *newArray_TEveGListTreeEditorFrame(Long_t size, void *p);
   static void delete_TEveGListTreeEditorFrame(void *p);
   static void deleteArray_TEveGListTreeEditorFrame(void *p);
   static void destruct_TEveGListTreeEditorFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGListTreeEditorFrame*)
   {
      ::TEveGListTreeEditorFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGListTreeEditorFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGListTreeEditorFrame", ::TEveGListTreeEditorFrame::Class_Version(), "TEveBrowser.h", 82,
                  typeid(::TEveGListTreeEditorFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGListTreeEditorFrame::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGListTreeEditorFrame) );
      instance.SetNew(&new_TEveGListTreeEditorFrame);
      instance.SetNewArray(&newArray_TEveGListTreeEditorFrame);
      instance.SetDelete(&delete_TEveGListTreeEditorFrame);
      instance.SetDeleteArray(&deleteArray_TEveGListTreeEditorFrame);
      instance.SetDestructor(&destruct_TEveGListTreeEditorFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGListTreeEditorFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGListTreeEditorFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGListTreeEditorFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveBrowser(void *p);
   static void deleteArray_TEveBrowser(void *p);
   static void destruct_TEveBrowser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBrowser*)
   {
      ::TEveBrowser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBrowser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBrowser", ::TEveBrowser::Class_Version(), "TEveBrowser.h", 129,
                  typeid(::TEveBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBrowser::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBrowser) );
      instance.SetDelete(&delete_TEveBrowser);
      instance.SetDeleteArray(&deleteArray_TEveBrowser);
      instance.SetDestructor(&destruct_TEveBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBrowser*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBrowser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBrowser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveChunkManager(void *p = nullptr);
   static void *newArray_TEveChunkManager(Long_t size, void *p);
   static void delete_TEveChunkManager(void *p);
   static void deleteArray_TEveChunkManager(void *p);
   static void destruct_TEveChunkManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveChunkManager*)
   {
      ::TEveChunkManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveChunkManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveChunkManager", ::TEveChunkManager::Class_Version(), "TEveChunkManager.h", 26,
                  typeid(::TEveChunkManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveChunkManager::Dictionary, isa_proxy, 4,
                  sizeof(::TEveChunkManager) );
      instance.SetNew(&new_TEveChunkManager);
      instance.SetNewArray(&newArray_TEveChunkManager);
      instance.SetDelete(&delete_TEveChunkManager);
      instance.SetDeleteArray(&deleteArray_TEveChunkManager);
      instance.SetDestructor(&destruct_TEveChunkManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveChunkManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveChunkManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveChunkManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveChunkManagercLcLiterator_Dictionary();
   static void TEveChunkManagercLcLiterator_TClassManip(TClass*);
   static void delete_TEveChunkManagercLcLiterator(void *p);
   static void deleteArray_TEveChunkManagercLcLiterator(void *p);
   static void destruct_TEveChunkManagercLcLiterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveChunkManager::iterator*)
   {
      ::TEveChunkManager::iterator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEveChunkManager::iterator));
      static ::ROOT::TGenericClassInfo 
         instance("TEveChunkManager::iterator", "TEveChunkManager.h", 69,
                  typeid(::TEveChunkManager::iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveChunkManagercLcLiterator_Dictionary, isa_proxy, 1,
                  sizeof(::TEveChunkManager::iterator) );
      instance.SetDelete(&delete_TEveChunkManagercLcLiterator);
      instance.SetDeleteArray(&deleteArray_TEveChunkManagercLcLiterator);
      instance.SetDestructor(&destruct_TEveChunkManagercLcLiterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveChunkManager::iterator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveChunkManager::iterator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveChunkManager::iterator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveChunkManagercLcLiterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveChunkManager::iterator*>(nullptr))->GetClass();
      TEveChunkManagercLcLiterator_TClassManip(theClass);
   return theClass;
   }

   static void TEveChunkManagercLcLiterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCompound(void *p = nullptr);
   static void *newArray_TEveCompound(Long_t size, void *p);
   static void delete_TEveCompound(void *p);
   static void deleteArray_TEveCompound(void *p);
   static void destruct_TEveCompound(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCompound*)
   {
      ::TEveCompound *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCompound >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCompound", ::TEveCompound::Class_Version(), "TEveCompound.h", 23,
                  typeid(::TEveCompound), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCompound::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCompound) );
      instance.SetNew(&new_TEveCompound);
      instance.SetNewArray(&newArray_TEveCompound);
      instance.SetDelete(&delete_TEveCompound);
      instance.SetDeleteArray(&deleteArray_TEveCompound);
      instance.SetDestructor(&destruct_TEveCompound);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCompound*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCompound*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCompound*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCompoundProjected(void *p = nullptr);
   static void *newArray_TEveCompoundProjected(Long_t size, void *p);
   static void delete_TEveCompoundProjected(void *p);
   static void deleteArray_TEveCompoundProjected(void *p);
   static void destruct_TEveCompoundProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCompoundProjected*)
   {
      ::TEveCompoundProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCompoundProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCompoundProjected", ::TEveCompoundProjected::Class_Version(), "TEveCompound.h", 60,
                  typeid(::TEveCompoundProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCompoundProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCompoundProjected) );
      instance.SetNew(&new_TEveCompoundProjected);
      instance.SetNewArray(&newArray_TEveCompoundProjected);
      instance.SetDelete(&delete_TEveCompoundProjected);
      instance.SetDeleteArray(&deleteArray_TEveCompoundProjected);
      instance.SetDestructor(&destruct_TEveCompoundProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCompoundProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCompoundProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCompoundProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveElementEditor(void *p = nullptr);
   static void *newArray_TEveElementEditor(Long_t size, void *p);
   static void delete_TEveElementEditor(void *p);
   static void deleteArray_TEveElementEditor(void *p);
   static void destruct_TEveElementEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveElementEditor*)
   {
      ::TEveElementEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveElementEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveElementEditor", ::TEveElementEditor::Class_Version(), "TEveElementEditor.h", 25,
                  typeid(::TEveElementEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveElementEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveElementEditor) );
      instance.SetNew(&new_TEveElementEditor);
      instance.SetNewArray(&newArray_TEveElementEditor);
      instance.SetDelete(&delete_TEveElementEditor);
      instance.SetDeleteArray(&deleteArray_TEveElementEditor);
      instance.SetDestructor(&destruct_TEveElementEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveElementEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveElementEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveElementEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveEventManager(void *p = nullptr);
   static void *newArray_TEveEventManager(Long_t size, void *p);
   static void delete_TEveEventManager(void *p);
   static void deleteArray_TEveEventManager(void *p);
   static void destruct_TEveEventManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveEventManager*)
   {
      ::TEveEventManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveEventManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveEventManager", ::TEveEventManager::Class_Version(), "TEveEventManager.h", 19,
                  typeid(::TEveEventManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveEventManager::Dictionary, isa_proxy, 4,
                  sizeof(::TEveEventManager) );
      instance.SetNew(&new_TEveEventManager);
      instance.SetNewArray(&newArray_TEveEventManager);
      instance.SetDelete(&delete_TEveEventManager);
      instance.SetDeleteArray(&deleteArray_TEveEventManager);
      instance.SetDestructor(&destruct_TEveEventManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveEventManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveEventManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveEventManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGedEditor(void *p = nullptr);
   static void *newArray_TEveGedEditor(Long_t size, void *p);
   static void delete_TEveGedEditor(void *p);
   static void deleteArray_TEveGedEditor(void *p);
   static void destruct_TEveGedEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGedEditor*)
   {
      ::TEveGedEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGedEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGedEditor", ::TEveGedEditor::Class_Version(), "TEveGedEditor.h", 26,
                  typeid(::TEveGedEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGedEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGedEditor) );
      instance.SetNew(&new_TEveGedEditor);
      instance.SetNewArray(&newArray_TEveGedEditor);
      instance.SetDelete(&delete_TEveGedEditor);
      instance.SetDeleteArray(&deleteArray_TEveGedEditor);
      instance.SetDestructor(&destruct_TEveGedEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGedEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGedEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGedEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGedNameFrame(void *p = nullptr);
   static void *newArray_TEveGedNameFrame(Long_t size, void *p);
   static void delete_TEveGedNameFrame(void *p);
   static void deleteArray_TEveGedNameFrame(void *p);
   static void destruct_TEveGedNameFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGedNameFrame*)
   {
      ::TEveGedNameFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGedNameFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGedNameFrame", ::TEveGedNameFrame::Class_Version(), "TEveGedEditor.h", 77,
                  typeid(::TEveGedNameFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGedNameFrame::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGedNameFrame) );
      instance.SetNew(&new_TEveGedNameFrame);
      instance.SetNewArray(&newArray_TEveGedNameFrame);
      instance.SetDelete(&delete_TEveGedNameFrame);
      instance.SetDeleteArray(&deleteArray_TEveGedNameFrame);
      instance.SetDestructor(&destruct_TEveGedNameFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGedNameFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGedNameFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGedNameFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGedNameTextButton(void *p);
   static void deleteArray_TEveGedNameTextButton(void *p);
   static void destruct_TEveGedNameTextButton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGedNameTextButton*)
   {
      ::TEveGedNameTextButton *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGedNameTextButton >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGedNameTextButton", ::TEveGedNameTextButton::Class_Version(), "TEveGedEditor.h", 103,
                  typeid(::TEveGedNameTextButton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGedNameTextButton::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGedNameTextButton) );
      instance.SetDelete(&delete_TEveGedNameTextButton);
      instance.SetDeleteArray(&deleteArray_TEveGedNameTextButton);
      instance.SetDestructor(&destruct_TEveGedNameTextButton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGedNameTextButton*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGedNameTextButton*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGedNameTextButton*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGValuatorBase(void *p);
   static void deleteArray_TEveGValuatorBase(void *p);
   static void destruct_TEveGValuatorBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGValuatorBase*)
   {
      ::TEveGValuatorBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGValuatorBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGValuatorBase", ::TEveGValuatorBase::Class_Version(), "TEveGValuators.h", 21,
                  typeid(::TEveGValuatorBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGValuatorBase::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGValuatorBase) );
      instance.SetDelete(&delete_TEveGValuatorBase);
      instance.SetDeleteArray(&deleteArray_TEveGValuatorBase);
      instance.SetDestructor(&destruct_TEveGValuatorBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGValuatorBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGValuatorBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGValuatorBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGValuator(void *p);
   static void deleteArray_TEveGValuator(void *p);
   static void destruct_TEveGValuator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGValuator*)
   {
      ::TEveGValuator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGValuator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGValuator", ::TEveGValuator::Class_Version(), "TEveGValuators.h", 57,
                  typeid(::TEveGValuator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGValuator::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGValuator) );
      instance.SetDelete(&delete_TEveGValuator);
      instance.SetDeleteArray(&deleteArray_TEveGValuator);
      instance.SetDestructor(&destruct_TEveGValuator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGValuator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGValuator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGValuator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGDoubleValuator(void *p);
   static void deleteArray_TEveGDoubleValuator(void *p);
   static void destruct_TEveGDoubleValuator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGDoubleValuator*)
   {
      ::TEveGDoubleValuator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGDoubleValuator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGDoubleValuator", ::TEveGDoubleValuator::Class_Version(), "TEveGValuators.h", 108,
                  typeid(::TEveGDoubleValuator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGDoubleValuator::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGDoubleValuator) );
      instance.SetDelete(&delete_TEveGDoubleValuator);
      instance.SetDeleteArray(&deleteArray_TEveGDoubleValuator);
      instance.SetDestructor(&destruct_TEveGDoubleValuator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGDoubleValuator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGDoubleValuator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGDoubleValuator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGTriVecValuator(void *p);
   static void deleteArray_TEveGTriVecValuator(void *p);
   static void destruct_TEveGTriVecValuator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGTriVecValuator*)
   {
      ::TEveGTriVecValuator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGTriVecValuator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGTriVecValuator", ::TEveGTriVecValuator::Class_Version(), "TEveGValuators.h", 150,
                  typeid(::TEveGTriVecValuator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGTriVecValuator::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGTriVecValuator) );
      instance.SetDelete(&delete_TEveGTriVecValuator);
      instance.SetDeleteArray(&deleteArray_TEveGTriVecValuator);
      instance.SetDestructor(&destruct_TEveGTriVecValuator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGTriVecValuator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGTriVecValuator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGTriVecValuator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveMacro(void *p = nullptr);
   static void *newArray_TEveMacro(Long_t size, void *p);
   static void delete_TEveMacro(void *p);
   static void deleteArray_TEveMacro(void *p);
   static void destruct_TEveMacro(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveMacro*)
   {
      ::TEveMacro *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveMacro >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveMacro", ::TEveMacro::Class_Version(), "TEveMacro.h", 19,
                  typeid(::TEveMacro), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveMacro::Dictionary, isa_proxy, 4,
                  sizeof(::TEveMacro) );
      instance.SetNew(&new_TEveMacro);
      instance.SetNewArray(&newArray_TEveMacro);
      instance.SetDelete(&delete_TEveMacro);
      instance.SetDeleteArray(&deleteArray_TEveMacro);
      instance.SetDestructor(&destruct_TEveMacro);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveMacro*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveMacro*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveMacro*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveManager(void *p);
   static void deleteArray_TEveManager(void *p);
   static void destruct_TEveManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveManager*)
   {
      ::TEveManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveManager", ::TEveManager::Class_Version(), "TEveManager.h", 49,
                  typeid(::TEveManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveManager::Dictionary, isa_proxy, 4,
                  sizeof(::TEveManager) );
      instance.SetDelete(&delete_TEveManager);
      instance.SetDeleteArray(&deleteArray_TEveManager);
      instance.SetDestructor(&destruct_TEveManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveManagercLcLTRedrawDisabler(void *p);
   static void deleteArray_TEveManagercLcLTRedrawDisabler(void *p);
   static void destruct_TEveManagercLcLTRedrawDisabler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveManager::TRedrawDisabler*)
   {
      ::TEveManager::TRedrawDisabler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveManager::TRedrawDisabler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveManager::TRedrawDisabler", ::TEveManager::TRedrawDisabler::Class_Version(), "TEveManager.h", 55,
                  typeid(::TEveManager::TRedrawDisabler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveManager::TRedrawDisabler::Dictionary, isa_proxy, 4,
                  sizeof(::TEveManager::TRedrawDisabler) );
      instance.SetDelete(&delete_TEveManagercLcLTRedrawDisabler);
      instance.SetDeleteArray(&deleteArray_TEveManagercLcLTRedrawDisabler);
      instance.SetDestructor(&destruct_TEveManagercLcLTRedrawDisabler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveManager::TRedrawDisabler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveManager::TRedrawDisabler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveManager::TRedrawDisabler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveManagercLcLTExceptionHandler(void *p = nullptr);
   static void *newArray_TEveManagercLcLTExceptionHandler(Long_t size, void *p);
   static void delete_TEveManagercLcLTExceptionHandler(void *p);
   static void deleteArray_TEveManagercLcLTExceptionHandler(void *p);
   static void destruct_TEveManagercLcLTExceptionHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveManager::TExceptionHandler*)
   {
      ::TEveManager::TExceptionHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveManager::TExceptionHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveManager::TExceptionHandler", ::TEveManager::TExceptionHandler::Class_Version(), "TEveManager.h", 71,
                  typeid(::TEveManager::TExceptionHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveManager::TExceptionHandler::Dictionary, isa_proxy, 4,
                  sizeof(::TEveManager::TExceptionHandler) );
      instance.SetNew(&new_TEveManagercLcLTExceptionHandler);
      instance.SetNewArray(&newArray_TEveManagercLcLTExceptionHandler);
      instance.SetDelete(&delete_TEveManagercLcLTExceptionHandler);
      instance.SetDeleteArray(&deleteArray_TEveManagercLcLTExceptionHandler);
      instance.SetDestructor(&destruct_TEveManagercLcLTExceptionHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveManager::TExceptionHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveManager::TExceptionHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveManager::TExceptionHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePad(void *p = nullptr);
   static void *newArray_TEvePad(Long_t size, void *p);
   static void delete_TEvePad(void *p);
   static void deleteArray_TEvePad(void *p);
   static void destruct_TEvePad(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePad*)
   {
      ::TEvePad *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePad >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePad", ::TEvePad::Class_Version(), "TEvePad.h", 17,
                  typeid(::TEvePad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePad::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePad) );
      instance.SetNew(&new_TEvePad);
      instance.SetNewArray(&newArray_TEvePad);
      instance.SetDelete(&delete_TEvePad);
      instance.SetDeleteArray(&deleteArray_TEvePad);
      instance.SetDestructor(&destruct_TEvePad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePad*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePad*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePad*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveParamList(void *p = nullptr);
   static void *newArray_TEveParamList(Long_t size, void *p);
   static void delete_TEveParamList(void *p);
   static void deleteArray_TEveParamList(void *p);
   static void destruct_TEveParamList(void *p);
   static void streamer_TEveParamList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveParamList*)
   {
      ::TEveParamList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveParamList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveParamList", ::TEveParamList::Class_Version(), "TEveParamList.h", 24,
                  typeid(::TEveParamList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveParamList::Dictionary, isa_proxy, 16,
                  sizeof(::TEveParamList) );
      instance.SetNew(&new_TEveParamList);
      instance.SetNewArray(&newArray_TEveParamList);
      instance.SetDelete(&delete_TEveParamList);
      instance.SetDeleteArray(&deleteArray_TEveParamList);
      instance.SetDestructor(&destruct_TEveParamList);
      instance.SetStreamerFunc(&streamer_TEveParamList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveParamList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveParamList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveParamList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveParamListcLcLFloatConfig_t_Dictionary();
   static void TEveParamListcLcLFloatConfig_t_TClassManip(TClass*);
   static void *new_TEveParamListcLcLFloatConfig_t(void *p = nullptr);
   static void *newArray_TEveParamListcLcLFloatConfig_t(Long_t size, void *p);
   static void delete_TEveParamListcLcLFloatConfig_t(void *p);
   static void deleteArray_TEveParamListcLcLFloatConfig_t(void *p);
   static void destruct_TEveParamListcLcLFloatConfig_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveParamList::FloatConfig_t*)
   {
      ::TEveParamList::FloatConfig_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEveParamList::FloatConfig_t));
      static ::ROOT::TGenericClassInfo 
         instance("TEveParamList::FloatConfig_t", "TEveParamList.h", 31,
                  typeid(::TEveParamList::FloatConfig_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveParamListcLcLFloatConfig_t_Dictionary, isa_proxy, 4,
                  sizeof(::TEveParamList::FloatConfig_t) );
      instance.SetNew(&new_TEveParamListcLcLFloatConfig_t);
      instance.SetNewArray(&newArray_TEveParamListcLcLFloatConfig_t);
      instance.SetDelete(&delete_TEveParamListcLcLFloatConfig_t);
      instance.SetDeleteArray(&deleteArray_TEveParamListcLcLFloatConfig_t);
      instance.SetDestructor(&destruct_TEveParamListcLcLFloatConfig_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveParamList::FloatConfig_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveParamList::FloatConfig_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveParamList::FloatConfig_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveParamListcLcLFloatConfig_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveParamList::FloatConfig_t*>(nullptr))->GetClass();
      TEveParamListcLcLFloatConfig_t_TClassManip(theClass);
   return theClass;
   }

   static void TEveParamListcLcLFloatConfig_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveParamListcLcLIntConfig_t_Dictionary();
   static void TEveParamListcLcLIntConfig_t_TClassManip(TClass*);
   static void *new_TEveParamListcLcLIntConfig_t(void *p = nullptr);
   static void *newArray_TEveParamListcLcLIntConfig_t(Long_t size, void *p);
   static void delete_TEveParamListcLcLIntConfig_t(void *p);
   static void deleteArray_TEveParamListcLcLIntConfig_t(void *p);
   static void destruct_TEveParamListcLcLIntConfig_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveParamList::IntConfig_t*)
   {
      ::TEveParamList::IntConfig_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEveParamList::IntConfig_t));
      static ::ROOT::TGenericClassInfo 
         instance("TEveParamList::IntConfig_t", "TEveParamList.h", 45,
                  typeid(::TEveParamList::IntConfig_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveParamListcLcLIntConfig_t_Dictionary, isa_proxy, 4,
                  sizeof(::TEveParamList::IntConfig_t) );
      instance.SetNew(&new_TEveParamListcLcLIntConfig_t);
      instance.SetNewArray(&newArray_TEveParamListcLcLIntConfig_t);
      instance.SetDelete(&delete_TEveParamListcLcLIntConfig_t);
      instance.SetDeleteArray(&deleteArray_TEveParamListcLcLIntConfig_t);
      instance.SetDestructor(&destruct_TEveParamListcLcLIntConfig_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveParamList::IntConfig_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveParamList::IntConfig_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveParamList::IntConfig_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveParamListcLcLIntConfig_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveParamList::IntConfig_t*>(nullptr))->GetClass();
      TEveParamListcLcLIntConfig_t_TClassManip(theClass);
   return theClass;
   }

   static void TEveParamListcLcLIntConfig_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveParamListcLcLBoolConfig_t_Dictionary();
   static void TEveParamListcLcLBoolConfig_t_TClassManip(TClass*);
   static void *new_TEveParamListcLcLBoolConfig_t(void *p = nullptr);
   static void *newArray_TEveParamListcLcLBoolConfig_t(Long_t size, void *p);
   static void delete_TEveParamListcLcLBoolConfig_t(void *p);
   static void deleteArray_TEveParamListcLcLBoolConfig_t(void *p);
   static void destruct_TEveParamListcLcLBoolConfig_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveParamList::BoolConfig_t*)
   {
      ::TEveParamList::BoolConfig_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEveParamList::BoolConfig_t));
      static ::ROOT::TGenericClassInfo 
         instance("TEveParamList::BoolConfig_t", "TEveParamList.h", 59,
                  typeid(::TEveParamList::BoolConfig_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveParamListcLcLBoolConfig_t_Dictionary, isa_proxy, 4,
                  sizeof(::TEveParamList::BoolConfig_t) );
      instance.SetNew(&new_TEveParamListcLcLBoolConfig_t);
      instance.SetNewArray(&newArray_TEveParamListcLcLBoolConfig_t);
      instance.SetDelete(&delete_TEveParamListcLcLBoolConfig_t);
      instance.SetDeleteArray(&deleteArray_TEveParamListcLcLBoolConfig_t);
      instance.SetDestructor(&destruct_TEveParamListcLcLBoolConfig_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveParamList::BoolConfig_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveParamList::BoolConfig_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveParamList::BoolConfig_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveParamListcLcLBoolConfig_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveParamList::BoolConfig_t*>(nullptr))->GetClass();
      TEveParamListcLcLBoolConfig_t_TClassManip(theClass);
   return theClass;
   }

   static void TEveParamListcLcLBoolConfig_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveParamListEditor(void *p = nullptr);
   static void *newArray_TEveParamListEditor(Long_t size, void *p);
   static void delete_TEveParamListEditor(void *p);
   static void deleteArray_TEveParamListEditor(void *p);
   static void destruct_TEveParamListEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveParamListEditor*)
   {
      ::TEveParamListEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveParamListEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveParamListEditor", ::TEveParamListEditor::Class_Version(), "TEveParamList.h", 122,
                  typeid(::TEveParamListEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveParamListEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveParamListEditor) );
      instance.SetNew(&new_TEveParamListEditor);
      instance.SetNewArray(&newArray_TEveParamListEditor);
      instance.SetDelete(&delete_TEveParamListEditor);
      instance.SetDeleteArray(&deleteArray_TEveParamListEditor);
      instance.SetDestructor(&destruct_TEveParamListEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveParamListEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveParamListEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveParamListEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveVectorTlEfloatgR_Dictionary();
   static void TEveVectorTlEfloatgR_TClassManip(TClass*);
   static void *new_TEveVectorTlEfloatgR(void *p = nullptr);
   static void *newArray_TEveVectorTlEfloatgR(Long_t size, void *p);
   static void delete_TEveVectorTlEfloatgR(void *p);
   static void deleteArray_TEveVectorTlEfloatgR(void *p);
   static void destruct_TEveVectorTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVectorT<float>*)
   {
      ::TEveVectorT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVectorT<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVectorT<float>", ::TEveVectorT<float>::Class_Version(), "TEveVector.h", 27,
                  typeid(::TEveVectorT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveVectorTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveVectorT<float>) );
      instance.SetNew(&new_TEveVectorTlEfloatgR);
      instance.SetNewArray(&newArray_TEveVectorTlEfloatgR);
      instance.SetDelete(&delete_TEveVectorTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TEveVectorTlEfloatgR);
      instance.SetDestructor(&destruct_TEveVectorTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveVectorT<float>","TEveVectorT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVectorT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVectorT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVectorT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveVectorTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveVectorT<float>*>(nullptr))->GetClass();
      TEveVectorTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TEveVectorTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveVectorTlEdoublegR_Dictionary();
   static void TEveVectorTlEdoublegR_TClassManip(TClass*);
   static void *new_TEveVectorTlEdoublegR(void *p = nullptr);
   static void *newArray_TEveVectorTlEdoublegR(Long_t size, void *p);
   static void delete_TEveVectorTlEdoublegR(void *p);
   static void deleteArray_TEveVectorTlEdoublegR(void *p);
   static void destruct_TEveVectorTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVectorT<double>*)
   {
      ::TEveVectorT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVectorT<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVectorT<double>", ::TEveVectorT<double>::Class_Version(), "TEveVector.h", 27,
                  typeid(::TEveVectorT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveVectorTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveVectorT<double>) );
      instance.SetNew(&new_TEveVectorTlEdoublegR);
      instance.SetNewArray(&newArray_TEveVectorTlEdoublegR);
      instance.SetDelete(&delete_TEveVectorTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TEveVectorTlEdoublegR);
      instance.SetDestructor(&destruct_TEveVectorTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveVectorT<double>","TEveVectorT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVectorT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVectorT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVectorT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveVectorTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveVectorT<double>*>(nullptr))->GetClass();
      TEveVectorTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TEveVectorTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveVector4TlEfloatgR_Dictionary();
   static void TEveVector4TlEfloatgR_TClassManip(TClass*);
   static void *new_TEveVector4TlEfloatgR(void *p = nullptr);
   static void *newArray_TEveVector4TlEfloatgR(Long_t size, void *p);
   static void delete_TEveVector4TlEfloatgR(void *p);
   static void deleteArray_TEveVector4TlEfloatgR(void *p);
   static void destruct_TEveVector4TlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVector4T<float>*)
   {
      ::TEveVector4T<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVector4T<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVector4T<float>", ::TEveVector4T<float>::Class_Version(), "TEveVector.h", 242,
                  typeid(::TEveVector4T<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveVector4TlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveVector4T<float>) );
      instance.SetNew(&new_TEveVector4TlEfloatgR);
      instance.SetNewArray(&newArray_TEveVector4TlEfloatgR);
      instance.SetDelete(&delete_TEveVector4TlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TEveVector4TlEfloatgR);
      instance.SetDestructor(&destruct_TEveVector4TlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveVector4T<float>","TEveVector4T<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVector4T<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVector4T<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVector4T<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveVector4TlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveVector4T<float>*>(nullptr))->GetClass();
      TEveVector4TlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TEveVector4TlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveVector4TlEdoublegR_Dictionary();
   static void TEveVector4TlEdoublegR_TClassManip(TClass*);
   static void *new_TEveVector4TlEdoublegR(void *p = nullptr);
   static void *newArray_TEveVector4TlEdoublegR(Long_t size, void *p);
   static void delete_TEveVector4TlEdoublegR(void *p);
   static void deleteArray_TEveVector4TlEdoublegR(void *p);
   static void destruct_TEveVector4TlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVector4T<double>*)
   {
      ::TEveVector4T<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVector4T<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVector4T<double>", ::TEveVector4T<double>::Class_Version(), "TEveVector.h", 242,
                  typeid(::TEveVector4T<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveVector4TlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveVector4T<double>) );
      instance.SetNew(&new_TEveVector4TlEdoublegR);
      instance.SetNewArray(&newArray_TEveVector4TlEdoublegR);
      instance.SetDelete(&delete_TEveVector4TlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TEveVector4TlEdoublegR);
      instance.SetDestructor(&destruct_TEveVector4TlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveVector4T<double>","TEveVector4T<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVector4T<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVector4T<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVector4T<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveVector4TlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveVector4T<double>*>(nullptr))->GetClass();
      TEveVector4TlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TEveVector4TlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveVector2TlEfloatgR_Dictionary();
   static void TEveVector2TlEfloatgR_TClassManip(TClass*);
   static void *new_TEveVector2TlEfloatgR(void *p = nullptr);
   static void *newArray_TEveVector2TlEfloatgR(Long_t size, void *p);
   static void delete_TEveVector2TlEfloatgR(void *p);
   static void deleteArray_TEveVector2TlEfloatgR(void *p);
   static void destruct_TEveVector2TlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVector2T<float>*)
   {
      ::TEveVector2T<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVector2T<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVector2T<float>", ::TEveVector2T<float>::Class_Version(), "TEveVector.h", 310,
                  typeid(::TEveVector2T<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveVector2TlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveVector2T<float>) );
      instance.SetNew(&new_TEveVector2TlEfloatgR);
      instance.SetNewArray(&newArray_TEveVector2TlEfloatgR);
      instance.SetDelete(&delete_TEveVector2TlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TEveVector2TlEfloatgR);
      instance.SetDestructor(&destruct_TEveVector2TlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveVector2T<float>","TEveVector2T<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVector2T<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVector2T<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVector2T<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveVector2TlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveVector2T<float>*>(nullptr))->GetClass();
      TEveVector2TlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TEveVector2TlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveVector2TlEdoublegR_Dictionary();
   static void TEveVector2TlEdoublegR_TClassManip(TClass*);
   static void *new_TEveVector2TlEdoublegR(void *p = nullptr);
   static void *newArray_TEveVector2TlEdoublegR(Long_t size, void *p);
   static void delete_TEveVector2TlEdoublegR(void *p);
   static void deleteArray_TEveVector2TlEdoublegR(void *p);
   static void destruct_TEveVector2TlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVector2T<double>*)
   {
      ::TEveVector2T<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVector2T<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVector2T<double>", ::TEveVector2T<double>::Class_Version(), "TEveVector.h", 310,
                  typeid(::TEveVector2T<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveVector2TlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveVector2T<double>) );
      instance.SetNew(&new_TEveVector2TlEdoublegR);
      instance.SetNewArray(&newArray_TEveVector2TlEdoublegR);
      instance.SetDelete(&delete_TEveVector2TlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TEveVector2TlEdoublegR);
      instance.SetDestructor(&destruct_TEveVector2TlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveVector2T<double>","TEveVector2T<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVector2T<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVector2T<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVector2T<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveVector2TlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveVector2T<double>*>(nullptr))->GetClass();
      TEveVector2TlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TEveVector2TlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEvePathMarkTlEfloatgR_Dictionary();
   static void TEvePathMarkTlEfloatgR_TClassManip(TClass*);
   static void *new_TEvePathMarkTlEfloatgR(void *p = nullptr);
   static void *newArray_TEvePathMarkTlEfloatgR(Long_t size, void *p);
   static void delete_TEvePathMarkTlEfloatgR(void *p);
   static void deleteArray_TEvePathMarkTlEfloatgR(void *p);
   static void destruct_TEvePathMarkTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePathMarkT<float>*)
   {
      ::TEvePathMarkT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePathMarkT<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePathMarkT<float>", ::TEvePathMarkT<float>::Class_Version(), "TEvePathMark.h", 22,
                  typeid(::TEvePathMarkT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEvePathMarkTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TEvePathMarkT<float>) );
      instance.SetNew(&new_TEvePathMarkTlEfloatgR);
      instance.SetNewArray(&newArray_TEvePathMarkTlEfloatgR);
      instance.SetDelete(&delete_TEvePathMarkTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TEvePathMarkTlEfloatgR);
      instance.SetDestructor(&destruct_TEvePathMarkTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEvePathMarkT<float>","TEvePathMarkT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePathMarkT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePathMarkT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePathMarkT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEvePathMarkTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEvePathMarkT<float>*>(nullptr))->GetClass();
      TEvePathMarkTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TEvePathMarkTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEvePathMarkTlEdoublegR_Dictionary();
   static void TEvePathMarkTlEdoublegR_TClassManip(TClass*);
   static void *new_TEvePathMarkTlEdoublegR(void *p = nullptr);
   static void *newArray_TEvePathMarkTlEdoublegR(Long_t size, void *p);
   static void delete_TEvePathMarkTlEdoublegR(void *p);
   static void deleteArray_TEvePathMarkTlEdoublegR(void *p);
   static void destruct_TEvePathMarkTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePathMarkT<double>*)
   {
      ::TEvePathMarkT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePathMarkT<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePathMarkT<double>", ::TEvePathMarkT<double>::Class_Version(), "TEvePathMark.h", 22,
                  typeid(::TEvePathMarkT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEvePathMarkTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TEvePathMarkT<double>) );
      instance.SetNew(&new_TEvePathMarkTlEdoublegR);
      instance.SetNewArray(&newArray_TEvePathMarkTlEdoublegR);
      instance.SetDelete(&delete_TEvePathMarkTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TEvePathMarkTlEdoublegR);
      instance.SetDestructor(&destruct_TEvePathMarkTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEvePathMarkT<double>","TEvePathMarkT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePathMarkT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePathMarkT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePathMarkT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEvePathMarkTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEvePathMarkT<double>*>(nullptr))->GetClass();
      TEvePathMarkTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TEvePathMarkTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveProjectionAxes(void *p);
   static void deleteArray_TEveProjectionAxes(void *p);
   static void destruct_TEveProjectionAxes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjectionAxes*)
   {
      ::TEveProjectionAxes *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjectionAxes >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjectionAxes", ::TEveProjectionAxes::Class_Version(), "TEveProjectionAxes.h", 24,
                  typeid(::TEveProjectionAxes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjectionAxes::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjectionAxes) );
      instance.SetDelete(&delete_TEveProjectionAxes);
      instance.SetDeleteArray(&deleteArray_TEveProjectionAxes);
      instance.SetDestructor(&destruct_TEveProjectionAxes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjectionAxes*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjectionAxes*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjectionAxes*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveProjectionAxesEditor(void *p = nullptr);
   static void *newArray_TEveProjectionAxesEditor(Long_t size, void *p);
   static void delete_TEveProjectionAxesEditor(void *p);
   static void deleteArray_TEveProjectionAxesEditor(void *p);
   static void destruct_TEveProjectionAxesEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjectionAxesEditor*)
   {
      ::TEveProjectionAxesEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjectionAxesEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjectionAxesEditor", ::TEveProjectionAxesEditor::Class_Version(), "TEveProjectionAxesEditor.h", 23,
                  typeid(::TEveProjectionAxesEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjectionAxesEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjectionAxesEditor) );
      instance.SetNew(&new_TEveProjectionAxesEditor);
      instance.SetNewArray(&newArray_TEveProjectionAxesEditor);
      instance.SetDelete(&delete_TEveProjectionAxesEditor);
      instance.SetDeleteArray(&deleteArray_TEveProjectionAxesEditor);
      instance.SetDestructor(&destruct_TEveProjectionAxesEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjectionAxesEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjectionAxesEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjectionAxesEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveProjectionAxesGL(void *p = nullptr);
   static void *newArray_TEveProjectionAxesGL(Long_t size, void *p);
   static void delete_TEveProjectionAxesGL(void *p);
   static void deleteArray_TEveProjectionAxesGL(void *p);
   static void destruct_TEveProjectionAxesGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjectionAxesGL*)
   {
      ::TEveProjectionAxesGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjectionAxesGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjectionAxesGL", ::TEveProjectionAxesGL::Class_Version(), "TEveProjectionAxesGL.h", 21,
                  typeid(::TEveProjectionAxesGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjectionAxesGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjectionAxesGL) );
      instance.SetNew(&new_TEveProjectionAxesGL);
      instance.SetNewArray(&newArray_TEveProjectionAxesGL);
      instance.SetDelete(&delete_TEveProjectionAxesGL);
      instance.SetDeleteArray(&deleteArray_TEveProjectionAxesGL);
      instance.SetDestructor(&destruct_TEveProjectionAxesGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjectionAxesGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjectionAxesGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjectionAxesGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveProjection(void *p);
   static void deleteArray_TEveProjection(void *p);
   static void destruct_TEveProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjection*)
   {
      ::TEveProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjection", ::TEveProjection::Class_Version(), "TEveProjections.h", 26,
                  typeid(::TEveProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjection) );
      instance.SetDelete(&delete_TEveProjection);
      instance.SetDeleteArray(&deleteArray_TEveProjection);
      instance.SetDestructor(&destruct_TEveProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveProjectioncLcLPreScaleEntry_t(void *p = nullptr);
   static void *newArray_TEveProjectioncLcLPreScaleEntry_t(Long_t size, void *p);
   static void delete_TEveProjectioncLcLPreScaleEntry_t(void *p);
   static void deleteArray_TEveProjectioncLcLPreScaleEntry_t(void *p);
   static void destruct_TEveProjectioncLcLPreScaleEntry_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjection::PreScaleEntry_t*)
   {
      ::TEveProjection::PreScaleEntry_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjection::PreScaleEntry_t >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjection::PreScaleEntry_t", ::TEveProjection::PreScaleEntry_t::Class_Version(), "TEveProjections.h", 34,
                  typeid(::TEveProjection::PreScaleEntry_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjection::PreScaleEntry_t::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjection::PreScaleEntry_t) );
      instance.SetNew(&new_TEveProjectioncLcLPreScaleEntry_t);
      instance.SetNewArray(&newArray_TEveProjectioncLcLPreScaleEntry_t);
      instance.SetDelete(&delete_TEveProjectioncLcLPreScaleEntry_t);
      instance.SetDeleteArray(&deleteArray_TEveProjectioncLcLPreScaleEntry_t);
      instance.SetDestructor(&destruct_TEveProjectioncLcLPreScaleEntry_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjection::PreScaleEntry_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjection::PreScaleEntry_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjection::PreScaleEntry_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRhoZProjection(void *p = nullptr);
   static void *newArray_TEveRhoZProjection(Long_t size, void *p);
   static void delete_TEveRhoZProjection(void *p);
   static void deleteArray_TEveRhoZProjection(void *p);
   static void destruct_TEveRhoZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRhoZProjection*)
   {
      ::TEveRhoZProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRhoZProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRhoZProjection", ::TEveRhoZProjection::Class_Version(), "TEveProjections.h", 160,
                  typeid(::TEveRhoZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRhoZProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRhoZProjection) );
      instance.SetNew(&new_TEveRhoZProjection);
      instance.SetNewArray(&newArray_TEveRhoZProjection);
      instance.SetDelete(&delete_TEveRhoZProjection);
      instance.SetDeleteArray(&deleteArray_TEveRhoZProjection);
      instance.SetDestructor(&destruct_TEveRhoZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRhoZProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRhoZProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRhoZProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRPhiProjection(void *p = nullptr);
   static void *newArray_TEveRPhiProjection(Long_t size, void *p);
   static void delete_TEveRPhiProjection(void *p);
   static void deleteArray_TEveRPhiProjection(void *p);
   static void destruct_TEveRPhiProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRPhiProjection*)
   {
      ::TEveRPhiProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRPhiProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRPhiProjection", ::TEveRPhiProjection::Class_Version(), "TEveProjections.h", 191,
                  typeid(::TEveRPhiProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRPhiProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRPhiProjection) );
      instance.SetNew(&new_TEveRPhiProjection);
      instance.SetNewArray(&newArray_TEveRPhiProjection);
      instance.SetDelete(&delete_TEveRPhiProjection);
      instance.SetDeleteArray(&deleteArray_TEveRPhiProjection);
      instance.SetDestructor(&destruct_TEveRPhiProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRPhiProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRPhiProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRPhiProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveXZProjection(void *p = nullptr);
   static void *newArray_TEveXZProjection(Long_t size, void *p);
   static void delete_TEveXZProjection(void *p);
   static void deleteArray_TEveXZProjection(void *p);
   static void destruct_TEveXZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveXZProjection*)
   {
      ::TEveXZProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveXZProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveXZProjection", ::TEveXZProjection::Class_Version(), "TEveProjections.h", 210,
                  typeid(::TEveXZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveXZProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveXZProjection) );
      instance.SetNew(&new_TEveXZProjection);
      instance.SetNewArray(&newArray_TEveXZProjection);
      instance.SetDelete(&delete_TEveXZProjection);
      instance.SetDeleteArray(&deleteArray_TEveXZProjection);
      instance.SetDestructor(&destruct_TEveXZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveXZProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveXZProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveXZProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveYZProjection(void *p = nullptr);
   static void *newArray_TEveYZProjection(Long_t size, void *p);
   static void delete_TEveYZProjection(void *p);
   static void deleteArray_TEveYZProjection(void *p);
   static void destruct_TEveYZProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveYZProjection*)
   {
      ::TEveYZProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveYZProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveYZProjection", ::TEveYZProjection::Class_Version(), "TEveProjections.h", 237,
                  typeid(::TEveYZProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveYZProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveYZProjection) );
      instance.SetNew(&new_TEveYZProjection);
      instance.SetNewArray(&newArray_TEveYZProjection);
      instance.SetDelete(&delete_TEveYZProjection);
      instance.SetDeleteArray(&deleteArray_TEveYZProjection);
      instance.SetDestructor(&destruct_TEveYZProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveYZProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveYZProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveYZProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveZXProjection(void *p = nullptr);
   static void *newArray_TEveZXProjection(Long_t size, void *p);
   static void delete_TEveZXProjection(void *p);
   static void deleteArray_TEveZXProjection(void *p);
   static void destruct_TEveZXProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveZXProjection*)
   {
      ::TEveZXProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveZXProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveZXProjection", ::TEveZXProjection::Class_Version(), "TEveProjections.h", 264,
                  typeid(::TEveZXProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveZXProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveZXProjection) );
      instance.SetNew(&new_TEveZXProjection);
      instance.SetNewArray(&newArray_TEveZXProjection);
      instance.SetDelete(&delete_TEveZXProjection);
      instance.SetDeleteArray(&deleteArray_TEveZXProjection);
      instance.SetDestructor(&destruct_TEveZXProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveZXProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveZXProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveZXProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveZYProjection(void *p = nullptr);
   static void *newArray_TEveZYProjection(Long_t size, void *p);
   static void delete_TEveZYProjection(void *p);
   static void deleteArray_TEveZYProjection(void *p);
   static void destruct_TEveZYProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveZYProjection*)
   {
      ::TEveZYProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveZYProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveZYProjection", ::TEveZYProjection::Class_Version(), "TEveProjections.h", 291,
                  typeid(::TEveZYProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveZYProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveZYProjection) );
      instance.SetNew(&new_TEveZYProjection);
      instance.SetNewArray(&newArray_TEveZYProjection);
      instance.SetDelete(&delete_TEveZYProjection);
      instance.SetDeleteArray(&deleteArray_TEveZYProjection);
      instance.SetDestructor(&destruct_TEveZYProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveZYProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveZYProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveZYProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEve3DProjection(void *p = nullptr);
   static void *newArray_TEve3DProjection(Long_t size, void *p);
   static void delete_TEve3DProjection(void *p);
   static void deleteArray_TEve3DProjection(void *p);
   static void destruct_TEve3DProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEve3DProjection*)
   {
      ::TEve3DProjection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEve3DProjection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEve3DProjection", ::TEve3DProjection::Class_Version(), "TEveProjections.h", 318,
                  typeid(::TEve3DProjection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEve3DProjection::Dictionary, isa_proxy, 4,
                  sizeof(::TEve3DProjection) );
      instance.SetNew(&new_TEve3DProjection);
      instance.SetNewArray(&newArray_TEve3DProjection);
      instance.SetDelete(&delete_TEve3DProjection);
      instance.SetDeleteArray(&deleteArray_TEve3DProjection);
      instance.SetDestructor(&destruct_TEve3DProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEve3DProjection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEve3DProjection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEve3DProjection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveProjectionManager(void *p = nullptr);
   static void *newArray_TEveProjectionManager(Long_t size, void *p);
   static void delete_TEveProjectionManager(void *p);
   static void deleteArray_TEveProjectionManager(void *p);
   static void destruct_TEveProjectionManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjectionManager*)
   {
      ::TEveProjectionManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjectionManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjectionManager", ::TEveProjectionManager::Class_Version(), "TEveProjectionManager.h", 20,
                  typeid(::TEveProjectionManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjectionManager::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjectionManager) );
      instance.SetNew(&new_TEveProjectionManager);
      instance.SetNewArray(&newArray_TEveProjectionManager);
      instance.SetDelete(&delete_TEveProjectionManager);
      instance.SetDeleteArray(&deleteArray_TEveProjectionManager);
      instance.SetDestructor(&destruct_TEveProjectionManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjectionManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjectionManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjectionManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveProjectionManagerEditor(void *p = nullptr);
   static void *newArray_TEveProjectionManagerEditor(Long_t size, void *p);
   static void delete_TEveProjectionManagerEditor(void *p);
   static void deleteArray_TEveProjectionManagerEditor(void *p);
   static void destruct_TEveProjectionManagerEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveProjectionManagerEditor*)
   {
      ::TEveProjectionManagerEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveProjectionManagerEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveProjectionManagerEditor", ::TEveProjectionManagerEditor::Class_Version(), "TEveProjectionManagerEditor.h", 25,
                  typeid(::TEveProjectionManagerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveProjectionManagerEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveProjectionManagerEditor) );
      instance.SetNew(&new_TEveProjectionManagerEditor);
      instance.SetNewArray(&newArray_TEveProjectionManagerEditor);
      instance.SetDelete(&delete_TEveProjectionManagerEditor);
      instance.SetDeleteArray(&deleteArray_TEveProjectionManagerEditor);
      instance.SetDestructor(&destruct_TEveProjectionManagerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveProjectionManagerEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveProjectionManagerEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveProjectionManagerEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveScene(void *p = nullptr);
   static void *newArray_TEveScene(Long_t size, void *p);
   static void delete_TEveScene(void *p);
   static void deleteArray_TEveScene(void *p);
   static void destruct_TEveScene(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveScene*)
   {
      ::TEveScene *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveScene >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveScene", ::TEveScene::Class_Version(), "TEveScene.h", 26,
                  typeid(::TEveScene), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveScene::Dictionary, isa_proxy, 4,
                  sizeof(::TEveScene) );
      instance.SetNew(&new_TEveScene);
      instance.SetNewArray(&newArray_TEveScene);
      instance.SetDelete(&delete_TEveScene);
      instance.SetDeleteArray(&deleteArray_TEveScene);
      instance.SetDestructor(&destruct_TEveScene);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveScene*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveScene*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveScene*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveSceneList(void *p = nullptr);
   static void *newArray_TEveSceneList(Long_t size, void *p);
   static void delete_TEveSceneList(void *p);
   static void deleteArray_TEveSceneList(void *p);
   static void destruct_TEveSceneList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveSceneList*)
   {
      ::TEveSceneList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveSceneList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveSceneList", ::TEveSceneList::Class_Version(), "TEveScene.h", 79,
                  typeid(::TEveSceneList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveSceneList::Dictionary, isa_proxy, 4,
                  sizeof(::TEveSceneList) );
      instance.SetNew(&new_TEveSceneList);
      instance.SetNewArray(&newArray_TEveSceneList);
      instance.SetDelete(&delete_TEveSceneList);
      instance.SetDeleteArray(&deleteArray_TEveSceneList);
      instance.SetDestructor(&destruct_TEveSceneList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveSceneList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveSceneList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveSceneList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveSceneInfo(void *p);
   static void deleteArray_TEveSceneInfo(void *p);
   static void destruct_TEveSceneInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveSceneInfo*)
   {
      ::TEveSceneInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveSceneInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveSceneInfo", ::TEveSceneInfo::Class_Version(), "TEveSceneInfo.h", 23,
                  typeid(::TEveSceneInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveSceneInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TEveSceneInfo) );
      instance.SetDelete(&delete_TEveSceneInfo);
      instance.SetDeleteArray(&deleteArray_TEveSceneInfo);
      instance.SetDestructor(&destruct_TEveSceneInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveSceneInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveSceneInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveSceneInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveSecondarySelectable(void *p = nullptr);
   static void *newArray_TEveSecondarySelectable(Long_t size, void *p);
   static void delete_TEveSecondarySelectable(void *p);
   static void deleteArray_TEveSecondarySelectable(void *p);
   static void destruct_TEveSecondarySelectable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveSecondarySelectable*)
   {
      ::TEveSecondarySelectable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveSecondarySelectable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveSecondarySelectable", ::TEveSecondarySelectable::Class_Version(), "TEveSecondarySelectable.h", 22,
                  typeid(::TEveSecondarySelectable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveSecondarySelectable::Dictionary, isa_proxy, 4,
                  sizeof(::TEveSecondarySelectable) );
      instance.SetNew(&new_TEveSecondarySelectable);
      instance.SetNewArray(&newArray_TEveSecondarySelectable);
      instance.SetDelete(&delete_TEveSecondarySelectable);
      instance.SetDeleteArray(&deleteArray_TEveSecondarySelectable);
      instance.SetDestructor(&destruct_TEveSecondarySelectable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveSecondarySelectable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveSecondarySelectable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveSecondarySelectable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveSelection(void *p = nullptr);
   static void *newArray_TEveSelection(Long_t size, void *p);
   static void delete_TEveSelection(void *p);
   static void deleteArray_TEveSelection(void *p);
   static void destruct_TEveSelection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveSelection*)
   {
      ::TEveSelection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveSelection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveSelection", ::TEveSelection::Class_Version(), "TEveSelection.h", 21,
                  typeid(::TEveSelection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveSelection::Dictionary, isa_proxy, 4,
                  sizeof(::TEveSelection) );
      instance.SetNew(&new_TEveSelection);
      instance.SetNewArray(&newArray_TEveSelection);
      instance.SetDelete(&delete_TEveSelection);
      instance.SetDeleteArray(&deleteArray_TEveSelection);
      instance.SetDestructor(&destruct_TEveSelection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveSelection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveSelection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveSelection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrans(void *p = nullptr);
   static void *newArray_TEveTrans(Long_t size, void *p);
   static void delete_TEveTrans(void *p);
   static void deleteArray_TEveTrans(void *p);
   static void destruct_TEveTrans(void *p);
   static void streamer_TEveTrans(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrans*)
   {
      ::TEveTrans *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrans >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrans", ::TEveTrans::Class_Version(), "TEveTrans.h", 26,
                  typeid(::TEveTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrans::Dictionary, isa_proxy, 17,
                  sizeof(::TEveTrans) );
      instance.SetNew(&new_TEveTrans);
      instance.SetNewArray(&newArray_TEveTrans);
      instance.SetDelete(&delete_TEveTrans);
      instance.SetDeleteArray(&deleteArray_TEveTrans);
      instance.SetDestructor(&destruct_TEveTrans);
      instance.SetStreamerFunc(&streamer_TEveTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrans*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrans*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrans*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveTransSubEditor(void *p);
   static void deleteArray_TEveTransSubEditor(void *p);
   static void destruct_TEveTransSubEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTransSubEditor*)
   {
      ::TEveTransSubEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTransSubEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTransSubEditor", ::TEveTransSubEditor::Class_Version(), "TEveTransEditor.h", 24,
                  typeid(::TEveTransSubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTransSubEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTransSubEditor) );
      instance.SetDelete(&delete_TEveTransSubEditor);
      instance.SetDeleteArray(&deleteArray_TEveTransSubEditor);
      instance.SetDestructor(&destruct_TEveTransSubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTransSubEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTransSubEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTransSubEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTransEditor(void *p = nullptr);
   static void *newArray_TEveTransEditor(Long_t size, void *p);
   static void delete_TEveTransEditor(void *p);
   static void deleteArray_TEveTransEditor(void *p);
   static void destruct_TEveTransEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTransEditor*)
   {
      ::TEveTransEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTransEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTransEditor", ::TEveTransEditor::Class_Version(), "TEveTransEditor.h", 68,
                  typeid(::TEveTransEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTransEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTransEditor) );
      instance.SetNew(&new_TEveTransEditor);
      instance.SetNewArray(&newArray_TEveTransEditor);
      instance.SetDelete(&delete_TEveTransEditor);
      instance.SetDeleteArray(&deleteArray_TEveTransEditor);
      instance.SetDestructor(&destruct_TEveTransEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTransEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTransEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTransEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveSelectorToEventList(void *p);
   static void deleteArray_TEveSelectorToEventList(void *p);
   static void destruct_TEveSelectorToEventList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveSelectorToEventList*)
   {
      ::TEveSelectorToEventList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveSelectorToEventList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveSelectorToEventList", ::TEveSelectorToEventList::Class_Version(), "TEveTreeTools.h", 22,
                  typeid(::TEveSelectorToEventList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveSelectorToEventList::Dictionary, isa_proxy, 4,
                  sizeof(::TEveSelectorToEventList) );
      instance.SetDelete(&delete_TEveSelectorToEventList);
      instance.SetDeleteArray(&deleteArray_TEveSelectorToEventList);
      instance.SetDestructor(&destruct_TEveSelectorToEventList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveSelectorToEventList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveSelectorToEventList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveSelectorToEventList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEvePointSelectorConsumer(void *p);
   static void deleteArray_TEvePointSelectorConsumer(void *p);
   static void destruct_TEvePointSelectorConsumer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePointSelectorConsumer*)
   {
      ::TEvePointSelectorConsumer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePointSelectorConsumer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePointSelectorConsumer", ::TEvePointSelectorConsumer::Class_Version(), "TEveTreeTools.h", 45,
                  typeid(::TEvePointSelectorConsumer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePointSelectorConsumer::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePointSelectorConsumer) );
      instance.SetDelete(&delete_TEvePointSelectorConsumer);
      instance.SetDeleteArray(&deleteArray_TEvePointSelectorConsumer);
      instance.SetDestructor(&destruct_TEvePointSelectorConsumer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePointSelectorConsumer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePointSelectorConsumer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePointSelectorConsumer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePointSelector(void *p = nullptr);
   static void *newArray_TEvePointSelector(Long_t size, void *p);
   static void delete_TEvePointSelector(void *p);
   static void deleteArray_TEvePointSelector(void *p);
   static void destruct_TEvePointSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePointSelector*)
   {
      ::TEvePointSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePointSelector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePointSelector", ::TEvePointSelector::Class_Version(), "TEveTreeTools.h", 66,
                  typeid(::TEvePointSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePointSelector::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePointSelector) );
      instance.SetNew(&new_TEvePointSelector);
      instance.SetNewArray(&newArray_TEvePointSelector);
      instance.SetDelete(&delete_TEvePointSelector);
      instance.SetDeleteArray(&deleteArray_TEvePointSelector);
      instance.SetDestructor(&destruct_TEvePointSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePointSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePointSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePointSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCompositeFrame(void *p);
   static void deleteArray_TEveCompositeFrame(void *p);
   static void destruct_TEveCompositeFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCompositeFrame*)
   {
      ::TEveCompositeFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCompositeFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCompositeFrame", ::TEveCompositeFrame::Class_Version(), "TEveWindow.h", 39,
                  typeid(::TEveCompositeFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCompositeFrame::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCompositeFrame) );
      instance.SetDelete(&delete_TEveCompositeFrame);
      instance.SetDeleteArray(&deleteArray_TEveCompositeFrame);
      instance.SetDestructor(&destruct_TEveCompositeFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCompositeFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCompositeFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCompositeFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCompositeFrameInMainFrame(void *p);
   static void deleteArray_TEveCompositeFrameInMainFrame(void *p);
   static void destruct_TEveCompositeFrameInMainFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCompositeFrameInMainFrame*)
   {
      ::TEveCompositeFrameInMainFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCompositeFrameInMainFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCompositeFrameInMainFrame", ::TEveCompositeFrameInMainFrame::Class_Version(), "TEveWindow.h", 111,
                  typeid(::TEveCompositeFrameInMainFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCompositeFrameInMainFrame::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCompositeFrameInMainFrame) );
      instance.SetDelete(&delete_TEveCompositeFrameInMainFrame);
      instance.SetDeleteArray(&deleteArray_TEveCompositeFrameInMainFrame);
      instance.SetDestructor(&destruct_TEveCompositeFrameInMainFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCompositeFrameInMainFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCompositeFrameInMainFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCompositeFrameInMainFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCompositeFrameInPack(void *p);
   static void deleteArray_TEveCompositeFrameInPack(void *p);
   static void destruct_TEveCompositeFrameInPack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCompositeFrameInPack*)
   {
      ::TEveCompositeFrameInPack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCompositeFrameInPack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCompositeFrameInPack", ::TEveCompositeFrameInPack::Class_Version(), "TEveWindow.h", 147,
                  typeid(::TEveCompositeFrameInPack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCompositeFrameInPack::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCompositeFrameInPack) );
      instance.SetDelete(&delete_TEveCompositeFrameInPack);
      instance.SetDeleteArray(&deleteArray_TEveCompositeFrameInPack);
      instance.SetDestructor(&destruct_TEveCompositeFrameInPack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCompositeFrameInPack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCompositeFrameInPack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCompositeFrameInPack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCompositeFrameInTab(void *p);
   static void deleteArray_TEveCompositeFrameInTab(void *p);
   static void destruct_TEveCompositeFrameInTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCompositeFrameInTab*)
   {
      ::TEveCompositeFrameInTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCompositeFrameInTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCompositeFrameInTab", ::TEveCompositeFrameInTab::Class_Version(), "TEveWindow.h", 171,
                  typeid(::TEveCompositeFrameInTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCompositeFrameInTab::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCompositeFrameInTab) );
      instance.SetDelete(&delete_TEveCompositeFrameInTab);
      instance.SetDeleteArray(&deleteArray_TEveCompositeFrameInTab);
      instance.SetDestructor(&destruct_TEveCompositeFrameInTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCompositeFrameInTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCompositeFrameInTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCompositeFrameInTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveWindow(void *p);
   static void deleteArray_TEveWindow(void *p);
   static void destruct_TEveWindow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindow*)
   {
      ::TEveWindow *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindow >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindow", ::TEveWindow::Class_Version(), "TEveWindow.h", 209,
                  typeid(::TEveWindow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindow::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindow) );
      instance.SetDelete(&delete_TEveWindow);
      instance.SetDeleteArray(&deleteArray_TEveWindow);
      instance.SetDestructor(&destruct_TEveWindow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindow*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindow*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindow*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveWindowSlot(void *p = nullptr);
   static void *newArray_TEveWindowSlot(Long_t size, void *p);
   static void delete_TEveWindowSlot(void *p);
   static void deleteArray_TEveWindowSlot(void *p);
   static void destruct_TEveWindowSlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindowSlot*)
   {
      ::TEveWindowSlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindowSlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindowSlot", ::TEveWindowSlot::Class_Version(), "TEveWindow.h", 301,
                  typeid(::TEveWindowSlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindowSlot::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindowSlot) );
      instance.SetNew(&new_TEveWindowSlot);
      instance.SetNewArray(&newArray_TEveWindowSlot);
      instance.SetDelete(&delete_TEveWindowSlot);
      instance.SetDeleteArray(&deleteArray_TEveWindowSlot);
      instance.SetDestructor(&destruct_TEveWindowSlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindowSlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindowSlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindowSlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveWindowFrame(void *p);
   static void deleteArray_TEveWindowFrame(void *p);
   static void destruct_TEveWindowFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindowFrame*)
   {
      ::TEveWindowFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindowFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindowFrame", ::TEveWindowFrame::Class_Version(), "TEveWindow.h", 335,
                  typeid(::TEveWindowFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindowFrame::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindowFrame) );
      instance.SetDelete(&delete_TEveWindowFrame);
      instance.SetDeleteArray(&deleteArray_TEveWindowFrame);
      instance.SetDestructor(&destruct_TEveWindowFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindowFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindowFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindowFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveWindowPack(void *p);
   static void deleteArray_TEveWindowPack(void *p);
   static void destruct_TEveWindowPack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindowPack*)
   {
      ::TEveWindowPack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindowPack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindowPack", ::TEveWindowPack::Class_Version(), "TEveWindow.h", 360,
                  typeid(::TEveWindowPack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindowPack::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindowPack) );
      instance.SetDelete(&delete_TEveWindowPack);
      instance.SetDeleteArray(&deleteArray_TEveWindowPack);
      instance.SetDestructor(&destruct_TEveWindowPack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindowPack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindowPack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindowPack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveWindowTab(void *p);
   static void deleteArray_TEveWindowTab(void *p);
   static void destruct_TEveWindowTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindowTab*)
   {
      ::TEveWindowTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindowTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindowTab", ::TEveWindowTab::Class_Version(), "TEveWindow.h", 395,
                  typeid(::TEveWindowTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindowTab::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindowTab) );
      instance.SetDelete(&delete_TEveWindowTab);
      instance.SetDeleteArray(&deleteArray_TEveWindowTab);
      instance.SetDestructor(&destruct_TEveWindowTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindowTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindowTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindowTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveContextMenu(void *p);
   static void deleteArray_TEveContextMenu(void *p);
   static void destruct_TEveContextMenu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveContextMenu*)
   {
      ::TEveContextMenu *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveContextMenu >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveContextMenu", ::TEveContextMenu::Class_Version(), "TEveWindow.h", 430,
                  typeid(::TEveContextMenu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveContextMenu::Dictionary, isa_proxy, 4,
                  sizeof(::TEveContextMenu) );
      instance.SetDelete(&delete_TEveContextMenu);
      instance.SetDeleteArray(&deleteArray_TEveContextMenu);
      instance.SetDestructor(&destruct_TEveContextMenu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveContextMenu*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveContextMenu*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveContextMenu*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveViewer(void *p = nullptr);
   static void *newArray_TEveViewer(Long_t size, void *p);
   static void delete_TEveViewer(void *p);
   static void deleteArray_TEveViewer(void *p);
   static void destruct_TEveViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveViewer*)
   {
      ::TEveViewer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveViewer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveViewer", ::TEveViewer::Class_Version(), "TEveViewer.h", 30,
                  typeid(::TEveViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveViewer::Dictionary, isa_proxy, 4,
                  sizeof(::TEveViewer) );
      instance.SetNew(&new_TEveViewer);
      instance.SetNewArray(&newArray_TEveViewer);
      instance.SetDelete(&delete_TEveViewer);
      instance.SetDeleteArray(&deleteArray_TEveViewer);
      instance.SetDestructor(&destruct_TEveViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveViewer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveViewer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveViewer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveViewerList(void *p = nullptr);
   static void *newArray_TEveViewerList(Long_t size, void *p);
   static void delete_TEveViewerList(void *p);
   static void deleteArray_TEveViewerList(void *p);
   static void destruct_TEveViewerList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveViewerList*)
   {
      ::TEveViewerList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveViewerList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveViewerList", ::TEveViewerList::Class_Version(), "TEveViewer.h", 79,
                  typeid(::TEveViewerList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveViewerList::Dictionary, isa_proxy, 4,
                  sizeof(::TEveViewerList) );
      instance.SetNew(&new_TEveViewerList);
      instance.SetNewArray(&newArray_TEveViewerList);
      instance.SetDelete(&delete_TEveViewerList);
      instance.SetDeleteArray(&deleteArray_TEveViewerList);
      instance.SetDestructor(&destruct_TEveViewerList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveViewerList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveViewerList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveViewerList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveViewerListEditor(void *p = nullptr);
   static void *newArray_TEveViewerListEditor(Long_t size, void *p);
   static void delete_TEveViewerListEditor(void *p);
   static void deleteArray_TEveViewerListEditor(void *p);
   static void destruct_TEveViewerListEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveViewerListEditor*)
   {
      ::TEveViewerListEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveViewerListEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveViewerListEditor", ::TEveViewerListEditor::Class_Version(), "TEveViewerListEditor.h", 20,
                  typeid(::TEveViewerListEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveViewerListEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveViewerListEditor) );
      instance.SetNew(&new_TEveViewerListEditor);
      instance.SetNewArray(&newArray_TEveViewerListEditor);
      instance.SetDelete(&delete_TEveViewerListEditor);
      instance.SetDeleteArray(&deleteArray_TEveViewerListEditor);
      instance.SetDestructor(&destruct_TEveViewerListEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveViewerListEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveViewerListEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveViewerListEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveMCTrack(void *p = nullptr);
   static void *newArray_TEveMCTrack(Long_t size, void *p);
   static void delete_TEveMCTrack(void *p);
   static void deleteArray_TEveMCTrack(void *p);
   static void destruct_TEveMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveMCTrack*)
   {
      ::TEveMCTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveMCTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveMCTrack", ::TEveMCTrack::Class_Version(), "TEveVSDStructs.h", 42,
                  typeid(::TEveMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TEveMCTrack) );
      instance.SetNew(&new_TEveMCTrack);
      instance.SetNewArray(&newArray_TEveMCTrack);
      instance.SetDelete(&delete_TEveMCTrack);
      instance.SetDeleteArray(&deleteArray_TEveMCTrack);
      instance.SetDestructor(&destruct_TEveMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveMCTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveMCTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveMCTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveHit(void *p = nullptr);
   static void *newArray_TEveHit(Long_t size, void *p);
   static void delete_TEveHit(void *p);
   static void deleteArray_TEveHit(void *p);
   static void destruct_TEveHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveHit*)
   {
      ::TEveHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveHit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveHit", ::TEveHit::Class_Version(), "TEveVSDStructs.h", 79,
                  typeid(::TEveHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveHit::Dictionary, isa_proxy, 4,
                  sizeof(::TEveHit) );
      instance.SetNew(&new_TEveHit);
      instance.SetNewArray(&newArray_TEveHit);
      instance.SetDelete(&delete_TEveHit);
      instance.SetDeleteArray(&deleteArray_TEveHit);
      instance.SetDestructor(&destruct_TEveHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCluster(void *p = nullptr);
   static void *newArray_TEveCluster(Long_t size, void *p);
   static void delete_TEveCluster(void *p);
   static void deleteArray_TEveCluster(void *p);
   static void destruct_TEveCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCluster*)
   {
      ::TEveCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCluster", ::TEveCluster::Class_Version(), "TEveVSDStructs.h", 105,
                  typeid(::TEveCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCluster::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCluster) );
      instance.SetNew(&new_TEveCluster);
      instance.SetNewArray(&newArray_TEveCluster);
      instance.SetDelete(&delete_TEveCluster);
      instance.SetDeleteArray(&deleteArray_TEveCluster);
      instance.SetDestructor(&destruct_TEveCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveRecTrackTlEfloatgR_Dictionary();
   static void TEveRecTrackTlEfloatgR_TClassManip(TClass*);
   static void *new_TEveRecTrackTlEfloatgR(void *p = nullptr);
   static void *newArray_TEveRecTrackTlEfloatgR(Long_t size, void *p);
   static void delete_TEveRecTrackTlEfloatgR(void *p);
   static void deleteArray_TEveRecTrackTlEfloatgR(void *p);
   static void destruct_TEveRecTrackTlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRecTrackT<float>*)
   {
      ::TEveRecTrackT<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRecTrackT<float> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRecTrackT<float>", ::TEveRecTrackT<float>::Class_Version(), "TEveVSDStructs.h", 129,
                  typeid(::TEveRecTrackT<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveRecTrackTlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveRecTrackT<float>) );
      instance.SetNew(&new_TEveRecTrackTlEfloatgR);
      instance.SetNewArray(&newArray_TEveRecTrackTlEfloatgR);
      instance.SetDelete(&delete_TEveRecTrackTlEfloatgR);
      instance.SetDeleteArray(&deleteArray_TEveRecTrackTlEfloatgR);
      instance.SetDestructor(&destruct_TEveRecTrackTlEfloatgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveRecTrackT<float>","TEveRecTrackT<Float_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRecTrackT<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRecTrackT<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRecTrackT<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveRecTrackTlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveRecTrackT<float>*>(nullptr))->GetClass();
      TEveRecTrackTlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void TEveRecTrackTlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEveRecTrackTlEdoublegR_Dictionary();
   static void TEveRecTrackTlEdoublegR_TClassManip(TClass*);
   static void *new_TEveRecTrackTlEdoublegR(void *p = nullptr);
   static void *newArray_TEveRecTrackTlEdoublegR(Long_t size, void *p);
   static void delete_TEveRecTrackTlEdoublegR(void *p);
   static void deleteArray_TEveRecTrackTlEdoublegR(void *p);
   static void destruct_TEveRecTrackTlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRecTrackT<double>*)
   {
      ::TEveRecTrackT<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRecTrackT<double> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRecTrackT<double>", ::TEveRecTrackT<double>::Class_Version(), "TEveVSDStructs.h", 129,
                  typeid(::TEveRecTrackT<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEveRecTrackTlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::TEveRecTrackT<double>) );
      instance.SetNew(&new_TEveRecTrackTlEdoublegR);
      instance.SetNewArray(&newArray_TEveRecTrackTlEdoublegR);
      instance.SetDelete(&delete_TEveRecTrackTlEdoublegR);
      instance.SetDeleteArray(&deleteArray_TEveRecTrackTlEdoublegR);
      instance.SetDestructor(&destruct_TEveRecTrackTlEdoublegR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("TEveRecTrackT<double>","TEveRecTrackT<Double_t>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRecTrackT<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRecTrackT<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRecTrackT<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEveRecTrackTlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEveRecTrackT<double>*>(nullptr))->GetClass();
      TEveRecTrackTlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void TEveRecTrackTlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRecKink(void *p = nullptr);
   static void *newArray_TEveRecKink(Long_t size, void *p);
   static void delete_TEveRecKink(void *p);
   static void deleteArray_TEveRecKink(void *p);
   static void destruct_TEveRecKink(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRecKink*)
   {
      ::TEveRecKink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRecKink >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRecKink", ::TEveRecKink::Class_Version(), "TEveVSDStructs.h", 162,
                  typeid(::TEveRecKink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRecKink::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRecKink) );
      instance.SetNew(&new_TEveRecKink);
      instance.SetNewArray(&newArray_TEveRecKink);
      instance.SetDelete(&delete_TEveRecKink);
      instance.SetDeleteArray(&deleteArray_TEveRecKink);
      instance.SetDestructor(&destruct_TEveRecKink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRecKink*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRecKink*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRecKink*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRecV0(void *p = nullptr);
   static void *newArray_TEveRecV0(Long_t size, void *p);
   static void delete_TEveRecV0(void *p);
   static void deleteArray_TEveRecV0(void *p);
   static void destruct_TEveRecV0(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRecV0*)
   {
      ::TEveRecV0 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRecV0 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRecV0", ::TEveRecV0::Class_Version(), "TEveVSDStructs.h", 197,
                  typeid(::TEveRecV0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRecV0::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRecV0) );
      instance.SetNew(&new_TEveRecV0);
      instance.SetNewArray(&newArray_TEveRecV0);
      instance.SetDelete(&delete_TEveRecV0);
      instance.SetDeleteArray(&deleteArray_TEveRecV0);
      instance.SetDestructor(&destruct_TEveRecV0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRecV0*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRecV0*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRecV0*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRecCascade(void *p = nullptr);
   static void *newArray_TEveRecCascade(Long_t size, void *p);
   static void delete_TEveRecCascade(void *p);
   static void deleteArray_TEveRecCascade(void *p);
   static void destruct_TEveRecCascade(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRecCascade*)
   {
      ::TEveRecCascade *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRecCascade >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRecCascade", ::TEveRecCascade::Class_Version(), "TEveVSDStructs.h", 228,
                  typeid(::TEveRecCascade), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRecCascade::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRecCascade) );
      instance.SetNew(&new_TEveRecCascade);
      instance.SetNewArray(&newArray_TEveRecCascade);
      instance.SetDelete(&delete_TEveRecCascade);
      instance.SetDeleteArray(&deleteArray_TEveRecCascade);
      instance.SetDestructor(&destruct_TEveRecCascade);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRecCascade*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRecCascade*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRecCascade*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveMCRecCrossRef(void *p = nullptr);
   static void *newArray_TEveMCRecCrossRef(Long_t size, void *p);
   static void delete_TEveMCRecCrossRef(void *p);
   static void deleteArray_TEveMCRecCrossRef(void *p);
   static void destruct_TEveMCRecCrossRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveMCRecCrossRef*)
   {
      ::TEveMCRecCrossRef *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveMCRecCrossRef >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveMCRecCrossRef", ::TEveMCRecCrossRef::Class_Version(), "TEveVSDStructs.h", 257,
                  typeid(::TEveMCRecCrossRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveMCRecCrossRef::Dictionary, isa_proxy, 4,
                  sizeof(::TEveMCRecCrossRef) );
      instance.SetNew(&new_TEveMCRecCrossRef);
      instance.SetNewArray(&newArray_TEveMCRecCrossRef);
      instance.SetDelete(&delete_TEveMCRecCrossRef);
      instance.SetDeleteArray(&deleteArray_TEveMCRecCrossRef);
      instance.SetDestructor(&destruct_TEveMCRecCrossRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveMCRecCrossRef*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveMCRecCrossRef*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveMCRecCrossRef*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveVSD(void *p = nullptr);
   static void *newArray_TEveVSD(Long_t size, void *p);
   static void delete_TEveVSD(void *p);
   static void deleteArray_TEveVSD(void *p);
   static void destruct_TEveVSD(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveVSD*)
   {
      ::TEveVSD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveVSD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveVSD", ::TEveVSD::Class_Version(), "TEveVSD.h", 19,
                  typeid(::TEveVSD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveVSD::Dictionary, isa_proxy, 4,
                  sizeof(::TEveVSD) );
      instance.SetNew(&new_TEveVSD);
      instance.SetNewArray(&newArray_TEveVSD);
      instance.SetDelete(&delete_TEveVSD);
      instance.SetDeleteArray(&deleteArray_TEveVSD);
      instance.SetDestructor(&destruct_TEveVSD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveVSD*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveVSD*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveVSD*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveWindowEditor(void *p = nullptr);
   static void *newArray_TEveWindowEditor(Long_t size, void *p);
   static void delete_TEveWindowEditor(void *p);
   static void deleteArray_TEveWindowEditor(void *p);
   static void destruct_TEveWindowEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindowEditor*)
   {
      ::TEveWindowEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindowEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindowEditor", ::TEveWindowEditor::Class_Version(), "TEveWindowEditor.h", 24,
                  typeid(::TEveWindowEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindowEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindowEditor) );
      instance.SetNew(&new_TEveWindowEditor);
      instance.SetNewArray(&newArray_TEveWindowEditor);
      instance.SetDelete(&delete_TEveWindowEditor);
      instance.SetDeleteArray(&deleteArray_TEveWindowEditor);
      instance.SetDestructor(&destruct_TEveWindowEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindowEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindowEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindowEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveWindowManager(void *p = nullptr);
   static void *newArray_TEveWindowManager(Long_t size, void *p);
   static void delete_TEveWindowManager(void *p);
   static void deleteArray_TEveWindowManager(void *p);
   static void destruct_TEveWindowManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveWindowManager*)
   {
      ::TEveWindowManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveWindowManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveWindowManager", ::TEveWindowManager::Class_Version(), "TEveWindowManager.h", 21,
                  typeid(::TEveWindowManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveWindowManager::Dictionary, isa_proxy, 4,
                  sizeof(::TEveWindowManager) );
      instance.SetNew(&new_TEveWindowManager);
      instance.SetNewArray(&newArray_TEveWindowManager);
      instance.SetDelete(&delete_TEveWindowManager);
      instance.SetDeleteArray(&deleteArray_TEveWindowManager);
      instance.SetDestructor(&destruct_TEveWindowManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveWindowManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveWindowManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveWindowManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveArrowEditor(void *p = nullptr);
   static void *newArray_TEveArrowEditor(Long_t size, void *p);
   static void delete_TEveArrowEditor(void *p);
   static void deleteArray_TEveArrowEditor(void *p);
   static void destruct_TEveArrowEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveArrowEditor*)
   {
      ::TEveArrowEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveArrowEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveArrowEditor", ::TEveArrowEditor::Class_Version(), "TEveArrowEditor.h", 21,
                  typeid(::TEveArrowEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveArrowEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveArrowEditor) );
      instance.SetNew(&new_TEveArrowEditor);
      instance.SetNewArray(&newArray_TEveArrowEditor);
      instance.SetDelete(&delete_TEveArrowEditor);
      instance.SetDeleteArray(&deleteArray_TEveArrowEditor);
      instance.SetDestructor(&destruct_TEveArrowEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveArrowEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveArrowEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveArrowEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveArrowGL(void *p = nullptr);
   static void *newArray_TEveArrowGL(Long_t size, void *p);
   static void delete_TEveArrowGL(void *p);
   static void deleteArray_TEveArrowGL(void *p);
   static void destruct_TEveArrowGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveArrowGL*)
   {
      ::TEveArrowGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveArrowGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveArrowGL", ::TEveArrowGL::Class_Version(), "TEveArrowGL.h", 21,
                  typeid(::TEveArrowGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveArrowGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveArrowGL) );
      instance.SetNew(&new_TEveArrowGL);
      instance.SetNewArray(&newArray_TEveArrowGL);
      instance.SetDelete(&delete_TEveArrowGL);
      instance.SetDeleteArray(&deleteArray_TEveArrowGL);
      instance.SetDestructor(&destruct_TEveArrowGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveArrowGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveArrowGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveArrowGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveArrow(void *p = nullptr);
   static void *newArray_TEveArrow(Long_t size, void *p);
   static void delete_TEveArrow(void *p);
   static void deleteArray_TEveArrow(void *p);
   static void destruct_TEveArrow(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveArrow*)
   {
      ::TEveArrow *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveArrow >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveArrow", ::TEveArrow::Class_Version(), "TEveArrow.h", 21,
                  typeid(::TEveArrow), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveArrow::Dictionary, isa_proxy, 4,
                  sizeof(::TEveArrow) );
      instance.SetNew(&new_TEveArrow);
      instance.SetNewArray(&newArray_TEveArrow);
      instance.SetDelete(&delete_TEveArrow);
      instance.SetDeleteArray(&deleteArray_TEveArrow);
      instance.SetDestructor(&destruct_TEveArrow);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveArrow*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveArrow*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveArrow*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveBoxGL(void *p = nullptr);
   static void *newArray_TEveBoxGL(Long_t size, void *p);
   static void delete_TEveBoxGL(void *p);
   static void deleteArray_TEveBoxGL(void *p);
   static void destruct_TEveBoxGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBoxGL*)
   {
      ::TEveBoxGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBoxGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBoxGL", ::TEveBoxGL::Class_Version(), "TEveBoxGL.h", 27,
                  typeid(::TEveBoxGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBoxGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBoxGL) );
      instance.SetNew(&new_TEveBoxGL);
      instance.SetNewArray(&newArray_TEveBoxGL);
      instance.SetDelete(&delete_TEveBoxGL);
      instance.SetDeleteArray(&deleteArray_TEveBoxGL);
      instance.SetDestructor(&destruct_TEveBoxGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBoxGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBoxGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBoxGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveBoxProjectedGL(void *p = nullptr);
   static void *newArray_TEveBoxProjectedGL(Long_t size, void *p);
   static void delete_TEveBoxProjectedGL(void *p);
   static void deleteArray_TEveBoxProjectedGL(void *p);
   static void destruct_TEveBoxProjectedGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBoxProjectedGL*)
   {
      ::TEveBoxProjectedGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBoxProjectedGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBoxProjectedGL", ::TEveBoxProjectedGL::Class_Version(), "TEveBoxGL.h", 64,
                  typeid(::TEveBoxProjectedGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBoxProjectedGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBoxProjectedGL) );
      instance.SetNew(&new_TEveBoxProjectedGL);
      instance.SetNewArray(&newArray_TEveBoxProjectedGL);
      instance.SetDelete(&delete_TEveBoxProjectedGL);
      instance.SetDeleteArray(&deleteArray_TEveBoxProjectedGL);
      instance.SetDestructor(&destruct_TEveBoxProjectedGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBoxProjectedGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBoxProjectedGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBoxProjectedGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveShape(void *p);
   static void deleteArray_TEveShape(void *p);
   static void destruct_TEveShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveShape*)
   {
      ::TEveShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveShape", ::TEveShape::Class_Version(), "TEveShape.h", 23,
                  typeid(::TEveShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveShape::Dictionary, isa_proxy, 4,
                  sizeof(::TEveShape) );
      instance.SetDelete(&delete_TEveShape);
      instance.SetDeleteArray(&deleteArray_TEveShape);
      instance.SetDestructor(&destruct_TEveShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveBox(void *p = nullptr);
   static void *newArray_TEveBox(Long_t size, void *p);
   static void delete_TEveBox(void *p);
   static void deleteArray_TEveBox(void *p);
   static void destruct_TEveBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBox*)
   {
      ::TEveBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBox", ::TEveBox::Class_Version(), "TEveBox.h", 21,
                  typeid(::TEveBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBox::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBox) );
      instance.SetNew(&new_TEveBox);
      instance.SetNewArray(&newArray_TEveBox);
      instance.SetDelete(&delete_TEveBox);
      instance.SetDeleteArray(&deleteArray_TEveBox);
      instance.SetDestructor(&destruct_TEveBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveBoxProjected(void *p = nullptr);
   static void *newArray_TEveBoxProjected(Long_t size, void *p);
   static void delete_TEveBoxProjected(void *p);
   static void deleteArray_TEveBoxProjected(void *p);
   static void destruct_TEveBoxProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBoxProjected*)
   {
      ::TEveBoxProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBoxProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBoxProjected", ::TEveBoxProjected::Class_Version(), "TEveBox.h", 56,
                  typeid(::TEveBoxProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBoxProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBoxProjected) );
      instance.SetNew(&new_TEveBoxProjected);
      instance.SetNewArray(&newArray_TEveBoxProjected);
      instance.SetDelete(&delete_TEveBoxProjected);
      instance.SetDeleteArray(&deleteArray_TEveBoxProjected);
      instance.SetDestructor(&destruct_TEveBoxProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBoxProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBoxProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBoxProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveFrameBox(void *p = nullptr);
   static void *newArray_TEveFrameBox(Long_t size, void *p);
   static void delete_TEveFrameBox(void *p);
   static void deleteArray_TEveFrameBox(void *p);
   static void destruct_TEveFrameBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveFrameBox*)
   {
      ::TEveFrameBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveFrameBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveFrameBox", ::TEveFrameBox::Class_Version(), "TEveFrameBox.h", 18,
                  typeid(::TEveFrameBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveFrameBox::Dictionary, isa_proxy, 4,
                  sizeof(::TEveFrameBox) );
      instance.SetNew(&new_TEveFrameBox);
      instance.SetNewArray(&newArray_TEveFrameBox);
      instance.SetDelete(&delete_TEveFrameBox);
      instance.SetDeleteArray(&deleteArray_TEveFrameBox);
      instance.SetDestructor(&destruct_TEveFrameBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveFrameBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveFrameBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveFrameBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRGBAPalette(void *p = nullptr);
   static void *newArray_TEveRGBAPalette(Long_t size, void *p);
   static void delete_TEveRGBAPalette(void *p);
   static void deleteArray_TEveRGBAPalette(void *p);
   static void destruct_TEveRGBAPalette(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRGBAPalette*)
   {
      ::TEveRGBAPalette *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRGBAPalette >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRGBAPalette", ::TEveRGBAPalette::Class_Version(), "TEveRGBAPalette.h", 22,
                  typeid(::TEveRGBAPalette), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRGBAPalette::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRGBAPalette) );
      instance.SetNew(&new_TEveRGBAPalette);
      instance.SetNewArray(&newArray_TEveRGBAPalette);
      instance.SetDelete(&delete_TEveRGBAPalette);
      instance.SetDeleteArray(&deleteArray_TEveRGBAPalette);
      instance.SetDestructor(&destruct_TEveRGBAPalette);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRGBAPalette*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRGBAPalette*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRGBAPalette*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveDigitSet(void *p);
   static void deleteArray_TEveDigitSet(void *p);
   static void destruct_TEveDigitSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveDigitSet*)
   {
      ::TEveDigitSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveDigitSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveDigitSet", ::TEveDigitSet::Class_Version(), "TEveDigitSet.h", 29,
                  typeid(::TEveDigitSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveDigitSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEveDigitSet) );
      instance.SetDelete(&delete_TEveDigitSet);
      instance.SetDeleteArray(&deleteArray_TEveDigitSet);
      instance.SetDestructor(&destruct_TEveDigitSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveDigitSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveDigitSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveDigitSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveDigitSetGL(void *p);
   static void deleteArray_TEveDigitSetGL(void *p);
   static void destruct_TEveDigitSetGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveDigitSetGL*)
   {
      ::TEveDigitSetGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveDigitSetGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveDigitSetGL", ::TEveDigitSetGL::Class_Version(), "TEveDigitSetGL.h", 25,
                  typeid(::TEveDigitSetGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveDigitSetGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveDigitSetGL) );
      instance.SetDelete(&delete_TEveDigitSetGL);
      instance.SetDeleteArray(&deleteArray_TEveDigitSetGL);
      instance.SetDestructor(&destruct_TEveDigitSetGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveDigitSetGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveDigitSetGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveDigitSetGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveBoxSet(void *p = nullptr);
   static void *newArray_TEveBoxSet(Long_t size, void *p);
   static void delete_TEveBoxSet(void *p);
   static void deleteArray_TEveBoxSet(void *p);
   static void destruct_TEveBoxSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBoxSet*)
   {
      ::TEveBoxSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBoxSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBoxSet", ::TEveBoxSet::Class_Version(), "TEveBoxSet.h", 21,
                  typeid(::TEveBoxSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBoxSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBoxSet) );
      instance.SetNew(&new_TEveBoxSet);
      instance.SetNewArray(&newArray_TEveBoxSet);
      instance.SetDelete(&delete_TEveBoxSet);
      instance.SetDeleteArray(&deleteArray_TEveBoxSet);
      instance.SetDestructor(&destruct_TEveBoxSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBoxSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBoxSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBoxSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveBoxSetGL(void *p = nullptr);
   static void *newArray_TEveBoxSetGL(Long_t size, void *p);
   static void delete_TEveBoxSetGL(void *p);
   static void deleteArray_TEveBoxSetGL(void *p);
   static void destruct_TEveBoxSetGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveBoxSetGL*)
   {
      ::TEveBoxSetGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveBoxSetGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveBoxSetGL", ::TEveBoxSetGL::Class_Version(), "TEveBoxSetGL.h", 18,
                  typeid(::TEveBoxSetGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveBoxSetGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveBoxSetGL) );
      instance.SetNew(&new_TEveBoxSetGL);
      instance.SetNewArray(&newArray_TEveBoxSetGL);
      instance.SetDelete(&delete_TEveBoxSetGL);
      instance.SetDeleteArray(&deleteArray_TEveBoxSetGL);
      instance.SetDestructor(&destruct_TEveBoxSetGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveBoxSetGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveBoxSetGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveBoxSetGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCaloData(void *p);
   static void deleteArray_TEveCaloData(void *p);
   static void destruct_TEveCaloData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloData*)
   {
      ::TEveCaloData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloData", ::TEveCaloData::Class_Version(), "TEveCaloData.h", 26,
                  typeid(::TEveCaloData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloData::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloData) );
      instance.SetDelete(&delete_TEveCaloData);
      instance.SetDeleteArray(&deleteArray_TEveCaloData);
      instance.SetDestructor(&destruct_TEveCaloData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloData*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloDatacLcLSliceInfo_t(void *p = nullptr);
   static void *newArray_TEveCaloDatacLcLSliceInfo_t(Long_t size, void *p);
   static void delete_TEveCaloDatacLcLSliceInfo_t(void *p);
   static void deleteArray_TEveCaloDatacLcLSliceInfo_t(void *p);
   static void destruct_TEveCaloDatacLcLSliceInfo_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloData::SliceInfo_t*)
   {
      ::TEveCaloData::SliceInfo_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloData::SliceInfo_t >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloData::SliceInfo_t", ::TEveCaloData::SliceInfo_t::Class_Version(), "TEveCaloData.h", 30,
                  typeid(::TEveCaloData::SliceInfo_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloData::SliceInfo_t::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloData::SliceInfo_t) );
      instance.SetNew(&new_TEveCaloDatacLcLSliceInfo_t);
      instance.SetNewArray(&newArray_TEveCaloDatacLcLSliceInfo_t);
      instance.SetDelete(&delete_TEveCaloDatacLcLSliceInfo_t);
      instance.SetDeleteArray(&deleteArray_TEveCaloDatacLcLSliceInfo_t);
      instance.SetDestructor(&destruct_TEveCaloDatacLcLSliceInfo_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloData::SliceInfo_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloData::SliceInfo_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloData::SliceInfo_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCaloDataVec(void *p);
   static void deleteArray_TEveCaloDataVec(void *p);
   static void destruct_TEveCaloDataVec(void *p);
   static void streamer_TEveCaloDataVec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloDataVec*)
   {
      ::TEveCaloDataVec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloDataVec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloDataVec", ::TEveCaloDataVec::Class_Version(), "TEveCaloData.h", 239,
                  typeid(::TEveCaloDataVec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloDataVec::Dictionary, isa_proxy, 16,
                  sizeof(::TEveCaloDataVec) );
      instance.SetDelete(&delete_TEveCaloDataVec);
      instance.SetDeleteArray(&deleteArray_TEveCaloDataVec);
      instance.SetDestructor(&destruct_TEveCaloDataVec);
      instance.SetStreamerFunc(&streamer_TEveCaloDataVec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloDataVec*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloDataVec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloDataVec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloDataHist(void *p = nullptr);
   static void *newArray_TEveCaloDataHist(Long_t size, void *p);
   static void delete_TEveCaloDataHist(void *p);
   static void deleteArray_TEveCaloDataHist(void *p);
   static void destruct_TEveCaloDataHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloDataHist*)
   {
      ::TEveCaloDataHist *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloDataHist >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloDataHist", ::TEveCaloDataHist::Class_Version(), "TEveCaloData.h", 297,
                  typeid(::TEveCaloDataHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloDataHist::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloDataHist) );
      instance.SetNew(&new_TEveCaloDataHist);
      instance.SetNewArray(&newArray_TEveCaloDataHist);
      instance.SetDelete(&delete_TEveCaloDataHist);
      instance.SetDeleteArray(&deleteArray_TEveCaloDataHist);
      instance.SetDestructor(&destruct_TEveCaloDataHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloDataHist*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloDataHist*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloDataHist*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveCaloViz(void *p);
   static void deleteArray_TEveCaloViz(void *p);
   static void destruct_TEveCaloViz(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloViz*)
   {
      ::TEveCaloViz *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloViz >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloViz", ::TEveCaloViz::Class_Version(), "TEveCalo.h", 27,
                  typeid(::TEveCaloViz), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloViz::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloViz) );
      instance.SetDelete(&delete_TEveCaloViz);
      instance.SetDeleteArray(&deleteArray_TEveCaloViz);
      instance.SetDestructor(&destruct_TEveCaloViz);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloViz*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloViz*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloViz*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCalo3D(void *p = nullptr);
   static void *newArray_TEveCalo3D(Long_t size, void *p);
   static void delete_TEveCalo3D(void *p);
   static void deleteArray_TEveCalo3D(void *p);
   static void destruct_TEveCalo3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCalo3D*)
   {
      ::TEveCalo3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCalo3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCalo3D", ::TEveCalo3D::Class_Version(), "TEveCalo.h", 157,
                  typeid(::TEveCalo3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCalo3D::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCalo3D) );
      instance.SetNew(&new_TEveCalo3D);
      instance.SetNewArray(&newArray_TEveCalo3D);
      instance.SetDelete(&delete_TEveCalo3D);
      instance.SetDeleteArray(&deleteArray_TEveCalo3D);
      instance.SetDestructor(&destruct_TEveCalo3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCalo3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCalo3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCalo3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCalo2D(void *p = nullptr);
   static void *newArray_TEveCalo2D(Long_t size, void *p);
   static void delete_TEveCalo2D(void *p);
   static void deleteArray_TEveCalo2D(void *p);
   static void destruct_TEveCalo2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCalo2D*)
   {
      ::TEveCalo2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCalo2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCalo2D", ::TEveCalo2D::Class_Version(), "TEveCalo.h", 200,
                  typeid(::TEveCalo2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCalo2D::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCalo2D) );
      instance.SetNew(&new_TEveCalo2D);
      instance.SetNewArray(&newArray_TEveCalo2D);
      instance.SetDelete(&delete_TEveCalo2D);
      instance.SetDeleteArray(&deleteArray_TEveCalo2D);
      instance.SetDestructor(&destruct_TEveCalo2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCalo2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCalo2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCalo2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloLego(void *p = nullptr);
   static void *newArray_TEveCaloLego(Long_t size, void *p);
   static void delete_TEveCaloLego(void *p);
   static void deleteArray_TEveCaloLego(void *p);
   static void destruct_TEveCaloLego(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloLego*)
   {
      ::TEveCaloLego *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloLego >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloLego", ::TEveCaloLego::Class_Version(), "TEveCalo.h", 250,
                  typeid(::TEveCaloLego), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloLego::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloLego) );
      instance.SetNew(&new_TEveCaloLego);
      instance.SetNewArray(&newArray_TEveCaloLego);
      instance.SetDelete(&delete_TEveCaloLego);
      instance.SetDeleteArray(&deleteArray_TEveCaloLego);
      instance.SetDestructor(&destruct_TEveCaloLego);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloLego*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloLego*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloLego*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCalo2DGL(void *p = nullptr);
   static void *newArray_TEveCalo2DGL(Long_t size, void *p);
   static void delete_TEveCalo2DGL(void *p);
   static void deleteArray_TEveCalo2DGL(void *p);
   static void destruct_TEveCalo2DGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCalo2DGL*)
   {
      ::TEveCalo2DGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCalo2DGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCalo2DGL", ::TEveCalo2DGL::Class_Version(), "TEveCalo2DGL.h", 26,
                  typeid(::TEveCalo2DGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCalo2DGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCalo2DGL) );
      instance.SetNew(&new_TEveCalo2DGL);
      instance.SetNewArray(&newArray_TEveCalo2DGL);
      instance.SetDelete(&delete_TEveCalo2DGL);
      instance.SetDeleteArray(&deleteArray_TEveCalo2DGL);
      instance.SetDestructor(&destruct_TEveCalo2DGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCalo2DGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCalo2DGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCalo2DGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCalo3DGL(void *p = nullptr);
   static void *newArray_TEveCalo3DGL(Long_t size, void *p);
   static void delete_TEveCalo3DGL(void *p);
   static void deleteArray_TEveCalo3DGL(void *p);
   static void destruct_TEveCalo3DGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCalo3DGL*)
   {
      ::TEveCalo3DGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCalo3DGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCalo3DGL", ::TEveCalo3DGL::Class_Version(), "TEveCalo3DGL.h", 21,
                  typeid(::TEveCalo3DGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCalo3DGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCalo3DGL) );
      instance.SetNew(&new_TEveCalo3DGL);
      instance.SetNewArray(&newArray_TEveCalo3DGL);
      instance.SetDelete(&delete_TEveCalo3DGL);
      instance.SetDeleteArray(&deleteArray_TEveCalo3DGL);
      instance.SetDestructor(&destruct_TEveCalo3DGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCalo3DGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCalo3DGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCalo3DGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloLegoEditor(void *p = nullptr);
   static void *newArray_TEveCaloLegoEditor(Long_t size, void *p);
   static void delete_TEveCaloLegoEditor(void *p);
   static void deleteArray_TEveCaloLegoEditor(void *p);
   static void destruct_TEveCaloLegoEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloLegoEditor*)
   {
      ::TEveCaloLegoEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloLegoEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloLegoEditor", ::TEveCaloLegoEditor::Class_Version(), "TEveCaloLegoEditor.h", 26,
                  typeid(::TEveCaloLegoEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloLegoEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloLegoEditor) );
      instance.SetNew(&new_TEveCaloLegoEditor);
      instance.SetNewArray(&newArray_TEveCaloLegoEditor);
      instance.SetDelete(&delete_TEveCaloLegoEditor);
      instance.SetDeleteArray(&deleteArray_TEveCaloLegoEditor);
      instance.SetDestructor(&destruct_TEveCaloLegoEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloLegoEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloLegoEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloLegoEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloLegoGL(void *p = nullptr);
   static void *newArray_TEveCaloLegoGL(Long_t size, void *p);
   static void delete_TEveCaloLegoGL(void *p);
   static void deleteArray_TEveCaloLegoGL(void *p);
   static void destruct_TEveCaloLegoGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloLegoGL*)
   {
      ::TEveCaloLegoGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloLegoGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloLegoGL", ::TEveCaloLegoGL::Class_Version(), "TEveCaloLegoGL.h", 27,
                  typeid(::TEveCaloLegoGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloLegoGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloLegoGL) );
      instance.SetNew(&new_TEveCaloLegoGL);
      instance.SetNewArray(&newArray_TEveCaloLegoGL);
      instance.SetDelete(&delete_TEveCaloLegoGL);
      instance.SetDeleteArray(&deleteArray_TEveCaloLegoGL);
      instance.SetDestructor(&destruct_TEveCaloLegoGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloLegoGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloLegoGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloLegoGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloLegoOverlay(void *p = nullptr);
   static void *newArray_TEveCaloLegoOverlay(Long_t size, void *p);
   static void delete_TEveCaloLegoOverlay(void *p);
   static void deleteArray_TEveCaloLegoOverlay(void *p);
   static void destruct_TEveCaloLegoOverlay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloLegoOverlay*)
   {
      ::TEveCaloLegoOverlay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloLegoOverlay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloLegoOverlay", ::TEveCaloLegoOverlay::Class_Version(), "TEveCaloLegoOverlay.h", 20,
                  typeid(::TEveCaloLegoOverlay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloLegoOverlay::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloLegoOverlay) );
      instance.SetNew(&new_TEveCaloLegoOverlay);
      instance.SetNewArray(&newArray_TEveCaloLegoOverlay);
      instance.SetDelete(&delete_TEveCaloLegoOverlay);
      instance.SetDeleteArray(&deleteArray_TEveCaloLegoOverlay);
      instance.SetDestructor(&destruct_TEveCaloLegoOverlay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloLegoOverlay*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloLegoOverlay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloLegoOverlay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCaloVizEditor(void *p = nullptr);
   static void *newArray_TEveCaloVizEditor(Long_t size, void *p);
   static void delete_TEveCaloVizEditor(void *p);
   static void deleteArray_TEveCaloVizEditor(void *p);
   static void destruct_TEveCaloVizEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCaloVizEditor*)
   {
      ::TEveCaloVizEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCaloVizEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCaloVizEditor", ::TEveCaloVizEditor::Class_Version(), "TEveCaloVizEditor.h", 28,
                  typeid(::TEveCaloVizEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCaloVizEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCaloVizEditor) );
      instance.SetNew(&new_TEveCaloVizEditor);
      instance.SetNewArray(&newArray_TEveCaloVizEditor);
      instance.SetDelete(&delete_TEveCaloVizEditor);
      instance.SetDeleteArray(&deleteArray_TEveCaloVizEditor);
      instance.SetDestructor(&destruct_TEveCaloVizEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCaloVizEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCaloVizEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCaloVizEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveCalo3DEditor(void *p = nullptr);
   static void *newArray_TEveCalo3DEditor(Long_t size, void *p);
   static void delete_TEveCalo3DEditor(void *p);
   static void deleteArray_TEveCalo3DEditor(void *p);
   static void destruct_TEveCalo3DEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveCalo3DEditor*)
   {
      ::TEveCalo3DEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveCalo3DEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveCalo3DEditor", ::TEveCalo3DEditor::Class_Version(), "TEveCaloVizEditor.h", 79,
                  typeid(::TEveCalo3DEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveCalo3DEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveCalo3DEditor) );
      instance.SetNew(&new_TEveCalo3DEditor);
      instance.SetNewArray(&newArray_TEveCalo3DEditor);
      instance.SetDelete(&delete_TEveCalo3DEditor);
      instance.SetDeleteArray(&deleteArray_TEveCalo3DEditor);
      instance.SetDestructor(&destruct_TEveCalo3DEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveCalo3DEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveCalo3DEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveCalo3DEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveDigitSetEditor(void *p = nullptr);
   static void *newArray_TEveDigitSetEditor(Long_t size, void *p);
   static void delete_TEveDigitSetEditor(void *p);
   static void deleteArray_TEveDigitSetEditor(void *p);
   static void destruct_TEveDigitSetEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveDigitSetEditor*)
   {
      ::TEveDigitSetEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveDigitSetEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveDigitSetEditor", ::TEveDigitSetEditor::Class_Version(), "TEveDigitSetEditor.h", 31,
                  typeid(::TEveDigitSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveDigitSetEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveDigitSetEditor) );
      instance.SetNew(&new_TEveDigitSetEditor);
      instance.SetNewArray(&newArray_TEveDigitSetEditor);
      instance.SetDelete(&delete_TEveDigitSetEditor);
      instance.SetDeleteArray(&deleteArray_TEveDigitSetEditor);
      instance.SetDestructor(&destruct_TEveDigitSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveDigitSetEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveDigitSetEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveDigitSetEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveFrameBoxGL(void *p);
   static void deleteArray_TEveFrameBoxGL(void *p);
   static void destruct_TEveFrameBoxGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveFrameBoxGL*)
   {
      ::TEveFrameBoxGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveFrameBoxGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveFrameBoxGL", ::TEveFrameBoxGL::Class_Version(), "TEveFrameBoxGL.h", 19,
                  typeid(::TEveFrameBoxGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveFrameBoxGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveFrameBoxGL) );
      instance.SetDelete(&delete_TEveFrameBoxGL);
      instance.SetDeleteArray(&deleteArray_TEveFrameBoxGL);
      instance.SetDestructor(&destruct_TEveFrameBoxGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveFrameBoxGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveFrameBoxGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveFrameBoxGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoNodeEditor(void *p = nullptr);
   static void *newArray_TEveGeoNodeEditor(Long_t size, void *p);
   static void delete_TEveGeoNodeEditor(void *p);
   static void deleteArray_TEveGeoNodeEditor(void *p);
   static void destruct_TEveGeoNodeEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoNodeEditor*)
   {
      ::TEveGeoNodeEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoNodeEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoNodeEditor", ::TEveGeoNodeEditor::Class_Version(), "TEveGeoNodeEditor.h", 26,
                  typeid(::TEveGeoNodeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoNodeEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoNodeEditor) );
      instance.SetNew(&new_TEveGeoNodeEditor);
      instance.SetNewArray(&newArray_TEveGeoNodeEditor);
      instance.SetDelete(&delete_TEveGeoNodeEditor);
      instance.SetDeleteArray(&deleteArray_TEveGeoNodeEditor);
      instance.SetDestructor(&destruct_TEveGeoNodeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoNodeEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoNodeEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoNodeEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoTopNodeEditor(void *p = nullptr);
   static void *newArray_TEveGeoTopNodeEditor(Long_t size, void *p);
   static void delete_TEveGeoTopNodeEditor(void *p);
   static void deleteArray_TEveGeoTopNodeEditor(void *p);
   static void destruct_TEveGeoTopNodeEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoTopNodeEditor*)
   {
      ::TEveGeoTopNodeEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoTopNodeEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoTopNodeEditor", ::TEveGeoTopNodeEditor::Class_Version(), "TEveGeoNodeEditor.h", 56,
                  typeid(::TEveGeoTopNodeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoTopNodeEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoTopNodeEditor) );
      instance.SetNew(&new_TEveGeoTopNodeEditor);
      instance.SetNewArray(&newArray_TEveGeoTopNodeEditor);
      instance.SetDelete(&delete_TEveGeoTopNodeEditor);
      instance.SetDeleteArray(&deleteArray_TEveGeoTopNodeEditor);
      instance.SetDestructor(&destruct_TEveGeoTopNodeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoTopNodeEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoTopNodeEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoTopNodeEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGeoNode(void *p);
   static void deleteArray_TEveGeoNode(void *p);
   static void destruct_TEveGeoNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoNode*)
   {
      ::TEveGeoNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoNode", ::TEveGeoNode::Class_Version(), "TEveGeoNode.h", 28,
                  typeid(::TEveGeoNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoNode::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoNode) );
      instance.SetDelete(&delete_TEveGeoNode);
      instance.SetDeleteArray(&deleteArray_TEveGeoNode);
      instance.SetDestructor(&destruct_TEveGeoNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGeoTopNode(void *p);
   static void deleteArray_TEveGeoTopNode(void *p);
   static void destruct_TEveGeoTopNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoTopNode*)
   {
      ::TEveGeoTopNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoTopNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoTopNode", ::TEveGeoTopNode::Class_Version(), "TEveGeoNode.h", 89,
                  typeid(::TEveGeoTopNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoTopNode::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoTopNode) );
      instance.SetDelete(&delete_TEveGeoTopNode);
      instance.SetDeleteArray(&deleteArray_TEveGeoTopNode);
      instance.SetDestructor(&destruct_TEveGeoTopNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoTopNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoTopNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoTopNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoPolyShape(void *p = nullptr);
   static void *newArray_TEveGeoPolyShape(Long_t size, void *p);
   static void delete_TEveGeoPolyShape(void *p);
   static void deleteArray_TEveGeoPolyShape(void *p);
   static void destruct_TEveGeoPolyShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoPolyShape*)
   {
      ::TEveGeoPolyShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoPolyShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoPolyShape", ::TEveGeoPolyShape::Class_Version(), "TEveGeoPolyShape.h", 23,
                  typeid(::TEveGeoPolyShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoPolyShape::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoPolyShape) );
      instance.SetNew(&new_TEveGeoPolyShape);
      instance.SetNewArray(&newArray_TEveGeoPolyShape);
      instance.SetDelete(&delete_TEveGeoPolyShape);
      instance.SetDeleteArray(&deleteArray_TEveGeoPolyShape);
      instance.SetDestructor(&destruct_TEveGeoPolyShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoPolyShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoPolyShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoPolyShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoShapeExtract(void *p = nullptr);
   static void *newArray_TEveGeoShapeExtract(Long_t size, void *p);
   static void delete_TEveGeoShapeExtract(void *p);
   static void deleteArray_TEveGeoShapeExtract(void *p);
   static void destruct_TEveGeoShapeExtract(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoShapeExtract*)
   {
      ::TEveGeoShapeExtract *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoShapeExtract >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoShapeExtract", ::TEveGeoShapeExtract::Class_Version(), "TEveGeoShapeExtract.h", 20,
                  typeid(::TEveGeoShapeExtract), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoShapeExtract::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoShapeExtract) );
      instance.SetNew(&new_TEveGeoShapeExtract);
      instance.SetNewArray(&newArray_TEveGeoShapeExtract);
      instance.SetDelete(&delete_TEveGeoShapeExtract);
      instance.SetDeleteArray(&deleteArray_TEveGeoShapeExtract);
      instance.SetDestructor(&destruct_TEveGeoShapeExtract);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoShapeExtract*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoShapeExtract*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoShapeExtract*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoShape(void *p = nullptr);
   static void *newArray_TEveGeoShape(Long_t size, void *p);
   static void delete_TEveGeoShape(void *p);
   static void deleteArray_TEveGeoShape(void *p);
   static void destruct_TEveGeoShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoShape*)
   {
      ::TEveGeoShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoShape", ::TEveGeoShape::Class_Version(), "TEveGeoShape.h", 23,
                  typeid(::TEveGeoShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoShape::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoShape) );
      instance.SetNew(&new_TEveGeoShape);
      instance.SetNewArray(&newArray_TEveGeoShape);
      instance.SetDelete(&delete_TEveGeoShape);
      instance.SetDeleteArray(&deleteArray_TEveGeoShape);
      instance.SetDestructor(&destruct_TEveGeoShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGeoShapeProjected(void *p = nullptr);
   static void *newArray_TEveGeoShapeProjected(Long_t size, void *p);
   static void delete_TEveGeoShapeProjected(void *p);
   static void deleteArray_TEveGeoShapeProjected(void *p);
   static void destruct_TEveGeoShapeProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGeoShapeProjected*)
   {
      ::TEveGeoShapeProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGeoShapeProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGeoShapeProjected", ::TEveGeoShapeProjected::Class_Version(), "TEveGeoShape.h", 74,
                  typeid(::TEveGeoShapeProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGeoShapeProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGeoShapeProjected) );
      instance.SetNew(&new_TEveGeoShapeProjected);
      instance.SetNewArray(&newArray_TEveGeoShapeProjected);
      instance.SetDelete(&delete_TEveGeoShapeProjected);
      instance.SetDeleteArray(&deleteArray_TEveGeoShapeProjected);
      instance.SetDestructor(&destruct_TEveGeoShapeProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGeoShapeProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGeoShapeProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGeoShapeProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveGridStepperSubEditor(void *p);
   static void deleteArray_TEveGridStepperSubEditor(void *p);
   static void destruct_TEveGridStepperSubEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGridStepperSubEditor*)
   {
      ::TEveGridStepperSubEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGridStepperSubEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGridStepperSubEditor", ::TEveGridStepperSubEditor::Class_Version(), "TEveGridStepperEditor.h", 25,
                  typeid(::TEveGridStepperSubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGridStepperSubEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGridStepperSubEditor) );
      instance.SetDelete(&delete_TEveGridStepperSubEditor);
      instance.SetDeleteArray(&deleteArray_TEveGridStepperSubEditor);
      instance.SetDestructor(&destruct_TEveGridStepperSubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGridStepperSubEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGridStepperSubEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGridStepperSubEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGridStepperEditor(void *p = nullptr);
   static void *newArray_TEveGridStepperEditor(Long_t size, void *p);
   static void delete_TEveGridStepperEditor(void *p);
   static void deleteArray_TEveGridStepperEditor(void *p);
   static void destruct_TEveGridStepperEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGridStepperEditor*)
   {
      ::TEveGridStepperEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGridStepperEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGridStepperEditor", ::TEveGridStepperEditor::Class_Version(), "TEveGridStepperEditor.h", 56,
                  typeid(::TEveGridStepperEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGridStepperEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGridStepperEditor) );
      instance.SetNew(&new_TEveGridStepperEditor);
      instance.SetNewArray(&newArray_TEveGridStepperEditor);
      instance.SetDelete(&delete_TEveGridStepperEditor);
      instance.SetDeleteArray(&deleteArray_TEveGridStepperEditor);
      instance.SetDestructor(&destruct_TEveGridStepperEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGridStepperEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGridStepperEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGridStepperEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveGridStepper(void *p = nullptr);
   static void *newArray_TEveGridStepper(Long_t size, void *p);
   static void delete_TEveGridStepper(void *p);
   static void deleteArray_TEveGridStepper(void *p);
   static void destruct_TEveGridStepper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveGridStepper*)
   {
      ::TEveGridStepper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveGridStepper >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveGridStepper", ::TEveGridStepper::Class_Version(), "TEveGridStepper.h", 21,
                  typeid(::TEveGridStepper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveGridStepper::Dictionary, isa_proxy, 4,
                  sizeof(::TEveGridStepper) );
      instance.SetNew(&new_TEveGridStepper);
      instance.SetNewArray(&newArray_TEveGridStepper);
      instance.SetDelete(&delete_TEveGridStepper);
      instance.SetDeleteArray(&deleteArray_TEveGridStepper);
      instance.SetDestructor(&destruct_TEveGridStepper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveGridStepper*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveGridStepper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveGridStepper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveJetCone(void *p = nullptr);
   static void *newArray_TEveJetCone(Long_t size, void *p);
   static void delete_TEveJetCone(void *p);
   static void deleteArray_TEveJetCone(void *p);
   static void destruct_TEveJetCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveJetCone*)
   {
      ::TEveJetCone *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveJetCone >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveJetCone", ::TEveJetCone::Class_Version(), "TEveJetCone.h", 23,
                  typeid(::TEveJetCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveJetCone::Dictionary, isa_proxy, 4,
                  sizeof(::TEveJetCone) );
      instance.SetNew(&new_TEveJetCone);
      instance.SetNewArray(&newArray_TEveJetCone);
      instance.SetDelete(&delete_TEveJetCone);
      instance.SetDeleteArray(&deleteArray_TEveJetCone);
      instance.SetDestructor(&destruct_TEveJetCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveJetCone*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveJetCone*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveJetCone*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveJetConeProjected(void *p = nullptr);
   static void *newArray_TEveJetConeProjected(Long_t size, void *p);
   static void delete_TEveJetConeProjected(void *p);
   static void deleteArray_TEveJetConeProjected(void *p);
   static void destruct_TEveJetConeProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveJetConeProjected*)
   {
      ::TEveJetConeProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveJetConeProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveJetConeProjected", ::TEveJetConeProjected::Class_Version(), "TEveJetCone.h", 72,
                  typeid(::TEveJetConeProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveJetConeProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveJetConeProjected) );
      instance.SetNew(&new_TEveJetConeProjected);
      instance.SetNewArray(&newArray_TEveJetConeProjected);
      instance.SetDelete(&delete_TEveJetConeProjected);
      instance.SetDeleteArray(&deleteArray_TEveJetConeProjected);
      instance.SetDestructor(&destruct_TEveJetConeProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveJetConeProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveJetConeProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveJetConeProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveJetConeEditor(void *p = nullptr);
   static void *newArray_TEveJetConeEditor(Long_t size, void *p);
   static void delete_TEveJetConeEditor(void *p);
   static void deleteArray_TEveJetConeEditor(void *p);
   static void destruct_TEveJetConeEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveJetConeEditor*)
   {
      ::TEveJetConeEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveJetConeEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveJetConeEditor", ::TEveJetConeEditor::Class_Version(), "TEveJetConeEditor.h", 24,
                  typeid(::TEveJetConeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveJetConeEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveJetConeEditor) );
      instance.SetNew(&new_TEveJetConeEditor);
      instance.SetNewArray(&newArray_TEveJetConeEditor);
      instance.SetDelete(&delete_TEveJetConeEditor);
      instance.SetDeleteArray(&deleteArray_TEveJetConeEditor);
      instance.SetDestructor(&destruct_TEveJetConeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveJetConeEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveJetConeEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveJetConeEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveJetConeGL(void *p = nullptr);
   static void *newArray_TEveJetConeGL(Long_t size, void *p);
   static void delete_TEveJetConeGL(void *p);
   static void deleteArray_TEveJetConeGL(void *p);
   static void destruct_TEveJetConeGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveJetConeGL*)
   {
      ::TEveJetConeGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveJetConeGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveJetConeGL", ::TEveJetConeGL::Class_Version(), "TEveJetConeGL.h", 29,
                  typeid(::TEveJetConeGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveJetConeGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveJetConeGL) );
      instance.SetNew(&new_TEveJetConeGL);
      instance.SetNewArray(&newArray_TEveJetConeGL);
      instance.SetDelete(&delete_TEveJetConeGL);
      instance.SetDeleteArray(&deleteArray_TEveJetConeGL);
      instance.SetDestructor(&destruct_TEveJetConeGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveJetConeGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveJetConeGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveJetConeGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveJetConeProjectedGL(void *p = nullptr);
   static void *newArray_TEveJetConeProjectedGL(Long_t size, void *p);
   static void delete_TEveJetConeProjectedGL(void *p);
   static void deleteArray_TEveJetConeProjectedGL(void *p);
   static void destruct_TEveJetConeProjectedGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveJetConeProjectedGL*)
   {
      ::TEveJetConeProjectedGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveJetConeProjectedGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveJetConeProjectedGL", ::TEveJetConeProjectedGL::Class_Version(), "TEveJetConeGL.h", 60,
                  typeid(::TEveJetConeProjectedGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveJetConeProjectedGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveJetConeProjectedGL) );
      instance.SetNew(&new_TEveJetConeProjectedGL);
      instance.SetNewArray(&newArray_TEveJetConeProjectedGL);
      instance.SetDelete(&delete_TEveJetConeProjectedGL);
      instance.SetDeleteArray(&deleteArray_TEveJetConeProjectedGL);
      instance.SetDestructor(&destruct_TEveJetConeProjectedGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveJetConeProjectedGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveJetConeProjectedGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveJetConeProjectedGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveLegoEventHandler(void *p);
   static void deleteArray_TEveLegoEventHandler(void *p);
   static void destruct_TEveLegoEventHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveLegoEventHandler*)
   {
      ::TEveLegoEventHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveLegoEventHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveLegoEventHandler", ::TEveLegoEventHandler::Class_Version(), "TEveLegoEventHandler.h", 21,
                  typeid(::TEveLegoEventHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveLegoEventHandler::Dictionary, isa_proxy, 4,
                  sizeof(::TEveLegoEventHandler) );
      instance.SetDelete(&delete_TEveLegoEventHandler);
      instance.SetDeleteArray(&deleteArray_TEveLegoEventHandler);
      instance.SetDestructor(&destruct_TEveLegoEventHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveLegoEventHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveLegoEventHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveLegoEventHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveLineEditor(void *p = nullptr);
   static void *newArray_TEveLineEditor(Long_t size, void *p);
   static void delete_TEveLineEditor(void *p);
   static void deleteArray_TEveLineEditor(void *p);
   static void destruct_TEveLineEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveLineEditor*)
   {
      ::TEveLineEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveLineEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveLineEditor", ::TEveLineEditor::Class_Version(), "TEveLineEditor.h", 23,
                  typeid(::TEveLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveLineEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveLineEditor) );
      instance.SetNew(&new_TEveLineEditor);
      instance.SetNewArray(&newArray_TEveLineEditor);
      instance.SetDelete(&delete_TEveLineEditor);
      instance.SetDeleteArray(&deleteArray_TEveLineEditor);
      instance.SetDestructor(&destruct_TEveLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveLineEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveLineEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveLineEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveLineGL(void *p = nullptr);
   static void *newArray_TEveLineGL(Long_t size, void *p);
   static void delete_TEveLineGL(void *p);
   static void deleteArray_TEveLineGL(void *p);
   static void destruct_TEveLineGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveLineGL*)
   {
      ::TEveLineGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveLineGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveLineGL", ::TEveLineGL::Class_Version(), "TEveLineGL.h", 23,
                  typeid(::TEveLineGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveLineGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveLineGL) );
      instance.SetNew(&new_TEveLineGL);
      instance.SetNewArray(&newArray_TEveLineGL);
      instance.SetDelete(&delete_TEveLineGL);
      instance.SetDeleteArray(&deleteArray_TEveLineGL);
      instance.SetDestructor(&destruct_TEveLineGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveLineGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveLineGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveLineGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePointSet(void *p = nullptr);
   static void *newArray_TEvePointSet(Long_t size, void *p);
   static void delete_TEvePointSet(void *p);
   static void deleteArray_TEvePointSet(void *p);
   static void destruct_TEvePointSet(void *p);
   static Long64_t merge_TEvePointSet(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePointSet*)
   {
      ::TEvePointSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePointSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePointSet", ::TEvePointSet::Class_Version(), "TEvePointSet.h", 31,
                  typeid(::TEvePointSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePointSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePointSet) );
      instance.SetNew(&new_TEvePointSet);
      instance.SetNewArray(&newArray_TEvePointSet);
      instance.SetDelete(&delete_TEvePointSet);
      instance.SetDeleteArray(&deleteArray_TEvePointSet);
      instance.SetDestructor(&destruct_TEvePointSet);
      instance.SetMerge(&merge_TEvePointSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePointSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePointSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePointSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePointSetArray(void *p = nullptr);
   static void *newArray_TEvePointSetArray(Long_t size, void *p);
   static void delete_TEvePointSetArray(void *p);
   static void deleteArray_TEvePointSetArray(void *p);
   static void destruct_TEvePointSetArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePointSetArray*)
   {
      ::TEvePointSetArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePointSetArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePointSetArray", ::TEvePointSetArray::Class_Version(), "TEvePointSet.h", 107,
                  typeid(::TEvePointSetArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePointSetArray::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePointSetArray) );
      instance.SetNew(&new_TEvePointSetArray);
      instance.SetNewArray(&newArray_TEvePointSetArray);
      instance.SetDelete(&delete_TEvePointSetArray);
      instance.SetDeleteArray(&deleteArray_TEvePointSetArray);
      instance.SetDestructor(&destruct_TEvePointSetArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePointSetArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePointSetArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePointSetArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePointSetProjected(void *p = nullptr);
   static void *newArray_TEvePointSetProjected(Long_t size, void *p);
   static void delete_TEvePointSetProjected(void *p);
   static void deleteArray_TEvePointSetProjected(void *p);
   static void destruct_TEvePointSetProjected(void *p);
   static Long64_t merge_TEvePointSetProjected(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePointSetProjected*)
   {
      ::TEvePointSetProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePointSetProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePointSetProjected", ::TEvePointSetProjected::Class_Version(), "TEvePointSet.h", 170,
                  typeid(::TEvePointSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePointSetProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePointSetProjected) );
      instance.SetNew(&new_TEvePointSetProjected);
      instance.SetNewArray(&newArray_TEvePointSetProjected);
      instance.SetDelete(&delete_TEvePointSetProjected);
      instance.SetDeleteArray(&deleteArray_TEvePointSetProjected);
      instance.SetDestructor(&destruct_TEvePointSetProjected);
      instance.SetMerge(&merge_TEvePointSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePointSetProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePointSetProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePointSetProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveLine(void *p = nullptr);
   static void *newArray_TEveLine(Long_t size, void *p);
   static void delete_TEveLine(void *p);
   static void deleteArray_TEveLine(void *p);
   static void destruct_TEveLine(void *p);
   static Long64_t merge_TEveLine(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveLine*)
   {
      ::TEveLine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveLine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveLine", ::TEveLine::Class_Version(), "TEveLine.h", 24,
                  typeid(::TEveLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveLine::Dictionary, isa_proxy, 4,
                  sizeof(::TEveLine) );
      instance.SetNew(&new_TEveLine);
      instance.SetNewArray(&newArray_TEveLine);
      instance.SetDelete(&delete_TEveLine);
      instance.SetDeleteArray(&deleteArray_TEveLine);
      instance.SetDestructor(&destruct_TEveLine);
      instance.SetMerge(&merge_TEveLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveLine*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveLine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveLine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveLineProjected(void *p = nullptr);
   static void *newArray_TEveLineProjected(Long_t size, void *p);
   static void delete_TEveLineProjected(void *p);
   static void deleteArray_TEveLineProjected(void *p);
   static void destruct_TEveLineProjected(void *p);
   static Long64_t merge_TEveLineProjected(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveLineProjected*)
   {
      ::TEveLineProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveLineProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveLineProjected", ::TEveLineProjected::Class_Version(), "TEveLine.h", 83,
                  typeid(::TEveLineProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveLineProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveLineProjected) );
      instance.SetNew(&new_TEveLineProjected);
      instance.SetNewArray(&newArray_TEveLineProjected);
      instance.SetDelete(&delete_TEveLineProjected);
      instance.SetDeleteArray(&deleteArray_TEveLineProjected);
      instance.SetDestructor(&destruct_TEveLineProjected);
      instance.SetMerge(&merge_TEveLineProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveLineProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveLineProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveLineProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePlot3D(void *p = nullptr);
   static void *newArray_TEvePlot3D(Long_t size, void *p);
   static void delete_TEvePlot3D(void *p);
   static void deleteArray_TEvePlot3D(void *p);
   static void destruct_TEvePlot3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePlot3D*)
   {
      ::TEvePlot3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePlot3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePlot3D", ::TEvePlot3D::Class_Version(), "TEvePlot3D.h", 18,
                  typeid(::TEvePlot3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePlot3D::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePlot3D) );
      instance.SetNew(&new_TEvePlot3D);
      instance.SetNewArray(&newArray_TEvePlot3D);
      instance.SetDelete(&delete_TEvePlot3D);
      instance.SetDeleteArray(&deleteArray_TEvePlot3D);
      instance.SetDestructor(&destruct_TEvePlot3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePlot3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePlot3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePlot3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePlot3DGL(void *p = nullptr);
   static void *newArray_TEvePlot3DGL(Long_t size, void *p);
   static void delete_TEvePlot3DGL(void *p);
   static void deleteArray_TEvePlot3DGL(void *p);
   static void destruct_TEvePlot3DGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePlot3DGL*)
   {
      ::TEvePlot3DGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePlot3DGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePlot3DGL", ::TEvePlot3DGL::Class_Version(), "TEvePlot3DGL.h", 23,
                  typeid(::TEvePlot3DGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePlot3DGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePlot3DGL) );
      instance.SetNew(&new_TEvePlot3DGL);
      instance.SetNewArray(&newArray_TEvePlot3DGL);
      instance.SetDelete(&delete_TEvePlot3DGL);
      instance.SetDeleteArray(&deleteArray_TEvePlot3DGL);
      instance.SetDestructor(&destruct_TEvePlot3DGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePlot3DGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePlot3DGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePlot3DGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePointSetArrayEditor(void *p = nullptr);
   static void *newArray_TEvePointSetArrayEditor(Long_t size, void *p);
   static void delete_TEvePointSetArrayEditor(void *p);
   static void deleteArray_TEvePointSetArrayEditor(void *p);
   static void destruct_TEvePointSetArrayEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePointSetArrayEditor*)
   {
      ::TEvePointSetArrayEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePointSetArrayEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePointSetArrayEditor", ::TEvePointSetArrayEditor::Class_Version(), "TEvePointSetArrayEditor.h", 26,
                  typeid(::TEvePointSetArrayEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePointSetArrayEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePointSetArrayEditor) );
      instance.SetNew(&new_TEvePointSetArrayEditor);
      instance.SetNewArray(&newArray_TEvePointSetArrayEditor);
      instance.SetDelete(&delete_TEvePointSetArrayEditor);
      instance.SetDeleteArray(&deleteArray_TEvePointSetArrayEditor);
      instance.SetDestructor(&destruct_TEvePointSetArrayEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePointSetArrayEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePointSetArrayEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePointSetArrayEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePolygonSetProjected(void *p = nullptr);
   static void *newArray_TEvePolygonSetProjected(Long_t size, void *p);
   static void delete_TEvePolygonSetProjected(void *p);
   static void deleteArray_TEvePolygonSetProjected(void *p);
   static void destruct_TEvePolygonSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePolygonSetProjected*)
   {
      ::TEvePolygonSetProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePolygonSetProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePolygonSetProjected", ::TEvePolygonSetProjected::Class_Version(), "TEvePolygonSetProjected.h", 21,
                  typeid(::TEvePolygonSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePolygonSetProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePolygonSetProjected) );
      instance.SetNew(&new_TEvePolygonSetProjected);
      instance.SetNewArray(&newArray_TEvePolygonSetProjected);
      instance.SetDelete(&delete_TEvePolygonSetProjected);
      instance.SetDeleteArray(&deleteArray_TEvePolygonSetProjected);
      instance.SetDestructor(&destruct_TEvePolygonSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePolygonSetProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePolygonSetProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePolygonSetProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEvePolygonSetProjectedGL(void *p = nullptr);
   static void *newArray_TEvePolygonSetProjectedGL(Long_t size, void *p);
   static void delete_TEvePolygonSetProjectedGL(void *p);
   static void deleteArray_TEvePolygonSetProjectedGL(void *p);
   static void destruct_TEvePolygonSetProjectedGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEvePolygonSetProjectedGL*)
   {
      ::TEvePolygonSetProjectedGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEvePolygonSetProjectedGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEvePolygonSetProjectedGL", ::TEvePolygonSetProjectedGL::Class_Version(), "TEvePolygonSetProjectedGL.h", 19,
                  typeid(::TEvePolygonSetProjectedGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEvePolygonSetProjectedGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEvePolygonSetProjectedGL) );
      instance.SetNew(&new_TEvePolygonSetProjectedGL);
      instance.SetNewArray(&newArray_TEvePolygonSetProjectedGL);
      instance.SetDelete(&delete_TEvePolygonSetProjectedGL);
      instance.SetDeleteArray(&deleteArray_TEvePolygonSetProjectedGL);
      instance.SetDestructor(&destruct_TEvePolygonSetProjectedGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEvePolygonSetProjectedGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEvePolygonSetProjectedGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEvePolygonSetProjectedGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveQuadSet(void *p = nullptr);
   static void *newArray_TEveQuadSet(Long_t size, void *p);
   static void delete_TEveQuadSet(void *p);
   static void deleteArray_TEveQuadSet(void *p);
   static void destruct_TEveQuadSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveQuadSet*)
   {
      ::TEveQuadSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveQuadSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveQuadSet", ::TEveQuadSet::Class_Version(), "TEveQuadSet.h", 19,
                  typeid(::TEveQuadSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveQuadSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEveQuadSet) );
      instance.SetNew(&new_TEveQuadSet);
      instance.SetNewArray(&newArray_TEveQuadSet);
      instance.SetDelete(&delete_TEveQuadSet);
      instance.SetDeleteArray(&deleteArray_TEveQuadSet);
      instance.SetDestructor(&destruct_TEveQuadSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveQuadSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveQuadSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveQuadSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveQuadSetGL(void *p = nullptr);
   static void *newArray_TEveQuadSetGL(Long_t size, void *p);
   static void delete_TEveQuadSetGL(void *p);
   static void deleteArray_TEveQuadSetGL(void *p);
   static void destruct_TEveQuadSetGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveQuadSetGL*)
   {
      ::TEveQuadSetGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveQuadSetGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveQuadSetGL", ::TEveQuadSetGL::Class_Version(), "TEveQuadSetGL.h", 18,
                  typeid(::TEveQuadSetGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveQuadSetGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveQuadSetGL) );
      instance.SetNew(&new_TEveQuadSetGL);
      instance.SetNewArray(&newArray_TEveQuadSetGL);
      instance.SetDelete(&delete_TEveQuadSetGL);
      instance.SetDeleteArray(&deleteArray_TEveQuadSetGL);
      instance.SetDestructor(&destruct_TEveQuadSetGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveQuadSetGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveQuadSetGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveQuadSetGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveRGBAPaletteSubEditor(void *p);
   static void deleteArray_TEveRGBAPaletteSubEditor(void *p);
   static void destruct_TEveRGBAPaletteSubEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRGBAPaletteSubEditor*)
   {
      ::TEveRGBAPaletteSubEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRGBAPaletteSubEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRGBAPaletteSubEditor", ::TEveRGBAPaletteSubEditor::Class_Version(), "TEveRGBAPaletteEditor.h", 25,
                  typeid(::TEveRGBAPaletteSubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRGBAPaletteSubEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRGBAPaletteSubEditor) );
      instance.SetDelete(&delete_TEveRGBAPaletteSubEditor);
      instance.SetDeleteArray(&deleteArray_TEveRGBAPaletteSubEditor);
      instance.SetDestructor(&destruct_TEveRGBAPaletteSubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRGBAPaletteSubEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRGBAPaletteSubEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRGBAPaletteSubEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveRGBAPaletteEditor(void *p = nullptr);
   static void *newArray_TEveRGBAPaletteEditor(Long_t size, void *p);
   static void delete_TEveRGBAPaletteEditor(void *p);
   static void deleteArray_TEveRGBAPaletteEditor(void *p);
   static void destruct_TEveRGBAPaletteEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRGBAPaletteEditor*)
   {
      ::TEveRGBAPaletteEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRGBAPaletteEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRGBAPaletteEditor", ::TEveRGBAPaletteEditor::Class_Version(), "TEveRGBAPaletteEditor.h", 74,
                  typeid(::TEveRGBAPaletteEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRGBAPaletteEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRGBAPaletteEditor) );
      instance.SetNew(&new_TEveRGBAPaletteEditor);
      instance.SetNewArray(&newArray_TEveRGBAPaletteEditor);
      instance.SetDelete(&delete_TEveRGBAPaletteEditor);
      instance.SetDeleteArray(&deleteArray_TEveRGBAPaletteEditor);
      instance.SetDestructor(&destruct_TEveRGBAPaletteEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRGBAPaletteEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRGBAPaletteEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRGBAPaletteEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveRGBAPaletteOverlay(void *p);
   static void deleteArray_TEveRGBAPaletteOverlay(void *p);
   static void destruct_TEveRGBAPaletteOverlay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveRGBAPaletteOverlay*)
   {
      ::TEveRGBAPaletteOverlay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveRGBAPaletteOverlay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveRGBAPaletteOverlay", ::TEveRGBAPaletteOverlay::Class_Version(), "TEveRGBAPaletteOverlay.h", 21,
                  typeid(::TEveRGBAPaletteOverlay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveRGBAPaletteOverlay::Dictionary, isa_proxy, 4,
                  sizeof(::TEveRGBAPaletteOverlay) );
      instance.SetDelete(&delete_TEveRGBAPaletteOverlay);
      instance.SetDeleteArray(&deleteArray_TEveRGBAPaletteOverlay);
      instance.SetDestructor(&destruct_TEveRGBAPaletteOverlay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveRGBAPaletteOverlay*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveRGBAPaletteOverlay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveRGBAPaletteOverlay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveStraightLineSet(void *p = nullptr);
   static void *newArray_TEveStraightLineSet(Long_t size, void *p);
   static void delete_TEveStraightLineSet(void *p);
   static void deleteArray_TEveStraightLineSet(void *p);
   static void destruct_TEveStraightLineSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveStraightLineSet*)
   {
      ::TEveStraightLineSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveStraightLineSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveStraightLineSet", ::TEveStraightLineSet::Class_Version(), "TEveStraightLineSet.h", 31,
                  typeid(::TEveStraightLineSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveStraightLineSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEveStraightLineSet) );
      instance.SetNew(&new_TEveStraightLineSet);
      instance.SetNewArray(&newArray_TEveStraightLineSet);
      instance.SetDelete(&delete_TEveStraightLineSet);
      instance.SetDeleteArray(&deleteArray_TEveStraightLineSet);
      instance.SetDestructor(&destruct_TEveStraightLineSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveStraightLineSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveStraightLineSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveStraightLineSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveStraightLineSetProjected(void *p = nullptr);
   static void *newArray_TEveStraightLineSetProjected(Long_t size, void *p);
   static void delete_TEveStraightLineSetProjected(void *p);
   static void deleteArray_TEveStraightLineSetProjected(void *p);
   static void destruct_TEveStraightLineSetProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveStraightLineSetProjected*)
   {
      ::TEveStraightLineSetProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveStraightLineSetProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveStraightLineSetProjected", ::TEveStraightLineSetProjected::Class_Version(), "TEveStraightLineSet.h", 126,
                  typeid(::TEveStraightLineSetProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveStraightLineSetProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveStraightLineSetProjected) );
      instance.SetNew(&new_TEveStraightLineSetProjected);
      instance.SetNewArray(&newArray_TEveStraightLineSetProjected);
      instance.SetDelete(&delete_TEveStraightLineSetProjected);
      instance.SetDeleteArray(&deleteArray_TEveStraightLineSetProjected);
      instance.SetDestructor(&destruct_TEveStraightLineSetProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveStraightLineSetProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveStraightLineSetProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveStraightLineSetProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveScalableStraightLineSet(void *p = nullptr);
   static void *newArray_TEveScalableStraightLineSet(Long_t size, void *p);
   static void delete_TEveScalableStraightLineSet(void *p);
   static void deleteArray_TEveScalableStraightLineSet(void *p);
   static void destruct_TEveScalableStraightLineSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveScalableStraightLineSet*)
   {
      ::TEveScalableStraightLineSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveScalableStraightLineSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveScalableStraightLineSet", ::TEveScalableStraightLineSet::Class_Version(), "TEveScalableStraightLineSet.h", 17,
                  typeid(::TEveScalableStraightLineSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveScalableStraightLineSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEveScalableStraightLineSet) );
      instance.SetNew(&new_TEveScalableStraightLineSet);
      instance.SetNewArray(&newArray_TEveScalableStraightLineSet);
      instance.SetDelete(&delete_TEveScalableStraightLineSet);
      instance.SetDeleteArray(&deleteArray_TEveScalableStraightLineSet);
      instance.SetDestructor(&destruct_TEveScalableStraightLineSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveScalableStraightLineSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveScalableStraightLineSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveScalableStraightLineSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveShapeEditor(void *p = nullptr);
   static void *newArray_TEveShapeEditor(Long_t size, void *p);
   static void delete_TEveShapeEditor(void *p);
   static void deleteArray_TEveShapeEditor(void *p);
   static void destruct_TEveShapeEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveShapeEditor*)
   {
      ::TEveShapeEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveShapeEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveShapeEditor", ::TEveShapeEditor::Class_Version(), "TEveShapeEditor.h", 24,
                  typeid(::TEveShapeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveShapeEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveShapeEditor) );
      instance.SetNew(&new_TEveShapeEditor);
      instance.SetNewArray(&newArray_TEveShapeEditor);
      instance.SetDelete(&delete_TEveShapeEditor);
      instance.SetDeleteArray(&deleteArray_TEveShapeEditor);
      instance.SetDestructor(&destruct_TEveShapeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveShapeEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveShapeEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveShapeEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveStraightLineSetEditor(void *p = nullptr);
   static void *newArray_TEveStraightLineSetEditor(Long_t size, void *p);
   static void delete_TEveStraightLineSetEditor(void *p);
   static void deleteArray_TEveStraightLineSetEditor(void *p);
   static void destruct_TEveStraightLineSetEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveStraightLineSetEditor*)
   {
      ::TEveStraightLineSetEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveStraightLineSetEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveStraightLineSetEditor", ::TEveStraightLineSetEditor::Class_Version(), "TEveStraightLineSetEditor.h", 23,
                  typeid(::TEveStraightLineSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveStraightLineSetEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveStraightLineSetEditor) );
      instance.SetNew(&new_TEveStraightLineSetEditor);
      instance.SetNewArray(&newArray_TEveStraightLineSetEditor);
      instance.SetDelete(&delete_TEveStraightLineSetEditor);
      instance.SetDeleteArray(&deleteArray_TEveStraightLineSetEditor);
      instance.SetDestructor(&destruct_TEveStraightLineSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveStraightLineSetEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveStraightLineSetEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveStraightLineSetEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveStraightLineSetGL(void *p = nullptr);
   static void *newArray_TEveStraightLineSetGL(Long_t size, void *p);
   static void delete_TEveStraightLineSetGL(void *p);
   static void deleteArray_TEveStraightLineSetGL(void *p);
   static void destruct_TEveStraightLineSetGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveStraightLineSetGL*)
   {
      ::TEveStraightLineSetGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveStraightLineSetGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveStraightLineSetGL", ::TEveStraightLineSetGL::Class_Version(), "TEveStraightLineSetGL.h", 22,
                  typeid(::TEveStraightLineSetGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveStraightLineSetGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveStraightLineSetGL) );
      instance.SetNew(&new_TEveStraightLineSetGL);
      instance.SetNewArray(&newArray_TEveStraightLineSetGL);
      instance.SetDelete(&delete_TEveStraightLineSetGL);
      instance.SetDeleteArray(&deleteArray_TEveStraightLineSetGL);
      instance.SetDestructor(&destruct_TEveStraightLineSetGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveStraightLineSetGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveStraightLineSetGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveStraightLineSetGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveText(void *p = nullptr);
   static void *newArray_TEveText(Long_t size, void *p);
   static void delete_TEveText(void *p);
   static void deleteArray_TEveText(void *p);
   static void destruct_TEveText(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveText*)
   {
      ::TEveText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveText >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveText", ::TEveText::Class_Version(), "TEveText.h", 21,
                  typeid(::TEveText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveText::Dictionary, isa_proxy, 4,
                  sizeof(::TEveText) );
      instance.SetNew(&new_TEveText);
      instance.SetNewArray(&newArray_TEveText);
      instance.SetDelete(&delete_TEveText);
      instance.SetDeleteArray(&deleteArray_TEveText);
      instance.SetDestructor(&destruct_TEveText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveText*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTextEditor(void *p = nullptr);
   static void *newArray_TEveTextEditor(Long_t size, void *p);
   static void delete_TEveTextEditor(void *p);
   static void deleteArray_TEveTextEditor(void *p);
   static void destruct_TEveTextEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTextEditor*)
   {
      ::TEveTextEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTextEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTextEditor", ::TEveTextEditor::Class_Version(), "TEveTextEditor.h", 24,
                  typeid(::TEveTextEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTextEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTextEditor) );
      instance.SetNew(&new_TEveTextEditor);
      instance.SetNewArray(&newArray_TEveTextEditor);
      instance.SetDelete(&delete_TEveTextEditor);
      instance.SetDeleteArray(&deleteArray_TEveTextEditor);
      instance.SetDestructor(&destruct_TEveTextEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTextEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTextEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTextEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTextGL(void *p = nullptr);
   static void *newArray_TEveTextGL(Long_t size, void *p);
   static void delete_TEveTextGL(void *p);
   static void deleteArray_TEveTextGL(void *p);
   static void destruct_TEveTextGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTextGL*)
   {
      ::TEveTextGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTextGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTextGL", ::TEveTextGL::Class_Version(), "TEveTextGL.h", 20,
                  typeid(::TEveTextGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTextGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTextGL) );
      instance.SetNew(&new_TEveTextGL);
      instance.SetNewArray(&newArray_TEveTextGL);
      instance.SetDelete(&delete_TEveTextGL);
      instance.SetDeleteArray(&deleteArray_TEveTextGL);
      instance.SetDestructor(&destruct_TEveTextGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTextGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTextGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTextGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrack(void *p = nullptr);
   static void *newArray_TEveTrack(Long_t size, void *p);
   static void delete_TEveTrack(void *p);
   static void deleteArray_TEveTrack(void *p);
   static void destruct_TEveTrack(void *p);
   static Long64_t merge_TEveTrack(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrack*)
   {
      ::TEveTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrack", ::TEveTrack::Class_Version(), "TEveTrack.h", 32,
                  typeid(::TEveTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrack) );
      instance.SetNew(&new_TEveTrack);
      instance.SetNewArray(&newArray_TEveTrack);
      instance.SetDelete(&delete_TEveTrack);
      instance.SetDeleteArray(&deleteArray_TEveTrack);
      instance.SetDestructor(&destruct_TEveTrack);
      instance.SetMerge(&merge_TEveTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackList(void *p = nullptr);
   static void *newArray_TEveTrackList(Long_t size, void *p);
   static void delete_TEveTrackList(void *p);
   static void deleteArray_TEveTrackList(void *p);
   static void destruct_TEveTrackList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackList*)
   {
      ::TEveTrackList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackList", ::TEveTrackList::Class_Version(), "TEveTrack.h", 137,
                  typeid(::TEveTrackList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackList::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackList) );
      instance.SetNew(&new_TEveTrackList);
      instance.SetNewArray(&newArray_TEveTrackList);
      instance.SetDelete(&delete_TEveTrackList);
      instance.SetDeleteArray(&deleteArray_TEveTrackList);
      instance.SetDestructor(&destruct_TEveTrackList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackList*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackEditor(void *p = nullptr);
   static void *newArray_TEveTrackEditor(Long_t size, void *p);
   static void delete_TEveTrackEditor(void *p);
   static void deleteArray_TEveTrackEditor(void *p);
   static void destruct_TEveTrackEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackEditor*)
   {
      ::TEveTrackEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackEditor", ::TEveTrackEditor::Class_Version(), "TEveTrackEditor.h", 33,
                  typeid(::TEveTrackEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackEditor) );
      instance.SetNew(&new_TEveTrackEditor);
      instance.SetNewArray(&newArray_TEveTrackEditor);
      instance.SetDelete(&delete_TEveTrackEditor);
      instance.SetDeleteArray(&deleteArray_TEveTrackEditor);
      instance.SetDestructor(&destruct_TEveTrackEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackListEditor(void *p = nullptr);
   static void *newArray_TEveTrackListEditor(Long_t size, void *p);
   static void delete_TEveTrackListEditor(void *p);
   static void deleteArray_TEveTrackListEditor(void *p);
   static void destruct_TEveTrackListEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackListEditor*)
   {
      ::TEveTrackListEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackListEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackListEditor", ::TEveTrackListEditor::Class_Version(), "TEveTrackEditor.h", 58,
                  typeid(::TEveTrackListEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackListEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackListEditor) );
      instance.SetNew(&new_TEveTrackListEditor);
      instance.SetNewArray(&newArray_TEveTrackListEditor);
      instance.SetDelete(&delete_TEveTrackListEditor);
      instance.SetDeleteArray(&deleteArray_TEveTrackListEditor);
      instance.SetDestructor(&destruct_TEveTrackListEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackListEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackListEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackListEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackGL(void *p = nullptr);
   static void *newArray_TEveTrackGL(Long_t size, void *p);
   static void delete_TEveTrackGL(void *p);
   static void deleteArray_TEveTrackGL(void *p);
   static void destruct_TEveTrackGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackGL*)
   {
      ::TEveTrackGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackGL", ::TEveTrackGL::Class_Version(), "TEveTrackGL.h", 22,
                  typeid(::TEveTrackGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackGL) );
      instance.SetNew(&new_TEveTrackGL);
      instance.SetNewArray(&newArray_TEveTrackGL);
      instance.SetDelete(&delete_TEveTrackGL);
      instance.SetDeleteArray(&deleteArray_TEveTrackGL);
      instance.SetDestructor(&destruct_TEveTrackGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackProjected(void *p = nullptr);
   static void *newArray_TEveTrackProjected(Long_t size, void *p);
   static void delete_TEveTrackProjected(void *p);
   static void deleteArray_TEveTrackProjected(void *p);
   static void destruct_TEveTrackProjected(void *p);
   static Long64_t merge_TEveTrackProjected(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackProjected*)
   {
      ::TEveTrackProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackProjected", ::TEveTrackProjected::Class_Version(), "TEveTrackProjected.h", 19,
                  typeid(::TEveTrackProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackProjected) );
      instance.SetNew(&new_TEveTrackProjected);
      instance.SetNewArray(&newArray_TEveTrackProjected);
      instance.SetDelete(&delete_TEveTrackProjected);
      instance.SetDeleteArray(&deleteArray_TEveTrackProjected);
      instance.SetDestructor(&destruct_TEveTrackProjected);
      instance.SetMerge(&merge_TEveTrackProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackListProjected(void *p = nullptr);
   static void *newArray_TEveTrackListProjected(Long_t size, void *p);
   static void delete_TEveTrackListProjected(void *p);
   static void deleteArray_TEveTrackListProjected(void *p);
   static void destruct_TEveTrackListProjected(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackListProjected*)
   {
      ::TEveTrackListProjected *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackListProjected >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackListProjected", ::TEveTrackListProjected::Class_Version(), "TEveTrackProjected.h", 60,
                  typeid(::TEveTrackListProjected), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackListProjected::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackListProjected) );
      instance.SetNew(&new_TEveTrackListProjected);
      instance.SetNewArray(&newArray_TEveTrackListProjected);
      instance.SetDelete(&delete_TEveTrackListProjected);
      instance.SetDeleteArray(&deleteArray_TEveTrackListProjected);
      instance.SetDestructor(&destruct_TEveTrackListProjected);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackListProjected*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackListProjected*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackListProjected*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackProjectedGL(void *p = nullptr);
   static void *newArray_TEveTrackProjectedGL(Long_t size, void *p);
   static void delete_TEveTrackProjectedGL(void *p);
   static void deleteArray_TEveTrackProjectedGL(void *p);
   static void destruct_TEveTrackProjectedGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackProjectedGL*)
   {
      ::TEveTrackProjectedGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackProjectedGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackProjectedGL", ::TEveTrackProjectedGL::Class_Version(), "TEveTrackProjectedGL.h", 22,
                  typeid(::TEveTrackProjectedGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackProjectedGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackProjectedGL) );
      instance.SetNew(&new_TEveTrackProjectedGL);
      instance.SetNewArray(&newArray_TEveTrackProjectedGL);
      instance.SetDelete(&delete_TEveTrackProjectedGL);
      instance.SetDeleteArray(&deleteArray_TEveTrackProjectedGL);
      instance.SetDestructor(&destruct_TEveTrackProjectedGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackProjectedGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackProjectedGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackProjectedGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveMagField(void *p = nullptr);
   static void *newArray_TEveMagField(Long_t size, void *p);
   static void delete_TEveMagField(void *p);
   static void deleteArray_TEveMagField(void *p);
   static void destruct_TEveMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveMagField*)
   {
      ::TEveMagField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveMagField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveMagField", ::TEveMagField::Class_Version(), "TEveTrackPropagator.h", 30,
                  typeid(::TEveMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveMagField::Dictionary, isa_proxy, 4,
                  sizeof(::TEveMagField) );
      instance.SetNew(&new_TEveMagField);
      instance.SetNewArray(&newArray_TEveMagField);
      instance.SetDelete(&delete_TEveMagField);
      instance.SetDeleteArray(&deleteArray_TEveMagField);
      instance.SetDestructor(&destruct_TEveMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveMagField*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveMagField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveMagField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveMagFieldConst(void *p);
   static void deleteArray_TEveMagFieldConst(void *p);
   static void destruct_TEveMagFieldConst(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveMagFieldConst*)
   {
      ::TEveMagFieldConst *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveMagFieldConst >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveMagFieldConst", ::TEveMagFieldConst::Class_Version(), "TEveTrackPropagator.h", 70,
                  typeid(::TEveMagFieldConst), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveMagFieldConst::Dictionary, isa_proxy, 4,
                  sizeof(::TEveMagFieldConst) );
      instance.SetDelete(&delete_TEveMagFieldConst);
      instance.SetDeleteArray(&deleteArray_TEveMagFieldConst);
      instance.SetDestructor(&destruct_TEveMagFieldConst);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveMagFieldConst*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveMagFieldConst*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveMagFieldConst*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveMagFieldDuo(void *p);
   static void deleteArray_TEveMagFieldDuo(void *p);
   static void destruct_TEveMagFieldDuo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveMagFieldDuo*)
   {
      ::TEveMagFieldDuo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveMagFieldDuo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveMagFieldDuo", ::TEveMagFieldDuo::Class_Version(), "TEveTrackPropagator.h", 92,
                  typeid(::TEveMagFieldDuo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveMagFieldDuo::Dictionary, isa_proxy, 4,
                  sizeof(::TEveMagFieldDuo) );
      instance.SetDelete(&delete_TEveMagFieldDuo);
      instance.SetDeleteArray(&deleteArray_TEveMagFieldDuo);
      instance.SetDestructor(&destruct_TEveMagFieldDuo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveMagFieldDuo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveMagFieldDuo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveMagFieldDuo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackPropagator(void *p = nullptr);
   static void *newArray_TEveTrackPropagator(Long_t size, void *p);
   static void delete_TEveTrackPropagator(void *p);
   static void deleteArray_TEveTrackPropagator(void *p);
   static void destruct_TEveTrackPropagator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackPropagator*)
   {
      ::TEveTrackPropagator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackPropagator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackPropagator", ::TEveTrackPropagator::Class_Version(), "TEveTrackPropagator.h", 121,
                  typeid(::TEveTrackPropagator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackPropagator::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackPropagator) );
      instance.SetNew(&new_TEveTrackPropagator);
      instance.SetNewArray(&newArray_TEveTrackPropagator);
      instance.SetDelete(&delete_TEveTrackPropagator);
      instance.SetDeleteArray(&deleteArray_TEveTrackPropagator);
      instance.SetDestructor(&destruct_TEveTrackPropagator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackPropagator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackPropagator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackPropagator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveTrackPropagatorSubEditor(void *p);
   static void deleteArray_TEveTrackPropagatorSubEditor(void *p);
   static void destruct_TEveTrackPropagatorSubEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackPropagatorSubEditor*)
   {
      ::TEveTrackPropagatorSubEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackPropagatorSubEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackPropagatorSubEditor", ::TEveTrackPropagatorSubEditor::Class_Version(), "TEveTrackPropagatorEditor.h", 33,
                  typeid(::TEveTrackPropagatorSubEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackPropagatorSubEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackPropagatorSubEditor) );
      instance.SetDelete(&delete_TEveTrackPropagatorSubEditor);
      instance.SetDeleteArray(&deleteArray_TEveTrackPropagatorSubEditor);
      instance.SetDestructor(&destruct_TEveTrackPropagatorSubEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackPropagatorSubEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackPropagatorSubEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackPropagatorSubEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTrackPropagatorEditor(void *p = nullptr);
   static void *newArray_TEveTrackPropagatorEditor(Long_t size, void *p);
   static void delete_TEveTrackPropagatorEditor(void *p);
   static void deleteArray_TEveTrackPropagatorEditor(void *p);
   static void destruct_TEveTrackPropagatorEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTrackPropagatorEditor*)
   {
      ::TEveTrackPropagatorEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTrackPropagatorEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTrackPropagatorEditor", ::TEveTrackPropagatorEditor::Class_Version(), "TEveTrackPropagatorEditor.h", 103,
                  typeid(::TEveTrackPropagatorEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTrackPropagatorEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTrackPropagatorEditor) );
      instance.SetNew(&new_TEveTrackPropagatorEditor);
      instance.SetNewArray(&newArray_TEveTrackPropagatorEditor);
      instance.SetDelete(&delete_TEveTrackPropagatorEditor);
      instance.SetDeleteArray(&deleteArray_TEveTrackPropagatorEditor);
      instance.SetDestructor(&destruct_TEveTrackPropagatorEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTrackPropagatorEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTrackPropagatorEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTrackPropagatorEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TEveTriangleSet(void *p);
   static void deleteArray_TEveTriangleSet(void *p);
   static void destruct_TEveTriangleSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTriangleSet*)
   {
      ::TEveTriangleSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTriangleSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTriangleSet", ::TEveTriangleSet::Class_Version(), "TEveTriangleSet.h", 23,
                  typeid(::TEveTriangleSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTriangleSet::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTriangleSet) );
      instance.SetDelete(&delete_TEveTriangleSet);
      instance.SetDeleteArray(&deleteArray_TEveTriangleSet);
      instance.SetDestructor(&destruct_TEveTriangleSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTriangleSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTriangleSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTriangleSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTriangleSetEditor(void *p = nullptr);
   static void *newArray_TEveTriangleSetEditor(Long_t size, void *p);
   static void delete_TEveTriangleSetEditor(void *p);
   static void deleteArray_TEveTriangleSetEditor(void *p);
   static void destruct_TEveTriangleSetEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTriangleSetEditor*)
   {
      ::TEveTriangleSetEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTriangleSetEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTriangleSetEditor", ::TEveTriangleSetEditor::Class_Version(), "TEveTriangleSetEditor.h", 21,
                  typeid(::TEveTriangleSetEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTriangleSetEditor::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTriangleSetEditor) );
      instance.SetNew(&new_TEveTriangleSetEditor);
      instance.SetNewArray(&newArray_TEveTriangleSetEditor);
      instance.SetDelete(&delete_TEveTriangleSetEditor);
      instance.SetDeleteArray(&deleteArray_TEveTriangleSetEditor);
      instance.SetDestructor(&destruct_TEveTriangleSetEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTriangleSetEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTriangleSetEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTriangleSetEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TEveTriangleSetGL(void *p = nullptr);
   static void *newArray_TEveTriangleSetGL(Long_t size, void *p);
   static void delete_TEveTriangleSetGL(void *p);
   static void deleteArray_TEveTriangleSetGL(void *p);
   static void destruct_TEveTriangleSetGL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEveTriangleSetGL*)
   {
      ::TEveTriangleSetGL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TEveTriangleSetGL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TEveTriangleSetGL", ::TEveTriangleSetGL::Class_Version(), "TEveTriangleSetGL.h", 21,
                  typeid(::TEveTriangleSetGL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TEveTriangleSetGL::Dictionary, isa_proxy, 4,
                  sizeof(::TEveTriangleSetGL) );
      instance.SetNew(&new_TEveTriangleSetGL);
      instance.SetNewArray(&newArray_TEveTriangleSetGL);
      instance.SetDelete(&delete_TEveTriangleSetGL);
      instance.SetDeleteArray(&deleteArray_TEveTriangleSetGL);
      instance.SetDestructor(&destruct_TEveTriangleSetGL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEveTriangleSetGL*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEveTriangleSetGL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEveTriangleSetGL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TEveUtil::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveUtil::Class_Name()
{
   return "TEveUtil";
}

//______________________________________________________________________________
const char *TEveUtil::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveUtil*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveUtil::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveUtil*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveUtil::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveUtil*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveUtil::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveUtil*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveException::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveException::Class_Name()
{
   return "TEveException";
}

//______________________________________________________________________________
const char *TEveException::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveException*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveException::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveException*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveException::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveException*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveException::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveException*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePadHolder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePadHolder::Class_Name()
{
   return "TEvePadHolder";
}

//______________________________________________________________________________
const char *TEvePadHolder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePadHolder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePadHolder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePadHolder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePadHolder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePadHolder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePadHolder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePadHolder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoManagerHolder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoManagerHolder::Class_Name()
{
   return "TEveGeoManagerHolder";
}

//______________________________________________________________________________
const char *TEveGeoManagerHolder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoManagerHolder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoManagerHolder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoManagerHolder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoManagerHolder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoManagerHolder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoManagerHolder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoManagerHolder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRefCnt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRefCnt::Class_Name()
{
   return "TEveRefCnt";
}

//______________________________________________________________________________
const char *TEveRefCnt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRefCnt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRefCnt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRefCnt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRefCnt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRefCnt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRefCnt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRefCnt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRefBackPtr::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRefBackPtr::Class_Name()
{
   return "TEveRefBackPtr";
}

//______________________________________________________________________________
const char *TEveRefBackPtr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRefBackPtr*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRefBackPtr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRefBackPtr*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRefBackPtr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRefBackPtr*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRefBackPtr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRefBackPtr*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjectable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjectable::Class_Name()
{
   return "TEveProjectable";
}

//______________________________________________________________________________
const char *TEveProjectable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjectable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjectable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjectable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjected::Class_Name()
{
   return "TEveProjected";
}

//______________________________________________________________________________
const char *TEveProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveElement::Class_Name()
{
   return "TEveElement";
}

//______________________________________________________________________________
const char *TEveElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveElement::TEveListTreeInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveElement::TEveListTreeInfo::Class_Name()
{
   return "TEveElement::TEveListTreeInfo";
}

//______________________________________________________________________________
const char *TEveElement::TEveListTreeInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElement::TEveListTreeInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveElement::TEveListTreeInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElement::TEveListTreeInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveElement::TEveListTreeInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElement::TEveListTreeInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveElement::TEveListTreeInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElement::TEveListTreeInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveElementList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveElementList::Class_Name()
{
   return "TEveElementList";
}

//______________________________________________________________________________
const char *TEveElementList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElementList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveElementList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElementList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveElementList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElementList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveElementList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElementList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveElementListProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveElementListProjected::Class_Name()
{
   return "TEveElementListProjected";
}

//______________________________________________________________________________
const char *TEveElementListProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElementListProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveElementListProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElementListProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveElementListProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElementListProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveElementListProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElementListProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveListTreeItem::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveListTreeItem::Class_Name()
{
   return "TEveListTreeItem";
}

//______________________________________________________________________________
const char *TEveListTreeItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveListTreeItem*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveListTreeItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveListTreeItem*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveListTreeItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveListTreeItem*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveListTreeItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveListTreeItem*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGListTreeEditorFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGListTreeEditorFrame::Class_Name()
{
   return "TEveGListTreeEditorFrame";
}

//______________________________________________________________________________
const char *TEveGListTreeEditorFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGListTreeEditorFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGListTreeEditorFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGListTreeEditorFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGListTreeEditorFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGListTreeEditorFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGListTreeEditorFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGListTreeEditorFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBrowser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBrowser::Class_Name()
{
   return "TEveBrowser";
}

//______________________________________________________________________________
const char *TEveBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBrowser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBrowser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBrowser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBrowser*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveChunkManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveChunkManager::Class_Name()
{
   return "TEveChunkManager";
}

//______________________________________________________________________________
const char *TEveChunkManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveChunkManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveChunkManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveChunkManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveChunkManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveChunkManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveChunkManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveChunkManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCompound::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCompound::Class_Name()
{
   return "TEveCompound";
}

//______________________________________________________________________________
const char *TEveCompound::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompound*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCompound::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompound*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCompound::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompound*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCompound::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompound*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCompoundProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCompoundProjected::Class_Name()
{
   return "TEveCompoundProjected";
}

//______________________________________________________________________________
const char *TEveCompoundProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompoundProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCompoundProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompoundProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCompoundProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompoundProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCompoundProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompoundProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveElementEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveElementEditor::Class_Name()
{
   return "TEveElementEditor";
}

//______________________________________________________________________________
const char *TEveElementEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElementEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveElementEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveElementEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveElementEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElementEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveElementEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveElementEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveEventManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveEventManager::Class_Name()
{
   return "TEveEventManager";
}

//______________________________________________________________________________
const char *TEveEventManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveEventManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveEventManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveEventManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveEventManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveEventManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveEventManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveEventManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGedEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGedEditor::Class_Name()
{
   return "TEveGedEditor";
}

//______________________________________________________________________________
const char *TEveGedEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGedEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGedEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGedEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGedEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGedEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGedEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGedEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGedNameFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGedNameFrame::Class_Name()
{
   return "TEveGedNameFrame";
}

//______________________________________________________________________________
const char *TEveGedNameFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGedNameFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGedNameFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGedNameFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGedNameTextButton::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGedNameTextButton::Class_Name()
{
   return "TEveGedNameTextButton";
}

//______________________________________________________________________________
const char *TEveGedNameTextButton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameTextButton*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGedNameTextButton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameTextButton*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGedNameTextButton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameTextButton*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGedNameTextButton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGedNameTextButton*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGValuatorBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGValuatorBase::Class_Name()
{
   return "TEveGValuatorBase";
}

//______________________________________________________________________________
const char *TEveGValuatorBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuatorBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGValuatorBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuatorBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGValuatorBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuatorBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGValuatorBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuatorBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGValuator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGValuator::Class_Name()
{
   return "TEveGValuator";
}

//______________________________________________________________________________
const char *TEveGValuator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGValuator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGValuator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGValuator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGValuator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGDoubleValuator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGDoubleValuator::Class_Name()
{
   return "TEveGDoubleValuator";
}

//______________________________________________________________________________
const char *TEveGDoubleValuator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGDoubleValuator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGDoubleValuator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGDoubleValuator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGDoubleValuator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGDoubleValuator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGDoubleValuator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGDoubleValuator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGTriVecValuator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGTriVecValuator::Class_Name()
{
   return "TEveGTriVecValuator";
}

//______________________________________________________________________________
const char *TEveGTriVecValuator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGTriVecValuator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGTriVecValuator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGTriVecValuator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGTriVecValuator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGTriVecValuator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGTriVecValuator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGTriVecValuator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveMacro::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveMacro::Class_Name()
{
   return "TEveMacro";
}

//______________________________________________________________________________
const char *TEveMacro::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMacro*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveMacro::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMacro*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveMacro::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMacro*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveMacro::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMacro*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveManager::Class_Name()
{
   return "TEveManager";
}

//______________________________________________________________________________
const char *TEveManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveManager::TRedrawDisabler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveManager::TRedrawDisabler::Class_Name()
{
   return "TEveManager::TRedrawDisabler";
}

//______________________________________________________________________________
const char *TEveManager::TRedrawDisabler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TRedrawDisabler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveManager::TRedrawDisabler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TRedrawDisabler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveManager::TRedrawDisabler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TRedrawDisabler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveManager::TRedrawDisabler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TRedrawDisabler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveManager::TExceptionHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveManager::TExceptionHandler::Class_Name()
{
   return "TEveManager::TExceptionHandler";
}

//______________________________________________________________________________
const char *TEveManager::TExceptionHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TExceptionHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveManager::TExceptionHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TExceptionHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveManager::TExceptionHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TExceptionHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveManager::TExceptionHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveManager::TExceptionHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePad::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePad::Class_Name()
{
   return "TEvePad";
}

//______________________________________________________________________________
const char *TEvePad::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePad*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePad::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePad*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePad::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePad*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePad::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePad*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveParamList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveParamList::Class_Name()
{
   return "TEveParamList";
}

//______________________________________________________________________________
const char *TEveParamList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveParamList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveParamList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveParamList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveParamList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveParamList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveParamList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveParamList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveParamListEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveParamListEditor::Class_Name()
{
   return "TEveParamListEditor";
}

//______________________________________________________________________________
const char *TEveParamListEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveParamListEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveParamListEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveParamListEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveParamListEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveParamListEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveParamListEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveParamListEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveVectorT<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveVectorT<float>::Class_Name()
{
   return "TEveVectorT<float>";
}

//______________________________________________________________________________
template <> const char *TEveVectorT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveVectorT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveVectorT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveVectorT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveVectorT<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveVectorT<double>::Class_Name()
{
   return "TEveVectorT<double>";
}

//______________________________________________________________________________
template <> const char *TEveVectorT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveVectorT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveVectorT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveVectorT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVectorT<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveVector4T<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveVector4T<float>::Class_Name()
{
   return "TEveVector4T<float>";
}

//______________________________________________________________________________
template <> const char *TEveVector4T<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveVector4T<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveVector4T<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveVector4T<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveVector4T<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveVector4T<double>::Class_Name()
{
   return "TEveVector4T<double>";
}

//______________________________________________________________________________
template <> const char *TEveVector4T<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveVector4T<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveVector4T<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveVector4T<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector4T<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveVector2T<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveVector2T<float>::Class_Name()
{
   return "TEveVector2T<float>";
}

//______________________________________________________________________________
template <> const char *TEveVector2T<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveVector2T<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveVector2T<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveVector2T<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveVector2T<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveVector2T<double>::Class_Name()
{
   return "TEveVector2T<double>";
}

//______________________________________________________________________________
template <> const char *TEveVector2T<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveVector2T<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveVector2T<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveVector2T<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVector2T<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEvePathMarkT<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEvePathMarkT<float>::Class_Name()
{
   return "TEvePathMarkT<float>";
}

//______________________________________________________________________________
template <> const char *TEvePathMarkT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEvePathMarkT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEvePathMarkT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEvePathMarkT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEvePathMarkT<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEvePathMarkT<double>::Class_Name()
{
   return "TEvePathMarkT<double>";
}

//______________________________________________________________________________
template <> const char *TEvePathMarkT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEvePathMarkT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEvePathMarkT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEvePathMarkT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePathMarkT<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjectionAxes::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjectionAxes::Class_Name()
{
   return "TEveProjectionAxes";
}

//______________________________________________________________________________
const char *TEveProjectionAxes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxes*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjectionAxes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxes*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjectionAxes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxes*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjectionAxes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxes*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjectionAxesEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjectionAxesEditor::Class_Name()
{
   return "TEveProjectionAxesEditor";
}

//______________________________________________________________________________
const char *TEveProjectionAxesEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjectionAxesEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjectionAxesEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjectionAxesEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjectionAxesGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjectionAxesGL::Class_Name()
{
   return "TEveProjectionAxesGL";
}

//______________________________________________________________________________
const char *TEveProjectionAxesGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjectionAxesGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjectionAxesGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjectionAxesGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionAxesGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjection::Class_Name()
{
   return "TEveProjection";
}

//______________________________________________________________________________
const char *TEveProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjection::PreScaleEntry_t::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjection::PreScaleEntry_t::Class_Name()
{
   return "TEveProjection::PreScaleEntry_t";
}

//______________________________________________________________________________
const char *TEveProjection::PreScaleEntry_t::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection::PreScaleEntry_t*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjection::PreScaleEntry_t::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection::PreScaleEntry_t*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjection::PreScaleEntry_t::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection::PreScaleEntry_t*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjection::PreScaleEntry_t::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjection::PreScaleEntry_t*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRhoZProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRhoZProjection::Class_Name()
{
   return "TEveRhoZProjection";
}

//______________________________________________________________________________
const char *TEveRhoZProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRhoZProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRhoZProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRhoZProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRhoZProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRhoZProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRhoZProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRhoZProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRPhiProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRPhiProjection::Class_Name()
{
   return "TEveRPhiProjection";
}

//______________________________________________________________________________
const char *TEveRPhiProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRPhiProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRPhiProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRPhiProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRPhiProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRPhiProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRPhiProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRPhiProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveXZProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveXZProjection::Class_Name()
{
   return "TEveXZProjection";
}

//______________________________________________________________________________
const char *TEveXZProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveXZProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveXZProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveXZProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveXZProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveXZProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveXZProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveXZProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveYZProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveYZProjection::Class_Name()
{
   return "TEveYZProjection";
}

//______________________________________________________________________________
const char *TEveYZProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveYZProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveYZProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveYZProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveYZProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveYZProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveYZProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveYZProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveZXProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveZXProjection::Class_Name()
{
   return "TEveZXProjection";
}

//______________________________________________________________________________
const char *TEveZXProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveZXProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveZXProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveZXProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveZXProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveZXProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveZXProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveZXProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveZYProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveZYProjection::Class_Name()
{
   return "TEveZYProjection";
}

//______________________________________________________________________________
const char *TEveZYProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveZYProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveZYProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveZYProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveZYProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveZYProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveZYProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveZYProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEve3DProjection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEve3DProjection::Class_Name()
{
   return "TEve3DProjection";
}

//______________________________________________________________________________
const char *TEve3DProjection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEve3DProjection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEve3DProjection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEve3DProjection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEve3DProjection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEve3DProjection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEve3DProjection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEve3DProjection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjectionManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjectionManager::Class_Name()
{
   return "TEveProjectionManager";
}

//______________________________________________________________________________
const char *TEveProjectionManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjectionManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjectionManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjectionManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveProjectionManagerEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveProjectionManagerEditor::Class_Name()
{
   return "TEveProjectionManagerEditor";
}

//______________________________________________________________________________
const char *TEveProjectionManagerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManagerEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveProjectionManagerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManagerEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveProjectionManagerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManagerEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveProjectionManagerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveProjectionManagerEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveScene::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveScene::Class_Name()
{
   return "TEveScene";
}

//______________________________________________________________________________
const char *TEveScene::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveScene*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveScene::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveScene*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveScene::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveScene*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveScene::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveScene*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveSceneList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveSceneList::Class_Name()
{
   return "TEveSceneList";
}

//______________________________________________________________________________
const char *TEveSceneList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveSceneList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveSceneList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveSceneList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveSceneInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveSceneInfo::Class_Name()
{
   return "TEveSceneInfo";
}

//______________________________________________________________________________
const char *TEveSceneInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveSceneInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveSceneInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveSceneInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSceneInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveSecondarySelectable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveSecondarySelectable::Class_Name()
{
   return "TEveSecondarySelectable";
}

//______________________________________________________________________________
const char *TEveSecondarySelectable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSecondarySelectable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveSecondarySelectable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSecondarySelectable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveSecondarySelectable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSecondarySelectable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveSecondarySelectable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSecondarySelectable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveSelection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveSelection::Class_Name()
{
   return "TEveSelection";
}

//______________________________________________________________________________
const char *TEveSelection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSelection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveSelection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSelection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveSelection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSelection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveSelection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSelection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrans::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrans::Class_Name()
{
   return "TEveTrans";
}

//______________________________________________________________________________
const char *TEveTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrans*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrans*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrans*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrans*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTransSubEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTransSubEditor::Class_Name()
{
   return "TEveTransSubEditor";
}

//______________________________________________________________________________
const char *TEveTransSubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTransSubEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTransSubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTransSubEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTransSubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTransSubEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTransSubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTransSubEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTransEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTransEditor::Class_Name()
{
   return "TEveTransEditor";
}

//______________________________________________________________________________
const char *TEveTransEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTransEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTransEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTransEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTransEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTransEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTransEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTransEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveSelectorToEventList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveSelectorToEventList::Class_Name()
{
   return "TEveSelectorToEventList";
}

//______________________________________________________________________________
const char *TEveSelectorToEventList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSelectorToEventList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveSelectorToEventList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveSelectorToEventList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveSelectorToEventList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSelectorToEventList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveSelectorToEventList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveSelectorToEventList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePointSelectorConsumer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePointSelectorConsumer::Class_Name()
{
   return "TEvePointSelectorConsumer";
}

//______________________________________________________________________________
const char *TEvePointSelectorConsumer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelectorConsumer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePointSelectorConsumer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelectorConsumer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePointSelectorConsumer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelectorConsumer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePointSelectorConsumer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelectorConsumer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePointSelector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePointSelector::Class_Name()
{
   return "TEvePointSelector";
}

//______________________________________________________________________________
const char *TEvePointSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePointSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePointSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePointSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSelector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCompositeFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCompositeFrame::Class_Name()
{
   return "TEveCompositeFrame";
}

//______________________________________________________________________________
const char *TEveCompositeFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCompositeFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCompositeFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCompositeFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCompositeFrameInMainFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCompositeFrameInMainFrame::Class_Name()
{
   return "TEveCompositeFrameInMainFrame";
}

//______________________________________________________________________________
const char *TEveCompositeFrameInMainFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInMainFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCompositeFrameInMainFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInMainFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCompositeFrameInMainFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInMainFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCompositeFrameInMainFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInMainFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCompositeFrameInPack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCompositeFrameInPack::Class_Name()
{
   return "TEveCompositeFrameInPack";
}

//______________________________________________________________________________
const char *TEveCompositeFrameInPack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInPack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCompositeFrameInPack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInPack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCompositeFrameInPack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInPack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCompositeFrameInPack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInPack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCompositeFrameInTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCompositeFrameInTab::Class_Name()
{
   return "TEveCompositeFrameInTab";
}

//______________________________________________________________________________
const char *TEveCompositeFrameInTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCompositeFrameInTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCompositeFrameInTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCompositeFrameInTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCompositeFrameInTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindow::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindow::Class_Name()
{
   return "TEveWindow";
}

//______________________________________________________________________________
const char *TEveWindow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindow*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindow*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindow*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindow*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindowSlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindowSlot::Class_Name()
{
   return "TEveWindowSlot";
}

//______________________________________________________________________________
const char *TEveWindowSlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowSlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindowSlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowSlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindowSlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowSlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindowSlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowSlot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindowFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindowFrame::Class_Name()
{
   return "TEveWindowFrame";
}

//______________________________________________________________________________
const char *TEveWindowFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindowFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindowFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindowFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindowPack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindowPack::Class_Name()
{
   return "TEveWindowPack";
}

//______________________________________________________________________________
const char *TEveWindowPack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowPack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindowPack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowPack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindowPack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowPack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindowPack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowPack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindowTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindowTab::Class_Name()
{
   return "TEveWindowTab";
}

//______________________________________________________________________________
const char *TEveWindowTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindowTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindowTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindowTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveContextMenu::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveContextMenu::Class_Name()
{
   return "TEveContextMenu";
}

//______________________________________________________________________________
const char *TEveContextMenu::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveContextMenu*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveContextMenu::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveContextMenu*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveContextMenu::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveContextMenu*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveContextMenu::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveContextMenu*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveViewer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveViewer::Class_Name()
{
   return "TEveViewer";
}

//______________________________________________________________________________
const char *TEveViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveViewer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveViewer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveViewer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveViewer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveViewerList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveViewerList::Class_Name()
{
   return "TEveViewerList";
}

//______________________________________________________________________________
const char *TEveViewerList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveViewerList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveViewerList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveViewerList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveViewerListEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveViewerListEditor::Class_Name()
{
   return "TEveViewerListEditor";
}

//______________________________________________________________________________
const char *TEveViewerListEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerListEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveViewerListEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerListEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveViewerListEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerListEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveViewerListEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveViewerListEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveMCTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveMCTrack::Class_Name()
{
   return "TEveMCTrack";
}

//______________________________________________________________________________
const char *TEveMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMCTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMCTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMCTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMCTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveHit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveHit::Class_Name()
{
   return "TEveHit";
}

//______________________________________________________________________________
const char *TEveHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveHit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveHit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveHit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveHit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCluster::Class_Name()
{
   return "TEveCluster";
}

//______________________________________________________________________________
const char *TEveCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveRecTrackT<float>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveRecTrackT<float>::Class_Name()
{
   return "TEveRecTrackT<float>";
}

//______________________________________________________________________________
template <> const char *TEveRecTrackT<float>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<float>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveRecTrackT<float>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<float>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveRecTrackT<float>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<float>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveRecTrackT<float>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<float>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr TEveRecTrackT<double>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TEveRecTrackT<double>::Class_Name()
{
   return "TEveRecTrackT<double>";
}

//______________________________________________________________________________
template <> const char *TEveRecTrackT<double>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<double>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TEveRecTrackT<double>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<double>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TEveRecTrackT<double>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<double>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TEveRecTrackT<double>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecTrackT<double>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRecKink::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRecKink::Class_Name()
{
   return "TEveRecKink";
}

//______________________________________________________________________________
const char *TEveRecKink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecKink*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRecKink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecKink*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRecKink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecKink*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRecKink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecKink*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRecV0::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRecV0::Class_Name()
{
   return "TEveRecV0";
}

//______________________________________________________________________________
const char *TEveRecV0::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecV0*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRecV0::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecV0*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRecV0::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecV0*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRecV0::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecV0*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRecCascade::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRecCascade::Class_Name()
{
   return "TEveRecCascade";
}

//______________________________________________________________________________
const char *TEveRecCascade::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecCascade*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRecCascade::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRecCascade*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRecCascade::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecCascade*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRecCascade::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRecCascade*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveMCRecCrossRef::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveMCRecCrossRef::Class_Name()
{
   return "TEveMCRecCrossRef";
}

//______________________________________________________________________________
const char *TEveMCRecCrossRef::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMCRecCrossRef*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveMCRecCrossRef::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMCRecCrossRef*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveMCRecCrossRef::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMCRecCrossRef*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveMCRecCrossRef::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMCRecCrossRef*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveVSD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveVSD::Class_Name()
{
   return "TEveVSD";
}

//______________________________________________________________________________
const char *TEveVSD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVSD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveVSD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveVSD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveVSD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVSD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveVSD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveVSD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindowEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindowEditor::Class_Name()
{
   return "TEveWindowEditor";
}

//______________________________________________________________________________
const char *TEveWindowEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindowEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindowEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindowEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveWindowManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveWindowManager::Class_Name()
{
   return "TEveWindowManager";
}

//______________________________________________________________________________
const char *TEveWindowManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveWindowManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveWindowManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveWindowManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveWindowManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveArrowEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveArrowEditor::Class_Name()
{
   return "TEveArrowEditor";
}

//______________________________________________________________________________
const char *TEveArrowEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveArrowEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveArrowEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveArrowEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveArrowGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveArrowGL::Class_Name()
{
   return "TEveArrowGL";
}

//______________________________________________________________________________
const char *TEveArrowGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveArrowGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveArrowGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveArrowGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveArrowGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveArrow::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveArrow::Class_Name()
{
   return "TEveArrow";
}

//______________________________________________________________________________
const char *TEveArrow::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveArrow*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveArrow::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveArrow*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveArrow::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveArrow*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveArrow::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveArrow*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBoxGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBoxGL::Class_Name()
{
   return "TEveBoxGL";
}

//______________________________________________________________________________
const char *TEveBoxGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBoxGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBoxGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBoxGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBoxProjectedGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBoxProjectedGL::Class_Name()
{
   return "TEveBoxProjectedGL";
}

//______________________________________________________________________________
const char *TEveBoxProjectedGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjectedGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBoxProjectedGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjectedGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBoxProjectedGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjectedGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBoxProjectedGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjectedGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveShape::Class_Name()
{
   return "TEveShape";
}

//______________________________________________________________________________
const char *TEveShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBox::Class_Name()
{
   return "TEveBox";
}

//______________________________________________________________________________
const char *TEveBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBoxProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBoxProjected::Class_Name()
{
   return "TEveBoxProjected";
}

//______________________________________________________________________________
const char *TEveBoxProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBoxProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBoxProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBoxProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveFrameBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveFrameBox::Class_Name()
{
   return "TEveFrameBox";
}

//______________________________________________________________________________
const char *TEveFrameBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveFrameBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveFrameBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveFrameBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRGBAPalette::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRGBAPalette::Class_Name()
{
   return "TEveRGBAPalette";
}

//______________________________________________________________________________
const char *TEveRGBAPalette::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPalette*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRGBAPalette::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPalette*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRGBAPalette::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPalette*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRGBAPalette::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPalette*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveDigitSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveDigitSet::Class_Name()
{
   return "TEveDigitSet";
}

//______________________________________________________________________________
const char *TEveDigitSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveDigitSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveDigitSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveDigitSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveDigitSetGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveDigitSetGL::Class_Name()
{
   return "TEveDigitSetGL";
}

//______________________________________________________________________________
const char *TEveDigitSetGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveDigitSetGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveDigitSetGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveDigitSetGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBoxSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBoxSet::Class_Name()
{
   return "TEveBoxSet";
}

//______________________________________________________________________________
const char *TEveBoxSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBoxSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBoxSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBoxSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveBoxSetGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveBoxSetGL::Class_Name()
{
   return "TEveBoxSetGL";
}

//______________________________________________________________________________
const char *TEveBoxSetGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSetGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveBoxSetGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSetGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveBoxSetGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSetGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveBoxSetGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveBoxSetGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloData::Class_Name()
{
   return "TEveCaloData";
}

//______________________________________________________________________________
const char *TEveCaloData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloData::SliceInfo_t::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloData::SliceInfo_t::Class_Name()
{
   return "TEveCaloData::SliceInfo_t";
}

//______________________________________________________________________________
const char *TEveCaloData::SliceInfo_t::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData::SliceInfo_t*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloData::SliceInfo_t::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData::SliceInfo_t*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloData::SliceInfo_t::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData::SliceInfo_t*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloData::SliceInfo_t::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloData::SliceInfo_t*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloDataVec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloDataVec::Class_Name()
{
   return "TEveCaloDataVec";
}

//______________________________________________________________________________
const char *TEveCaloDataVec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataVec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloDataVec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataVec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloDataVec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataVec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloDataVec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataVec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloDataHist::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloDataHist::Class_Name()
{
   return "TEveCaloDataHist";
}

//______________________________________________________________________________
const char *TEveCaloDataHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataHist*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloDataHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataHist*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloDataHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataHist*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloDataHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloDataHist*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloViz::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloViz::Class_Name()
{
   return "TEveCaloViz";
}

//______________________________________________________________________________
const char *TEveCaloViz::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloViz*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloViz::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloViz*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloViz::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloViz*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloViz::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloViz*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCalo3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCalo3D::Class_Name()
{
   return "TEveCalo3D";
}

//______________________________________________________________________________
const char *TEveCalo3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCalo3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCalo3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCalo3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCalo2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCalo2D::Class_Name()
{
   return "TEveCalo2D";
}

//______________________________________________________________________________
const char *TEveCalo2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCalo2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCalo2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCalo2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloLego::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloLego::Class_Name()
{
   return "TEveCaloLego";
}

//______________________________________________________________________________
const char *TEveCaloLego::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLego*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloLego::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLego*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloLego::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLego*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloLego::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLego*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCalo2DGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCalo2DGL::Class_Name()
{
   return "TEveCalo2DGL";
}

//______________________________________________________________________________
const char *TEveCalo2DGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2DGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCalo2DGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2DGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCalo2DGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2DGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCalo2DGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo2DGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCalo3DGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCalo3DGL::Class_Name()
{
   return "TEveCalo3DGL";
}

//______________________________________________________________________________
const char *TEveCalo3DGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCalo3DGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCalo3DGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCalo3DGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloLegoEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloLegoEditor::Class_Name()
{
   return "TEveCaloLegoEditor";
}

//______________________________________________________________________________
const char *TEveCaloLegoEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloLegoEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloLegoEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloLegoEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloLegoGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloLegoGL::Class_Name()
{
   return "TEveCaloLegoGL";
}

//______________________________________________________________________________
const char *TEveCaloLegoGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloLegoGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloLegoGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloLegoGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloLegoOverlay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloLegoOverlay::Class_Name()
{
   return "TEveCaloLegoOverlay";
}

//______________________________________________________________________________
const char *TEveCaloLegoOverlay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoOverlay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloLegoOverlay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoOverlay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloLegoOverlay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoOverlay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloLegoOverlay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloLegoOverlay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCaloVizEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCaloVizEditor::Class_Name()
{
   return "TEveCaloVizEditor";
}

//______________________________________________________________________________
const char *TEveCaloVizEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloVizEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCaloVizEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloVizEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCaloVizEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloVizEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCaloVizEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCaloVizEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveCalo3DEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveCalo3DEditor::Class_Name()
{
   return "TEveCalo3DEditor";
}

//______________________________________________________________________________
const char *TEveCalo3DEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveCalo3DEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveCalo3DEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveCalo3DEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveCalo3DEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveDigitSetEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveDigitSetEditor::Class_Name()
{
   return "TEveDigitSetEditor";
}

//______________________________________________________________________________
const char *TEveDigitSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveDigitSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveDigitSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveDigitSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveDigitSetEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveFrameBoxGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveFrameBoxGL::Class_Name()
{
   return "TEveFrameBoxGL";
}

//______________________________________________________________________________
const char *TEveFrameBoxGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBoxGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveFrameBoxGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBoxGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveFrameBoxGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBoxGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveFrameBoxGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveFrameBoxGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoNodeEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoNodeEditor::Class_Name()
{
   return "TEveGeoNodeEditor";
}

//______________________________________________________________________________
const char *TEveGeoNodeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNodeEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoNodeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNodeEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoNodeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNodeEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoNodeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNodeEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoTopNodeEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoTopNodeEditor::Class_Name()
{
   return "TEveGeoTopNodeEditor";
}

//______________________________________________________________________________
const char *TEveGeoTopNodeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNodeEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoTopNodeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNodeEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoTopNodeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNodeEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoTopNodeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNodeEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoNode::Class_Name()
{
   return "TEveGeoNode";
}

//______________________________________________________________________________
const char *TEveGeoNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoTopNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoTopNode::Class_Name()
{
   return "TEveGeoTopNode";
}

//______________________________________________________________________________
const char *TEveGeoTopNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoTopNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoTopNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoTopNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoTopNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoPolyShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoPolyShape::Class_Name()
{
   return "TEveGeoPolyShape";
}

//______________________________________________________________________________
const char *TEveGeoPolyShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoPolyShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoPolyShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoPolyShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoPolyShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoPolyShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoPolyShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoPolyShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoShapeExtract::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoShapeExtract::Class_Name()
{
   return "TEveGeoShapeExtract";
}

//______________________________________________________________________________
const char *TEveGeoShapeExtract::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeExtract*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoShapeExtract::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeExtract*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoShapeExtract::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeExtract*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoShapeExtract::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeExtract*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoShape::Class_Name()
{
   return "TEveGeoShape";
}

//______________________________________________________________________________
const char *TEveGeoShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGeoShapeProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGeoShapeProjected::Class_Name()
{
   return "TEveGeoShapeProjected";
}

//______________________________________________________________________________
const char *TEveGeoShapeProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGeoShapeProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGeoShapeProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGeoShapeProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGeoShapeProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGridStepperSubEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGridStepperSubEditor::Class_Name()
{
   return "TEveGridStepperSubEditor";
}

//______________________________________________________________________________
const char *TEveGridStepperSubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperSubEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGridStepperSubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperSubEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGridStepperSubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperSubEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGridStepperSubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperSubEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGridStepperEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGridStepperEditor::Class_Name()
{
   return "TEveGridStepperEditor";
}

//______________________________________________________________________________
const char *TEveGridStepperEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGridStepperEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGridStepperEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGridStepperEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepperEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveGridStepper::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveGridStepper::Class_Name()
{
   return "TEveGridStepper";
}

//______________________________________________________________________________
const char *TEveGridStepper::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepper*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveGridStepper::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepper*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveGridStepper::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepper*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveGridStepper::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveGridStepper*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveJetCone::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveJetCone::Class_Name()
{
   return "TEveJetCone";
}

//______________________________________________________________________________
const char *TEveJetCone::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetCone*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveJetCone::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetCone*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveJetCone::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetCone*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveJetCone::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetCone*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveJetConeProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveJetConeProjected::Class_Name()
{
   return "TEveJetConeProjected";
}

//______________________________________________________________________________
const char *TEveJetConeProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveJetConeProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveJetConeProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveJetConeProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveJetConeEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveJetConeEditor::Class_Name()
{
   return "TEveJetConeEditor";
}

//______________________________________________________________________________
const char *TEveJetConeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveJetConeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveJetConeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveJetConeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveJetConeGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveJetConeGL::Class_Name()
{
   return "TEveJetConeGL";
}

//______________________________________________________________________________
const char *TEveJetConeGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveJetConeGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveJetConeGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveJetConeGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveJetConeProjectedGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveJetConeProjectedGL::Class_Name()
{
   return "TEveJetConeProjectedGL";
}

//______________________________________________________________________________
const char *TEveJetConeProjectedGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjectedGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveJetConeProjectedGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjectedGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveJetConeProjectedGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjectedGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveJetConeProjectedGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveJetConeProjectedGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveLegoEventHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveLegoEventHandler::Class_Name()
{
   return "TEveLegoEventHandler";
}

//______________________________________________________________________________
const char *TEveLegoEventHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLegoEventHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveLegoEventHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLegoEventHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveLegoEventHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLegoEventHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveLegoEventHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLegoEventHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveLineEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveLineEditor::Class_Name()
{
   return "TEveLineEditor";
}

//______________________________________________________________________________
const char *TEveLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLineEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLineEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLineEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLineEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveLineGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveLineGL::Class_Name()
{
   return "TEveLineGL";
}

//______________________________________________________________________________
const char *TEveLineGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLineGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveLineGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLineGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveLineGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLineGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveLineGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLineGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePointSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePointSet::Class_Name()
{
   return "TEvePointSet";
}

//______________________________________________________________________________
const char *TEvePointSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePointSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePointSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePointSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePointSetArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePointSetArray::Class_Name()
{
   return "TEvePointSetArray";
}

//______________________________________________________________________________
const char *TEvePointSetArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePointSetArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePointSetArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePointSetArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePointSetProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePointSetProjected::Class_Name()
{
   return "TEvePointSetProjected";
}

//______________________________________________________________________________
const char *TEvePointSetProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePointSetProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePointSetProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePointSetProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveLine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveLine::Class_Name()
{
   return "TEveLine";
}

//______________________________________________________________________________
const char *TEveLine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveLine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveLine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveLine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveLineProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveLineProjected::Class_Name()
{
   return "TEveLineProjected";
}

//______________________________________________________________________________
const char *TEveLineProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLineProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveLineProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveLineProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveLineProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLineProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveLineProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveLineProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePlot3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePlot3D::Class_Name()
{
   return "TEvePlot3D";
}

//______________________________________________________________________________
const char *TEvePlot3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePlot3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePlot3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePlot3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePlot3DGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePlot3DGL::Class_Name()
{
   return "TEvePlot3DGL";
}

//______________________________________________________________________________
const char *TEvePlot3DGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3DGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePlot3DGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3DGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePlot3DGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3DGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePlot3DGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePlot3DGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePointSetArrayEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePointSetArrayEditor::Class_Name()
{
   return "TEvePointSetArrayEditor";
}

//______________________________________________________________________________
const char *TEvePointSetArrayEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArrayEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePointSetArrayEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArrayEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePointSetArrayEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArrayEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePointSetArrayEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePointSetArrayEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePolygonSetProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePolygonSetProjected::Class_Name()
{
   return "TEvePolygonSetProjected";
}

//______________________________________________________________________________
const char *TEvePolygonSetProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePolygonSetProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePolygonSetProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePolygonSetProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEvePolygonSetProjectedGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEvePolygonSetProjectedGL::Class_Name()
{
   return "TEvePolygonSetProjectedGL";
}

//______________________________________________________________________________
const char *TEvePolygonSetProjectedGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjectedGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEvePolygonSetProjectedGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjectedGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEvePolygonSetProjectedGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjectedGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEvePolygonSetProjectedGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEvePolygonSetProjectedGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveQuadSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveQuadSet::Class_Name()
{
   return "TEveQuadSet";
}

//______________________________________________________________________________
const char *TEveQuadSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveQuadSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveQuadSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveQuadSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveQuadSetGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveQuadSetGL::Class_Name()
{
   return "TEveQuadSetGL";
}

//______________________________________________________________________________
const char *TEveQuadSetGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSetGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveQuadSetGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSetGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveQuadSetGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSetGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveQuadSetGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveQuadSetGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRGBAPaletteSubEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRGBAPaletteSubEditor::Class_Name()
{
   return "TEveRGBAPaletteSubEditor";
}

//______________________________________________________________________________
const char *TEveRGBAPaletteSubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteSubEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRGBAPaletteSubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteSubEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRGBAPaletteSubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteSubEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRGBAPaletteSubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteSubEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRGBAPaletteEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRGBAPaletteEditor::Class_Name()
{
   return "TEveRGBAPaletteEditor";
}

//______________________________________________________________________________
const char *TEveRGBAPaletteEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRGBAPaletteEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRGBAPaletteEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRGBAPaletteEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveRGBAPaletteOverlay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveRGBAPaletteOverlay::Class_Name()
{
   return "TEveRGBAPaletteOverlay";
}

//______________________________________________________________________________
const char *TEveRGBAPaletteOverlay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteOverlay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveRGBAPaletteOverlay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteOverlay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveRGBAPaletteOverlay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteOverlay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveRGBAPaletteOverlay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveRGBAPaletteOverlay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveStraightLineSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveStraightLineSet::Class_Name()
{
   return "TEveStraightLineSet";
}

//______________________________________________________________________________
const char *TEveStraightLineSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveStraightLineSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveStraightLineSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveStraightLineSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveStraightLineSetProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveStraightLineSetProjected::Class_Name()
{
   return "TEveStraightLineSetProjected";
}

//______________________________________________________________________________
const char *TEveStraightLineSetProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveStraightLineSetProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveStraightLineSetProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveStraightLineSetProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveScalableStraightLineSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveScalableStraightLineSet::Class_Name()
{
   return "TEveScalableStraightLineSet";
}

//______________________________________________________________________________
const char *TEveScalableStraightLineSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveScalableStraightLineSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveScalableStraightLineSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveScalableStraightLineSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveScalableStraightLineSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveScalableStraightLineSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveScalableStraightLineSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveScalableStraightLineSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveShapeEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveShapeEditor::Class_Name()
{
   return "TEveShapeEditor";
}

//______________________________________________________________________________
const char *TEveShapeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveShapeEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveShapeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveShapeEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveShapeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveShapeEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveShapeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveShapeEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveStraightLineSetEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveStraightLineSetEditor::Class_Name()
{
   return "TEveStraightLineSetEditor";
}

//______________________________________________________________________________
const char *TEveStraightLineSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveStraightLineSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveStraightLineSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveStraightLineSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveStraightLineSetGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveStraightLineSetGL::Class_Name()
{
   return "TEveStraightLineSetGL";
}

//______________________________________________________________________________
const char *TEveStraightLineSetGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveStraightLineSetGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveStraightLineSetGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveStraightLineSetGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveStraightLineSetGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveText::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveText::Class_Name()
{
   return "TEveText";
}

//______________________________________________________________________________
const char *TEveText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveText*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveText*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveText*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveText*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTextEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTextEditor::Class_Name()
{
   return "TEveTextEditor";
}

//______________________________________________________________________________
const char *TEveTextEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTextEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTextEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTextEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTextEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTextEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTextEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTextEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTextGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTextGL::Class_Name()
{
   return "TEveTextGL";
}

//______________________________________________________________________________
const char *TEveTextGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTextGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTextGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTextGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTextGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTextGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTextGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTextGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrack::Class_Name()
{
   return "TEveTrack";
}

//______________________________________________________________________________
const char *TEveTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackList::Class_Name()
{
   return "TEveTrackList";
}

//______________________________________________________________________________
const char *TEveTrackList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackEditor::Class_Name()
{
   return "TEveTrackEditor";
}

//______________________________________________________________________________
const char *TEveTrackEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackListEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackListEditor::Class_Name()
{
   return "TEveTrackListEditor";
}

//______________________________________________________________________________
const char *TEveTrackListEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackListEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackListEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackListEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackGL::Class_Name()
{
   return "TEveTrackGL";
}

//______________________________________________________________________________
const char *TEveTrackGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackProjected::Class_Name()
{
   return "TEveTrackProjected";
}

//______________________________________________________________________________
const char *TEveTrackProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackListProjected::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackListProjected::Class_Name()
{
   return "TEveTrackListProjected";
}

//______________________________________________________________________________
const char *TEveTrackListProjected::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListProjected*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackListProjected::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListProjected*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackListProjected::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListProjected*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackListProjected::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackListProjected*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackProjectedGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackProjectedGL::Class_Name()
{
   return "TEveTrackProjectedGL";
}

//______________________________________________________________________________
const char *TEveTrackProjectedGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjectedGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackProjectedGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjectedGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackProjectedGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjectedGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackProjectedGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackProjectedGL*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveMagField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveMagField::Class_Name()
{
   return "TEveMagField";
}

//______________________________________________________________________________
const char *TEveMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMagField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMagField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMagField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMagField*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveMagFieldConst::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveMagFieldConst::Class_Name()
{
   return "TEveMagFieldConst";
}

//______________________________________________________________________________
const char *TEveMagFieldConst::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldConst*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveMagFieldConst::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldConst*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveMagFieldConst::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldConst*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveMagFieldConst::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldConst*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveMagFieldDuo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveMagFieldDuo::Class_Name()
{
   return "TEveMagFieldDuo";
}

//______________________________________________________________________________
const char *TEveMagFieldDuo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldDuo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveMagFieldDuo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldDuo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveMagFieldDuo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldDuo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveMagFieldDuo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveMagFieldDuo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackPropagator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackPropagator::Class_Name()
{
   return "TEveTrackPropagator";
}

//______________________________________________________________________________
const char *TEveTrackPropagator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackPropagator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackPropagator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackPropagator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackPropagatorSubEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackPropagatorSubEditor::Class_Name()
{
   return "TEveTrackPropagatorSubEditor";
}

//______________________________________________________________________________
const char *TEveTrackPropagatorSubEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorSubEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackPropagatorSubEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorSubEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackPropagatorSubEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorSubEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackPropagatorSubEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorSubEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTrackPropagatorEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTrackPropagatorEditor::Class_Name()
{
   return "TEveTrackPropagatorEditor";
}

//______________________________________________________________________________
const char *TEveTrackPropagatorEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTrackPropagatorEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTrackPropagatorEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTrackPropagatorEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTrackPropagatorEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTriangleSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTriangleSet::Class_Name()
{
   return "TEveTriangleSet";
}

//______________________________________________________________________________
const char *TEveTriangleSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTriangleSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTriangleSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTriangleSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTriangleSetEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTriangleSetEditor::Class_Name()
{
   return "TEveTriangleSetEditor";
}

//______________________________________________________________________________
const char *TEveTriangleSetEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTriangleSetEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTriangleSetEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTriangleSetEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TEveTriangleSetGL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TEveTriangleSetGL::Class_Name()
{
   return "TEveTriangleSetGL";
}

//______________________________________________________________________________
const char *TEveTriangleSetGL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetGL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TEveTriangleSetGL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetGL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TEveTriangleSetGL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetGL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TEveTriangleSetGL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TEveTriangleSetGL*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__wrap_iter<TEveProjection::PreScaleEntry_t*> : new ::__wrap_iter<TEveProjection::PreScaleEntry_t*>;
   }
   static void *newArray___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__wrap_iter<TEveProjection::PreScaleEntry_t*>[nElements] : new ::__wrap_iter<TEveProjection::PreScaleEntry_t*>[nElements];
   }
   // Wrapper around operator delete
   static void delete___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p) {
      delete (static_cast<::__wrap_iter<TEveProjection::PreScaleEntry_t*>*>(p));
   }
   static void deleteArray___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p) {
      delete [] (static_cast<::__wrap_iter<TEveProjection::PreScaleEntry_t*>*>(p));
   }
   static void destruct___wrap_iterlETEveProjectioncLcLPreScaleEntry_tmUgR(void *p) {
      typedef ::__wrap_iter<TEveProjection::PreScaleEntry_t*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::__wrap_iter<TEveProjection::PreScaleEntry_t*>

namespace ROOT {
   // Wrappers around operator new
   static void *new___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__list_const_iterator<TEveElement*,void*> : new ::__list_const_iterator<TEveElement*,void*>;
   }
   static void *newArray___list_const_iteratorlETEveElementmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__list_const_iterator<TEveElement*,void*>[nElements] : new ::__list_const_iterator<TEveElement*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      delete (static_cast<::__list_const_iterator<TEveElement*,void*>*>(p));
   }
   static void deleteArray___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      delete [] (static_cast<::__list_const_iterator<TEveElement*,void*>*>(p));
   }
   static void destruct___list_const_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      typedef ::__list_const_iterator<TEveElement*,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::__list_const_iterator<TEveElement*,void*>

namespace ROOT {
   // Wrappers around operator new
   static void *new___list_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__list_iterator<TEveElement*,void*> : new ::__list_iterator<TEveElement*,void*>;
   }
   static void *newArray___list_iteratorlETEveElementmUcOvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__list_iterator<TEveElement*,void*>[nElements] : new ::__list_iterator<TEveElement*,void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete___list_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      delete (static_cast<::__list_iterator<TEveElement*,void*>*>(p));
   }
   static void deleteArray___list_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      delete [] (static_cast<::__list_iterator<TEveElement*,void*>*>(p));
   }
   static void destruct___list_iteratorlETEveElementmUcOvoidmUgR(void *p) {
      typedef ::__list_iterator<TEveElement*,void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::__list_iterator<TEveElement*,void*>

namespace ROOT {
   // Wrappers around operator new
   static void *new___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long> : new ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>;
   }
   static void *newArray___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>[nElements] : new ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>[nElements];
   }
   // Wrapper around operator delete
   static void delete___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p) {
      delete (static_cast<::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>*>(p));
   }
   static void deleteArray___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p) {
      delete [] (static_cast<::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>*>(p));
   }
   static void destruct___tree_const_iteratorlETEveElementmUcO__tree_nodelETEveElementmUcOvoidmUgRmUcOlonggR(void *p) {
      typedef ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::__tree_const_iterator<TEveElement*,__tree_node<TEveElement*,void*>*,long>

//______________________________________________________________________________
void TEveUtil::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveUtil.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveUtil::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveUtil::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveUtil(void *p) {
      return  p ? new(p) ::TEveUtil : new ::TEveUtil;
   }
   static void *newArray_TEveUtil(Long_t nElements, void *p) {
      return p ? new(p) ::TEveUtil[nElements] : new ::TEveUtil[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveUtil(void *p) {
      delete (static_cast<::TEveUtil*>(p));
   }
   static void deleteArray_TEveUtil(void *p) {
      delete [] (static_cast<::TEveUtil*>(p));
   }
   static void destruct_TEveUtil(void *p) {
      typedef ::TEveUtil current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveUtil

//______________________________________________________________________________
void TEveException::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveException.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveException::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveException::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveException(void *p) {
      return  p ? new(p) ::TEveException : new ::TEveException;
   }
   static void *newArray_TEveException(Long_t nElements, void *p) {
      return p ? new(p) ::TEveException[nElements] : new ::TEveException[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveException(void *p) {
      delete (static_cast<::TEveException*>(p));
   }
   static void deleteArray_TEveException(void *p) {
      delete [] (static_cast<::TEveException*>(p));
   }
   static void destruct_TEveException(void *p) {
      typedef ::TEveException current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveException

//______________________________________________________________________________
void TEvePadHolder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePadHolder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePadHolder::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePadHolder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEvePadHolder(void *p) {
      delete (static_cast<::TEvePadHolder*>(p));
   }
   static void deleteArray_TEvePadHolder(void *p) {
      delete [] (static_cast<::TEvePadHolder*>(p));
   }
   static void destruct_TEvePadHolder(void *p) {
      typedef ::TEvePadHolder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePadHolder

//______________________________________________________________________________
void TEveGeoManagerHolder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoManagerHolder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoManagerHolder::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoManagerHolder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoManagerHolder(void *p) {
      return  p ? new(p) ::TEveGeoManagerHolder : new ::TEveGeoManagerHolder;
   }
   static void *newArray_TEveGeoManagerHolder(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoManagerHolder[nElements] : new ::TEveGeoManagerHolder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoManagerHolder(void *p) {
      delete (static_cast<::TEveGeoManagerHolder*>(p));
   }
   static void deleteArray_TEveGeoManagerHolder(void *p) {
      delete [] (static_cast<::TEveGeoManagerHolder*>(p));
   }
   static void destruct_TEveGeoManagerHolder(void *p) {
      typedef ::TEveGeoManagerHolder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoManagerHolder

//______________________________________________________________________________
void TEveRefCnt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRefCnt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRefCnt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRefCnt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRefCnt(void *p) {
      return  p ? new(p) ::TEveRefCnt : new ::TEveRefCnt;
   }
   static void *newArray_TEveRefCnt(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRefCnt[nElements] : new ::TEveRefCnt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRefCnt(void *p) {
      delete (static_cast<::TEveRefCnt*>(p));
   }
   static void deleteArray_TEveRefCnt(void *p) {
      delete [] (static_cast<::TEveRefCnt*>(p));
   }
   static void destruct_TEveRefCnt(void *p) {
      typedef ::TEveRefCnt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRefCnt

//______________________________________________________________________________
void TEveRefBackPtr::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRefBackPtr.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRefBackPtr::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRefBackPtr::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRefBackPtr(void *p) {
      return  p ? new(p) ::TEveRefBackPtr : new ::TEveRefBackPtr;
   }
   static void *newArray_TEveRefBackPtr(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRefBackPtr[nElements] : new ::TEveRefBackPtr[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRefBackPtr(void *p) {
      delete (static_cast<::TEveRefBackPtr*>(p));
   }
   static void deleteArray_TEveRefBackPtr(void *p) {
      delete [] (static_cast<::TEveRefBackPtr*>(p));
   }
   static void destruct_TEveRefBackPtr(void *p) {
      typedef ::TEveRefBackPtr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRefBackPtr

//______________________________________________________________________________
void TEveProjectable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjectable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjectable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjectable::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveProjectable(void *p) {
      delete (static_cast<::TEveProjectable*>(p));
   }
   static void deleteArray_TEveProjectable(void *p) {
      delete [] (static_cast<::TEveProjectable*>(p));
   }
   static void destruct_TEveProjectable(void *p) {
      typedef ::TEveProjectable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjectable

//______________________________________________________________________________
void TEveProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveProjected(void *p) {
      delete (static_cast<::TEveProjected*>(p));
   }
   static void deleteArray_TEveProjected(void *p) {
      delete [] (static_cast<::TEveProjected*>(p));
   }
   static void destruct_TEveProjected(void *p) {
      typedef ::TEveProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjected

//______________________________________________________________________________
void TEveElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveElement(void *p) {
      return  p ? new(p) ::TEveElement : new ::TEveElement;
   }
   static void *newArray_TEveElement(Long_t nElements, void *p) {
      return p ? new(p) ::TEveElement[nElements] : new ::TEveElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveElement(void *p) {
      delete (static_cast<::TEveElement*>(p));
   }
   static void deleteArray_TEveElement(void *p) {
      delete [] (static_cast<::TEveElement*>(p));
   }
   static void destruct_TEveElement(void *p) {
      typedef ::TEveElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveElement

//______________________________________________________________________________
void TEveElement::TEveListTreeInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveElement::TEveListTreeInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveElement::TEveListTreeInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveElement::TEveListTreeInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveElementcLcLTEveListTreeInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TEveElement::TEveListTreeInfo : new ::TEveElement::TEveListTreeInfo;
   }
   static void *newArray_TEveElementcLcLTEveListTreeInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TEveElement::TEveListTreeInfo[nElements] : new ::TEveElement::TEveListTreeInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveElementcLcLTEveListTreeInfo(void *p) {
      delete (static_cast<::TEveElement::TEveListTreeInfo*>(p));
   }
   static void deleteArray_TEveElementcLcLTEveListTreeInfo(void *p) {
      delete [] (static_cast<::TEveElement::TEveListTreeInfo*>(p));
   }
   static void destruct_TEveElementcLcLTEveListTreeInfo(void *p) {
      typedef ::TEveElement::TEveListTreeInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveElement::TEveListTreeInfo

//______________________________________________________________________________
void TEveElementList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveElementList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveElementList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveElementList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveElementList(void *p) {
      return  p ? new(p) ::TEveElementList : new ::TEveElementList;
   }
   static void *newArray_TEveElementList(Long_t nElements, void *p) {
      return p ? new(p) ::TEveElementList[nElements] : new ::TEveElementList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveElementList(void *p) {
      delete (static_cast<::TEveElementList*>(p));
   }
   static void deleteArray_TEveElementList(void *p) {
      delete [] (static_cast<::TEveElementList*>(p));
   }
   static void destruct_TEveElementList(void *p) {
      typedef ::TEveElementList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveElementList

//______________________________________________________________________________
void TEveElementListProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveElementListProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveElementListProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveElementListProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveElementListProjected(void *p) {
      return  p ? new(p) ::TEveElementListProjected : new ::TEveElementListProjected;
   }
   static void *newArray_TEveElementListProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveElementListProjected[nElements] : new ::TEveElementListProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveElementListProjected(void *p) {
      delete (static_cast<::TEveElementListProjected*>(p));
   }
   static void deleteArray_TEveElementListProjected(void *p) {
      delete [] (static_cast<::TEveElementListProjected*>(p));
   }
   static void destruct_TEveElementListProjected(void *p) {
      typedef ::TEveElementListProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveElementListProjected

//______________________________________________________________________________
void TEveListTreeItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveListTreeItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveListTreeItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveListTreeItem::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveListTreeItem(void *p) {
      delete (static_cast<::TEveListTreeItem*>(p));
   }
   static void deleteArray_TEveListTreeItem(void *p) {
      delete [] (static_cast<::TEveListTreeItem*>(p));
   }
   static void destruct_TEveListTreeItem(void *p) {
      typedef ::TEveListTreeItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveListTreeItem

//______________________________________________________________________________
void TEveGListTreeEditorFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGListTreeEditorFrame.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGListTreeEditorFrame::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGListTreeEditorFrame::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGListTreeEditorFrame(void *p) {
      return  p ? new(p) ::TEveGListTreeEditorFrame : new ::TEveGListTreeEditorFrame;
   }
   static void *newArray_TEveGListTreeEditorFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGListTreeEditorFrame[nElements] : new ::TEveGListTreeEditorFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGListTreeEditorFrame(void *p) {
      delete (static_cast<::TEveGListTreeEditorFrame*>(p));
   }
   static void deleteArray_TEveGListTreeEditorFrame(void *p) {
      delete [] (static_cast<::TEveGListTreeEditorFrame*>(p));
   }
   static void destruct_TEveGListTreeEditorFrame(void *p) {
      typedef ::TEveGListTreeEditorFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGListTreeEditorFrame

//______________________________________________________________________________
void TEveBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBrowser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBrowser::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBrowser::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveBrowser(void *p) {
      delete (static_cast<::TEveBrowser*>(p));
   }
   static void deleteArray_TEveBrowser(void *p) {
      delete [] (static_cast<::TEveBrowser*>(p));
   }
   static void destruct_TEveBrowser(void *p) {
      typedef ::TEveBrowser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBrowser

//______________________________________________________________________________
void TEveChunkManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveChunkManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveChunkManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveChunkManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveChunkManager(void *p) {
      return  p ? new(p) ::TEveChunkManager : new ::TEveChunkManager;
   }
   static void *newArray_TEveChunkManager(Long_t nElements, void *p) {
      return p ? new(p) ::TEveChunkManager[nElements] : new ::TEveChunkManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveChunkManager(void *p) {
      delete (static_cast<::TEveChunkManager*>(p));
   }
   static void deleteArray_TEveChunkManager(void *p) {
      delete [] (static_cast<::TEveChunkManager*>(p));
   }
   static void destruct_TEveChunkManager(void *p) {
      typedef ::TEveChunkManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveChunkManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveChunkManagercLcLiterator(void *p) {
      delete (static_cast<::TEveChunkManager::iterator*>(p));
   }
   static void deleteArray_TEveChunkManagercLcLiterator(void *p) {
      delete [] (static_cast<::TEveChunkManager::iterator*>(p));
   }
   static void destruct_TEveChunkManagercLcLiterator(void *p) {
      typedef ::TEveChunkManager::iterator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveChunkManager::iterator

//______________________________________________________________________________
void TEveCompound::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCompound.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCompound::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCompound::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCompound(void *p) {
      return  p ? new(p) ::TEveCompound : new ::TEveCompound;
   }
   static void *newArray_TEveCompound(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCompound[nElements] : new ::TEveCompound[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCompound(void *p) {
      delete (static_cast<::TEveCompound*>(p));
   }
   static void deleteArray_TEveCompound(void *p) {
      delete [] (static_cast<::TEveCompound*>(p));
   }
   static void destruct_TEveCompound(void *p) {
      typedef ::TEveCompound current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCompound

//______________________________________________________________________________
void TEveCompoundProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCompoundProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCompoundProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCompoundProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCompoundProjected(void *p) {
      return  p ? new(p) ::TEveCompoundProjected : new ::TEveCompoundProjected;
   }
   static void *newArray_TEveCompoundProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCompoundProjected[nElements] : new ::TEveCompoundProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCompoundProjected(void *p) {
      delete (static_cast<::TEveCompoundProjected*>(p));
   }
   static void deleteArray_TEveCompoundProjected(void *p) {
      delete [] (static_cast<::TEveCompoundProjected*>(p));
   }
   static void destruct_TEveCompoundProjected(void *p) {
      typedef ::TEveCompoundProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCompoundProjected

//______________________________________________________________________________
void TEveElementEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveElementEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveElementEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveElementEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveElementEditor(void *p) {
      return  p ? new(p) ::TEveElementEditor : new ::TEveElementEditor;
   }
   static void *newArray_TEveElementEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveElementEditor[nElements] : new ::TEveElementEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveElementEditor(void *p) {
      delete (static_cast<::TEveElementEditor*>(p));
   }
   static void deleteArray_TEveElementEditor(void *p) {
      delete [] (static_cast<::TEveElementEditor*>(p));
   }
   static void destruct_TEveElementEditor(void *p) {
      typedef ::TEveElementEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveElementEditor

//______________________________________________________________________________
void TEveEventManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveEventManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveEventManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveEventManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveEventManager(void *p) {
      return  p ? new(p) ::TEveEventManager : new ::TEveEventManager;
   }
   static void *newArray_TEveEventManager(Long_t nElements, void *p) {
      return p ? new(p) ::TEveEventManager[nElements] : new ::TEveEventManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveEventManager(void *p) {
      delete (static_cast<::TEveEventManager*>(p));
   }
   static void deleteArray_TEveEventManager(void *p) {
      delete [] (static_cast<::TEveEventManager*>(p));
   }
   static void destruct_TEveEventManager(void *p) {
      typedef ::TEveEventManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveEventManager

//______________________________________________________________________________
void TEveGedEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGedEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGedEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGedEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGedEditor(void *p) {
      return  p ? new(p) ::TEveGedEditor : new ::TEveGedEditor;
   }
   static void *newArray_TEveGedEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGedEditor[nElements] : new ::TEveGedEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGedEditor(void *p) {
      delete (static_cast<::TEveGedEditor*>(p));
   }
   static void deleteArray_TEveGedEditor(void *p) {
      delete [] (static_cast<::TEveGedEditor*>(p));
   }
   static void destruct_TEveGedEditor(void *p) {
      typedef ::TEveGedEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGedEditor

//______________________________________________________________________________
void TEveGedNameFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGedNameFrame.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGedNameFrame::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGedNameFrame::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGedNameFrame(void *p) {
      return  p ? new(p) ::TEveGedNameFrame : new ::TEveGedNameFrame;
   }
   static void *newArray_TEveGedNameFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGedNameFrame[nElements] : new ::TEveGedNameFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGedNameFrame(void *p) {
      delete (static_cast<::TEveGedNameFrame*>(p));
   }
   static void deleteArray_TEveGedNameFrame(void *p) {
      delete [] (static_cast<::TEveGedNameFrame*>(p));
   }
   static void destruct_TEveGedNameFrame(void *p) {
      typedef ::TEveGedNameFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGedNameFrame

//______________________________________________________________________________
void TEveGedNameTextButton::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGedNameTextButton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGedNameTextButton::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGedNameTextButton::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGedNameTextButton(void *p) {
      delete (static_cast<::TEveGedNameTextButton*>(p));
   }
   static void deleteArray_TEveGedNameTextButton(void *p) {
      delete [] (static_cast<::TEveGedNameTextButton*>(p));
   }
   static void destruct_TEveGedNameTextButton(void *p) {
      typedef ::TEveGedNameTextButton current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGedNameTextButton

//______________________________________________________________________________
void TEveGValuatorBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGValuatorBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGValuatorBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGValuatorBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGValuatorBase(void *p) {
      delete (static_cast<::TEveGValuatorBase*>(p));
   }
   static void deleteArray_TEveGValuatorBase(void *p) {
      delete [] (static_cast<::TEveGValuatorBase*>(p));
   }
   static void destruct_TEveGValuatorBase(void *p) {
      typedef ::TEveGValuatorBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGValuatorBase

//______________________________________________________________________________
void TEveGValuator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGValuator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGValuator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGValuator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGValuator(void *p) {
      delete (static_cast<::TEveGValuator*>(p));
   }
   static void deleteArray_TEveGValuator(void *p) {
      delete [] (static_cast<::TEveGValuator*>(p));
   }
   static void destruct_TEveGValuator(void *p) {
      typedef ::TEveGValuator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGValuator

//______________________________________________________________________________
void TEveGDoubleValuator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGDoubleValuator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGDoubleValuator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGDoubleValuator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGDoubleValuator(void *p) {
      delete (static_cast<::TEveGDoubleValuator*>(p));
   }
   static void deleteArray_TEveGDoubleValuator(void *p) {
      delete [] (static_cast<::TEveGDoubleValuator*>(p));
   }
   static void destruct_TEveGDoubleValuator(void *p) {
      typedef ::TEveGDoubleValuator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGDoubleValuator

//______________________________________________________________________________
void TEveGTriVecValuator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGTriVecValuator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGTriVecValuator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGTriVecValuator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGTriVecValuator(void *p) {
      delete (static_cast<::TEveGTriVecValuator*>(p));
   }
   static void deleteArray_TEveGTriVecValuator(void *p) {
      delete [] (static_cast<::TEveGTriVecValuator*>(p));
   }
   static void destruct_TEveGTriVecValuator(void *p) {
      typedef ::TEveGTriVecValuator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGTriVecValuator

//______________________________________________________________________________
void TEveMacro::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveMacro.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveMacro::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveMacro::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveMacro(void *p) {
      return  p ? new(p) ::TEveMacro : new ::TEveMacro;
   }
   static void *newArray_TEveMacro(Long_t nElements, void *p) {
      return p ? new(p) ::TEveMacro[nElements] : new ::TEveMacro[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveMacro(void *p) {
      delete (static_cast<::TEveMacro*>(p));
   }
   static void deleteArray_TEveMacro(void *p) {
      delete [] (static_cast<::TEveMacro*>(p));
   }
   static void destruct_TEveMacro(void *p) {
      typedef ::TEveMacro current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveMacro

//______________________________________________________________________________
void TEveManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveManager::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveManager(void *p) {
      delete (static_cast<::TEveManager*>(p));
   }
   static void deleteArray_TEveManager(void *p) {
      delete [] (static_cast<::TEveManager*>(p));
   }
   static void destruct_TEveManager(void *p) {
      typedef ::TEveManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveManager

//______________________________________________________________________________
void TEveManager::TRedrawDisabler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveManager::TRedrawDisabler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveManager::TRedrawDisabler::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveManager::TRedrawDisabler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveManagercLcLTRedrawDisabler(void *p) {
      delete (static_cast<::TEveManager::TRedrawDisabler*>(p));
   }
   static void deleteArray_TEveManagercLcLTRedrawDisabler(void *p) {
      delete [] (static_cast<::TEveManager::TRedrawDisabler*>(p));
   }
   static void destruct_TEveManagercLcLTRedrawDisabler(void *p) {
      typedef ::TEveManager::TRedrawDisabler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveManager::TRedrawDisabler

//______________________________________________________________________________
void TEveManager::TExceptionHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveManager::TExceptionHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveManager::TExceptionHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveManager::TExceptionHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveManagercLcLTExceptionHandler(void *p) {
      return  p ? new(p) ::TEveManager::TExceptionHandler : new ::TEveManager::TExceptionHandler;
   }
   static void *newArray_TEveManagercLcLTExceptionHandler(Long_t nElements, void *p) {
      return p ? new(p) ::TEveManager::TExceptionHandler[nElements] : new ::TEveManager::TExceptionHandler[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveManagercLcLTExceptionHandler(void *p) {
      delete (static_cast<::TEveManager::TExceptionHandler*>(p));
   }
   static void deleteArray_TEveManagercLcLTExceptionHandler(void *p) {
      delete [] (static_cast<::TEveManager::TExceptionHandler*>(p));
   }
   static void destruct_TEveManagercLcLTExceptionHandler(void *p) {
      typedef ::TEveManager::TExceptionHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveManager::TExceptionHandler

//______________________________________________________________________________
void TEvePad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePad.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePad::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePad::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePad(void *p) {
      return  p ? new(p) ::TEvePad : new ::TEvePad;
   }
   static void *newArray_TEvePad(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePad[nElements] : new ::TEvePad[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePad(void *p) {
      delete (static_cast<::TEvePad*>(p));
   }
   static void deleteArray_TEvePad(void *p) {
      delete [] (static_cast<::TEvePad*>(p));
   }
   static void destruct_TEvePad(void *p) {
      typedef ::TEvePad current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePad

//______________________________________________________________________________
void TEveParamList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveParamList.

   TEveElement::Streamer(R__b);
   TNamed::Streamer(R__b);
   TQObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveParamList(void *p) {
      return  p ? new(p) ::TEveParamList : new ::TEveParamList;
   }
   static void *newArray_TEveParamList(Long_t nElements, void *p) {
      return p ? new(p) ::TEveParamList[nElements] : new ::TEveParamList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveParamList(void *p) {
      delete (static_cast<::TEveParamList*>(p));
   }
   static void deleteArray_TEveParamList(void *p) {
      delete [] (static_cast<::TEveParamList*>(p));
   }
   static void destruct_TEveParamList(void *p) {
      typedef ::TEveParamList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEveParamList(TBuffer &buf, void *obj) {
      ((::TEveParamList*)obj)->::TEveParamList::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEveParamList

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveParamListcLcLFloatConfig_t(void *p) {
      return  p ? new(p) ::TEveParamList::FloatConfig_t : new ::TEveParamList::FloatConfig_t;
   }
   static void *newArray_TEveParamListcLcLFloatConfig_t(Long_t nElements, void *p) {
      return p ? new(p) ::TEveParamList::FloatConfig_t[nElements] : new ::TEveParamList::FloatConfig_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveParamListcLcLFloatConfig_t(void *p) {
      delete (static_cast<::TEveParamList::FloatConfig_t*>(p));
   }
   static void deleteArray_TEveParamListcLcLFloatConfig_t(void *p) {
      delete [] (static_cast<::TEveParamList::FloatConfig_t*>(p));
   }
   static void destruct_TEveParamListcLcLFloatConfig_t(void *p) {
      typedef ::TEveParamList::FloatConfig_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveParamList::FloatConfig_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveParamListcLcLIntConfig_t(void *p) {
      return  p ? new(p) ::TEveParamList::IntConfig_t : new ::TEveParamList::IntConfig_t;
   }
   static void *newArray_TEveParamListcLcLIntConfig_t(Long_t nElements, void *p) {
      return p ? new(p) ::TEveParamList::IntConfig_t[nElements] : new ::TEveParamList::IntConfig_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveParamListcLcLIntConfig_t(void *p) {
      delete (static_cast<::TEveParamList::IntConfig_t*>(p));
   }
   static void deleteArray_TEveParamListcLcLIntConfig_t(void *p) {
      delete [] (static_cast<::TEveParamList::IntConfig_t*>(p));
   }
   static void destruct_TEveParamListcLcLIntConfig_t(void *p) {
      typedef ::TEveParamList::IntConfig_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveParamList::IntConfig_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveParamListcLcLBoolConfig_t(void *p) {
      return  p ? new(p) ::TEveParamList::BoolConfig_t : new ::TEveParamList::BoolConfig_t;
   }
   static void *newArray_TEveParamListcLcLBoolConfig_t(Long_t nElements, void *p) {
      return p ? new(p) ::TEveParamList::BoolConfig_t[nElements] : new ::TEveParamList::BoolConfig_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveParamListcLcLBoolConfig_t(void *p) {
      delete (static_cast<::TEveParamList::BoolConfig_t*>(p));
   }
   static void deleteArray_TEveParamListcLcLBoolConfig_t(void *p) {
      delete [] (static_cast<::TEveParamList::BoolConfig_t*>(p));
   }
   static void destruct_TEveParamListcLcLBoolConfig_t(void *p) {
      typedef ::TEveParamList::BoolConfig_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveParamList::BoolConfig_t

//______________________________________________________________________________
void TEveParamListEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveParamListEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveParamListEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveParamListEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveParamListEditor(void *p) {
      return  p ? new(p) ::TEveParamListEditor : new ::TEveParamListEditor;
   }
   static void *newArray_TEveParamListEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveParamListEditor[nElements] : new ::TEveParamListEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveParamListEditor(void *p) {
      delete (static_cast<::TEveParamListEditor*>(p));
   }
   static void deleteArray_TEveParamListEditor(void *p) {
      delete [] (static_cast<::TEveParamListEditor*>(p));
   }
   static void destruct_TEveParamListEditor(void *p) {
      typedef ::TEveParamListEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveParamListEditor

//______________________________________________________________________________
template <> void TEveVectorT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVectorT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVectorT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVectorT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVectorTlEfloatgR(void *p) {
      return  p ? new(p) ::TEveVectorT<float> : new ::TEveVectorT<float>;
   }
   static void *newArray_TEveVectorTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVectorT<float>[nElements] : new ::TEveVectorT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVectorTlEfloatgR(void *p) {
      delete (static_cast<::TEveVectorT<float>*>(p));
   }
   static void deleteArray_TEveVectorTlEfloatgR(void *p) {
      delete [] (static_cast<::TEveVectorT<float>*>(p));
   }
   static void destruct_TEveVectorTlEfloatgR(void *p) {
      typedef ::TEveVectorT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVectorT<float>

//______________________________________________________________________________
template <> void TEveVectorT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVectorT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVectorT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVectorT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVectorTlEdoublegR(void *p) {
      return  p ? new(p) ::TEveVectorT<double> : new ::TEveVectorT<double>;
   }
   static void *newArray_TEveVectorTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVectorT<double>[nElements] : new ::TEveVectorT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVectorTlEdoublegR(void *p) {
      delete (static_cast<::TEveVectorT<double>*>(p));
   }
   static void deleteArray_TEveVectorTlEdoublegR(void *p) {
      delete [] (static_cast<::TEveVectorT<double>*>(p));
   }
   static void destruct_TEveVectorTlEdoublegR(void *p) {
      typedef ::TEveVectorT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVectorT<double>

//______________________________________________________________________________
template <> void TEveVector4T<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVector4T<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVector4T<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVector4T<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVector4TlEfloatgR(void *p) {
      return  p ? new(p) ::TEveVector4T<float> : new ::TEveVector4T<float>;
   }
   static void *newArray_TEveVector4TlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVector4T<float>[nElements] : new ::TEveVector4T<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVector4TlEfloatgR(void *p) {
      delete (static_cast<::TEveVector4T<float>*>(p));
   }
   static void deleteArray_TEveVector4TlEfloatgR(void *p) {
      delete [] (static_cast<::TEveVector4T<float>*>(p));
   }
   static void destruct_TEveVector4TlEfloatgR(void *p) {
      typedef ::TEveVector4T<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVector4T<float>

//______________________________________________________________________________
template <> void TEveVector4T<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVector4T<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVector4T<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVector4T<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVector4TlEdoublegR(void *p) {
      return  p ? new(p) ::TEveVector4T<double> : new ::TEveVector4T<double>;
   }
   static void *newArray_TEveVector4TlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVector4T<double>[nElements] : new ::TEveVector4T<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVector4TlEdoublegR(void *p) {
      delete (static_cast<::TEveVector4T<double>*>(p));
   }
   static void deleteArray_TEveVector4TlEdoublegR(void *p) {
      delete [] (static_cast<::TEveVector4T<double>*>(p));
   }
   static void destruct_TEveVector4TlEdoublegR(void *p) {
      typedef ::TEveVector4T<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVector4T<double>

//______________________________________________________________________________
template <> void TEveVector2T<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVector2T<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVector2T<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVector2T<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVector2TlEfloatgR(void *p) {
      return  p ? new(p) ::TEveVector2T<float> : new ::TEveVector2T<float>;
   }
   static void *newArray_TEveVector2TlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVector2T<float>[nElements] : new ::TEveVector2T<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVector2TlEfloatgR(void *p) {
      delete (static_cast<::TEveVector2T<float>*>(p));
   }
   static void deleteArray_TEveVector2TlEfloatgR(void *p) {
      delete [] (static_cast<::TEveVector2T<float>*>(p));
   }
   static void destruct_TEveVector2TlEfloatgR(void *p) {
      typedef ::TEveVector2T<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVector2T<float>

//______________________________________________________________________________
template <> void TEveVector2T<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVector2T<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVector2T<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVector2T<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVector2TlEdoublegR(void *p) {
      return  p ? new(p) ::TEveVector2T<double> : new ::TEveVector2T<double>;
   }
   static void *newArray_TEveVector2TlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVector2T<double>[nElements] : new ::TEveVector2T<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVector2TlEdoublegR(void *p) {
      delete (static_cast<::TEveVector2T<double>*>(p));
   }
   static void deleteArray_TEveVector2TlEdoublegR(void *p) {
      delete [] (static_cast<::TEveVector2T<double>*>(p));
   }
   static void destruct_TEveVector2TlEdoublegR(void *p) {
      typedef ::TEveVector2T<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVector2T<double>

//______________________________________________________________________________
template <> void TEvePathMarkT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePathMarkT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePathMarkT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePathMarkT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePathMarkTlEfloatgR(void *p) {
      return  p ? new(p) ::TEvePathMarkT<float> : new ::TEvePathMarkT<float>;
   }
   static void *newArray_TEvePathMarkTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePathMarkT<float>[nElements] : new ::TEvePathMarkT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePathMarkTlEfloatgR(void *p) {
      delete (static_cast<::TEvePathMarkT<float>*>(p));
   }
   static void deleteArray_TEvePathMarkTlEfloatgR(void *p) {
      delete [] (static_cast<::TEvePathMarkT<float>*>(p));
   }
   static void destruct_TEvePathMarkTlEfloatgR(void *p) {
      typedef ::TEvePathMarkT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePathMarkT<float>

//______________________________________________________________________________
template <> void TEvePathMarkT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePathMarkT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePathMarkT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePathMarkT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePathMarkTlEdoublegR(void *p) {
      return  p ? new(p) ::TEvePathMarkT<double> : new ::TEvePathMarkT<double>;
   }
   static void *newArray_TEvePathMarkTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePathMarkT<double>[nElements] : new ::TEvePathMarkT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePathMarkTlEdoublegR(void *p) {
      delete (static_cast<::TEvePathMarkT<double>*>(p));
   }
   static void deleteArray_TEvePathMarkTlEdoublegR(void *p) {
      delete [] (static_cast<::TEvePathMarkT<double>*>(p));
   }
   static void destruct_TEvePathMarkTlEdoublegR(void *p) {
      typedef ::TEvePathMarkT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePathMarkT<double>

//______________________________________________________________________________
void TEveProjectionAxes::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjectionAxes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjectionAxes::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjectionAxes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveProjectionAxes(void *p) {
      delete (static_cast<::TEveProjectionAxes*>(p));
   }
   static void deleteArray_TEveProjectionAxes(void *p) {
      delete [] (static_cast<::TEveProjectionAxes*>(p));
   }
   static void destruct_TEveProjectionAxes(void *p) {
      typedef ::TEveProjectionAxes current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjectionAxes

//______________________________________________________________________________
void TEveProjectionAxesEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjectionAxesEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjectionAxesEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjectionAxesEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveProjectionAxesEditor(void *p) {
      return  p ? new(p) ::TEveProjectionAxesEditor : new ::TEveProjectionAxesEditor;
   }
   static void *newArray_TEveProjectionAxesEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveProjectionAxesEditor[nElements] : new ::TEveProjectionAxesEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveProjectionAxesEditor(void *p) {
      delete (static_cast<::TEveProjectionAxesEditor*>(p));
   }
   static void deleteArray_TEveProjectionAxesEditor(void *p) {
      delete [] (static_cast<::TEveProjectionAxesEditor*>(p));
   }
   static void destruct_TEveProjectionAxesEditor(void *p) {
      typedef ::TEveProjectionAxesEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjectionAxesEditor

//______________________________________________________________________________
void TEveProjectionAxesGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjectionAxesGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjectionAxesGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjectionAxesGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveProjectionAxesGL(void *p) {
      return  p ? new(p) ::TEveProjectionAxesGL : new ::TEveProjectionAxesGL;
   }
   static void *newArray_TEveProjectionAxesGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveProjectionAxesGL[nElements] : new ::TEveProjectionAxesGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveProjectionAxesGL(void *p) {
      delete (static_cast<::TEveProjectionAxesGL*>(p));
   }
   static void deleteArray_TEveProjectionAxesGL(void *p) {
      delete [] (static_cast<::TEveProjectionAxesGL*>(p));
   }
   static void destruct_TEveProjectionAxesGL(void *p) {
      typedef ::TEveProjectionAxesGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjectionAxesGL

//______________________________________________________________________________
void TEveProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveProjection(void *p) {
      delete (static_cast<::TEveProjection*>(p));
   }
   static void deleteArray_TEveProjection(void *p) {
      delete [] (static_cast<::TEveProjection*>(p));
   }
   static void destruct_TEveProjection(void *p) {
      typedef ::TEveProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjection

//______________________________________________________________________________
void TEveProjection::PreScaleEntry_t::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjection::PreScaleEntry_t.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjection::PreScaleEntry_t::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjection::PreScaleEntry_t::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveProjectioncLcLPreScaleEntry_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TEveProjection::PreScaleEntry_t : new ::TEveProjection::PreScaleEntry_t;
   }
   static void *newArray_TEveProjectioncLcLPreScaleEntry_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TEveProjection::PreScaleEntry_t[nElements] : new ::TEveProjection::PreScaleEntry_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveProjectioncLcLPreScaleEntry_t(void *p) {
      delete (static_cast<::TEveProjection::PreScaleEntry_t*>(p));
   }
   static void deleteArray_TEveProjectioncLcLPreScaleEntry_t(void *p) {
      delete [] (static_cast<::TEveProjection::PreScaleEntry_t*>(p));
   }
   static void destruct_TEveProjectioncLcLPreScaleEntry_t(void *p) {
      typedef ::TEveProjection::PreScaleEntry_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjection::PreScaleEntry_t

//______________________________________________________________________________
void TEveRhoZProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRhoZProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRhoZProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRhoZProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRhoZProjection(void *p) {
      return  p ? new(p) ::TEveRhoZProjection : new ::TEveRhoZProjection;
   }
   static void *newArray_TEveRhoZProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRhoZProjection[nElements] : new ::TEveRhoZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRhoZProjection(void *p) {
      delete (static_cast<::TEveRhoZProjection*>(p));
   }
   static void deleteArray_TEveRhoZProjection(void *p) {
      delete [] (static_cast<::TEveRhoZProjection*>(p));
   }
   static void destruct_TEveRhoZProjection(void *p) {
      typedef ::TEveRhoZProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRhoZProjection

//______________________________________________________________________________
void TEveRPhiProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRPhiProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRPhiProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRPhiProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRPhiProjection(void *p) {
      return  p ? new(p) ::TEveRPhiProjection : new ::TEveRPhiProjection;
   }
   static void *newArray_TEveRPhiProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRPhiProjection[nElements] : new ::TEveRPhiProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRPhiProjection(void *p) {
      delete (static_cast<::TEveRPhiProjection*>(p));
   }
   static void deleteArray_TEveRPhiProjection(void *p) {
      delete [] (static_cast<::TEveRPhiProjection*>(p));
   }
   static void destruct_TEveRPhiProjection(void *p) {
      typedef ::TEveRPhiProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRPhiProjection

//______________________________________________________________________________
void TEveXZProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveXZProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveXZProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveXZProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveXZProjection(void *p) {
      return  p ? new(p) ::TEveXZProjection : new ::TEveXZProjection;
   }
   static void *newArray_TEveXZProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveXZProjection[nElements] : new ::TEveXZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveXZProjection(void *p) {
      delete (static_cast<::TEveXZProjection*>(p));
   }
   static void deleteArray_TEveXZProjection(void *p) {
      delete [] (static_cast<::TEveXZProjection*>(p));
   }
   static void destruct_TEveXZProjection(void *p) {
      typedef ::TEveXZProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveXZProjection

//______________________________________________________________________________
void TEveYZProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveYZProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveYZProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveYZProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveYZProjection(void *p) {
      return  p ? new(p) ::TEveYZProjection : new ::TEveYZProjection;
   }
   static void *newArray_TEveYZProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveYZProjection[nElements] : new ::TEveYZProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveYZProjection(void *p) {
      delete (static_cast<::TEveYZProjection*>(p));
   }
   static void deleteArray_TEveYZProjection(void *p) {
      delete [] (static_cast<::TEveYZProjection*>(p));
   }
   static void destruct_TEveYZProjection(void *p) {
      typedef ::TEveYZProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveYZProjection

//______________________________________________________________________________
void TEveZXProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveZXProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveZXProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveZXProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveZXProjection(void *p) {
      return  p ? new(p) ::TEveZXProjection : new ::TEveZXProjection;
   }
   static void *newArray_TEveZXProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveZXProjection[nElements] : new ::TEveZXProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveZXProjection(void *p) {
      delete (static_cast<::TEveZXProjection*>(p));
   }
   static void deleteArray_TEveZXProjection(void *p) {
      delete [] (static_cast<::TEveZXProjection*>(p));
   }
   static void destruct_TEveZXProjection(void *p) {
      typedef ::TEveZXProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveZXProjection

//______________________________________________________________________________
void TEveZYProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveZYProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveZYProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveZYProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveZYProjection(void *p) {
      return  p ? new(p) ::TEveZYProjection : new ::TEveZYProjection;
   }
   static void *newArray_TEveZYProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveZYProjection[nElements] : new ::TEveZYProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveZYProjection(void *p) {
      delete (static_cast<::TEveZYProjection*>(p));
   }
   static void deleteArray_TEveZYProjection(void *p) {
      delete [] (static_cast<::TEveZYProjection*>(p));
   }
   static void destruct_TEveZYProjection(void *p) {
      typedef ::TEveZYProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveZYProjection

//______________________________________________________________________________
void TEve3DProjection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEve3DProjection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEve3DProjection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEve3DProjection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEve3DProjection(void *p) {
      return  p ? new(p) ::TEve3DProjection : new ::TEve3DProjection;
   }
   static void *newArray_TEve3DProjection(Long_t nElements, void *p) {
      return p ? new(p) ::TEve3DProjection[nElements] : new ::TEve3DProjection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEve3DProjection(void *p) {
      delete (static_cast<::TEve3DProjection*>(p));
   }
   static void deleteArray_TEve3DProjection(void *p) {
      delete [] (static_cast<::TEve3DProjection*>(p));
   }
   static void destruct_TEve3DProjection(void *p) {
      typedef ::TEve3DProjection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEve3DProjection

//______________________________________________________________________________
void TEveProjectionManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjectionManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjectionManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjectionManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveProjectionManager(void *p) {
      return  p ? new(p) ::TEveProjectionManager : new ::TEveProjectionManager;
   }
   static void *newArray_TEveProjectionManager(Long_t nElements, void *p) {
      return p ? new(p) ::TEveProjectionManager[nElements] : new ::TEveProjectionManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveProjectionManager(void *p) {
      delete (static_cast<::TEveProjectionManager*>(p));
   }
   static void deleteArray_TEveProjectionManager(void *p) {
      delete [] (static_cast<::TEveProjectionManager*>(p));
   }
   static void destruct_TEveProjectionManager(void *p) {
      typedef ::TEveProjectionManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjectionManager

//______________________________________________________________________________
void TEveProjectionManagerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveProjectionManagerEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveProjectionManagerEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveProjectionManagerEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveProjectionManagerEditor(void *p) {
      return  p ? new(p) ::TEveProjectionManagerEditor : new ::TEveProjectionManagerEditor;
   }
   static void *newArray_TEveProjectionManagerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveProjectionManagerEditor[nElements] : new ::TEveProjectionManagerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveProjectionManagerEditor(void *p) {
      delete (static_cast<::TEveProjectionManagerEditor*>(p));
   }
   static void deleteArray_TEveProjectionManagerEditor(void *p) {
      delete [] (static_cast<::TEveProjectionManagerEditor*>(p));
   }
   static void destruct_TEveProjectionManagerEditor(void *p) {
      typedef ::TEveProjectionManagerEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveProjectionManagerEditor

//______________________________________________________________________________
void TEveScene::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveScene.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveScene::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveScene::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveScene(void *p) {
      return  p ? new(p) ::TEveScene : new ::TEveScene;
   }
   static void *newArray_TEveScene(Long_t nElements, void *p) {
      return p ? new(p) ::TEveScene[nElements] : new ::TEveScene[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveScene(void *p) {
      delete (static_cast<::TEveScene*>(p));
   }
   static void deleteArray_TEveScene(void *p) {
      delete [] (static_cast<::TEveScene*>(p));
   }
   static void destruct_TEveScene(void *p) {
      typedef ::TEveScene current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveScene

//______________________________________________________________________________
void TEveSceneList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveSceneList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveSceneList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveSceneList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveSceneList(void *p) {
      return  p ? new(p) ::TEveSceneList : new ::TEveSceneList;
   }
   static void *newArray_TEveSceneList(Long_t nElements, void *p) {
      return p ? new(p) ::TEveSceneList[nElements] : new ::TEveSceneList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveSceneList(void *p) {
      delete (static_cast<::TEveSceneList*>(p));
   }
   static void deleteArray_TEveSceneList(void *p) {
      delete [] (static_cast<::TEveSceneList*>(p));
   }
   static void destruct_TEveSceneList(void *p) {
      typedef ::TEveSceneList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveSceneList

//______________________________________________________________________________
void TEveSceneInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveSceneInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveSceneInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveSceneInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveSceneInfo(void *p) {
      delete (static_cast<::TEveSceneInfo*>(p));
   }
   static void deleteArray_TEveSceneInfo(void *p) {
      delete [] (static_cast<::TEveSceneInfo*>(p));
   }
   static void destruct_TEveSceneInfo(void *p) {
      typedef ::TEveSceneInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveSceneInfo

//______________________________________________________________________________
void TEveSecondarySelectable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveSecondarySelectable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveSecondarySelectable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveSecondarySelectable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveSecondarySelectable(void *p) {
      return  p ? new(p) ::TEveSecondarySelectable : new ::TEveSecondarySelectable;
   }
   static void *newArray_TEveSecondarySelectable(Long_t nElements, void *p) {
      return p ? new(p) ::TEveSecondarySelectable[nElements] : new ::TEveSecondarySelectable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveSecondarySelectable(void *p) {
      delete (static_cast<::TEveSecondarySelectable*>(p));
   }
   static void deleteArray_TEveSecondarySelectable(void *p) {
      delete [] (static_cast<::TEveSecondarySelectable*>(p));
   }
   static void destruct_TEveSecondarySelectable(void *p) {
      typedef ::TEveSecondarySelectable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveSecondarySelectable

//______________________________________________________________________________
void TEveSelection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveSelection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveSelection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveSelection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveSelection(void *p) {
      return  p ? new(p) ::TEveSelection : new ::TEveSelection;
   }
   static void *newArray_TEveSelection(Long_t nElements, void *p) {
      return p ? new(p) ::TEveSelection[nElements] : new ::TEveSelection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveSelection(void *p) {
      delete (static_cast<::TEveSelection*>(p));
   }
   static void deleteArray_TEveSelection(void *p) {
      delete [] (static_cast<::TEveSelection*>(p));
   }
   static void destruct_TEveSelection(void *p) {
      typedef ::TEveSelection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveSelection

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrans(void *p) {
      return  p ? new(p) ::TEveTrans : new ::TEveTrans;
   }
   static void *newArray_TEveTrans(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrans[nElements] : new ::TEveTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrans(void *p) {
      delete (static_cast<::TEveTrans*>(p));
   }
   static void deleteArray_TEveTrans(void *p) {
      delete [] (static_cast<::TEveTrans*>(p));
   }
   static void destruct_TEveTrans(void *p) {
      typedef ::TEveTrans current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEveTrans(TBuffer &buf, void *obj) {
      ((::TEveTrans*)obj)->::TEveTrans::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEveTrans

//______________________________________________________________________________
void TEveTransSubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTransSubEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTransSubEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTransSubEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveTransSubEditor(void *p) {
      delete (static_cast<::TEveTransSubEditor*>(p));
   }
   static void deleteArray_TEveTransSubEditor(void *p) {
      delete [] (static_cast<::TEveTransSubEditor*>(p));
   }
   static void destruct_TEveTransSubEditor(void *p) {
      typedef ::TEveTransSubEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTransSubEditor

//______________________________________________________________________________
void TEveTransEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTransEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTransEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTransEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTransEditor(void *p) {
      return  p ? new(p) ::TEveTransEditor : new ::TEveTransEditor;
   }
   static void *newArray_TEveTransEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTransEditor[nElements] : new ::TEveTransEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTransEditor(void *p) {
      delete (static_cast<::TEveTransEditor*>(p));
   }
   static void deleteArray_TEveTransEditor(void *p) {
      delete [] (static_cast<::TEveTransEditor*>(p));
   }
   static void destruct_TEveTransEditor(void *p) {
      typedef ::TEveTransEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTransEditor

//______________________________________________________________________________
void TEveSelectorToEventList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveSelectorToEventList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveSelectorToEventList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveSelectorToEventList::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveSelectorToEventList(void *p) {
      delete (static_cast<::TEveSelectorToEventList*>(p));
   }
   static void deleteArray_TEveSelectorToEventList(void *p) {
      delete [] (static_cast<::TEveSelectorToEventList*>(p));
   }
   static void destruct_TEveSelectorToEventList(void *p) {
      typedef ::TEveSelectorToEventList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveSelectorToEventList

//______________________________________________________________________________
void TEvePointSelectorConsumer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePointSelectorConsumer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePointSelectorConsumer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePointSelectorConsumer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEvePointSelectorConsumer(void *p) {
      delete (static_cast<::TEvePointSelectorConsumer*>(p));
   }
   static void deleteArray_TEvePointSelectorConsumer(void *p) {
      delete [] (static_cast<::TEvePointSelectorConsumer*>(p));
   }
   static void destruct_TEvePointSelectorConsumer(void *p) {
      typedef ::TEvePointSelectorConsumer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePointSelectorConsumer

//______________________________________________________________________________
void TEvePointSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePointSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePointSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePointSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePointSelector(void *p) {
      return  p ? new(p) ::TEvePointSelector : new ::TEvePointSelector;
   }
   static void *newArray_TEvePointSelector(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePointSelector[nElements] : new ::TEvePointSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePointSelector(void *p) {
      delete (static_cast<::TEvePointSelector*>(p));
   }
   static void deleteArray_TEvePointSelector(void *p) {
      delete [] (static_cast<::TEvePointSelector*>(p));
   }
   static void destruct_TEvePointSelector(void *p) {
      typedef ::TEvePointSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePointSelector

//______________________________________________________________________________
void TEveCompositeFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCompositeFrame.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCompositeFrame::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCompositeFrame::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCompositeFrame(void *p) {
      delete (static_cast<::TEveCompositeFrame*>(p));
   }
   static void deleteArray_TEveCompositeFrame(void *p) {
      delete [] (static_cast<::TEveCompositeFrame*>(p));
   }
   static void destruct_TEveCompositeFrame(void *p) {
      typedef ::TEveCompositeFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCompositeFrame

//______________________________________________________________________________
void TEveCompositeFrameInMainFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCompositeFrameInMainFrame.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCompositeFrameInMainFrame::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCompositeFrameInMainFrame::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCompositeFrameInMainFrame(void *p) {
      delete (static_cast<::TEveCompositeFrameInMainFrame*>(p));
   }
   static void deleteArray_TEveCompositeFrameInMainFrame(void *p) {
      delete [] (static_cast<::TEveCompositeFrameInMainFrame*>(p));
   }
   static void destruct_TEveCompositeFrameInMainFrame(void *p) {
      typedef ::TEveCompositeFrameInMainFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCompositeFrameInMainFrame

//______________________________________________________________________________
void TEveCompositeFrameInPack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCompositeFrameInPack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCompositeFrameInPack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCompositeFrameInPack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCompositeFrameInPack(void *p) {
      delete (static_cast<::TEveCompositeFrameInPack*>(p));
   }
   static void deleteArray_TEveCompositeFrameInPack(void *p) {
      delete [] (static_cast<::TEveCompositeFrameInPack*>(p));
   }
   static void destruct_TEveCompositeFrameInPack(void *p) {
      typedef ::TEveCompositeFrameInPack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCompositeFrameInPack

//______________________________________________________________________________
void TEveCompositeFrameInTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCompositeFrameInTab.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCompositeFrameInTab::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCompositeFrameInTab::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCompositeFrameInTab(void *p) {
      delete (static_cast<::TEveCompositeFrameInTab*>(p));
   }
   static void deleteArray_TEveCompositeFrameInTab(void *p) {
      delete [] (static_cast<::TEveCompositeFrameInTab*>(p));
   }
   static void destruct_TEveCompositeFrameInTab(void *p) {
      typedef ::TEveCompositeFrameInTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCompositeFrameInTab

//______________________________________________________________________________
void TEveWindow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindow.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindow::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindow::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveWindow(void *p) {
      delete (static_cast<::TEveWindow*>(p));
   }
   static void deleteArray_TEveWindow(void *p) {
      delete [] (static_cast<::TEveWindow*>(p));
   }
   static void destruct_TEveWindow(void *p) {
      typedef ::TEveWindow current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindow

//______________________________________________________________________________
void TEveWindowSlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindowSlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindowSlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindowSlot::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveWindowSlot(void *p) {
      return  p ? new(p) ::TEveWindowSlot : new ::TEveWindowSlot;
   }
   static void *newArray_TEveWindowSlot(Long_t nElements, void *p) {
      return p ? new(p) ::TEveWindowSlot[nElements] : new ::TEveWindowSlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveWindowSlot(void *p) {
      delete (static_cast<::TEveWindowSlot*>(p));
   }
   static void deleteArray_TEveWindowSlot(void *p) {
      delete [] (static_cast<::TEveWindowSlot*>(p));
   }
   static void destruct_TEveWindowSlot(void *p) {
      typedef ::TEveWindowSlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindowSlot

//______________________________________________________________________________
void TEveWindowFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindowFrame.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindowFrame::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindowFrame::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveWindowFrame(void *p) {
      delete (static_cast<::TEveWindowFrame*>(p));
   }
   static void deleteArray_TEveWindowFrame(void *p) {
      delete [] (static_cast<::TEveWindowFrame*>(p));
   }
   static void destruct_TEveWindowFrame(void *p) {
      typedef ::TEveWindowFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindowFrame

//______________________________________________________________________________
void TEveWindowPack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindowPack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindowPack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindowPack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveWindowPack(void *p) {
      delete (static_cast<::TEveWindowPack*>(p));
   }
   static void deleteArray_TEveWindowPack(void *p) {
      delete [] (static_cast<::TEveWindowPack*>(p));
   }
   static void destruct_TEveWindowPack(void *p) {
      typedef ::TEveWindowPack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindowPack

//______________________________________________________________________________
void TEveWindowTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindowTab.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindowTab::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindowTab::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveWindowTab(void *p) {
      delete (static_cast<::TEveWindowTab*>(p));
   }
   static void deleteArray_TEveWindowTab(void *p) {
      delete [] (static_cast<::TEveWindowTab*>(p));
   }
   static void destruct_TEveWindowTab(void *p) {
      typedef ::TEveWindowTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindowTab

//______________________________________________________________________________
void TEveContextMenu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveContextMenu.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveContextMenu::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveContextMenu::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveContextMenu(void *p) {
      delete (static_cast<::TEveContextMenu*>(p));
   }
   static void deleteArray_TEveContextMenu(void *p) {
      delete [] (static_cast<::TEveContextMenu*>(p));
   }
   static void destruct_TEveContextMenu(void *p) {
      typedef ::TEveContextMenu current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveContextMenu

//______________________________________________________________________________
void TEveViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveViewer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveViewer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveViewer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveViewer(void *p) {
      return  p ? new(p) ::TEveViewer : new ::TEveViewer;
   }
   static void *newArray_TEveViewer(Long_t nElements, void *p) {
      return p ? new(p) ::TEveViewer[nElements] : new ::TEveViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveViewer(void *p) {
      delete (static_cast<::TEveViewer*>(p));
   }
   static void deleteArray_TEveViewer(void *p) {
      delete [] (static_cast<::TEveViewer*>(p));
   }
   static void destruct_TEveViewer(void *p) {
      typedef ::TEveViewer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveViewer

//______________________________________________________________________________
void TEveViewerList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveViewerList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveViewerList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveViewerList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveViewerList(void *p) {
      return  p ? new(p) ::TEveViewerList : new ::TEveViewerList;
   }
   static void *newArray_TEveViewerList(Long_t nElements, void *p) {
      return p ? new(p) ::TEveViewerList[nElements] : new ::TEveViewerList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveViewerList(void *p) {
      delete (static_cast<::TEveViewerList*>(p));
   }
   static void deleteArray_TEveViewerList(void *p) {
      delete [] (static_cast<::TEveViewerList*>(p));
   }
   static void destruct_TEveViewerList(void *p) {
      typedef ::TEveViewerList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveViewerList

//______________________________________________________________________________
void TEveViewerListEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveViewerListEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveViewerListEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveViewerListEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveViewerListEditor(void *p) {
      return  p ? new(p) ::TEveViewerListEditor : new ::TEveViewerListEditor;
   }
   static void *newArray_TEveViewerListEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveViewerListEditor[nElements] : new ::TEveViewerListEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveViewerListEditor(void *p) {
      delete (static_cast<::TEveViewerListEditor*>(p));
   }
   static void deleteArray_TEveViewerListEditor(void *p) {
      delete [] (static_cast<::TEveViewerListEditor*>(p));
   }
   static void destruct_TEveViewerListEditor(void *p) {
      typedef ::TEveViewerListEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveViewerListEditor

//______________________________________________________________________________
void TEveMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveMCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveMCTrack(void *p) {
      return  p ? new(p) ::TEveMCTrack : new ::TEveMCTrack;
   }
   static void *newArray_TEveMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TEveMCTrack[nElements] : new ::TEveMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveMCTrack(void *p) {
      delete (static_cast<::TEveMCTrack*>(p));
   }
   static void deleteArray_TEveMCTrack(void *p) {
      delete [] (static_cast<::TEveMCTrack*>(p));
   }
   static void destruct_TEveMCTrack(void *p) {
      typedef ::TEveMCTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveMCTrack

//______________________________________________________________________________
void TEveHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveHit(void *p) {
      return  p ? new(p) ::TEveHit : new ::TEveHit;
   }
   static void *newArray_TEveHit(Long_t nElements, void *p) {
      return p ? new(p) ::TEveHit[nElements] : new ::TEveHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveHit(void *p) {
      delete (static_cast<::TEveHit*>(p));
   }
   static void deleteArray_TEveHit(void *p) {
      delete [] (static_cast<::TEveHit*>(p));
   }
   static void destruct_TEveHit(void *p) {
      typedef ::TEveHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveHit

//______________________________________________________________________________
void TEveCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCluster(void *p) {
      return  p ? new(p) ::TEveCluster : new ::TEveCluster;
   }
   static void *newArray_TEveCluster(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCluster[nElements] : new ::TEveCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCluster(void *p) {
      delete (static_cast<::TEveCluster*>(p));
   }
   static void deleteArray_TEveCluster(void *p) {
      delete [] (static_cast<::TEveCluster*>(p));
   }
   static void destruct_TEveCluster(void *p) {
      typedef ::TEveCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCluster

//______________________________________________________________________________
template <> void TEveRecTrackT<float>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRecTrackT<float>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRecTrackT<float>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRecTrackT<float>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRecTrackTlEfloatgR(void *p) {
      return  p ? new(p) ::TEveRecTrackT<float> : new ::TEveRecTrackT<float>;
   }
   static void *newArray_TEveRecTrackTlEfloatgR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRecTrackT<float>[nElements] : new ::TEveRecTrackT<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRecTrackTlEfloatgR(void *p) {
      delete (static_cast<::TEveRecTrackT<float>*>(p));
   }
   static void deleteArray_TEveRecTrackTlEfloatgR(void *p) {
      delete [] (static_cast<::TEveRecTrackT<float>*>(p));
   }
   static void destruct_TEveRecTrackTlEfloatgR(void *p) {
      typedef ::TEveRecTrackT<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRecTrackT<float>

//______________________________________________________________________________
template <> void TEveRecTrackT<double>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRecTrackT<double>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRecTrackT<double>::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRecTrackT<double>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRecTrackTlEdoublegR(void *p) {
      return  p ? new(p) ::TEveRecTrackT<double> : new ::TEveRecTrackT<double>;
   }
   static void *newArray_TEveRecTrackTlEdoublegR(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRecTrackT<double>[nElements] : new ::TEveRecTrackT<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRecTrackTlEdoublegR(void *p) {
      delete (static_cast<::TEveRecTrackT<double>*>(p));
   }
   static void deleteArray_TEveRecTrackTlEdoublegR(void *p) {
      delete [] (static_cast<::TEveRecTrackT<double>*>(p));
   }
   static void destruct_TEveRecTrackTlEdoublegR(void *p) {
      typedef ::TEveRecTrackT<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRecTrackT<double>

//______________________________________________________________________________
void TEveRecKink::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRecKink.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRecKink::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRecKink::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRecKink(void *p) {
      return  p ? new(p) ::TEveRecKink : new ::TEveRecKink;
   }
   static void *newArray_TEveRecKink(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRecKink[nElements] : new ::TEveRecKink[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRecKink(void *p) {
      delete (static_cast<::TEveRecKink*>(p));
   }
   static void deleteArray_TEveRecKink(void *p) {
      delete [] (static_cast<::TEveRecKink*>(p));
   }
   static void destruct_TEveRecKink(void *p) {
      typedef ::TEveRecKink current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRecKink

//______________________________________________________________________________
void TEveRecV0::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRecV0.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRecV0::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRecV0::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRecV0(void *p) {
      return  p ? new(p) ::TEveRecV0 : new ::TEveRecV0;
   }
   static void *newArray_TEveRecV0(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRecV0[nElements] : new ::TEveRecV0[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRecV0(void *p) {
      delete (static_cast<::TEveRecV0*>(p));
   }
   static void deleteArray_TEveRecV0(void *p) {
      delete [] (static_cast<::TEveRecV0*>(p));
   }
   static void destruct_TEveRecV0(void *p) {
      typedef ::TEveRecV0 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRecV0

//______________________________________________________________________________
void TEveRecCascade::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRecCascade.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRecCascade::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRecCascade::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRecCascade(void *p) {
      return  p ? new(p) ::TEveRecCascade : new ::TEveRecCascade;
   }
   static void *newArray_TEveRecCascade(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRecCascade[nElements] : new ::TEveRecCascade[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRecCascade(void *p) {
      delete (static_cast<::TEveRecCascade*>(p));
   }
   static void deleteArray_TEveRecCascade(void *p) {
      delete [] (static_cast<::TEveRecCascade*>(p));
   }
   static void destruct_TEveRecCascade(void *p) {
      typedef ::TEveRecCascade current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRecCascade

//______________________________________________________________________________
void TEveMCRecCrossRef::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveMCRecCrossRef.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveMCRecCrossRef::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveMCRecCrossRef::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveMCRecCrossRef(void *p) {
      return  p ? new(p) ::TEveMCRecCrossRef : new ::TEveMCRecCrossRef;
   }
   static void *newArray_TEveMCRecCrossRef(Long_t nElements, void *p) {
      return p ? new(p) ::TEveMCRecCrossRef[nElements] : new ::TEveMCRecCrossRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveMCRecCrossRef(void *p) {
      delete (static_cast<::TEveMCRecCrossRef*>(p));
   }
   static void deleteArray_TEveMCRecCrossRef(void *p) {
      delete [] (static_cast<::TEveMCRecCrossRef*>(p));
   }
   static void destruct_TEveMCRecCrossRef(void *p) {
      typedef ::TEveMCRecCrossRef current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveMCRecCrossRef

//______________________________________________________________________________
void TEveVSD::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveVSD.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveVSD::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveVSD::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveVSD(void *p) {
      return  p ? new(p) ::TEveVSD : new ::TEveVSD;
   }
   static void *newArray_TEveVSD(Long_t nElements, void *p) {
      return p ? new(p) ::TEveVSD[nElements] : new ::TEveVSD[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveVSD(void *p) {
      delete (static_cast<::TEveVSD*>(p));
   }
   static void deleteArray_TEveVSD(void *p) {
      delete [] (static_cast<::TEveVSD*>(p));
   }
   static void destruct_TEveVSD(void *p) {
      typedef ::TEveVSD current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveVSD

//______________________________________________________________________________
void TEveWindowEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindowEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindowEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindowEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveWindowEditor(void *p) {
      return  p ? new(p) ::TEveWindowEditor : new ::TEveWindowEditor;
   }
   static void *newArray_TEveWindowEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveWindowEditor[nElements] : new ::TEveWindowEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveWindowEditor(void *p) {
      delete (static_cast<::TEveWindowEditor*>(p));
   }
   static void deleteArray_TEveWindowEditor(void *p) {
      delete [] (static_cast<::TEveWindowEditor*>(p));
   }
   static void destruct_TEveWindowEditor(void *p) {
      typedef ::TEveWindowEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindowEditor

//______________________________________________________________________________
void TEveWindowManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveWindowManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveWindowManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveWindowManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveWindowManager(void *p) {
      return  p ? new(p) ::TEveWindowManager : new ::TEveWindowManager;
   }
   static void *newArray_TEveWindowManager(Long_t nElements, void *p) {
      return p ? new(p) ::TEveWindowManager[nElements] : new ::TEveWindowManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveWindowManager(void *p) {
      delete (static_cast<::TEveWindowManager*>(p));
   }
   static void deleteArray_TEveWindowManager(void *p) {
      delete [] (static_cast<::TEveWindowManager*>(p));
   }
   static void destruct_TEveWindowManager(void *p) {
      typedef ::TEveWindowManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveWindowManager

//______________________________________________________________________________
void TEveArrowEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveArrowEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveArrowEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveArrowEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveArrowEditor(void *p) {
      return  p ? new(p) ::TEveArrowEditor : new ::TEveArrowEditor;
   }
   static void *newArray_TEveArrowEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveArrowEditor[nElements] : new ::TEveArrowEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveArrowEditor(void *p) {
      delete (static_cast<::TEveArrowEditor*>(p));
   }
   static void deleteArray_TEveArrowEditor(void *p) {
      delete [] (static_cast<::TEveArrowEditor*>(p));
   }
   static void destruct_TEveArrowEditor(void *p) {
      typedef ::TEveArrowEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveArrowEditor

//______________________________________________________________________________
void TEveArrowGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveArrowGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveArrowGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveArrowGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveArrowGL(void *p) {
      return  p ? new(p) ::TEveArrowGL : new ::TEveArrowGL;
   }
   static void *newArray_TEveArrowGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveArrowGL[nElements] : new ::TEveArrowGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveArrowGL(void *p) {
      delete (static_cast<::TEveArrowGL*>(p));
   }
   static void deleteArray_TEveArrowGL(void *p) {
      delete [] (static_cast<::TEveArrowGL*>(p));
   }
   static void destruct_TEveArrowGL(void *p) {
      typedef ::TEveArrowGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveArrowGL

//______________________________________________________________________________
void TEveArrow::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveArrow.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveArrow::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveArrow::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveArrow(void *p) {
      return  p ? new(p) ::TEveArrow : new ::TEveArrow;
   }
   static void *newArray_TEveArrow(Long_t nElements, void *p) {
      return p ? new(p) ::TEveArrow[nElements] : new ::TEveArrow[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveArrow(void *p) {
      delete (static_cast<::TEveArrow*>(p));
   }
   static void deleteArray_TEveArrow(void *p) {
      delete [] (static_cast<::TEveArrow*>(p));
   }
   static void destruct_TEveArrow(void *p) {
      typedef ::TEveArrow current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveArrow

//______________________________________________________________________________
void TEveBoxGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBoxGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBoxGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBoxGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveBoxGL(void *p) {
      return  p ? new(p) ::TEveBoxGL : new ::TEveBoxGL;
   }
   static void *newArray_TEveBoxGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveBoxGL[nElements] : new ::TEveBoxGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveBoxGL(void *p) {
      delete (static_cast<::TEveBoxGL*>(p));
   }
   static void deleteArray_TEveBoxGL(void *p) {
      delete [] (static_cast<::TEveBoxGL*>(p));
   }
   static void destruct_TEveBoxGL(void *p) {
      typedef ::TEveBoxGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBoxGL

//______________________________________________________________________________
void TEveBoxProjectedGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBoxProjectedGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBoxProjectedGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBoxProjectedGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveBoxProjectedGL(void *p) {
      return  p ? new(p) ::TEveBoxProjectedGL : new ::TEveBoxProjectedGL;
   }
   static void *newArray_TEveBoxProjectedGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveBoxProjectedGL[nElements] : new ::TEveBoxProjectedGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveBoxProjectedGL(void *p) {
      delete (static_cast<::TEveBoxProjectedGL*>(p));
   }
   static void deleteArray_TEveBoxProjectedGL(void *p) {
      delete [] (static_cast<::TEveBoxProjectedGL*>(p));
   }
   static void destruct_TEveBoxProjectedGL(void *p) {
      typedef ::TEveBoxProjectedGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBoxProjectedGL

//______________________________________________________________________________
void TEveShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveShape::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveShape(void *p) {
      delete (static_cast<::TEveShape*>(p));
   }
   static void deleteArray_TEveShape(void *p) {
      delete [] (static_cast<::TEveShape*>(p));
   }
   static void destruct_TEveShape(void *p) {
      typedef ::TEveShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveShape

//______________________________________________________________________________
void TEveBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveBox(void *p) {
      return  p ? new(p) ::TEveBox : new ::TEveBox;
   }
   static void *newArray_TEveBox(Long_t nElements, void *p) {
      return p ? new(p) ::TEveBox[nElements] : new ::TEveBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveBox(void *p) {
      delete (static_cast<::TEveBox*>(p));
   }
   static void deleteArray_TEveBox(void *p) {
      delete [] (static_cast<::TEveBox*>(p));
   }
   static void destruct_TEveBox(void *p) {
      typedef ::TEveBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBox

//______________________________________________________________________________
void TEveBoxProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBoxProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBoxProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBoxProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveBoxProjected(void *p) {
      return  p ? new(p) ::TEveBoxProjected : new ::TEveBoxProjected;
   }
   static void *newArray_TEveBoxProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveBoxProjected[nElements] : new ::TEveBoxProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveBoxProjected(void *p) {
      delete (static_cast<::TEveBoxProjected*>(p));
   }
   static void deleteArray_TEveBoxProjected(void *p) {
      delete [] (static_cast<::TEveBoxProjected*>(p));
   }
   static void destruct_TEveBoxProjected(void *p) {
      typedef ::TEveBoxProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBoxProjected

//______________________________________________________________________________
void TEveFrameBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveFrameBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveFrameBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveFrameBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveFrameBox(void *p) {
      return  p ? new(p) ::TEveFrameBox : new ::TEveFrameBox;
   }
   static void *newArray_TEveFrameBox(Long_t nElements, void *p) {
      return p ? new(p) ::TEveFrameBox[nElements] : new ::TEveFrameBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveFrameBox(void *p) {
      delete (static_cast<::TEveFrameBox*>(p));
   }
   static void deleteArray_TEveFrameBox(void *p) {
      delete [] (static_cast<::TEveFrameBox*>(p));
   }
   static void destruct_TEveFrameBox(void *p) {
      typedef ::TEveFrameBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveFrameBox

//______________________________________________________________________________
void TEveRGBAPalette::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRGBAPalette.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRGBAPalette::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRGBAPalette::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRGBAPalette(void *p) {
      return  p ? new(p) ::TEveRGBAPalette : new ::TEveRGBAPalette;
   }
   static void *newArray_TEveRGBAPalette(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRGBAPalette[nElements] : new ::TEveRGBAPalette[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRGBAPalette(void *p) {
      delete (static_cast<::TEveRGBAPalette*>(p));
   }
   static void deleteArray_TEveRGBAPalette(void *p) {
      delete [] (static_cast<::TEveRGBAPalette*>(p));
   }
   static void destruct_TEveRGBAPalette(void *p) {
      typedef ::TEveRGBAPalette current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRGBAPalette

//______________________________________________________________________________
void TEveDigitSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveDigitSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveDigitSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveDigitSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveDigitSet(void *p) {
      delete (static_cast<::TEveDigitSet*>(p));
   }
   static void deleteArray_TEveDigitSet(void *p) {
      delete [] (static_cast<::TEveDigitSet*>(p));
   }
   static void destruct_TEveDigitSet(void *p) {
      typedef ::TEveDigitSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveDigitSet

//______________________________________________________________________________
void TEveDigitSetGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveDigitSetGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveDigitSetGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveDigitSetGL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveDigitSetGL(void *p) {
      delete (static_cast<::TEveDigitSetGL*>(p));
   }
   static void deleteArray_TEveDigitSetGL(void *p) {
      delete [] (static_cast<::TEveDigitSetGL*>(p));
   }
   static void destruct_TEveDigitSetGL(void *p) {
      typedef ::TEveDigitSetGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveDigitSetGL

//______________________________________________________________________________
void TEveBoxSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBoxSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBoxSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBoxSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveBoxSet(void *p) {
      return  p ? new(p) ::TEveBoxSet : new ::TEveBoxSet;
   }
   static void *newArray_TEveBoxSet(Long_t nElements, void *p) {
      return p ? new(p) ::TEveBoxSet[nElements] : new ::TEveBoxSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveBoxSet(void *p) {
      delete (static_cast<::TEveBoxSet*>(p));
   }
   static void deleteArray_TEveBoxSet(void *p) {
      delete [] (static_cast<::TEveBoxSet*>(p));
   }
   static void destruct_TEveBoxSet(void *p) {
      typedef ::TEveBoxSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBoxSet

//______________________________________________________________________________
void TEveBoxSetGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveBoxSetGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveBoxSetGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveBoxSetGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveBoxSetGL(void *p) {
      return  p ? new(p) ::TEveBoxSetGL : new ::TEveBoxSetGL;
   }
   static void *newArray_TEveBoxSetGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveBoxSetGL[nElements] : new ::TEveBoxSetGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveBoxSetGL(void *p) {
      delete (static_cast<::TEveBoxSetGL*>(p));
   }
   static void deleteArray_TEveBoxSetGL(void *p) {
      delete [] (static_cast<::TEveBoxSetGL*>(p));
   }
   static void destruct_TEveBoxSetGL(void *p) {
      typedef ::TEveBoxSetGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveBoxSetGL

//______________________________________________________________________________
void TEveCaloData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloData::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloData::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCaloData(void *p) {
      delete (static_cast<::TEveCaloData*>(p));
   }
   static void deleteArray_TEveCaloData(void *p) {
      delete [] (static_cast<::TEveCaloData*>(p));
   }
   static void destruct_TEveCaloData(void *p) {
      typedef ::TEveCaloData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloData

//______________________________________________________________________________
void TEveCaloData::SliceInfo_t::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloData::SliceInfo_t.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloData::SliceInfo_t::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloData::SliceInfo_t::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloDatacLcLSliceInfo_t(void *p) {
      return  p ? new(p) ::TEveCaloData::SliceInfo_t : new ::TEveCaloData::SliceInfo_t;
   }
   static void *newArray_TEveCaloDatacLcLSliceInfo_t(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloData::SliceInfo_t[nElements] : new ::TEveCaloData::SliceInfo_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloDatacLcLSliceInfo_t(void *p) {
      delete (static_cast<::TEveCaloData::SliceInfo_t*>(p));
   }
   static void deleteArray_TEveCaloDatacLcLSliceInfo_t(void *p) {
      delete [] (static_cast<::TEveCaloData::SliceInfo_t*>(p));
   }
   static void destruct_TEveCaloDatacLcLSliceInfo_t(void *p) {
      typedef ::TEveCaloData::SliceInfo_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloData::SliceInfo_t

//______________________________________________________________________________
void TEveCaloDataVec::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloDataVec.

   TEveCaloData::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCaloDataVec(void *p) {
      delete (static_cast<::TEveCaloDataVec*>(p));
   }
   static void deleteArray_TEveCaloDataVec(void *p) {
      delete [] (static_cast<::TEveCaloDataVec*>(p));
   }
   static void destruct_TEveCaloDataVec(void *p) {
      typedef ::TEveCaloDataVec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEveCaloDataVec(TBuffer &buf, void *obj) {
      ((::TEveCaloDataVec*)obj)->::TEveCaloDataVec::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEveCaloDataVec

//______________________________________________________________________________
void TEveCaloDataHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloDataHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloDataHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloDataHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloDataHist(void *p) {
      return  p ? new(p) ::TEveCaloDataHist : new ::TEveCaloDataHist;
   }
   static void *newArray_TEveCaloDataHist(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloDataHist[nElements] : new ::TEveCaloDataHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloDataHist(void *p) {
      delete (static_cast<::TEveCaloDataHist*>(p));
   }
   static void deleteArray_TEveCaloDataHist(void *p) {
      delete [] (static_cast<::TEveCaloDataHist*>(p));
   }
   static void destruct_TEveCaloDataHist(void *p) {
      typedef ::TEveCaloDataHist current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloDataHist

//______________________________________________________________________________
void TEveCaloViz::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloViz.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloViz::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloViz::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveCaloViz(void *p) {
      delete (static_cast<::TEveCaloViz*>(p));
   }
   static void deleteArray_TEveCaloViz(void *p) {
      delete [] (static_cast<::TEveCaloViz*>(p));
   }
   static void destruct_TEveCaloViz(void *p) {
      typedef ::TEveCaloViz current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloViz

//______________________________________________________________________________
void TEveCalo3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCalo3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCalo3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCalo3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCalo3D(void *p) {
      return  p ? new(p) ::TEveCalo3D : new ::TEveCalo3D;
   }
   static void *newArray_TEveCalo3D(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCalo3D[nElements] : new ::TEveCalo3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCalo3D(void *p) {
      delete (static_cast<::TEveCalo3D*>(p));
   }
   static void deleteArray_TEveCalo3D(void *p) {
      delete [] (static_cast<::TEveCalo3D*>(p));
   }
   static void destruct_TEveCalo3D(void *p) {
      typedef ::TEveCalo3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCalo3D

//______________________________________________________________________________
void TEveCalo2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCalo2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCalo2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCalo2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCalo2D(void *p) {
      return  p ? new(p) ::TEveCalo2D : new ::TEveCalo2D;
   }
   static void *newArray_TEveCalo2D(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCalo2D[nElements] : new ::TEveCalo2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCalo2D(void *p) {
      delete (static_cast<::TEveCalo2D*>(p));
   }
   static void deleteArray_TEveCalo2D(void *p) {
      delete [] (static_cast<::TEveCalo2D*>(p));
   }
   static void destruct_TEveCalo2D(void *p) {
      typedef ::TEveCalo2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCalo2D

//______________________________________________________________________________
void TEveCaloLego::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloLego.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloLego::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloLego::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloLego(void *p) {
      return  p ? new(p) ::TEveCaloLego : new ::TEveCaloLego;
   }
   static void *newArray_TEveCaloLego(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloLego[nElements] : new ::TEveCaloLego[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloLego(void *p) {
      delete (static_cast<::TEveCaloLego*>(p));
   }
   static void deleteArray_TEveCaloLego(void *p) {
      delete [] (static_cast<::TEveCaloLego*>(p));
   }
   static void destruct_TEveCaloLego(void *p) {
      typedef ::TEveCaloLego current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloLego

//______________________________________________________________________________
void TEveCalo2DGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCalo2DGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCalo2DGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCalo2DGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCalo2DGL(void *p) {
      return  p ? new(p) ::TEveCalo2DGL : new ::TEveCalo2DGL;
   }
   static void *newArray_TEveCalo2DGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCalo2DGL[nElements] : new ::TEveCalo2DGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCalo2DGL(void *p) {
      delete (static_cast<::TEveCalo2DGL*>(p));
   }
   static void deleteArray_TEveCalo2DGL(void *p) {
      delete [] (static_cast<::TEveCalo2DGL*>(p));
   }
   static void destruct_TEveCalo2DGL(void *p) {
      typedef ::TEveCalo2DGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCalo2DGL

//______________________________________________________________________________
void TEveCalo3DGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCalo3DGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCalo3DGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCalo3DGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCalo3DGL(void *p) {
      return  p ? new(p) ::TEveCalo3DGL : new ::TEveCalo3DGL;
   }
   static void *newArray_TEveCalo3DGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCalo3DGL[nElements] : new ::TEveCalo3DGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCalo3DGL(void *p) {
      delete (static_cast<::TEveCalo3DGL*>(p));
   }
   static void deleteArray_TEveCalo3DGL(void *p) {
      delete [] (static_cast<::TEveCalo3DGL*>(p));
   }
   static void destruct_TEveCalo3DGL(void *p) {
      typedef ::TEveCalo3DGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCalo3DGL

//______________________________________________________________________________
void TEveCaloLegoEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloLegoEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloLegoEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloLegoEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloLegoEditor(void *p) {
      return  p ? new(p) ::TEveCaloLegoEditor : new ::TEveCaloLegoEditor;
   }
   static void *newArray_TEveCaloLegoEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloLegoEditor[nElements] : new ::TEveCaloLegoEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloLegoEditor(void *p) {
      delete (static_cast<::TEveCaloLegoEditor*>(p));
   }
   static void deleteArray_TEveCaloLegoEditor(void *p) {
      delete [] (static_cast<::TEveCaloLegoEditor*>(p));
   }
   static void destruct_TEveCaloLegoEditor(void *p) {
      typedef ::TEveCaloLegoEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloLegoEditor

//______________________________________________________________________________
void TEveCaloLegoGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloLegoGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloLegoGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloLegoGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloLegoGL(void *p) {
      return  p ? new(p) ::TEveCaloLegoGL : new ::TEveCaloLegoGL;
   }
   static void *newArray_TEveCaloLegoGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloLegoGL[nElements] : new ::TEveCaloLegoGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloLegoGL(void *p) {
      delete (static_cast<::TEveCaloLegoGL*>(p));
   }
   static void deleteArray_TEveCaloLegoGL(void *p) {
      delete [] (static_cast<::TEveCaloLegoGL*>(p));
   }
   static void destruct_TEveCaloLegoGL(void *p) {
      typedef ::TEveCaloLegoGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloLegoGL

//______________________________________________________________________________
void TEveCaloLegoOverlay::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloLegoOverlay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloLegoOverlay::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloLegoOverlay::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloLegoOverlay(void *p) {
      return  p ? new(p) ::TEveCaloLegoOverlay : new ::TEveCaloLegoOverlay;
   }
   static void *newArray_TEveCaloLegoOverlay(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloLegoOverlay[nElements] : new ::TEveCaloLegoOverlay[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloLegoOverlay(void *p) {
      delete (static_cast<::TEveCaloLegoOverlay*>(p));
   }
   static void deleteArray_TEveCaloLegoOverlay(void *p) {
      delete [] (static_cast<::TEveCaloLegoOverlay*>(p));
   }
   static void destruct_TEveCaloLegoOverlay(void *p) {
      typedef ::TEveCaloLegoOverlay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloLegoOverlay

//______________________________________________________________________________
void TEveCaloVizEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCaloVizEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCaloVizEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCaloVizEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCaloVizEditor(void *p) {
      return  p ? new(p) ::TEveCaloVizEditor : new ::TEveCaloVizEditor;
   }
   static void *newArray_TEveCaloVizEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCaloVizEditor[nElements] : new ::TEveCaloVizEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCaloVizEditor(void *p) {
      delete (static_cast<::TEveCaloVizEditor*>(p));
   }
   static void deleteArray_TEveCaloVizEditor(void *p) {
      delete [] (static_cast<::TEveCaloVizEditor*>(p));
   }
   static void destruct_TEveCaloVizEditor(void *p) {
      typedef ::TEveCaloVizEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCaloVizEditor

//______________________________________________________________________________
void TEveCalo3DEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveCalo3DEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveCalo3DEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveCalo3DEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveCalo3DEditor(void *p) {
      return  p ? new(p) ::TEveCalo3DEditor : new ::TEveCalo3DEditor;
   }
   static void *newArray_TEveCalo3DEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveCalo3DEditor[nElements] : new ::TEveCalo3DEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveCalo3DEditor(void *p) {
      delete (static_cast<::TEveCalo3DEditor*>(p));
   }
   static void deleteArray_TEveCalo3DEditor(void *p) {
      delete [] (static_cast<::TEveCalo3DEditor*>(p));
   }
   static void destruct_TEveCalo3DEditor(void *p) {
      typedef ::TEveCalo3DEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveCalo3DEditor

//______________________________________________________________________________
void TEveDigitSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveDigitSetEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveDigitSetEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveDigitSetEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveDigitSetEditor(void *p) {
      return  p ? new(p) ::TEveDigitSetEditor : new ::TEveDigitSetEditor;
   }
   static void *newArray_TEveDigitSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveDigitSetEditor[nElements] : new ::TEveDigitSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveDigitSetEditor(void *p) {
      delete (static_cast<::TEveDigitSetEditor*>(p));
   }
   static void deleteArray_TEveDigitSetEditor(void *p) {
      delete [] (static_cast<::TEveDigitSetEditor*>(p));
   }
   static void destruct_TEveDigitSetEditor(void *p) {
      typedef ::TEveDigitSetEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveDigitSetEditor

//______________________________________________________________________________
void TEveFrameBoxGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveFrameBoxGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveFrameBoxGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveFrameBoxGL::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveFrameBoxGL(void *p) {
      delete (static_cast<::TEveFrameBoxGL*>(p));
   }
   static void deleteArray_TEveFrameBoxGL(void *p) {
      delete [] (static_cast<::TEveFrameBoxGL*>(p));
   }
   static void destruct_TEveFrameBoxGL(void *p) {
      typedef ::TEveFrameBoxGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveFrameBoxGL

//______________________________________________________________________________
void TEveGeoNodeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoNodeEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoNodeEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoNodeEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoNodeEditor(void *p) {
      return  p ? new(p) ::TEveGeoNodeEditor : new ::TEveGeoNodeEditor;
   }
   static void *newArray_TEveGeoNodeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoNodeEditor[nElements] : new ::TEveGeoNodeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoNodeEditor(void *p) {
      delete (static_cast<::TEveGeoNodeEditor*>(p));
   }
   static void deleteArray_TEveGeoNodeEditor(void *p) {
      delete [] (static_cast<::TEveGeoNodeEditor*>(p));
   }
   static void destruct_TEveGeoNodeEditor(void *p) {
      typedef ::TEveGeoNodeEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoNodeEditor

//______________________________________________________________________________
void TEveGeoTopNodeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoTopNodeEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoTopNodeEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoTopNodeEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoTopNodeEditor(void *p) {
      return  p ? new(p) ::TEveGeoTopNodeEditor : new ::TEveGeoTopNodeEditor;
   }
   static void *newArray_TEveGeoTopNodeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoTopNodeEditor[nElements] : new ::TEveGeoTopNodeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoTopNodeEditor(void *p) {
      delete (static_cast<::TEveGeoTopNodeEditor*>(p));
   }
   static void deleteArray_TEveGeoTopNodeEditor(void *p) {
      delete [] (static_cast<::TEveGeoTopNodeEditor*>(p));
   }
   static void destruct_TEveGeoTopNodeEditor(void *p) {
      typedef ::TEveGeoTopNodeEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoTopNodeEditor

//______________________________________________________________________________
void TEveGeoNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoNode::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGeoNode(void *p) {
      delete (static_cast<::TEveGeoNode*>(p));
   }
   static void deleteArray_TEveGeoNode(void *p) {
      delete [] (static_cast<::TEveGeoNode*>(p));
   }
   static void destruct_TEveGeoNode(void *p) {
      typedef ::TEveGeoNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoNode

//______________________________________________________________________________
void TEveGeoTopNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoTopNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoTopNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoTopNode::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGeoTopNode(void *p) {
      delete (static_cast<::TEveGeoTopNode*>(p));
   }
   static void deleteArray_TEveGeoTopNode(void *p) {
      delete [] (static_cast<::TEveGeoTopNode*>(p));
   }
   static void destruct_TEveGeoTopNode(void *p) {
      typedef ::TEveGeoTopNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoTopNode

//______________________________________________________________________________
void TEveGeoPolyShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoPolyShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoPolyShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoPolyShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoPolyShape(void *p) {
      return  p ? new(p) ::TEveGeoPolyShape : new ::TEveGeoPolyShape;
   }
   static void *newArray_TEveGeoPolyShape(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoPolyShape[nElements] : new ::TEveGeoPolyShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoPolyShape(void *p) {
      delete (static_cast<::TEveGeoPolyShape*>(p));
   }
   static void deleteArray_TEveGeoPolyShape(void *p) {
      delete [] (static_cast<::TEveGeoPolyShape*>(p));
   }
   static void destruct_TEveGeoPolyShape(void *p) {
      typedef ::TEveGeoPolyShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoPolyShape

//______________________________________________________________________________
void TEveGeoShapeExtract::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoShapeExtract.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoShapeExtract::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoShapeExtract::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoShapeExtract(void *p) {
      return  p ? new(p) ::TEveGeoShapeExtract : new ::TEveGeoShapeExtract;
   }
   static void *newArray_TEveGeoShapeExtract(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoShapeExtract[nElements] : new ::TEveGeoShapeExtract[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoShapeExtract(void *p) {
      delete (static_cast<::TEveGeoShapeExtract*>(p));
   }
   static void deleteArray_TEveGeoShapeExtract(void *p) {
      delete [] (static_cast<::TEveGeoShapeExtract*>(p));
   }
   static void destruct_TEveGeoShapeExtract(void *p) {
      typedef ::TEveGeoShapeExtract current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoShapeExtract

//______________________________________________________________________________
void TEveGeoShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoShape(void *p) {
      return  p ? new(p) ::TEveGeoShape : new ::TEveGeoShape;
   }
   static void *newArray_TEveGeoShape(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoShape[nElements] : new ::TEveGeoShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoShape(void *p) {
      delete (static_cast<::TEveGeoShape*>(p));
   }
   static void deleteArray_TEveGeoShape(void *p) {
      delete [] (static_cast<::TEveGeoShape*>(p));
   }
   static void destruct_TEveGeoShape(void *p) {
      typedef ::TEveGeoShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoShape

//______________________________________________________________________________
void TEveGeoShapeProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGeoShapeProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGeoShapeProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGeoShapeProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGeoShapeProjected(void *p) {
      return  p ? new(p) ::TEveGeoShapeProjected : new ::TEveGeoShapeProjected;
   }
   static void *newArray_TEveGeoShapeProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGeoShapeProjected[nElements] : new ::TEveGeoShapeProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGeoShapeProjected(void *p) {
      delete (static_cast<::TEveGeoShapeProjected*>(p));
   }
   static void deleteArray_TEveGeoShapeProjected(void *p) {
      delete [] (static_cast<::TEveGeoShapeProjected*>(p));
   }
   static void destruct_TEveGeoShapeProjected(void *p) {
      typedef ::TEveGeoShapeProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGeoShapeProjected

//______________________________________________________________________________
void TEveGridStepperSubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGridStepperSubEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGridStepperSubEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGridStepperSubEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveGridStepperSubEditor(void *p) {
      delete (static_cast<::TEveGridStepperSubEditor*>(p));
   }
   static void deleteArray_TEveGridStepperSubEditor(void *p) {
      delete [] (static_cast<::TEveGridStepperSubEditor*>(p));
   }
   static void destruct_TEveGridStepperSubEditor(void *p) {
      typedef ::TEveGridStepperSubEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGridStepperSubEditor

//______________________________________________________________________________
void TEveGridStepperEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGridStepperEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGridStepperEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGridStepperEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGridStepperEditor(void *p) {
      return  p ? new(p) ::TEveGridStepperEditor : new ::TEveGridStepperEditor;
   }
   static void *newArray_TEveGridStepperEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGridStepperEditor[nElements] : new ::TEveGridStepperEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGridStepperEditor(void *p) {
      delete (static_cast<::TEveGridStepperEditor*>(p));
   }
   static void deleteArray_TEveGridStepperEditor(void *p) {
      delete [] (static_cast<::TEveGridStepperEditor*>(p));
   }
   static void destruct_TEveGridStepperEditor(void *p) {
      typedef ::TEveGridStepperEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGridStepperEditor

//______________________________________________________________________________
void TEveGridStepper::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveGridStepper.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveGridStepper::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveGridStepper::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveGridStepper(void *p) {
      return  p ? new(p) ::TEveGridStepper : new ::TEveGridStepper;
   }
   static void *newArray_TEveGridStepper(Long_t nElements, void *p) {
      return p ? new(p) ::TEveGridStepper[nElements] : new ::TEveGridStepper[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveGridStepper(void *p) {
      delete (static_cast<::TEveGridStepper*>(p));
   }
   static void deleteArray_TEveGridStepper(void *p) {
      delete [] (static_cast<::TEveGridStepper*>(p));
   }
   static void destruct_TEveGridStepper(void *p) {
      typedef ::TEveGridStepper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveGridStepper

//______________________________________________________________________________
void TEveJetCone::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveJetCone.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveJetCone::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveJetCone::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveJetCone(void *p) {
      return  p ? new(p) ::TEveJetCone : new ::TEveJetCone;
   }
   static void *newArray_TEveJetCone(Long_t nElements, void *p) {
      return p ? new(p) ::TEveJetCone[nElements] : new ::TEveJetCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveJetCone(void *p) {
      delete (static_cast<::TEveJetCone*>(p));
   }
   static void deleteArray_TEveJetCone(void *p) {
      delete [] (static_cast<::TEveJetCone*>(p));
   }
   static void destruct_TEveJetCone(void *p) {
      typedef ::TEveJetCone current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveJetCone

//______________________________________________________________________________
void TEveJetConeProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveJetConeProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveJetConeProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveJetConeProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveJetConeProjected(void *p) {
      return  p ? new(p) ::TEveJetConeProjected : new ::TEveJetConeProjected;
   }
   static void *newArray_TEveJetConeProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveJetConeProjected[nElements] : new ::TEveJetConeProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveJetConeProjected(void *p) {
      delete (static_cast<::TEveJetConeProjected*>(p));
   }
   static void deleteArray_TEveJetConeProjected(void *p) {
      delete [] (static_cast<::TEveJetConeProjected*>(p));
   }
   static void destruct_TEveJetConeProjected(void *p) {
      typedef ::TEveJetConeProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveJetConeProjected

//______________________________________________________________________________
void TEveJetConeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveJetConeEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveJetConeEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveJetConeEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveJetConeEditor(void *p) {
      return  p ? new(p) ::TEveJetConeEditor : new ::TEveJetConeEditor;
   }
   static void *newArray_TEveJetConeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveJetConeEditor[nElements] : new ::TEveJetConeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveJetConeEditor(void *p) {
      delete (static_cast<::TEveJetConeEditor*>(p));
   }
   static void deleteArray_TEveJetConeEditor(void *p) {
      delete [] (static_cast<::TEveJetConeEditor*>(p));
   }
   static void destruct_TEveJetConeEditor(void *p) {
      typedef ::TEveJetConeEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveJetConeEditor

//______________________________________________________________________________
void TEveJetConeGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveJetConeGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveJetConeGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveJetConeGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveJetConeGL(void *p) {
      return  p ? new(p) ::TEveJetConeGL : new ::TEveJetConeGL;
   }
   static void *newArray_TEveJetConeGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveJetConeGL[nElements] : new ::TEveJetConeGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveJetConeGL(void *p) {
      delete (static_cast<::TEveJetConeGL*>(p));
   }
   static void deleteArray_TEveJetConeGL(void *p) {
      delete [] (static_cast<::TEveJetConeGL*>(p));
   }
   static void destruct_TEveJetConeGL(void *p) {
      typedef ::TEveJetConeGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveJetConeGL

//______________________________________________________________________________
void TEveJetConeProjectedGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveJetConeProjectedGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveJetConeProjectedGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveJetConeProjectedGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveJetConeProjectedGL(void *p) {
      return  p ? new(p) ::TEveJetConeProjectedGL : new ::TEveJetConeProjectedGL;
   }
   static void *newArray_TEveJetConeProjectedGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveJetConeProjectedGL[nElements] : new ::TEveJetConeProjectedGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveJetConeProjectedGL(void *p) {
      delete (static_cast<::TEveJetConeProjectedGL*>(p));
   }
   static void deleteArray_TEveJetConeProjectedGL(void *p) {
      delete [] (static_cast<::TEveJetConeProjectedGL*>(p));
   }
   static void destruct_TEveJetConeProjectedGL(void *p) {
      typedef ::TEveJetConeProjectedGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveJetConeProjectedGL

//______________________________________________________________________________
void TEveLegoEventHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveLegoEventHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveLegoEventHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveLegoEventHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveLegoEventHandler(void *p) {
      delete (static_cast<::TEveLegoEventHandler*>(p));
   }
   static void deleteArray_TEveLegoEventHandler(void *p) {
      delete [] (static_cast<::TEveLegoEventHandler*>(p));
   }
   static void destruct_TEveLegoEventHandler(void *p) {
      typedef ::TEveLegoEventHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveLegoEventHandler

//______________________________________________________________________________
void TEveLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveLineEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveLineEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveLineEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveLineEditor(void *p) {
      return  p ? new(p) ::TEveLineEditor : new ::TEveLineEditor;
   }
   static void *newArray_TEveLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveLineEditor[nElements] : new ::TEveLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveLineEditor(void *p) {
      delete (static_cast<::TEveLineEditor*>(p));
   }
   static void deleteArray_TEveLineEditor(void *p) {
      delete [] (static_cast<::TEveLineEditor*>(p));
   }
   static void destruct_TEveLineEditor(void *p) {
      typedef ::TEveLineEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveLineEditor

//______________________________________________________________________________
void TEveLineGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveLineGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveLineGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveLineGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveLineGL(void *p) {
      return  p ? new(p) ::TEveLineGL : new ::TEveLineGL;
   }
   static void *newArray_TEveLineGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveLineGL[nElements] : new ::TEveLineGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveLineGL(void *p) {
      delete (static_cast<::TEveLineGL*>(p));
   }
   static void deleteArray_TEveLineGL(void *p) {
      delete [] (static_cast<::TEveLineGL*>(p));
   }
   static void destruct_TEveLineGL(void *p) {
      typedef ::TEveLineGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveLineGL

//______________________________________________________________________________
void TEvePointSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePointSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePointSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePointSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePointSet(void *p) {
      return  p ? new(p) ::TEvePointSet : new ::TEvePointSet;
   }
   static void *newArray_TEvePointSet(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePointSet[nElements] : new ::TEvePointSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePointSet(void *p) {
      delete (static_cast<::TEvePointSet*>(p));
   }
   static void deleteArray_TEvePointSet(void *p) {
      delete [] (static_cast<::TEvePointSet*>(p));
   }
   static void destruct_TEvePointSet(void *p) {
      typedef ::TEvePointSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEvePointSet(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEvePointSet*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEvePointSet

//______________________________________________________________________________
void TEvePointSetArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePointSetArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePointSetArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePointSetArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePointSetArray(void *p) {
      return  p ? new(p) ::TEvePointSetArray : new ::TEvePointSetArray;
   }
   static void *newArray_TEvePointSetArray(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePointSetArray[nElements] : new ::TEvePointSetArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePointSetArray(void *p) {
      delete (static_cast<::TEvePointSetArray*>(p));
   }
   static void deleteArray_TEvePointSetArray(void *p) {
      delete [] (static_cast<::TEvePointSetArray*>(p));
   }
   static void destruct_TEvePointSetArray(void *p) {
      typedef ::TEvePointSetArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePointSetArray

//______________________________________________________________________________
void TEvePointSetProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePointSetProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePointSetProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePointSetProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePointSetProjected(void *p) {
      return  p ? new(p) ::TEvePointSetProjected : new ::TEvePointSetProjected;
   }
   static void *newArray_TEvePointSetProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePointSetProjected[nElements] : new ::TEvePointSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePointSetProjected(void *p) {
      delete (static_cast<::TEvePointSetProjected*>(p));
   }
   static void deleteArray_TEvePointSetProjected(void *p) {
      delete [] (static_cast<::TEvePointSetProjected*>(p));
   }
   static void destruct_TEvePointSetProjected(void *p) {
      typedef ::TEvePointSetProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEvePointSetProjected(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEvePointSetProjected*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEvePointSetProjected

//______________________________________________________________________________
void TEveLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveLine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveLine::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveLine::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveLine(void *p) {
      return  p ? new(p) ::TEveLine : new ::TEveLine;
   }
   static void *newArray_TEveLine(Long_t nElements, void *p) {
      return p ? new(p) ::TEveLine[nElements] : new ::TEveLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveLine(void *p) {
      delete (static_cast<::TEveLine*>(p));
   }
   static void deleteArray_TEveLine(void *p) {
      delete [] (static_cast<::TEveLine*>(p));
   }
   static void destruct_TEveLine(void *p) {
      typedef ::TEveLine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEveLine(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEveLine*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEveLine

//______________________________________________________________________________
void TEveLineProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveLineProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveLineProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveLineProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveLineProjected(void *p) {
      return  p ? new(p) ::TEveLineProjected : new ::TEveLineProjected;
   }
   static void *newArray_TEveLineProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveLineProjected[nElements] : new ::TEveLineProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveLineProjected(void *p) {
      delete (static_cast<::TEveLineProjected*>(p));
   }
   static void deleteArray_TEveLineProjected(void *p) {
      delete [] (static_cast<::TEveLineProjected*>(p));
   }
   static void destruct_TEveLineProjected(void *p) {
      typedef ::TEveLineProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEveLineProjected(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEveLineProjected*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEveLineProjected

//______________________________________________________________________________
void TEvePlot3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePlot3D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePlot3D::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePlot3D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePlot3D(void *p) {
      return  p ? new(p) ::TEvePlot3D : new ::TEvePlot3D;
   }
   static void *newArray_TEvePlot3D(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePlot3D[nElements] : new ::TEvePlot3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePlot3D(void *p) {
      delete (static_cast<::TEvePlot3D*>(p));
   }
   static void deleteArray_TEvePlot3D(void *p) {
      delete [] (static_cast<::TEvePlot3D*>(p));
   }
   static void destruct_TEvePlot3D(void *p) {
      typedef ::TEvePlot3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePlot3D

//______________________________________________________________________________
void TEvePlot3DGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePlot3DGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePlot3DGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePlot3DGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePlot3DGL(void *p) {
      return  p ? new(p) ::TEvePlot3DGL : new ::TEvePlot3DGL;
   }
   static void *newArray_TEvePlot3DGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePlot3DGL[nElements] : new ::TEvePlot3DGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePlot3DGL(void *p) {
      delete (static_cast<::TEvePlot3DGL*>(p));
   }
   static void deleteArray_TEvePlot3DGL(void *p) {
      delete [] (static_cast<::TEvePlot3DGL*>(p));
   }
   static void destruct_TEvePlot3DGL(void *p) {
      typedef ::TEvePlot3DGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePlot3DGL

//______________________________________________________________________________
void TEvePointSetArrayEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePointSetArrayEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePointSetArrayEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePointSetArrayEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePointSetArrayEditor(void *p) {
      return  p ? new(p) ::TEvePointSetArrayEditor : new ::TEvePointSetArrayEditor;
   }
   static void *newArray_TEvePointSetArrayEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePointSetArrayEditor[nElements] : new ::TEvePointSetArrayEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePointSetArrayEditor(void *p) {
      delete (static_cast<::TEvePointSetArrayEditor*>(p));
   }
   static void deleteArray_TEvePointSetArrayEditor(void *p) {
      delete [] (static_cast<::TEvePointSetArrayEditor*>(p));
   }
   static void destruct_TEvePointSetArrayEditor(void *p) {
      typedef ::TEvePointSetArrayEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePointSetArrayEditor

//______________________________________________________________________________
void TEvePolygonSetProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePolygonSetProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePolygonSetProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePolygonSetProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePolygonSetProjected(void *p) {
      return  p ? new(p) ::TEvePolygonSetProjected : new ::TEvePolygonSetProjected;
   }
   static void *newArray_TEvePolygonSetProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePolygonSetProjected[nElements] : new ::TEvePolygonSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePolygonSetProjected(void *p) {
      delete (static_cast<::TEvePolygonSetProjected*>(p));
   }
   static void deleteArray_TEvePolygonSetProjected(void *p) {
      delete [] (static_cast<::TEvePolygonSetProjected*>(p));
   }
   static void destruct_TEvePolygonSetProjected(void *p) {
      typedef ::TEvePolygonSetProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePolygonSetProjected

//______________________________________________________________________________
void TEvePolygonSetProjectedGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEvePolygonSetProjectedGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEvePolygonSetProjectedGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEvePolygonSetProjectedGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEvePolygonSetProjectedGL(void *p) {
      return  p ? new(p) ::TEvePolygonSetProjectedGL : new ::TEvePolygonSetProjectedGL;
   }
   static void *newArray_TEvePolygonSetProjectedGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEvePolygonSetProjectedGL[nElements] : new ::TEvePolygonSetProjectedGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEvePolygonSetProjectedGL(void *p) {
      delete (static_cast<::TEvePolygonSetProjectedGL*>(p));
   }
   static void deleteArray_TEvePolygonSetProjectedGL(void *p) {
      delete [] (static_cast<::TEvePolygonSetProjectedGL*>(p));
   }
   static void destruct_TEvePolygonSetProjectedGL(void *p) {
      typedef ::TEvePolygonSetProjectedGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEvePolygonSetProjectedGL

//______________________________________________________________________________
void TEveQuadSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveQuadSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveQuadSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveQuadSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveQuadSet(void *p) {
      return  p ? new(p) ::TEveQuadSet : new ::TEveQuadSet;
   }
   static void *newArray_TEveQuadSet(Long_t nElements, void *p) {
      return p ? new(p) ::TEveQuadSet[nElements] : new ::TEveQuadSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveQuadSet(void *p) {
      delete (static_cast<::TEveQuadSet*>(p));
   }
   static void deleteArray_TEveQuadSet(void *p) {
      delete [] (static_cast<::TEveQuadSet*>(p));
   }
   static void destruct_TEveQuadSet(void *p) {
      typedef ::TEveQuadSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveQuadSet

//______________________________________________________________________________
void TEveQuadSetGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveQuadSetGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveQuadSetGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveQuadSetGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveQuadSetGL(void *p) {
      return  p ? new(p) ::TEveQuadSetGL : new ::TEveQuadSetGL;
   }
   static void *newArray_TEveQuadSetGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveQuadSetGL[nElements] : new ::TEveQuadSetGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveQuadSetGL(void *p) {
      delete (static_cast<::TEveQuadSetGL*>(p));
   }
   static void deleteArray_TEveQuadSetGL(void *p) {
      delete [] (static_cast<::TEveQuadSetGL*>(p));
   }
   static void destruct_TEveQuadSetGL(void *p) {
      typedef ::TEveQuadSetGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveQuadSetGL

//______________________________________________________________________________
void TEveRGBAPaletteSubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRGBAPaletteSubEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRGBAPaletteSubEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRGBAPaletteSubEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveRGBAPaletteSubEditor(void *p) {
      delete (static_cast<::TEveRGBAPaletteSubEditor*>(p));
   }
   static void deleteArray_TEveRGBAPaletteSubEditor(void *p) {
      delete [] (static_cast<::TEveRGBAPaletteSubEditor*>(p));
   }
   static void destruct_TEveRGBAPaletteSubEditor(void *p) {
      typedef ::TEveRGBAPaletteSubEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRGBAPaletteSubEditor

//______________________________________________________________________________
void TEveRGBAPaletteEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRGBAPaletteEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRGBAPaletteEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRGBAPaletteEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveRGBAPaletteEditor(void *p) {
      return  p ? new(p) ::TEveRGBAPaletteEditor : new ::TEveRGBAPaletteEditor;
   }
   static void *newArray_TEveRGBAPaletteEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveRGBAPaletteEditor[nElements] : new ::TEveRGBAPaletteEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveRGBAPaletteEditor(void *p) {
      delete (static_cast<::TEveRGBAPaletteEditor*>(p));
   }
   static void deleteArray_TEveRGBAPaletteEditor(void *p) {
      delete [] (static_cast<::TEveRGBAPaletteEditor*>(p));
   }
   static void destruct_TEveRGBAPaletteEditor(void *p) {
      typedef ::TEveRGBAPaletteEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRGBAPaletteEditor

//______________________________________________________________________________
void TEveRGBAPaletteOverlay::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveRGBAPaletteOverlay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveRGBAPaletteOverlay::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveRGBAPaletteOverlay::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveRGBAPaletteOverlay(void *p) {
      delete (static_cast<::TEveRGBAPaletteOverlay*>(p));
   }
   static void deleteArray_TEveRGBAPaletteOverlay(void *p) {
      delete [] (static_cast<::TEveRGBAPaletteOverlay*>(p));
   }
   static void destruct_TEveRGBAPaletteOverlay(void *p) {
      typedef ::TEveRGBAPaletteOverlay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveRGBAPaletteOverlay

//______________________________________________________________________________
void TEveStraightLineSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveStraightLineSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveStraightLineSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveStraightLineSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveStraightLineSet(void *p) {
      return  p ? new(p) ::TEveStraightLineSet : new ::TEveStraightLineSet;
   }
   static void *newArray_TEveStraightLineSet(Long_t nElements, void *p) {
      return p ? new(p) ::TEveStraightLineSet[nElements] : new ::TEveStraightLineSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveStraightLineSet(void *p) {
      delete (static_cast<::TEveStraightLineSet*>(p));
   }
   static void deleteArray_TEveStraightLineSet(void *p) {
      delete [] (static_cast<::TEveStraightLineSet*>(p));
   }
   static void destruct_TEveStraightLineSet(void *p) {
      typedef ::TEveStraightLineSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveStraightLineSet

//______________________________________________________________________________
void TEveStraightLineSetProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveStraightLineSetProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveStraightLineSetProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveStraightLineSetProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveStraightLineSetProjected(void *p) {
      return  p ? new(p) ::TEveStraightLineSetProjected : new ::TEveStraightLineSetProjected;
   }
   static void *newArray_TEveStraightLineSetProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveStraightLineSetProjected[nElements] : new ::TEveStraightLineSetProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveStraightLineSetProjected(void *p) {
      delete (static_cast<::TEveStraightLineSetProjected*>(p));
   }
   static void deleteArray_TEveStraightLineSetProjected(void *p) {
      delete [] (static_cast<::TEveStraightLineSetProjected*>(p));
   }
   static void destruct_TEveStraightLineSetProjected(void *p) {
      typedef ::TEveStraightLineSetProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveStraightLineSetProjected

//______________________________________________________________________________
void TEveScalableStraightLineSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveScalableStraightLineSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveScalableStraightLineSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveScalableStraightLineSet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveScalableStraightLineSet(void *p) {
      return  p ? new(p) ::TEveScalableStraightLineSet : new ::TEveScalableStraightLineSet;
   }
   static void *newArray_TEveScalableStraightLineSet(Long_t nElements, void *p) {
      return p ? new(p) ::TEveScalableStraightLineSet[nElements] : new ::TEveScalableStraightLineSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveScalableStraightLineSet(void *p) {
      delete (static_cast<::TEveScalableStraightLineSet*>(p));
   }
   static void deleteArray_TEveScalableStraightLineSet(void *p) {
      delete [] (static_cast<::TEveScalableStraightLineSet*>(p));
   }
   static void destruct_TEveScalableStraightLineSet(void *p) {
      typedef ::TEveScalableStraightLineSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveScalableStraightLineSet

//______________________________________________________________________________
void TEveShapeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveShapeEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveShapeEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveShapeEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveShapeEditor(void *p) {
      return  p ? new(p) ::TEveShapeEditor : new ::TEveShapeEditor;
   }
   static void *newArray_TEveShapeEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveShapeEditor[nElements] : new ::TEveShapeEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveShapeEditor(void *p) {
      delete (static_cast<::TEveShapeEditor*>(p));
   }
   static void deleteArray_TEveShapeEditor(void *p) {
      delete [] (static_cast<::TEveShapeEditor*>(p));
   }
   static void destruct_TEveShapeEditor(void *p) {
      typedef ::TEveShapeEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveShapeEditor

//______________________________________________________________________________
void TEveStraightLineSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveStraightLineSetEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveStraightLineSetEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveStraightLineSetEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveStraightLineSetEditor(void *p) {
      return  p ? new(p) ::TEveStraightLineSetEditor : new ::TEveStraightLineSetEditor;
   }
   static void *newArray_TEveStraightLineSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveStraightLineSetEditor[nElements] : new ::TEveStraightLineSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveStraightLineSetEditor(void *p) {
      delete (static_cast<::TEveStraightLineSetEditor*>(p));
   }
   static void deleteArray_TEveStraightLineSetEditor(void *p) {
      delete [] (static_cast<::TEveStraightLineSetEditor*>(p));
   }
   static void destruct_TEveStraightLineSetEditor(void *p) {
      typedef ::TEveStraightLineSetEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveStraightLineSetEditor

//______________________________________________________________________________
void TEveStraightLineSetGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveStraightLineSetGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveStraightLineSetGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveStraightLineSetGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveStraightLineSetGL(void *p) {
      return  p ? new(p) ::TEveStraightLineSetGL : new ::TEveStraightLineSetGL;
   }
   static void *newArray_TEveStraightLineSetGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveStraightLineSetGL[nElements] : new ::TEveStraightLineSetGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveStraightLineSetGL(void *p) {
      delete (static_cast<::TEveStraightLineSetGL*>(p));
   }
   static void deleteArray_TEveStraightLineSetGL(void *p) {
      delete [] (static_cast<::TEveStraightLineSetGL*>(p));
   }
   static void destruct_TEveStraightLineSetGL(void *p) {
      typedef ::TEveStraightLineSetGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveStraightLineSetGL

//______________________________________________________________________________
void TEveText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveText.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveText::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveText::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveText(void *p) {
      return  p ? new(p) ::TEveText : new ::TEveText;
   }
   static void *newArray_TEveText(Long_t nElements, void *p) {
      return p ? new(p) ::TEveText[nElements] : new ::TEveText[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveText(void *p) {
      delete (static_cast<::TEveText*>(p));
   }
   static void deleteArray_TEveText(void *p) {
      delete [] (static_cast<::TEveText*>(p));
   }
   static void destruct_TEveText(void *p) {
      typedef ::TEveText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveText

//______________________________________________________________________________
void TEveTextEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTextEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTextEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTextEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTextEditor(void *p) {
      return  p ? new(p) ::TEveTextEditor : new ::TEveTextEditor;
   }
   static void *newArray_TEveTextEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTextEditor[nElements] : new ::TEveTextEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTextEditor(void *p) {
      delete (static_cast<::TEveTextEditor*>(p));
   }
   static void deleteArray_TEveTextEditor(void *p) {
      delete [] (static_cast<::TEveTextEditor*>(p));
   }
   static void destruct_TEveTextEditor(void *p) {
      typedef ::TEveTextEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTextEditor

//______________________________________________________________________________
void TEveTextGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTextGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTextGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTextGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTextGL(void *p) {
      return  p ? new(p) ::TEveTextGL : new ::TEveTextGL;
   }
   static void *newArray_TEveTextGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTextGL[nElements] : new ::TEveTextGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTextGL(void *p) {
      delete (static_cast<::TEveTextGL*>(p));
   }
   static void deleteArray_TEveTextGL(void *p) {
      delete [] (static_cast<::TEveTextGL*>(p));
   }
   static void destruct_TEveTextGL(void *p) {
      typedef ::TEveTextGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTextGL

//______________________________________________________________________________
void TEveTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrack(void *p) {
      return  p ? new(p) ::TEveTrack : new ::TEveTrack;
   }
   static void *newArray_TEveTrack(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrack[nElements] : new ::TEveTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrack(void *p) {
      delete (static_cast<::TEveTrack*>(p));
   }
   static void deleteArray_TEveTrack(void *p) {
      delete [] (static_cast<::TEveTrack*>(p));
   }
   static void destruct_TEveTrack(void *p) {
      typedef ::TEveTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEveTrack(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEveTrack*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEveTrack

//______________________________________________________________________________
void TEveTrackList::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackList::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackList(void *p) {
      return  p ? new(p) ::TEveTrackList : new ::TEveTrackList;
   }
   static void *newArray_TEveTrackList(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackList[nElements] : new ::TEveTrackList[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackList(void *p) {
      delete (static_cast<::TEveTrackList*>(p));
   }
   static void deleteArray_TEveTrackList(void *p) {
      delete [] (static_cast<::TEveTrackList*>(p));
   }
   static void destruct_TEveTrackList(void *p) {
      typedef ::TEveTrackList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackList

//______________________________________________________________________________
void TEveTrackEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackEditor(void *p) {
      return  p ? new(p) ::TEveTrackEditor : new ::TEveTrackEditor;
   }
   static void *newArray_TEveTrackEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackEditor[nElements] : new ::TEveTrackEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackEditor(void *p) {
      delete (static_cast<::TEveTrackEditor*>(p));
   }
   static void deleteArray_TEveTrackEditor(void *p) {
      delete [] (static_cast<::TEveTrackEditor*>(p));
   }
   static void destruct_TEveTrackEditor(void *p) {
      typedef ::TEveTrackEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackEditor

//______________________________________________________________________________
void TEveTrackListEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackListEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackListEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackListEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackListEditor(void *p) {
      return  p ? new(p) ::TEveTrackListEditor : new ::TEveTrackListEditor;
   }
   static void *newArray_TEveTrackListEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackListEditor[nElements] : new ::TEveTrackListEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackListEditor(void *p) {
      delete (static_cast<::TEveTrackListEditor*>(p));
   }
   static void deleteArray_TEveTrackListEditor(void *p) {
      delete [] (static_cast<::TEveTrackListEditor*>(p));
   }
   static void destruct_TEveTrackListEditor(void *p) {
      typedef ::TEveTrackListEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackListEditor

//______________________________________________________________________________
void TEveTrackGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackGL(void *p) {
      return  p ? new(p) ::TEveTrackGL : new ::TEveTrackGL;
   }
   static void *newArray_TEveTrackGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackGL[nElements] : new ::TEveTrackGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackGL(void *p) {
      delete (static_cast<::TEveTrackGL*>(p));
   }
   static void deleteArray_TEveTrackGL(void *p) {
      delete [] (static_cast<::TEveTrackGL*>(p));
   }
   static void destruct_TEveTrackGL(void *p) {
      typedef ::TEveTrackGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackGL

//______________________________________________________________________________
void TEveTrackProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackProjected(void *p) {
      return  p ? new(p) ::TEveTrackProjected : new ::TEveTrackProjected;
   }
   static void *newArray_TEveTrackProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackProjected[nElements] : new ::TEveTrackProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackProjected(void *p) {
      delete (static_cast<::TEveTrackProjected*>(p));
   }
   static void deleteArray_TEveTrackProjected(void *p) {
      delete [] (static_cast<::TEveTrackProjected*>(p));
   }
   static void destruct_TEveTrackProjected(void *p) {
      typedef ::TEveTrackProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TEveTrackProjected(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TEveTrackProjected*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TEveTrackProjected

//______________________________________________________________________________
void TEveTrackListProjected::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackListProjected.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackListProjected::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackListProjected::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackListProjected(void *p) {
      return  p ? new(p) ::TEveTrackListProjected : new ::TEveTrackListProjected;
   }
   static void *newArray_TEveTrackListProjected(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackListProjected[nElements] : new ::TEveTrackListProjected[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackListProjected(void *p) {
      delete (static_cast<::TEveTrackListProjected*>(p));
   }
   static void deleteArray_TEveTrackListProjected(void *p) {
      delete [] (static_cast<::TEveTrackListProjected*>(p));
   }
   static void destruct_TEveTrackListProjected(void *p) {
      typedef ::TEveTrackListProjected current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackListProjected

//______________________________________________________________________________
void TEveTrackProjectedGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackProjectedGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackProjectedGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackProjectedGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackProjectedGL(void *p) {
      return  p ? new(p) ::TEveTrackProjectedGL : new ::TEveTrackProjectedGL;
   }
   static void *newArray_TEveTrackProjectedGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackProjectedGL[nElements] : new ::TEveTrackProjectedGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackProjectedGL(void *p) {
      delete (static_cast<::TEveTrackProjectedGL*>(p));
   }
   static void deleteArray_TEveTrackProjectedGL(void *p) {
      delete [] (static_cast<::TEveTrackProjectedGL*>(p));
   }
   static void destruct_TEveTrackProjectedGL(void *p) {
      typedef ::TEveTrackProjectedGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackProjectedGL

//______________________________________________________________________________
void TEveMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveMagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveMagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveMagField::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveMagField(void *p) {
      return  p ? new(p) ::TEveMagField : new ::TEveMagField;
   }
   static void *newArray_TEveMagField(Long_t nElements, void *p) {
      return p ? new(p) ::TEveMagField[nElements] : new ::TEveMagField[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveMagField(void *p) {
      delete (static_cast<::TEveMagField*>(p));
   }
   static void deleteArray_TEveMagField(void *p) {
      delete [] (static_cast<::TEveMagField*>(p));
   }
   static void destruct_TEveMagField(void *p) {
      typedef ::TEveMagField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveMagField

//______________________________________________________________________________
void TEveMagFieldConst::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveMagFieldConst.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveMagFieldConst::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveMagFieldConst::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveMagFieldConst(void *p) {
      delete (static_cast<::TEveMagFieldConst*>(p));
   }
   static void deleteArray_TEveMagFieldConst(void *p) {
      delete [] (static_cast<::TEveMagFieldConst*>(p));
   }
   static void destruct_TEveMagFieldConst(void *p) {
      typedef ::TEveMagFieldConst current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveMagFieldConst

//______________________________________________________________________________
void TEveMagFieldDuo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveMagFieldDuo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveMagFieldDuo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveMagFieldDuo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveMagFieldDuo(void *p) {
      delete (static_cast<::TEveMagFieldDuo*>(p));
   }
   static void deleteArray_TEveMagFieldDuo(void *p) {
      delete [] (static_cast<::TEveMagFieldDuo*>(p));
   }
   static void destruct_TEveMagFieldDuo(void *p) {
      typedef ::TEveMagFieldDuo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveMagFieldDuo

//______________________________________________________________________________
void TEveTrackPropagator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackPropagator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackPropagator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackPropagator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackPropagator(void *p) {
      return  p ? new(p) ::TEveTrackPropagator : new ::TEveTrackPropagator;
   }
   static void *newArray_TEveTrackPropagator(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackPropagator[nElements] : new ::TEveTrackPropagator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackPropagator(void *p) {
      delete (static_cast<::TEveTrackPropagator*>(p));
   }
   static void deleteArray_TEveTrackPropagator(void *p) {
      delete [] (static_cast<::TEveTrackPropagator*>(p));
   }
   static void destruct_TEveTrackPropagator(void *p) {
      typedef ::TEveTrackPropagator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackPropagator

//______________________________________________________________________________
void TEveTrackPropagatorSubEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackPropagatorSubEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackPropagatorSubEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackPropagatorSubEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveTrackPropagatorSubEditor(void *p) {
      delete (static_cast<::TEveTrackPropagatorSubEditor*>(p));
   }
   static void deleteArray_TEveTrackPropagatorSubEditor(void *p) {
      delete [] (static_cast<::TEveTrackPropagatorSubEditor*>(p));
   }
   static void destruct_TEveTrackPropagatorSubEditor(void *p) {
      typedef ::TEveTrackPropagatorSubEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackPropagatorSubEditor

//______________________________________________________________________________
void TEveTrackPropagatorEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTrackPropagatorEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTrackPropagatorEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTrackPropagatorEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTrackPropagatorEditor(void *p) {
      return  p ? new(p) ::TEveTrackPropagatorEditor : new ::TEveTrackPropagatorEditor;
   }
   static void *newArray_TEveTrackPropagatorEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTrackPropagatorEditor[nElements] : new ::TEveTrackPropagatorEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTrackPropagatorEditor(void *p) {
      delete (static_cast<::TEveTrackPropagatorEditor*>(p));
   }
   static void deleteArray_TEveTrackPropagatorEditor(void *p) {
      delete [] (static_cast<::TEveTrackPropagatorEditor*>(p));
   }
   static void destruct_TEveTrackPropagatorEditor(void *p) {
      typedef ::TEveTrackPropagatorEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTrackPropagatorEditor

//______________________________________________________________________________
void TEveTriangleSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTriangleSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTriangleSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTriangleSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEveTriangleSet(void *p) {
      delete (static_cast<::TEveTriangleSet*>(p));
   }
   static void deleteArray_TEveTriangleSet(void *p) {
      delete [] (static_cast<::TEveTriangleSet*>(p));
   }
   static void destruct_TEveTriangleSet(void *p) {
      typedef ::TEveTriangleSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTriangleSet

//______________________________________________________________________________
void TEveTriangleSetEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTriangleSetEditor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTriangleSetEditor::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTriangleSetEditor::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTriangleSetEditor(void *p) {
      return  p ? new(p) ::TEveTriangleSetEditor : new ::TEveTriangleSetEditor;
   }
   static void *newArray_TEveTriangleSetEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTriangleSetEditor[nElements] : new ::TEveTriangleSetEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTriangleSetEditor(void *p) {
      delete (static_cast<::TEveTriangleSetEditor*>(p));
   }
   static void deleteArray_TEveTriangleSetEditor(void *p) {
      delete [] (static_cast<::TEveTriangleSetEditor*>(p));
   }
   static void destruct_TEveTriangleSetEditor(void *p) {
      typedef ::TEveTriangleSetEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTriangleSetEditor

//______________________________________________________________________________
void TEveTriangleSetGL::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEveTriangleSetGL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TEveTriangleSetGL::Class(),this);
   } else {
      R__b.WriteClassBuffer(TEveTriangleSetGL::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TEveTriangleSetGL(void *p) {
      return  p ? new(p) ::TEveTriangleSetGL : new ::TEveTriangleSetGL;
   }
   static void *newArray_TEveTriangleSetGL(Long_t nElements, void *p) {
      return p ? new(p) ::TEveTriangleSetGL[nElements] : new ::TEveTriangleSetGL[nElements];
   }
   // Wrapper around operator delete
   static void delete_TEveTriangleSetGL(void *p) {
      delete (static_cast<::TEveTriangleSetGL*>(p));
   }
   static void deleteArray_TEveTriangleSetGL(void *p) {
      delete [] (static_cast<::TEveTriangleSetGL*>(p));
   }
   static void destruct_TEveTriangleSetGL(void *p) {
      typedef ::TEveTriangleSetGL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TEveTriangleSetGL

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
   static TClass *vectorlETEveProjectioncLcLPreScaleEntry_tgR_Dictionary();
   static void vectorlETEveProjectioncLcLPreScaleEntry_tgR_TClassManip(TClass*);
   static void *new_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p = nullptr);
   static void *newArray_vectorlETEveProjectioncLcLPreScaleEntry_tgR(Long_t size, void *p);
   static void delete_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p);
   static void deleteArray_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p);
   static void destruct_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TEveProjection::PreScaleEntry_t>*)
   {
      vector<TEveProjection::PreScaleEntry_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TEveProjection::PreScaleEntry_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TEveProjection::PreScaleEntry_t>", -2, "functional", 86,
                  typeid(vector<TEveProjection::PreScaleEntry_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETEveProjectioncLcLPreScaleEntry_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TEveProjection::PreScaleEntry_t>) );
      instance.SetNew(&new_vectorlETEveProjectioncLcLPreScaleEntry_tgR);
      instance.SetNewArray(&newArray_vectorlETEveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDelete(&delete_vectorlETEveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlETEveProjectioncLcLPreScaleEntry_tgR);
      instance.SetDestructor(&destruct_vectorlETEveProjectioncLcLPreScaleEntry_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TEveProjection::PreScaleEntry_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TEveProjection::PreScaleEntry_t>","std::__1::vector<TEveProjection::PreScaleEntry_t, std::__1::allocator<TEveProjection::PreScaleEntry_t>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TEveProjection::PreScaleEntry_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETEveProjectioncLcLPreScaleEntry_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TEveProjection::PreScaleEntry_t>*>(nullptr))->GetClass();
      vectorlETEveProjectioncLcLPreScaleEntry_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETEveProjectioncLcLPreScaleEntry_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TEveProjection::PreScaleEntry_t> : new vector<TEveProjection::PreScaleEntry_t>;
   }
   static void *newArray_vectorlETEveProjectioncLcLPreScaleEntry_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TEveProjection::PreScaleEntry_t>[nElements] : new vector<TEveProjection::PreScaleEntry_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p) {
      delete (static_cast<vector<TEveProjection::PreScaleEntry_t>*>(p));
   }
   static void deleteArray_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p) {
      delete [] (static_cast<vector<TEveProjection::PreScaleEntry_t>*>(p));
   }
   static void destruct_vectorlETEveProjectioncLcLPreScaleEntry_tgR(void *p) {
      typedef vector<TEveProjection::PreScaleEntry_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TEveProjection::PreScaleEntry_t>

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
   static TClass *setlETEveElementmUgR_Dictionary();
   static void setlETEveElementmUgR_TClassManip(TClass*);
   static void *new_setlETEveElementmUgR(void *p = nullptr);
   static void *newArray_setlETEveElementmUgR(Long_t size, void *p);
   static void delete_setlETEveElementmUgR(void *p);
   static void deleteArray_setlETEveElementmUgR(void *p);
   static void destruct_setlETEveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<TEveElement*>*)
   {
      set<TEveElement*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<TEveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("set<TEveElement*>", -2, "set", 576,
                  typeid(set<TEveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlETEveElementmUgR_Dictionary, isa_proxy, 4,
                  sizeof(set<TEveElement*>) );
      instance.SetNew(&new_setlETEveElementmUgR);
      instance.SetNewArray(&newArray_setlETEveElementmUgR);
      instance.SetDelete(&delete_setlETEveElementmUgR);
      instance.SetDeleteArray(&deleteArray_setlETEveElementmUgR);
      instance.SetDestructor(&destruct_setlETEveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<TEveElement*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<TEveElement*>","std::__1::set<TEveElement*, std::__1::less<TEveElement*>, std::__1::allocator<TEveElement*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<TEveElement*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlETEveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<TEveElement*>*>(nullptr))->GetClass();
      setlETEveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void setlETEveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlETEveElementmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<TEveElement*> : new set<TEveElement*>;
   }
   static void *newArray_setlETEveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<TEveElement*>[nElements] : new set<TEveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlETEveElementmUgR(void *p) {
      delete (static_cast<set<TEveElement*>*>(p));
   }
   static void deleteArray_setlETEveElementmUgR(void *p) {
      delete [] (static_cast<set<TEveElement*>*>(p));
   }
   static void destruct_setlETEveElementmUgR(void *p) {
      typedef set<TEveElement*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<TEveElement*>

namespace ROOT {
   static TClass *listlETEveElementmUgR_Dictionary();
   static void listlETEveElementmUgR_TClassManip(TClass*);
   static void *new_listlETEveElementmUgR(void *p = nullptr);
   static void *newArray_listlETEveElementmUgR(Long_t size, void *p);
   static void delete_listlETEveElementmUgR(void *p);
   static void deleteArray_listlETEveElementmUgR(void *p);
   static void destruct_listlETEveElementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<TEveElement*>*)
   {
      list<TEveElement*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<TEveElement*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<TEveElement*>", -2, "list", 663,
                  typeid(list<TEveElement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlETEveElementmUgR_Dictionary, isa_proxy, 4,
                  sizeof(list<TEveElement*>) );
      instance.SetNew(&new_listlETEveElementmUgR);
      instance.SetNewArray(&newArray_listlETEveElementmUgR);
      instance.SetDelete(&delete_listlETEveElementmUgR);
      instance.SetDeleteArray(&deleteArray_listlETEveElementmUgR);
      instance.SetDestructor(&destruct_listlETEveElementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<TEveElement*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("list<TEveElement*>","std::__1::list<TEveElement*, std::__1::allocator<TEveElement*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const list<TEveElement*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlETEveElementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const list<TEveElement*>*>(nullptr))->GetClass();
      listlETEveElementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlETEveElementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlETEveElementmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<TEveElement*> : new list<TEveElement*>;
   }
   static void *newArray_listlETEveElementmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) list<TEveElement*>[nElements] : new list<TEveElement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlETEveElementmUgR(void *p) {
      delete (static_cast<list<TEveElement*>*>(p));
   }
   static void deleteArray_listlETEveElementmUgR(void *p) {
      delete [] (static_cast<list<TEveElement*>*>(p));
   }
   static void destruct_listlETEveElementmUgR(void *p) {
      typedef list<TEveElement*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class list<TEveElement*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libEve() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libEve) = RecordReadRules_libEve();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libEve));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libEve_Impl() {
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
      TROOT::RegisterModule("libEve",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libEve_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libEve_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libEve() {
  TriggerDictionaryInitialization_libEve_Impl();
}
