// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Geom
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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "TGDMLMatrix.h"
#include "TGeoArb8.h"
#include "TGeoAtt.h"
#include "TGeoBBox.h"
#include "TGeoBoolNode.h"
#include "TGeoBranchArray.h"
#include "TGeoBuilder.h"
#include "TGeoCache.h"
#include "TGeoColorScheme.h"
#include "TGeoCompositeShape.h"
#include "TGeoCone.h"
#include "TGeoElement.h"
#include "TGeoEltu.h"
#include "TGeoExtension.h"
#include "TGeoGlobalMagField.h"
#include "TGeoHalfSpace.h"
#include "TGeoHelix.h"
#include "TGeoHype.h"
#include "TGeoManager.h"
#include "TGeoMaterial.h"
#include "TGeoMatrix.h"
#include "TGeoMedium.h"
#include "TGeoNavigator.h"
#include "TGeoNode.h"
#include "TGeoOpticalSurface.h"
#include "TGeoPara.h"
#include "TGeoParaboloid.h"
#include "TGeoParallelWorld.h"
#include "TGeoPatternFinder.h"
#include "TGeoPcon.h"
#include "TGeoPgon.h"
#include "TGeoPhysicalConstants.h"
#include "TGeoPhysicalNode.h"
#include "TGeoPolygon.h"
#include "TGeoRCPtr.h"
#include "TGeoRegion.h"
#include "TGeoScaledShape.h"
#include "TGeoShape.h"
#include "TGeoShapeAssembly.h"
#include "TGeoSphere.h"
#include "TGeoStateInfo.h"
#include "TGeoSystemOfUnits.h"
#include "TGeoTorus.h"
#include "TGeoTrd1.h"
#include "TGeoTrd2.h"
#include "TGeoTube.h"
#include "TGeoUniformMagField.h"
#include "TGeoVolume.h"
#include "TGeoVoxelFinder.h"
#include "TGeoXtru.h"
#include "TGeoTessellated.h"
#include "TGeoVector3.h"
#include "TVirtualGeoConverter.h"
#include "TVirtualGeoChecker.h"
#include "TVirtualGeoPainter.h"
#include "TVirtualGeoTrack.h"
#include "TVirtualMagField.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *pairlE__thread_idcOintgR_Dictionary();
   static void pairlE__thread_idcOintgR_TClassManip(TClass*);
   static void *new_pairlE__thread_idcOintgR(void *p = nullptr);
   static void *newArray_pairlE__thread_idcOintgR(Long_t size, void *p);
   static void delete_pairlE__thread_idcOintgR(void *p);
   static void deleteArray_pairlE__thread_idcOintgR(void *p);
   static void destruct_pairlE__thread_idcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<__thread_id,int>*)
   {
      pair<__thread_id,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<__thread_id,int>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<__thread_id,int>", "algorithm", 63,
                  typeid(pair<__thread_id,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlE__thread_idcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<__thread_id,int>) );
      instance.SetNew(&new_pairlE__thread_idcOintgR);
      instance.SetNewArray(&newArray_pairlE__thread_idcOintgR);
      instance.SetDelete(&delete_pairlE__thread_idcOintgR);
      instance.SetDeleteArray(&deleteArray_pairlE__thread_idcOintgR);
      instance.SetDestructor(&destruct_pairlE__thread_idcOintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<__thread_id,int>","pair<std::thread::id,Int_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<__thread_id,int>","std::__1::pair<std::__1::__thread_id, int>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const pair<__thread_id,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlE__thread_idcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const pair<__thread_id,int>*>(nullptr))->GetClass();
      pairlE__thread_idcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlE__thread_idcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlE__thread_idcOTGeoNavigatorArraymUgR_Dictionary();
   static void pairlE__thread_idcOTGeoNavigatorArraymUgR_TClassManip(TClass*);
   static void *new_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p = nullptr);
   static void *newArray_pairlE__thread_idcOTGeoNavigatorArraymUgR(Long_t size, void *p);
   static void delete_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p);
   static void deleteArray_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p);
   static void destruct_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<__thread_id,TGeoNavigatorArray*>*)
   {
      pair<__thread_id,TGeoNavigatorArray*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<__thread_id,TGeoNavigatorArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<__thread_id,TGeoNavigatorArray*>", "algorithm", 63,
                  typeid(pair<__thread_id,TGeoNavigatorArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlE__thread_idcOTGeoNavigatorArraymUgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<__thread_id,TGeoNavigatorArray*>) );
      instance.SetNew(&new_pairlE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetNewArray(&newArray_pairlE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetDelete(&delete_pairlE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetDeleteArray(&deleteArray_pairlE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetDestructor(&destruct_pairlE__thread_idcOTGeoNavigatorArraymUgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<__thread_id,TGeoNavigatorArray*>","pair<std::thread::id,TGeoNavigatorArray*>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("pair<__thread_id,TGeoNavigatorArray*>","std::__1::pair<std::__1::__thread_id, TGeoNavigatorArray*>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const pair<__thread_id,TGeoNavigatorArray*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlE__thread_idcOTGeoNavigatorArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const pair<__thread_id,TGeoNavigatorArray*>*>(nullptr))->GetClass();
      pairlE__thread_idcOTGeoNavigatorArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlE__thread_idcOTGeoNavigatorArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGDMLMatrix(void *p = nullptr);
   static void *newArray_TGDMLMatrix(Long_t size, void *p);
   static void delete_TGDMLMatrix(void *p);
   static void deleteArray_TGDMLMatrix(void *p);
   static void destruct_TGDMLMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGDMLMatrix*)
   {
      ::TGDMLMatrix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGDMLMatrix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGDMLMatrix", ::TGDMLMatrix::Class_Version(), "TGDMLMatrix.h", 33,
                  typeid(::TGDMLMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGDMLMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGDMLMatrix) );
      instance.SetNew(&new_TGDMLMatrix);
      instance.SetNewArray(&newArray_TGDMLMatrix);
      instance.SetDelete(&delete_TGDMLMatrix);
      instance.SetDeleteArray(&deleteArray_TGDMLMatrix);
      instance.SetDestructor(&destruct_TGDMLMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGDMLMatrix*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGDMLMatrix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGDMLMatrix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoShape(void *p);
   static void deleteArray_TGeoShape(void *p);
   static void destruct_TGeoShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoShape*)
   {
      ::TGeoShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoShape", ::TGeoShape::Class_Version(), "TGeoShape.h", 25,
                  typeid(::TGeoShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoShape::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoShape) );
      instance.SetDelete(&delete_TGeoShape);
      instance.SetDeleteArray(&deleteArray_TGeoShape);
      instance.SetDestructor(&destruct_TGeoShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBBox(void *p = nullptr);
   static void *newArray_TGeoBBox(Long_t size, void *p);
   static void delete_TGeoBBox(void *p);
   static void deleteArray_TGeoBBox(void *p);
   static void destruct_TGeoBBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBBox*)
   {
      ::TGeoBBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBBox", ::TGeoBBox::Class_Version(), "TGeoBBox.h", 18,
                  typeid(::TGeoBBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBBox::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBBox) );
      instance.SetNew(&new_TGeoBBox);
      instance.SetNewArray(&newArray_TGeoBBox);
      instance.SetDelete(&delete_TGeoBBox);
      instance.SetDeleteArray(&deleteArray_TGeoBBox);
      instance.SetDestructor(&destruct_TGeoBBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoBBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoBBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoArb8(void *p = nullptr);
   static void *newArray_TGeoArb8(Long_t size, void *p);
   static void delete_TGeoArb8(void *p);
   static void deleteArray_TGeoArb8(void *p);
   static void destruct_TGeoArb8(void *p);
   static void streamer_TGeoArb8(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoArb8*)
   {
      ::TGeoArb8 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoArb8 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoArb8", ::TGeoArb8::Class_Version(), "TGeoArb8.h", 19,
                  typeid(::TGeoArb8), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoArb8::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoArb8) );
      instance.SetNew(&new_TGeoArb8);
      instance.SetNewArray(&newArray_TGeoArb8);
      instance.SetDelete(&delete_TGeoArb8);
      instance.SetDeleteArray(&deleteArray_TGeoArb8);
      instance.SetDestructor(&destruct_TGeoArb8);
      instance.SetStreamerFunc(&streamer_TGeoArb8);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoArb8*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoArb8*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoArb8*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrap(void *p = nullptr);
   static void *newArray_TGeoTrap(Long_t size, void *p);
   static void delete_TGeoTrap(void *p);
   static void deleteArray_TGeoTrap(void *p);
   static void destruct_TGeoTrap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrap*)
   {
      ::TGeoTrap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrap", ::TGeoTrap::Class_Version(), "TGeoArb8.h", 99,
                  typeid(::TGeoTrap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrap::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrap) );
      instance.SetNew(&new_TGeoTrap);
      instance.SetNewArray(&newArray_TGeoTrap);
      instance.SetDelete(&delete_TGeoTrap);
      instance.SetDeleteArray(&deleteArray_TGeoTrap);
      instance.SetDestructor(&destruct_TGeoTrap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrap*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTrap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTrap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGtra(void *p = nullptr);
   static void *newArray_TGeoGtra(Long_t size, void *p);
   static void delete_TGeoGtra(void *p);
   static void deleteArray_TGeoGtra(void *p);
   static void destruct_TGeoGtra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGtra*)
   {
      ::TGeoGtra *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGtra >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGtra", ::TGeoGtra::Class_Version(), "TGeoArb8.h", 153,
                  typeid(::TGeoGtra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGtra::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoGtra) );
      instance.SetNew(&new_TGeoGtra);
      instance.SetNewArray(&newArray_TGeoGtra);
      instance.SetDelete(&delete_TGeoGtra);
      instance.SetDeleteArray(&deleteArray_TGeoGtra);
      instance.SetDestructor(&destruct_TGeoGtra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGtra*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoGtra*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoGtra*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoAtt(void *p = nullptr);
   static void *newArray_TGeoAtt(Long_t size, void *p);
   static void delete_TGeoAtt(void *p);
   static void deleteArray_TGeoAtt(void *p);
   static void destruct_TGeoAtt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoAtt*)
   {
      ::TGeoAtt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoAtt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoAtt", ::TGeoAtt::Class_Version(), "TGeoAtt.h", 17,
                  typeid(::TGeoAtt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoAtt::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoAtt) );
      instance.SetNew(&new_TGeoAtt);
      instance.SetNewArray(&newArray_TGeoAtt);
      instance.SetDelete(&delete_TGeoAtt);
      instance.SetDeleteArray(&deleteArray_TGeoAtt);
      instance.SetDestructor(&destruct_TGeoAtt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoAtt*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoAtt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoAtt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoBoolNode(void *p);
   static void deleteArray_TGeoBoolNode(void *p);
   static void destruct_TGeoBoolNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBoolNode*)
   {
      ::TGeoBoolNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBoolNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBoolNode", ::TGeoBoolNode::Class_Version(), "TGeoBoolNode.h", 25,
                  typeid(::TGeoBoolNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBoolNode::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBoolNode) );
      instance.SetDelete(&delete_TGeoBoolNode);
      instance.SetDeleteArray(&deleteArray_TGeoBoolNode);
      instance.SetDestructor(&destruct_TGeoBoolNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBoolNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoBoolNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoBoolNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoUnion(void *p = nullptr);
   static void *newArray_TGeoUnion(Long_t size, void *p);
   static void delete_TGeoUnion(void *p);
   static void deleteArray_TGeoUnion(void *p);
   static void destruct_TGeoUnion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoUnion*)
   {
      ::TGeoUnion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoUnion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoUnion", ::TGeoUnion::Class_Version(), "TGeoBoolNode.h", 102,
                  typeid(::TGeoUnion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoUnion::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoUnion) );
      instance.SetNew(&new_TGeoUnion);
      instance.SetNewArray(&newArray_TGeoUnion);
      instance.SetDelete(&delete_TGeoUnion);
      instance.SetDeleteArray(&deleteArray_TGeoUnion);
      instance.SetDestructor(&destruct_TGeoUnion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoUnion*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoUnion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoUnion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoIntersection(void *p = nullptr);
   static void *newArray_TGeoIntersection(Long_t size, void *p);
   static void delete_TGeoIntersection(void *p);
   static void deleteArray_TGeoIntersection(void *p);
   static void destruct_TGeoIntersection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIntersection*)
   {
      ::TGeoIntersection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIntersection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIntersection", ::TGeoIntersection::Class_Version(), "TGeoBoolNode.h", 133,
                  typeid(::TGeoIntersection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIntersection::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoIntersection) );
      instance.SetNew(&new_TGeoIntersection);
      instance.SetNewArray(&newArray_TGeoIntersection);
      instance.SetDelete(&delete_TGeoIntersection);
      instance.SetDeleteArray(&deleteArray_TGeoIntersection);
      instance.SetDestructor(&destruct_TGeoIntersection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIntersection*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoIntersection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoIntersection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoSubtraction(void *p = nullptr);
   static void *newArray_TGeoSubtraction(Long_t size, void *p);
   static void delete_TGeoSubtraction(void *p);
   static void deleteArray_TGeoSubtraction(void *p);
   static void destruct_TGeoSubtraction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoSubtraction*)
   {
      ::TGeoSubtraction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoSubtraction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoSubtraction", ::TGeoSubtraction::Class_Version(), "TGeoBoolNode.h", 164,
                  typeid(::TGeoSubtraction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoSubtraction::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoSubtraction) );
      instance.SetNew(&new_TGeoSubtraction);
      instance.SetNewArray(&newArray_TGeoSubtraction);
      instance.SetDelete(&delete_TGeoSubtraction);
      instance.SetDeleteArray(&deleteArray_TGeoSubtraction);
      instance.SetDestructor(&destruct_TGeoSubtraction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoSubtraction*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoSubtraction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoSubtraction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoMatrix(void *p);
   static void deleteArray_TGeoMatrix(void *p);
   static void destruct_TGeoMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMatrix*)
   {
      ::TGeoMatrix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMatrix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMatrix", ::TGeoMatrix::Class_Version(), "TGeoMatrix.h", 39,
                  typeid(::TGeoMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMatrix) );
      instance.SetDelete(&delete_TGeoMatrix);
      instance.SetDeleteArray(&deleteArray_TGeoMatrix);
      instance.SetDestructor(&destruct_TGeoMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMatrix*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoMatrix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoMatrix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTranslation(void *p = nullptr);
   static void *newArray_TGeoTranslation(Long_t size, void *p);
   static void delete_TGeoTranslation(void *p);
   static void deleteArray_TGeoTranslation(void *p);
   static void destruct_TGeoTranslation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTranslation*)
   {
      ::TGeoTranslation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTranslation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTranslation", ::TGeoTranslation::Class_Version(), "TGeoMatrix.h", 117,
                  typeid(::TGeoTranslation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTranslation::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTranslation) );
      instance.SetNew(&new_TGeoTranslation);
      instance.SetNewArray(&newArray_TGeoTranslation);
      instance.SetDelete(&delete_TGeoTranslation);
      instance.SetDeleteArray(&deleteArray_TGeoTranslation);
      instance.SetDestructor(&destruct_TGeoTranslation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTranslation*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTranslation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTranslation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRotation(void *p = nullptr);
   static void *newArray_TGeoRotation(Long_t size, void *p);
   static void delete_TGeoRotation(void *p);
   static void deleteArray_TGeoRotation(void *p);
   static void destruct_TGeoRotation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRotation*)
   {
      ::TGeoRotation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRotation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRotation", ::TGeoRotation::Class_Version(), "TGeoMatrix.h", 169,
                  typeid(::TGeoRotation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRotation::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoRotation) );
      instance.SetNew(&new_TGeoRotation);
      instance.SetNewArray(&newArray_TGeoRotation);
      instance.SetDelete(&delete_TGeoRotation);
      instance.SetDeleteArray(&deleteArray_TGeoRotation);
      instance.SetDestructor(&destruct_TGeoRotation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRotation*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoRotation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoRotation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoScale(void *p = nullptr);
   static void *newArray_TGeoScale(Long_t size, void *p);
   static void delete_TGeoScale(void *p);
   static void deleteArray_TGeoScale(void *p);
   static void destruct_TGeoScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoScale*)
   {
      ::TGeoScale *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoScale >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoScale", ::TGeoScale::Class_Version(), "TGeoMatrix.h", 254,
                  typeid(::TGeoScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoScale::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoScale) );
      instance.SetNew(&new_TGeoScale);
      instance.SetNewArray(&newArray_TGeoScale);
      instance.SetDelete(&delete_TGeoScale);
      instance.SetDeleteArray(&deleteArray_TGeoScale);
      instance.SetDestructor(&destruct_TGeoScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoScale*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoScale*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoScale*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCombiTrans(void *p = nullptr);
   static void *newArray_TGeoCombiTrans(Long_t size, void *p);
   static void delete_TGeoCombiTrans(void *p);
   static void deleteArray_TGeoCombiTrans(void *p);
   static void destruct_TGeoCombiTrans(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCombiTrans*)
   {
      ::TGeoCombiTrans *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCombiTrans >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCombiTrans", ::TGeoCombiTrans::Class_Version(), "TGeoMatrix.h", 318,
                  typeid(::TGeoCombiTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCombiTrans::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCombiTrans) );
      instance.SetNew(&new_TGeoCombiTrans);
      instance.SetNewArray(&newArray_TGeoCombiTrans);
      instance.SetDelete(&delete_TGeoCombiTrans);
      instance.SetDeleteArray(&deleteArray_TGeoCombiTrans);
      instance.SetDestructor(&destruct_TGeoCombiTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCombiTrans*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoCombiTrans*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoCombiTrans*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGenTrans(void *p = nullptr);
   static void *newArray_TGeoGenTrans(Long_t size, void *p);
   static void delete_TGeoGenTrans(void *p);
   static void deleteArray_TGeoGenTrans(void *p);
   static void destruct_TGeoGenTrans(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGenTrans*)
   {
      ::TGeoGenTrans *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGenTrans >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGenTrans", ::TGeoGenTrans::Class_Version(), "TGeoMatrix.h", 376,
                  typeid(::TGeoGenTrans), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGenTrans::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoGenTrans) );
      instance.SetNew(&new_TGeoGenTrans);
      instance.SetNewArray(&newArray_TGeoGenTrans);
      instance.SetDelete(&delete_TGeoGenTrans);
      instance.SetDeleteArray(&deleteArray_TGeoGenTrans);
      instance.SetDestructor(&destruct_TGeoGenTrans);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGenTrans*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoGenTrans*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoGenTrans*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoIdentity(void *p = nullptr);
   static void *newArray_TGeoIdentity(Long_t size, void *p);
   static void delete_TGeoIdentity(void *p);
   static void deleteArray_TGeoIdentity(void *p);
   static void destruct_TGeoIdentity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIdentity*)
   {
      ::TGeoIdentity *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIdentity >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIdentity", ::TGeoIdentity::Class_Version(), "TGeoMatrix.h", 407,
                  typeid(::TGeoIdentity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIdentity::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoIdentity) );
      instance.SetNew(&new_TGeoIdentity);
      instance.SetNewArray(&newArray_TGeoIdentity);
      instance.SetDelete(&delete_TGeoIdentity);
      instance.SetDeleteArray(&deleteArray_TGeoIdentity);
      instance.SetDestructor(&destruct_TGeoIdentity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIdentity*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoIdentity*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoIdentity*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHMatrix(void *p = nullptr);
   static void *newArray_TGeoHMatrix(Long_t size, void *p);
   static void delete_TGeoHMatrix(void *p);
   static void deleteArray_TGeoHMatrix(void *p);
   static void destruct_TGeoHMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHMatrix*)
   {
      ::TGeoHMatrix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHMatrix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHMatrix", ::TGeoHMatrix::Class_Version(), "TGeoMatrix.h", 459,
                  typeid(::TGeoHMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHMatrix) );
      instance.SetNew(&new_TGeoHMatrix);
      instance.SetNewArray(&newArray_TGeoHMatrix);
      instance.SetDelete(&delete_TGeoHMatrix);
      instance.SetDeleteArray(&deleteArray_TGeoHMatrix);
      instance.SetDestructor(&destruct_TGeoHMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHMatrix*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoHMatrix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoHMatrix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBranchArray(void *p = nullptr);
   static void delete_TGeoBranchArray(void *p);
   static void deleteArray_TGeoBranchArray(void *p);
   static void destruct_TGeoBranchArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBranchArray*)
   {
      ::TGeoBranchArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBranchArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBranchArray", ::TGeoBranchArray::Class_Version(), "TGeoBranchArray.h", 22,
                  typeid(::TGeoBranchArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBranchArray::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBranchArray) );
      instance.SetNew(&new_TGeoBranchArray);
      instance.SetDelete(&delete_TGeoBranchArray);
      instance.SetDeleteArray(&deleteArray_TGeoBranchArray);
      instance.SetDestructor(&destruct_TGeoBranchArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBranchArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoBranchArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoBranchArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoBuilder(void *p);
   static void deleteArray_TGeoBuilder(void *p);
   static void destruct_TGeoBuilder(void *p);
   static void streamer_TGeoBuilder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBuilder*)
   {
      ::TGeoBuilder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBuilder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBuilder", ::TGeoBuilder::Class_Version(), "TGeoBuilder.h", 26,
                  typeid(::TGeoBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBuilder::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoBuilder) );
      instance.SetDelete(&delete_TGeoBuilder);
      instance.SetDeleteArray(&deleteArray_TGeoBuilder);
      instance.SetDestructor(&destruct_TGeoBuilder);
      instance.SetStreamerFunc(&streamer_TGeoBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBuilder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoBuilder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoBuilder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoElement(void *p = nullptr);
   static void *newArray_TGeoElement(Long_t size, void *p);
   static void delete_TGeoElement(void *p);
   static void deleteArray_TGeoElement(void *p);
   static void destruct_TGeoElement(void *p);

   // Schema evolution read functions
   static void read_TGeoElement_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      TGeoElement* newObj = (TGeoElement*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      newObj->ComputeDerivedQuantities() ; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElement*)
   {
      ::TGeoElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElement", ::TGeoElement::Class_Version(), "TGeoElement.h", 31,
                  typeid(::TGeoElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElement::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElement) );
      instance.SetNew(&new_TGeoElement);
      instance.SetNewArray(&newArray_TGeoElement);
      instance.SetDelete(&delete_TGeoElement);
      instance.SetDeleteArray(&deleteArray_TGeoElement);
      instance.SetDestructor(&destruct_TGeoElement);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TGeoElement";
      rule->fTarget      = "";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TGeoElement_0);
      rule->fCode        = " newObj->ComputeDerivedQuantities() ; ";
      rule->fVersion     = "[1-2]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoIsotope(void *p = nullptr);
   static void *newArray_TGeoIsotope(Long_t size, void *p);
   static void delete_TGeoIsotope(void *p);
   static void deleteArray_TGeoIsotope(void *p);
   static void destruct_TGeoIsotope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIsotope*)
   {
      ::TGeoIsotope *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIsotope >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIsotope", ::TGeoIsotope::Class_Version(), "TGeoElement.h", 92,
                  typeid(::TGeoIsotope), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIsotope::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoIsotope) );
      instance.SetNew(&new_TGeoIsotope);
      instance.SetNewArray(&newArray_TGeoIsotope);
      instance.SetDelete(&delete_TGeoIsotope);
      instance.SetDeleteArray(&deleteArray_TGeoIsotope);
      instance.SetDestructor(&destruct_TGeoIsotope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIsotope*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoIsotope*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoIsotope*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoElementRN(void *p = nullptr);
   static void *newArray_TGeoElementRN(Long_t size, void *p);
   static void delete_TGeoElementRN(void *p);
   static void deleteArray_TGeoElementRN(void *p);
   static void destruct_TGeoElementRN(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElementRN*)
   {
      ::TGeoElementRN *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElementRN >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElementRN", ::TGeoElementRN::Class_Version(), "TGeoElement.h", 116,
                  typeid(::TGeoElementRN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElementRN::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElementRN) );
      instance.SetNew(&new_TGeoElementRN);
      instance.SetNewArray(&newArray_TGeoElementRN);
      instance.SetDelete(&delete_TGeoElementRN);
      instance.SetDeleteArray(&deleteArray_TGeoElementRN);
      instance.SetDestructor(&destruct_TGeoElementRN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElementRN*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoElementRN*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoElementRN*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoDecayChannel(void *p = nullptr);
   static void *newArray_TGeoDecayChannel(Long_t size, void *p);
   static void delete_TGeoDecayChannel(void *p);
   static void deleteArray_TGeoDecayChannel(void *p);
   static void destruct_TGeoDecayChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoDecayChannel*)
   {
      ::TGeoDecayChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoDecayChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoDecayChannel", ::TGeoDecayChannel::Class_Version(), "TGeoElement.h", 186,
                  typeid(::TGeoDecayChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoDecayChannel::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoDecayChannel) );
      instance.SetNew(&new_TGeoDecayChannel);
      instance.SetNewArray(&newArray_TGeoDecayChannel);
      instance.SetDelete(&delete_TGeoDecayChannel);
      instance.SetDeleteArray(&deleteArray_TGeoDecayChannel);
      instance.SetDestructor(&destruct_TGeoDecayChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoDecayChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoDecayChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoDecayChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBatemanSol(void *p = nullptr);
   static void *newArray_TGeoBatemanSol(Long_t size, void *p);
   static void delete_TGeoBatemanSol(void *p);
   static void deleteArray_TGeoBatemanSol(void *p);
   static void destruct_TGeoBatemanSol(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBatemanSol*)
   {
      ::TGeoBatemanSol *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBatemanSol >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBatemanSol", ::TGeoBatemanSol::Class_Version(), "TGeoElement.h", 260,
                  typeid(::TGeoBatemanSol), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBatemanSol::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBatemanSol) );
      instance.SetNew(&new_TGeoBatemanSol);
      instance.SetNewArray(&newArray_TGeoBatemanSol);
      instance.SetDelete(&delete_TGeoBatemanSol);
      instance.SetDeleteArray(&deleteArray_TGeoBatemanSol);
      instance.SetDestructor(&destruct_TGeoBatemanSol);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBatemanSol*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoBatemanSol*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoBatemanSol*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoElemIter(void *p);
   static void deleteArray_TGeoElemIter(void *p);
   static void destruct_TGeoElemIter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElemIter*)
   {
      ::TGeoElemIter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElemIter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElemIter", ::TGeoElemIter::Class_Version(), "TGeoElement.h", 327,
                  typeid(::TGeoElemIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElemIter::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElemIter) );
      instance.SetDelete(&delete_TGeoElemIter);
      instance.SetDeleteArray(&deleteArray_TGeoElemIter);
      instance.SetDestructor(&destruct_TGeoElemIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElemIter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoElemIter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoElemIter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoElementTable(void *p = nullptr);
   static void *newArray_TGeoElementTable(Long_t size, void *p);
   static void delete_TGeoElementTable(void *p);
   static void deleteArray_TGeoElementTable(void *p);
   static void destruct_TGeoElementTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoElementTable*)
   {
      ::TGeoElementTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoElementTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoElementTable", ::TGeoElementTable::Class_Version(), "TGeoElement.h", 362,
                  typeid(::TGeoElementTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoElementTable::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoElementTable) );
      instance.SetNew(&new_TGeoElementTable);
      instance.SetNewArray(&newArray_TGeoElementTable);
      instance.SetDelete(&delete_TGeoElementTable);
      instance.SetDeleteArray(&deleteArray_TGeoElementTable);
      instance.SetDestructor(&destruct_TGeoElementTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoElementTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoElementTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoElementTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMaterial(void *p = nullptr);
   static void *newArray_TGeoMaterial(Long_t size, void *p);
   static void delete_TGeoMaterial(void *p);
   static void deleteArray_TGeoMaterial(void *p);
   static void destruct_TGeoMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMaterial*)
   {
      ::TGeoMaterial *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMaterial >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMaterial", ::TGeoMaterial::Class_Version(), "TGeoMaterial.h", 34,
                  typeid(::TGeoMaterial), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMaterial::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMaterial) );
      instance.SetNew(&new_TGeoMaterial);
      instance.SetNewArray(&newArray_TGeoMaterial);
      instance.SetDelete(&delete_TGeoMaterial);
      instance.SetDeleteArray(&deleteArray_TGeoMaterial);
      instance.SetDestructor(&destruct_TGeoMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMaterial*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoMaterial*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoMaterial*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMixture(void *p = nullptr);
   static void *newArray_TGeoMixture(Long_t size, void *p);
   static void delete_TGeoMixture(void *p);
   static void deleteArray_TGeoMixture(void *p);
   static void destruct_TGeoMixture(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMixture*)
   {
      ::TGeoMixture *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMixture >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMixture", ::TGeoMixture::Class_Version(), "TGeoMaterial.h", 159,
                  typeid(::TGeoMixture), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMixture::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMixture) );
      instance.SetNew(&new_TGeoMixture);
      instance.SetNewArray(&newArray_TGeoMixture);
      instance.SetDelete(&delete_TGeoMixture);
      instance.SetDeleteArray(&deleteArray_TGeoMixture);
      instance.SetDestructor(&destruct_TGeoMixture);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMixture*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoMixture*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoMixture*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoMedium(void *p = nullptr);
   static void *newArray_TGeoMedium(Long_t size, void *p);
   static void delete_TGeoMedium(void *p);
   static void deleteArray_TGeoMedium(void *p);
   static void destruct_TGeoMedium(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoMedium*)
   {
      ::TGeoMedium *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoMedium >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoMedium", ::TGeoMedium::Class_Version(), "TGeoMedium.h", 23,
                  typeid(::TGeoMedium), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoMedium::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoMedium) );
      instance.SetNew(&new_TGeoMedium);
      instance.SetNewArray(&newArray_TGeoMedium);
      instance.SetDelete(&delete_TGeoMedium);
      instance.SetDeleteArray(&deleteArray_TGeoMedium);
      instance.SetDestructor(&destruct_TGeoMedium);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoMedium*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoMedium*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoMedium*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolume(void *p = nullptr);
   static void *newArray_TGeoVolume(Long_t size, void *p);
   static void delete_TGeoVolume(void *p);
   static void deleteArray_TGeoVolume(void *p);
   static void destruct_TGeoVolume(void *p);
   static void streamer_TGeoVolume(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolume*)
   {
      ::TGeoVolume *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolume >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolume", ::TGeoVolume::Class_Version(), "TGeoVolume.h", 43,
                  typeid(::TGeoVolume), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolume::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoVolume) );
      instance.SetNew(&new_TGeoVolume);
      instance.SetNewArray(&newArray_TGeoVolume);
      instance.SetDelete(&delete_TGeoVolume);
      instance.SetDeleteArray(&deleteArray_TGeoVolume);
      instance.SetDestructor(&destruct_TGeoVolume);
      instance.SetStreamerFunc(&streamer_TGeoVolume);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolume*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoVolume*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoVolume*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolumeMulti(void *p = nullptr);
   static void *newArray_TGeoVolumeMulti(Long_t size, void *p);
   static void delete_TGeoVolumeMulti(void *p);
   static void deleteArray_TGeoVolumeMulti(void *p);
   static void destruct_TGeoVolumeMulti(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolumeMulti*)
   {
      ::TGeoVolumeMulti *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolumeMulti >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolumeMulti", ::TGeoVolumeMulti::Class_Version(), "TGeoVolume.h", 267,
                  typeid(::TGeoVolumeMulti), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolumeMulti::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoVolumeMulti) );
      instance.SetNew(&new_TGeoVolumeMulti);
      instance.SetNewArray(&newArray_TGeoVolumeMulti);
      instance.SetDelete(&delete_TGeoVolumeMulti);
      instance.SetDeleteArray(&deleteArray_TGeoVolumeMulti);
      instance.SetDestructor(&destruct_TGeoVolumeMulti);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolumeMulti*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoVolumeMulti*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoVolumeMulti*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVolumeAssembly(void *p = nullptr);
   static void *newArray_TGeoVolumeAssembly(Long_t size, void *p);
   static void delete_TGeoVolumeAssembly(void *p);
   static void deleteArray_TGeoVolumeAssembly(void *p);
   static void destruct_TGeoVolumeAssembly(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVolumeAssembly*)
   {
      ::TGeoVolumeAssembly *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVolumeAssembly >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVolumeAssembly", ::TGeoVolumeAssembly::Class_Version(), "TGeoVolume.h", 317,
                  typeid(::TGeoVolumeAssembly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVolumeAssembly::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoVolumeAssembly) );
      instance.SetNew(&new_TGeoVolumeAssembly);
      instance.SetNewArray(&newArray_TGeoVolumeAssembly);
      instance.SetDelete(&delete_TGeoVolumeAssembly);
      instance.SetDeleteArray(&deleteArray_TGeoVolumeAssembly);
      instance.SetDestructor(&destruct_TGeoVolumeAssembly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVolumeAssembly*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoVolumeAssembly*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoVolumeAssembly*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoPatternFinder(void *p);
   static void deleteArray_TGeoPatternFinder(void *p);
   static void destruct_TGeoPatternFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternFinder*)
   {
      ::TGeoPatternFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternFinder", ::TGeoPatternFinder::Class_Version(), "TGeoPatternFinder.h", 25,
                  typeid(::TGeoPatternFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternFinder::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternFinder) );
      instance.SetDelete(&delete_TGeoPatternFinder);
      instance.SetDeleteArray(&deleteArray_TGeoPatternFinder);
      instance.SetDestructor(&destruct_TGeoPatternFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternFinder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternFinder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternFinder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternX(void *p = nullptr);
   static void *newArray_TGeoPatternX(Long_t size, void *p);
   static void delete_TGeoPatternX(void *p);
   static void deleteArray_TGeoPatternX(void *p);
   static void destruct_TGeoPatternX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternX*)
   {
      ::TGeoPatternX *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternX >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternX", ::TGeoPatternX::Class_Version(), "TGeoPatternFinder.h", 101,
                  typeid(::TGeoPatternX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternX::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternX) );
      instance.SetNew(&new_TGeoPatternX);
      instance.SetNewArray(&newArray_TGeoPatternX);
      instance.SetDelete(&delete_TGeoPatternX);
      instance.SetDeleteArray(&deleteArray_TGeoPatternX);
      instance.SetDestructor(&destruct_TGeoPatternX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternX*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternX*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternX*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternY(void *p = nullptr);
   static void *newArray_TGeoPatternY(Long_t size, void *p);
   static void delete_TGeoPatternY(void *p);
   static void deleteArray_TGeoPatternY(void *p);
   static void destruct_TGeoPatternY(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternY*)
   {
      ::TGeoPatternY *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternY >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternY", ::TGeoPatternY::Class_Version(), "TGeoPatternFinder.h", 129,
                  typeid(::TGeoPatternY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternY::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternY) );
      instance.SetNew(&new_TGeoPatternY);
      instance.SetNewArray(&newArray_TGeoPatternY);
      instance.SetDelete(&delete_TGeoPatternY);
      instance.SetDeleteArray(&deleteArray_TGeoPatternY);
      instance.SetDestructor(&destruct_TGeoPatternY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternY*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternY*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternY*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternZ(void *p = nullptr);
   static void *newArray_TGeoPatternZ(Long_t size, void *p);
   static void delete_TGeoPatternZ(void *p);
   static void deleteArray_TGeoPatternZ(void *p);
   static void destruct_TGeoPatternZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternZ*)
   {
      ::TGeoPatternZ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternZ >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternZ", ::TGeoPatternZ::Class_Version(), "TGeoPatternFinder.h", 156,
                  typeid(::TGeoPatternZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternZ::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternZ) );
      instance.SetNew(&new_TGeoPatternZ);
      instance.SetNewArray(&newArray_TGeoPatternZ);
      instance.SetDelete(&delete_TGeoPatternZ);
      instance.SetDeleteArray(&deleteArray_TGeoPatternZ);
      instance.SetDestructor(&destruct_TGeoPatternZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternZ*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternZ*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternZ*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternParaX(void *p = nullptr);
   static void *newArray_TGeoPatternParaX(Long_t size, void *p);
   static void delete_TGeoPatternParaX(void *p);
   static void deleteArray_TGeoPatternParaX(void *p);
   static void destruct_TGeoPatternParaX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternParaX*)
   {
      ::TGeoPatternParaX *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternParaX >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternParaX", ::TGeoPatternParaX::Class_Version(), "TGeoPatternFinder.h", 183,
                  typeid(::TGeoPatternParaX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternParaX::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternParaX) );
      instance.SetNew(&new_TGeoPatternParaX);
      instance.SetNewArray(&newArray_TGeoPatternParaX);
      instance.SetDelete(&delete_TGeoPatternParaX);
      instance.SetDeleteArray(&deleteArray_TGeoPatternParaX);
      instance.SetDestructor(&destruct_TGeoPatternParaX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternParaX*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternParaX*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternParaX*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternParaY(void *p = nullptr);
   static void *newArray_TGeoPatternParaY(Long_t size, void *p);
   static void delete_TGeoPatternParaY(void *p);
   static void deleteArray_TGeoPatternParaY(void *p);
   static void destruct_TGeoPatternParaY(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternParaY*)
   {
      ::TGeoPatternParaY *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternParaY >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternParaY", ::TGeoPatternParaY::Class_Version(), "TGeoPatternFinder.h", 210,
                  typeid(::TGeoPatternParaY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternParaY::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternParaY) );
      instance.SetNew(&new_TGeoPatternParaY);
      instance.SetNewArray(&newArray_TGeoPatternParaY);
      instance.SetDelete(&delete_TGeoPatternParaY);
      instance.SetDeleteArray(&deleteArray_TGeoPatternParaY);
      instance.SetDestructor(&destruct_TGeoPatternParaY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternParaY*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternParaY*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternParaY*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternParaZ(void *p = nullptr);
   static void *newArray_TGeoPatternParaZ(Long_t size, void *p);
   static void delete_TGeoPatternParaZ(void *p);
   static void deleteArray_TGeoPatternParaZ(void *p);
   static void destruct_TGeoPatternParaZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternParaZ*)
   {
      ::TGeoPatternParaZ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternParaZ >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternParaZ", ::TGeoPatternParaZ::Class_Version(), "TGeoPatternFinder.h", 240,
                  typeid(::TGeoPatternParaZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternParaZ::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternParaZ) );
      instance.SetNew(&new_TGeoPatternParaZ);
      instance.SetNewArray(&newArray_TGeoPatternParaZ);
      instance.SetDelete(&delete_TGeoPatternParaZ);
      instance.SetDeleteArray(&deleteArray_TGeoPatternParaZ);
      instance.SetDestructor(&destruct_TGeoPatternParaZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternParaZ*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternParaZ*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternParaZ*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternTrapZ(void *p = nullptr);
   static void *newArray_TGeoPatternTrapZ(Long_t size, void *p);
   static void delete_TGeoPatternTrapZ(void *p);
   static void deleteArray_TGeoPatternTrapZ(void *p);
   static void destruct_TGeoPatternTrapZ(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternTrapZ*)
   {
      ::TGeoPatternTrapZ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternTrapZ >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternTrapZ", ::TGeoPatternTrapZ::Class_Version(), "TGeoPatternFinder.h", 271,
                  typeid(::TGeoPatternTrapZ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternTrapZ::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternTrapZ) );
      instance.SetNew(&new_TGeoPatternTrapZ);
      instance.SetNewArray(&newArray_TGeoPatternTrapZ);
      instance.SetDelete(&delete_TGeoPatternTrapZ);
      instance.SetDeleteArray(&deleteArray_TGeoPatternTrapZ);
      instance.SetDestructor(&destruct_TGeoPatternTrapZ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternTrapZ*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternTrapZ*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternTrapZ*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternCylR(void *p = nullptr);
   static void *newArray_TGeoPatternCylR(Long_t size, void *p);
   static void delete_TGeoPatternCylR(void *p);
   static void deleteArray_TGeoPatternCylR(void *p);
   static void destruct_TGeoPatternCylR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternCylR*)
   {
      ::TGeoPatternCylR *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternCylR >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternCylR", ::TGeoPatternCylR::Class_Version(), "TGeoPatternFinder.h", 304,
                  typeid(::TGeoPatternCylR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternCylR::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternCylR) );
      instance.SetNew(&new_TGeoPatternCylR);
      instance.SetNewArray(&newArray_TGeoPatternCylR);
      instance.SetDelete(&delete_TGeoPatternCylR);
      instance.SetDeleteArray(&deleteArray_TGeoPatternCylR);
      instance.SetDestructor(&destruct_TGeoPatternCylR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternCylR*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternCylR*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternCylR*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternCylPhi(void *p = nullptr);
   static void *newArray_TGeoPatternCylPhi(Long_t size, void *p);
   static void delete_TGeoPatternCylPhi(void *p);
   static void deleteArray_TGeoPatternCylPhi(void *p);
   static void destruct_TGeoPatternCylPhi(void *p);
   static void streamer_TGeoPatternCylPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternCylPhi*)
   {
      ::TGeoPatternCylPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternCylPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternCylPhi", ::TGeoPatternCylPhi::Class_Version(), "TGeoPatternFinder.h", 330,
                  typeid(::TGeoPatternCylPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternCylPhi::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoPatternCylPhi) );
      instance.SetNew(&new_TGeoPatternCylPhi);
      instance.SetNewArray(&newArray_TGeoPatternCylPhi);
      instance.SetDelete(&delete_TGeoPatternCylPhi);
      instance.SetDeleteArray(&deleteArray_TGeoPatternCylPhi);
      instance.SetDestructor(&destruct_TGeoPatternCylPhi);
      instance.SetStreamerFunc(&streamer_TGeoPatternCylPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternCylPhi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternCylPhi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternCylPhi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternSphR(void *p = nullptr);
   static void *newArray_TGeoPatternSphR(Long_t size, void *p);
   static void delete_TGeoPatternSphR(void *p);
   static void deleteArray_TGeoPatternSphR(void *p);
   static void destruct_TGeoPatternSphR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternSphR*)
   {
      ::TGeoPatternSphR *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternSphR >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternSphR", ::TGeoPatternSphR::Class_Version(), "TGeoPatternFinder.h", 373,
                  typeid(::TGeoPatternSphR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternSphR::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternSphR) );
      instance.SetNew(&new_TGeoPatternSphR);
      instance.SetNewArray(&newArray_TGeoPatternSphR);
      instance.SetDelete(&delete_TGeoPatternSphR);
      instance.SetDeleteArray(&deleteArray_TGeoPatternSphR);
      instance.SetDestructor(&destruct_TGeoPatternSphR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternSphR*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternSphR*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternSphR*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternSphTheta(void *p = nullptr);
   static void *newArray_TGeoPatternSphTheta(Long_t size, void *p);
   static void delete_TGeoPatternSphTheta(void *p);
   static void deleteArray_TGeoPatternSphTheta(void *p);
   static void destruct_TGeoPatternSphTheta(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternSphTheta*)
   {
      ::TGeoPatternSphTheta *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternSphTheta >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternSphTheta", ::TGeoPatternSphTheta::Class_Version(), "TGeoPatternFinder.h", 398,
                  typeid(::TGeoPatternSphTheta), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternSphTheta::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternSphTheta) );
      instance.SetNew(&new_TGeoPatternSphTheta);
      instance.SetNewArray(&newArray_TGeoPatternSphTheta);
      instance.SetDelete(&delete_TGeoPatternSphTheta);
      instance.SetDeleteArray(&deleteArray_TGeoPatternSphTheta);
      instance.SetDestructor(&destruct_TGeoPatternSphTheta);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternSphTheta*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternSphTheta*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternSphTheta*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternSphPhi(void *p = nullptr);
   static void *newArray_TGeoPatternSphPhi(Long_t size, void *p);
   static void delete_TGeoPatternSphPhi(void *p);
   static void deleteArray_TGeoPatternSphPhi(void *p);
   static void destruct_TGeoPatternSphPhi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternSphPhi*)
   {
      ::TGeoPatternSphPhi *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternSphPhi >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternSphPhi", ::TGeoPatternSphPhi::Class_Version(), "TGeoPatternFinder.h", 423,
                  typeid(::TGeoPatternSphPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternSphPhi::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternSphPhi) );
      instance.SetNew(&new_TGeoPatternSphPhi);
      instance.SetNewArray(&newArray_TGeoPatternSphPhi);
      instance.SetDelete(&delete_TGeoPatternSphPhi);
      instance.SetDeleteArray(&deleteArray_TGeoPatternSphPhi);
      instance.SetDestructor(&destruct_TGeoPatternSphPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternSphPhi*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternSphPhi*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternSphPhi*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPatternHoneycomb(void *p = nullptr);
   static void *newArray_TGeoPatternHoneycomb(Long_t size, void *p);
   static void delete_TGeoPatternHoneycomb(void *p);
   static void deleteArray_TGeoPatternHoneycomb(void *p);
   static void destruct_TGeoPatternHoneycomb(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPatternHoneycomb*)
   {
      ::TGeoPatternHoneycomb *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPatternHoneycomb >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPatternHoneycomb", ::TGeoPatternHoneycomb::Class_Version(), "TGeoPatternFinder.h", 455,
                  typeid(::TGeoPatternHoneycomb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPatternHoneycomb::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPatternHoneycomb) );
      instance.SetNew(&new_TGeoPatternHoneycomb);
      instance.SetNewArray(&newArray_TGeoPatternHoneycomb);
      instance.SetDelete(&delete_TGeoPatternHoneycomb);
      instance.SetDeleteArray(&deleteArray_TGeoPatternHoneycomb);
      instance.SetDestructor(&destruct_TGeoPatternHoneycomb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPatternHoneycomb*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPatternHoneycomb*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPatternHoneycomb*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoNode(void *p);
   static void deleteArray_TGeoNode(void *p);
   static void destruct_TGeoNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNode*)
   {
      ::TGeoNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNode", ::TGeoNode::Class_Version(), "TGeoNode.h", 39,
                  typeid(::TGeoNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNode::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNode) );
      instance.SetDelete(&delete_TGeoNode);
      instance.SetDeleteArray(&deleteArray_TGeoNode);
      instance.SetDestructor(&destruct_TGeoNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeMatrix(void *p = nullptr);
   static void *newArray_TGeoNodeMatrix(Long_t size, void *p);
   static void delete_TGeoNodeMatrix(void *p);
   static void deleteArray_TGeoNodeMatrix(void *p);
   static void destruct_TGeoNodeMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeMatrix*)
   {
      ::TGeoNodeMatrix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeMatrix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeMatrix", ::TGeoNodeMatrix::Class_Version(), "TGeoNode.h", 155,
                  typeid(::TGeoNodeMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNodeMatrix) );
      instance.SetNew(&new_TGeoNodeMatrix);
      instance.SetNewArray(&newArray_TGeoNodeMatrix);
      instance.SetDelete(&delete_TGeoNodeMatrix);
      instance.SetDeleteArray(&deleteArray_TGeoNodeMatrix);
      instance.SetDestructor(&destruct_TGeoNodeMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeMatrix*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoNodeMatrix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoNodeMatrix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeOffset(void *p = nullptr);
   static void *newArray_TGeoNodeOffset(Long_t size, void *p);
   static void delete_TGeoNodeOffset(void *p);
   static void deleteArray_TGeoNodeOffset(void *p);
   static void destruct_TGeoNodeOffset(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeOffset*)
   {
      ::TGeoNodeOffset *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeOffset >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeOffset", ::TGeoNodeOffset::Class_Version(), "TGeoNode.h", 185,
                  typeid(::TGeoNodeOffset), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeOffset::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNodeOffset) );
      instance.SetNew(&new_TGeoNodeOffset);
      instance.SetNewArray(&newArray_TGeoNodeOffset);
      instance.SetDelete(&delete_TGeoNodeOffset);
      instance.SetDeleteArray(&deleteArray_TGeoNodeOffset);
      instance.SetDestructor(&destruct_TGeoNodeOffset);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeOffset*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoNodeOffset*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoNodeOffset*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoIteratorPlugin(void *p);
   static void deleteArray_TGeoIteratorPlugin(void *p);
   static void destruct_TGeoIteratorPlugin(void *p);
   static void streamer_TGeoIteratorPlugin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIteratorPlugin*)
   {
      ::TGeoIteratorPlugin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIteratorPlugin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIteratorPlugin", ::TGeoIteratorPlugin::Class_Version(), "TGeoNode.h", 225,
                  typeid(::TGeoIteratorPlugin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIteratorPlugin::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoIteratorPlugin) );
      instance.SetDelete(&delete_TGeoIteratorPlugin);
      instance.SetDeleteArray(&deleteArray_TGeoIteratorPlugin);
      instance.SetDestructor(&destruct_TGeoIteratorPlugin);
      instance.SetStreamerFunc(&streamer_TGeoIteratorPlugin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIteratorPlugin*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoIteratorPlugin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoIteratorPlugin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGeoIterator(void *p);
   static void deleteArray_TGeoIterator(void *p);
   static void destruct_TGeoIterator(void *p);
   static void streamer_TGeoIterator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoIterator*)
   {
      ::TGeoIterator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoIterator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoIterator", ::TGeoIterator::Class_Version(), "TGeoNode.h", 249,
                  typeid(::TGeoIterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoIterator::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoIterator) );
      instance.SetDelete(&delete_TGeoIterator);
      instance.SetDeleteArray(&deleteArray_TGeoIterator);
      instance.SetDestructor(&destruct_TGeoIterator);
      instance.SetStreamerFunc(&streamer_TGeoIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoIterator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoIterator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoIterator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoStateInfo(void *p = nullptr);
   static void *newArray_TGeoStateInfo(Long_t size, void *p);
   static void delete_TGeoStateInfo(void *p);
   static void deleteArray_TGeoStateInfo(void *p);
   static void destruct_TGeoStateInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoStateInfo*)
   {
      ::TGeoStateInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoStateInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoStateInfo", ::TGeoStateInfo::Class_Version(), "TGeoStateInfo.h", 21,
                  typeid(::TGeoStateInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoStateInfo::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoStateInfo) );
      instance.SetNew(&new_TGeoStateInfo);
      instance.SetNewArray(&newArray_TGeoStateInfo);
      instance.SetDelete(&delete_TGeoStateInfo);
      instance.SetDeleteArray(&deleteArray_TGeoStateInfo);
      instance.SetDestructor(&destruct_TGeoStateInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoStateInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoStateInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoStateInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCacheState(void *p = nullptr);
   static void *newArray_TGeoCacheState(Long_t size, void *p);
   static void delete_TGeoCacheState(void *p);
   static void deleteArray_TGeoCacheState(void *p);
   static void destruct_TGeoCacheState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCacheState*)
   {
      ::TGeoCacheState *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCacheState >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCacheState", ::TGeoCacheState::Class_Version(), "TGeoCache.h", 28,
                  typeid(::TGeoCacheState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCacheState::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCacheState) );
      instance.SetNew(&new_TGeoCacheState);
      instance.SetNewArray(&newArray_TGeoCacheState);
      instance.SetDelete(&delete_TGeoCacheState);
      instance.SetDeleteArray(&deleteArray_TGeoCacheState);
      instance.SetDestructor(&destruct_TGeoCacheState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCacheState*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoCacheState*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoCacheState*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNodeCache(void *p = nullptr);
   static void *newArray_TGeoNodeCache(Long_t size, void *p);
   static void delete_TGeoNodeCache(void *p);
   static void deleteArray_TGeoNodeCache(void *p);
   static void destruct_TGeoNodeCache(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNodeCache*)
   {
      ::TGeoNodeCache *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNodeCache >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNodeCache", ::TGeoNodeCache::Class_Version(), "TGeoCache.h", 56,
                  typeid(::TGeoNodeCache), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNodeCache::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNodeCache) );
      instance.SetNew(&new_TGeoNodeCache);
      instance.SetNewArray(&newArray_TGeoNodeCache);
      instance.SetDelete(&delete_TGeoNodeCache);
      instance.SetDeleteArray(&deleteArray_TGeoNodeCache);
      instance.SetDestructor(&destruct_TGeoNodeCache);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNodeCache*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoNodeCache*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoNodeCache*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCompositeShape(void *p = nullptr);
   static void *newArray_TGeoCompositeShape(Long_t size, void *p);
   static void delete_TGeoCompositeShape(void *p);
   static void deleteArray_TGeoCompositeShape(void *p);
   static void destruct_TGeoCompositeShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCompositeShape*)
   {
      ::TGeoCompositeShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCompositeShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCompositeShape", ::TGeoCompositeShape::Class_Version(), "TGeoCompositeShape.h", 22,
                  typeid(::TGeoCompositeShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCompositeShape::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCompositeShape) );
      instance.SetNew(&new_TGeoCompositeShape);
      instance.SetNewArray(&newArray_TGeoCompositeShape);
      instance.SetDelete(&delete_TGeoCompositeShape);
      instance.SetDeleteArray(&deleteArray_TGeoCompositeShape);
      instance.SetDestructor(&destruct_TGeoCompositeShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCompositeShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoCompositeShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoCompositeShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCone(void *p = nullptr);
   static void *newArray_TGeoCone(Long_t size, void *p);
   static void delete_TGeoCone(void *p);
   static void deleteArray_TGeoCone(void *p);
   static void destruct_TGeoCone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCone*)
   {
      ::TGeoCone *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCone >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCone", ::TGeoCone::Class_Version(), "TGeoCone.h", 17,
                  typeid(::TGeoCone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCone::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCone) );
      instance.SetNew(&new_TGeoCone);
      instance.SetNewArray(&newArray_TGeoCone);
      instance.SetDelete(&delete_TGeoCone);
      instance.SetDeleteArray(&deleteArray_TGeoCone);
      instance.SetDestructor(&destruct_TGeoCone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCone*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoCone*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoCone*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoConeSeg(void *p = nullptr);
   static void *newArray_TGeoConeSeg(Long_t size, void *p);
   static void delete_TGeoConeSeg(void *p);
   static void deleteArray_TGeoConeSeg(void *p);
   static void destruct_TGeoConeSeg(void *p);

   // Schema evolution read functions
   static void read_TGeoConeSeg_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      TGeoConeSeg* newObj = (TGeoConeSeg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      newObj->AfterStreamer() ; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoConeSeg*)
   {
      ::TGeoConeSeg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoConeSeg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoConeSeg", ::TGeoConeSeg::Class_Version(), "TGeoCone.h", 99,
                  typeid(::TGeoConeSeg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoConeSeg::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoConeSeg) );
      instance.SetNew(&new_TGeoConeSeg);
      instance.SetNewArray(&newArray_TGeoConeSeg);
      instance.SetDelete(&delete_TGeoConeSeg);
      instance.SetDeleteArray(&deleteArray_TGeoConeSeg);
      instance.SetDestructor(&destruct_TGeoConeSeg);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TGeoConeSeg";
      rule->fTarget      = "";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TGeoConeSeg_0);
      rule->fCode        = " newObj->AfterStreamer() ; ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoConeSeg*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoConeSeg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoConeSeg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTube(void *p = nullptr);
   static void *newArray_TGeoTube(Long_t size, void *p);
   static void delete_TGeoTube(void *p);
   static void deleteArray_TGeoTube(void *p);
   static void destruct_TGeoTube(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTube*)
   {
      ::TGeoTube *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTube >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTube", ::TGeoTube::Class_Version(), "TGeoTube.h", 17,
                  typeid(::TGeoTube), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTube::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTube) );
      instance.SetNew(&new_TGeoTube);
      instance.SetNewArray(&newArray_TGeoTube);
      instance.SetDelete(&delete_TGeoTube);
      instance.SetDeleteArray(&deleteArray_TGeoTube);
      instance.SetDestructor(&destruct_TGeoTube);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTube*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTube*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTube*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTubeSeg(void *p = nullptr);
   static void *newArray_TGeoTubeSeg(Long_t size, void *p);
   static void delete_TGeoTubeSeg(void *p);
   static void deleteArray_TGeoTubeSeg(void *p);
   static void destruct_TGeoTubeSeg(void *p);

   // Schema evolution read functions
   static void read_TGeoTubeSeg_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      TGeoTubeSeg* newObj = (TGeoTubeSeg*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      newObj->AfterStreamer() ; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTubeSeg*)
   {
      ::TGeoTubeSeg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTubeSeg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTubeSeg", ::TGeoTubeSeg::Class_Version(), "TGeoTube.h", 94,
                  typeid(::TGeoTubeSeg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTubeSeg::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTubeSeg) );
      instance.SetNew(&new_TGeoTubeSeg);
      instance.SetNewArray(&newArray_TGeoTubeSeg);
      instance.SetDelete(&delete_TGeoTubeSeg);
      instance.SetDeleteArray(&deleteArray_TGeoTubeSeg);
      instance.SetDestructor(&destruct_TGeoTubeSeg);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TGeoTubeSeg";
      rule->fTarget      = "";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_TGeoTubeSeg_0);
      rule->fCode        = " newObj->AfterStreamer() ; ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTubeSeg*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTubeSeg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTubeSeg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoCtub(void *p = nullptr);
   static void *newArray_TGeoCtub(Long_t size, void *p);
   static void delete_TGeoCtub(void *p);
   static void deleteArray_TGeoCtub(void *p);
   static void destruct_TGeoCtub(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoCtub*)
   {
      ::TGeoCtub *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoCtub >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoCtub", ::TGeoCtub::Class_Version(), "TGeoTube.h", 174,
                  typeid(::TGeoCtub), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoCtub::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoCtub) );
      instance.SetNew(&new_TGeoCtub);
      instance.SetNewArray(&newArray_TGeoCtub);
      instance.SetDelete(&delete_TGeoCtub);
      instance.SetDeleteArray(&deleteArray_TGeoCtub);
      instance.SetDestructor(&destruct_TGeoCtub);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoCtub*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoCtub*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoCtub*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoEltu(void *p = nullptr);
   static void *newArray_TGeoEltu(Long_t size, void *p);
   static void delete_TGeoEltu(void *p);
   static void deleteArray_TGeoEltu(void *p);
   static void destruct_TGeoEltu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoEltu*)
   {
      ::TGeoEltu *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoEltu >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoEltu", ::TGeoEltu::Class_Version(), "TGeoEltu.h", 17,
                  typeid(::TGeoEltu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoEltu::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoEltu) );
      instance.SetNew(&new_TGeoEltu);
      instance.SetNewArray(&newArray_TGeoEltu);
      instance.SetDelete(&delete_TGeoEltu);
      instance.SetDeleteArray(&deleteArray_TGeoEltu);
      instance.SetDestructor(&destruct_TGeoEltu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoEltu*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoEltu*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoEltu*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoExtension*)
   {
      ::TGeoExtension *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoExtension >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoExtension", ::TGeoExtension::Class_Version(), "TGeoExtension.h", 17,
                  typeid(::TGeoExtension), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoExtension::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoExtension) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoExtension*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoExtension*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoExtension*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRCExtension(void *p = nullptr);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRCExtension*)
   {
      ::TGeoRCExtension *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRCExtension >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRCExtension", ::TGeoRCExtension::Class_Version(), "TGeoExtension.h", 33,
                  typeid(::TGeoRCExtension), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRCExtension::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoRCExtension) );
      instance.SetNew(&new_TGeoRCExtension);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRCExtension*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoRCExtension*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoRCExtension*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualMagField(void *p);
   static void deleteArray_TVirtualMagField(void *p);
   static void destruct_TVirtualMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualMagField*)
   {
      ::TVirtualMagField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualMagField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualMagField", ::TVirtualMagField::Class_Version(), "TVirtualMagField.h", 16,
                  typeid(::TVirtualMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualMagField::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualMagField) );
      instance.SetDelete(&delete_TVirtualMagField);
      instance.SetDeleteArray(&deleteArray_TVirtualMagField);
      instance.SetDestructor(&destruct_TVirtualMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualMagField*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualMagField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualMagField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoUniformMagField(void *p = nullptr);
   static void *newArray_TGeoUniformMagField(Long_t size, void *p);
   static void delete_TGeoUniformMagField(void *p);
   static void deleteArray_TGeoUniformMagField(void *p);
   static void destruct_TGeoUniformMagField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoUniformMagField*)
   {
      ::TGeoUniformMagField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoUniformMagField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoUniformMagField", ::TGeoUniformMagField::Class_Version(), "TVirtualMagField.h", 33,
                  typeid(::TGeoUniformMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoUniformMagField::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoUniformMagField) );
      instance.SetNew(&new_TGeoUniformMagField);
      instance.SetNewArray(&newArray_TGeoUniformMagField);
      instance.SetDelete(&delete_TGeoUniformMagField);
      instance.SetDeleteArray(&deleteArray_TGeoUniformMagField);
      instance.SetDestructor(&destruct_TGeoUniformMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoUniformMagField*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoUniformMagField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoUniformMagField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoGlobalMagField(void *p = nullptr);
   static void *newArray_TGeoGlobalMagField(Long_t size, void *p);
   static void delete_TGeoGlobalMagField(void *p);
   static void deleteArray_TGeoGlobalMagField(void *p);
   static void destruct_TGeoGlobalMagField(void *p);
   static void streamer_TGeoGlobalMagField(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoGlobalMagField*)
   {
      ::TGeoGlobalMagField *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoGlobalMagField >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoGlobalMagField", ::TGeoGlobalMagField::Class_Version(), "TGeoGlobalMagField.h", 18,
                  typeid(::TGeoGlobalMagField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoGlobalMagField::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoGlobalMagField) );
      instance.SetNew(&new_TGeoGlobalMagField);
      instance.SetNewArray(&newArray_TGeoGlobalMagField);
      instance.SetDelete(&delete_TGeoGlobalMagField);
      instance.SetDeleteArray(&deleteArray_TGeoGlobalMagField);
      instance.SetDestructor(&destruct_TGeoGlobalMagField);
      instance.SetStreamerFunc(&streamer_TGeoGlobalMagField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoGlobalMagField*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoGlobalMagField*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoGlobalMagField*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHalfSpace(void *p = nullptr);
   static void *newArray_TGeoHalfSpace(Long_t size, void *p);
   static void delete_TGeoHalfSpace(void *p);
   static void deleteArray_TGeoHalfSpace(void *p);
   static void destruct_TGeoHalfSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHalfSpace*)
   {
      ::TGeoHalfSpace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHalfSpace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHalfSpace", ::TGeoHalfSpace::Class_Version(), "TGeoHalfSpace.h", 17,
                  typeid(::TGeoHalfSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHalfSpace::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHalfSpace) );
      instance.SetNew(&new_TGeoHalfSpace);
      instance.SetNewArray(&newArray_TGeoHalfSpace);
      instance.SetDelete(&delete_TGeoHalfSpace);
      instance.SetDeleteArray(&deleteArray_TGeoHalfSpace);
      instance.SetDestructor(&destruct_TGeoHalfSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHalfSpace*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoHalfSpace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoHalfSpace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHelix(void *p = nullptr);
   static void *newArray_TGeoHelix(Long_t size, void *p);
   static void delete_TGeoHelix(void *p);
   static void deleteArray_TGeoHelix(void *p);
   static void destruct_TGeoHelix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHelix*)
   {
      ::TGeoHelix *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHelix >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHelix", ::TGeoHelix::Class_Version(), "TGeoHelix.h", 19,
                  typeid(::TGeoHelix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHelix::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHelix) );
      instance.SetNew(&new_TGeoHelix);
      instance.SetNewArray(&newArray_TGeoHelix);
      instance.SetDelete(&delete_TGeoHelix);
      instance.SetDeleteArray(&deleteArray_TGeoHelix);
      instance.SetDestructor(&destruct_TGeoHelix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHelix*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoHelix*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoHelix*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoHype(void *p = nullptr);
   static void *newArray_TGeoHype(Long_t size, void *p);
   static void delete_TGeoHype(void *p);
   static void deleteArray_TGeoHype(void *p);
   static void destruct_TGeoHype(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoHype*)
   {
      ::TGeoHype *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoHype >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoHype", ::TGeoHype::Class_Version(), "TGeoHype.h", 17,
                  typeid(::TGeoHype), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoHype::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoHype) );
      instance.SetNew(&new_TGeoHype);
      instance.SetNewArray(&newArray_TGeoHype);
      instance.SetDelete(&delete_TGeoHype);
      instance.SetDeleteArray(&deleteArray_TGeoHype);
      instance.SetDestructor(&destruct_TGeoHype);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoHype*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoHype*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoHype*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNavigator(void *p = nullptr);
   static void *newArray_TGeoNavigator(Long_t size, void *p);
   static void delete_TGeoNavigator(void *p);
   static void deleteArray_TGeoNavigator(void *p);
   static void destruct_TGeoNavigator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNavigator*)
   {
      ::TGeoNavigator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNavigator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNavigator", ::TGeoNavigator::Class_Version(), "TGeoNavigator.h", 34,
                  typeid(::TGeoNavigator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNavigator::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoNavigator) );
      instance.SetNew(&new_TGeoNavigator);
      instance.SetNewArray(&newArray_TGeoNavigator);
      instance.SetDelete(&delete_TGeoNavigator);
      instance.SetDeleteArray(&deleteArray_TGeoNavigator);
      instance.SetDestructor(&destruct_TGeoNavigator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNavigator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoNavigator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoNavigator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoNavigatorArray(void *p = nullptr);
   static void *newArray_TGeoNavigatorArray(Long_t size, void *p);
   static void delete_TGeoNavigatorArray(void *p);
   static void deleteArray_TGeoNavigatorArray(void *p);
   static void destruct_TGeoNavigatorArray(void *p);
   static void streamer_TGeoNavigatorArray(TBuffer &buf, void *obj);
   static Long64_t merge_TGeoNavigatorArray(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoNavigatorArray*)
   {
      ::TGeoNavigatorArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoNavigatorArray >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoNavigatorArray", ::TGeoNavigatorArray::Class_Version(), "TGeoNavigator.h", 296,
                  typeid(::TGeoNavigatorArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoNavigatorArray::Dictionary, isa_proxy, 16,
                  sizeof(::TGeoNavigatorArray) );
      instance.SetNew(&new_TGeoNavigatorArray);
      instance.SetNewArray(&newArray_TGeoNavigatorArray);
      instance.SetDelete(&delete_TGeoNavigatorArray);
      instance.SetDeleteArray(&deleteArray_TGeoNavigatorArray);
      instance.SetDestructor(&destruct_TGeoNavigatorArray);
      instance.SetStreamerFunc(&streamer_TGeoNavigatorArray);
      instance.SetMerge(&merge_TGeoNavigatorArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoNavigatorArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoNavigatorArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoNavigatorArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoManager(void *p = nullptr);
   static void *newArray_TGeoManager(Long_t size, void *p);
   static void delete_TGeoManager(void *p);
   static void deleteArray_TGeoManager(void *p);
   static void destruct_TGeoManager(void *p);
   static void streamer_TGeoManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoManager*)
   {
      ::TGeoManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoManager", ::TGeoManager::Class_Version(), "TGeoManager.h", 46,
                  typeid(::TGeoManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoManager::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoManager) );
      instance.SetNew(&new_TGeoManager);
      instance.SetNewArray(&newArray_TGeoManager);
      instance.SetDelete(&delete_TGeoManager);
      instance.SetDeleteArray(&deleteArray_TGeoManager);
      instance.SetDestructor(&destruct_TGeoManager);
      instance.SetStreamerFunc(&streamer_TGeoManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoOpticalSurface(void *p = nullptr);
   static void *newArray_TGeoOpticalSurface(Long_t size, void *p);
   static void delete_TGeoOpticalSurface(void *p);
   static void deleteArray_TGeoOpticalSurface(void *p);
   static void destruct_TGeoOpticalSurface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoOpticalSurface*)
   {
      ::TGeoOpticalSurface *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoOpticalSurface >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoOpticalSurface", ::TGeoOpticalSurface::Class_Version(), "TGeoOpticalSurface.h", 27,
                  typeid(::TGeoOpticalSurface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoOpticalSurface::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoOpticalSurface) );
      instance.SetNew(&new_TGeoOpticalSurface);
      instance.SetNewArray(&newArray_TGeoOpticalSurface);
      instance.SetDelete(&delete_TGeoOpticalSurface);
      instance.SetDeleteArray(&deleteArray_TGeoOpticalSurface);
      instance.SetDestructor(&destruct_TGeoOpticalSurface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoOpticalSurface*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoOpticalSurface*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoOpticalSurface*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoSkinSurface(void *p = nullptr);
   static void *newArray_TGeoSkinSurface(Long_t size, void *p);
   static void delete_TGeoSkinSurface(void *p);
   static void deleteArray_TGeoSkinSurface(void *p);
   static void destruct_TGeoSkinSurface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoSkinSurface*)
   {
      ::TGeoSkinSurface *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoSkinSurface >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoSkinSurface", ::TGeoSkinSurface::Class_Version(), "TGeoOpticalSurface.h", 177,
                  typeid(::TGeoSkinSurface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoSkinSurface::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoSkinSurface) );
      instance.SetNew(&new_TGeoSkinSurface);
      instance.SetNewArray(&newArray_TGeoSkinSurface);
      instance.SetDelete(&delete_TGeoSkinSurface);
      instance.SetDeleteArray(&deleteArray_TGeoSkinSurface);
      instance.SetDestructor(&destruct_TGeoSkinSurface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoSkinSurface*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoSkinSurface*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoSkinSurface*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoBorderSurface(void *p = nullptr);
   static void *newArray_TGeoBorderSurface(Long_t size, void *p);
   static void delete_TGeoBorderSurface(void *p);
   static void deleteArray_TGeoBorderSurface(void *p);
   static void destruct_TGeoBorderSurface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoBorderSurface*)
   {
      ::TGeoBorderSurface *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoBorderSurface >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoBorderSurface", ::TGeoBorderSurface::Class_Version(), "TGeoOpticalSurface.h", 206,
                  typeid(::TGeoBorderSurface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoBorderSurface::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoBorderSurface) );
      instance.SetNew(&new_TGeoBorderSurface);
      instance.SetNewArray(&newArray_TGeoBorderSurface);
      instance.SetDelete(&delete_TGeoBorderSurface);
      instance.SetDeleteArray(&deleteArray_TGeoBorderSurface);
      instance.SetDestructor(&destruct_TGeoBorderSurface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoBorderSurface*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoBorderSurface*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoBorderSurface*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPara(void *p = nullptr);
   static void *newArray_TGeoPara(Long_t size, void *p);
   static void delete_TGeoPara(void *p);
   static void deleteArray_TGeoPara(void *p);
   static void destruct_TGeoPara(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPara*)
   {
      ::TGeoPara *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPara >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPara", ::TGeoPara::Class_Version(), "TGeoPara.h", 17,
                  typeid(::TGeoPara), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPara::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPara) );
      instance.SetNew(&new_TGeoPara);
      instance.SetNewArray(&newArray_TGeoPara);
      instance.SetDelete(&delete_TGeoPara);
      instance.SetDeleteArray(&deleteArray_TGeoPara);
      instance.SetDestructor(&destruct_TGeoPara);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPara*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPara*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPara*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoParaboloid(void *p = nullptr);
   static void *newArray_TGeoParaboloid(Long_t size, void *p);
   static void delete_TGeoParaboloid(void *p);
   static void deleteArray_TGeoParaboloid(void *p);
   static void destruct_TGeoParaboloid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoParaboloid*)
   {
      ::TGeoParaboloid *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoParaboloid >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoParaboloid", ::TGeoParaboloid::Class_Version(), "TGeoParaboloid.h", 17,
                  typeid(::TGeoParaboloid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoParaboloid::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoParaboloid) );
      instance.SetNew(&new_TGeoParaboloid);
      instance.SetNewArray(&newArray_TGeoParaboloid);
      instance.SetDelete(&delete_TGeoParaboloid);
      instance.SetDeleteArray(&deleteArray_TGeoParaboloid);
      instance.SetDestructor(&destruct_TGeoParaboloid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoParaboloid*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoParaboloid*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoParaboloid*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoParallelWorld(void *p = nullptr);
   static void *newArray_TGeoParallelWorld(Long_t size, void *p);
   static void delete_TGeoParallelWorld(void *p);
   static void deleteArray_TGeoParallelWorld(void *p);
   static void destruct_TGeoParallelWorld(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoParallelWorld*)
   {
      ::TGeoParallelWorld *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoParallelWorld >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoParallelWorld", ::TGeoParallelWorld::Class_Version(), "TGeoParallelWorld.h", 23,
                  typeid(::TGeoParallelWorld), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoParallelWorld::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoParallelWorld) );
      instance.SetNew(&new_TGeoParallelWorld);
      instance.SetNewArray(&newArray_TGeoParallelWorld);
      instance.SetDelete(&delete_TGeoParallelWorld);
      instance.SetDeleteArray(&deleteArray_TGeoParallelWorld);
      instance.SetDestructor(&destruct_TGeoParallelWorld);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoParallelWorld*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoParallelWorld*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoParallelWorld*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPcon(void *p = nullptr);
   static void *newArray_TGeoPcon(Long_t size, void *p);
   static void delete_TGeoPcon(void *p);
   static void deleteArray_TGeoPcon(void *p);
   static void destruct_TGeoPcon(void *p);
   static void streamer_TGeoPcon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPcon*)
   {
      ::TGeoPcon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPcon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPcon", ::TGeoPcon::Class_Version(), "TGeoPcon.h", 17,
                  typeid(::TGeoPcon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPcon::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoPcon) );
      instance.SetNew(&new_TGeoPcon);
      instance.SetNewArray(&newArray_TGeoPcon);
      instance.SetDelete(&delete_TGeoPcon);
      instance.SetDeleteArray(&deleteArray_TGeoPcon);
      instance.SetDestructor(&destruct_TGeoPcon);
      instance.SetStreamerFunc(&streamer_TGeoPcon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPcon*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPcon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPcon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPgon(void *p = nullptr);
   static void *newArray_TGeoPgon(Long_t size, void *p);
   static void delete_TGeoPgon(void *p);
   static void deleteArray_TGeoPgon(void *p);
   static void destruct_TGeoPgon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPgon*)
   {
      ::TGeoPgon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPgon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPgon", ::TGeoPgon::Class_Version(), "TGeoPgon.h", 20,
                  typeid(::TGeoPgon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPgon::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPgon) );
      instance.SetNew(&new_TGeoPgon);
      instance.SetNewArray(&newArray_TGeoPgon);
      instance.SetDelete(&delete_TGeoPgon);
      instance.SetDeleteArray(&deleteArray_TGeoPgon);
      instance.SetDestructor(&destruct_TGeoPgon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPgon*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPgon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPgon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPhysicalNode(void *p = nullptr);
   static void *newArray_TGeoPhysicalNode(Long_t size, void *p);
   static void delete_TGeoPhysicalNode(void *p);
   static void deleteArray_TGeoPhysicalNode(void *p);
   static void destruct_TGeoPhysicalNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPhysicalNode*)
   {
      ::TGeoPhysicalNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPhysicalNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPhysicalNode", ::TGeoPhysicalNode::Class_Version(), "TGeoPhysicalNode.h", 29,
                  typeid(::TGeoPhysicalNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPhysicalNode::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPhysicalNode) );
      instance.SetNew(&new_TGeoPhysicalNode);
      instance.SetNewArray(&newArray_TGeoPhysicalNode);
      instance.SetDelete(&delete_TGeoPhysicalNode);
      instance.SetDeleteArray(&deleteArray_TGeoPhysicalNode);
      instance.SetDestructor(&destruct_TGeoPhysicalNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPhysicalNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPhysicalNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPhysicalNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPNEntry(void *p = nullptr);
   static void *newArray_TGeoPNEntry(Long_t size, void *p);
   static void delete_TGeoPNEntry(void *p);
   static void deleteArray_TGeoPNEntry(void *p);
   static void destruct_TGeoPNEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPNEntry*)
   {
      ::TGeoPNEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPNEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPNEntry", ::TGeoPNEntry::Class_Version(), "TGeoPhysicalNode.h", 88,
                  typeid(::TGeoPNEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPNEntry::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPNEntry) );
      instance.SetNew(&new_TGeoPNEntry);
      instance.SetNewArray(&newArray_TGeoPNEntry);
      instance.SetDelete(&delete_TGeoPNEntry);
      instance.SetDeleteArray(&deleteArray_TGeoPNEntry);
      instance.SetDestructor(&destruct_TGeoPNEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPNEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPNEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPNEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoPolygon(void *p = nullptr);
   static void *newArray_TGeoPolygon(Long_t size, void *p);
   static void delete_TGeoPolygon(void *p);
   static void deleteArray_TGeoPolygon(void *p);
   static void destruct_TGeoPolygon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoPolygon*)
   {
      ::TGeoPolygon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoPolygon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoPolygon", ::TGeoPolygon::Class_Version(), "TGeoPolygon.h", 19,
                  typeid(::TGeoPolygon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoPolygon::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoPolygon) );
      instance.SetNew(&new_TGeoPolygon);
      instance.SetNewArray(&newArray_TGeoPolygon);
      instance.SetDelete(&delete_TGeoPolygon);
      instance.SetDeleteArray(&deleteArray_TGeoPolygon);
      instance.SetDestructor(&destruct_TGeoPolygon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoPolygon*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoPolygon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoPolygon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRegionCut(void *p = nullptr);
   static void *newArray_TGeoRegionCut(Long_t size, void *p);
   static void delete_TGeoRegionCut(void *p);
   static void deleteArray_TGeoRegionCut(void *p);
   static void destruct_TGeoRegionCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRegionCut*)
   {
      ::TGeoRegionCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRegionCut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRegionCut", ::TGeoRegionCut::Class_Version(), "TGeoRegion.h", 20,
                  typeid(::TGeoRegionCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRegionCut::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoRegionCut) );
      instance.SetNew(&new_TGeoRegionCut);
      instance.SetNewArray(&newArray_TGeoRegionCut);
      instance.SetDelete(&delete_TGeoRegionCut);
      instance.SetDeleteArray(&deleteArray_TGeoRegionCut);
      instance.SetDestructor(&destruct_TGeoRegionCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRegionCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoRegionCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoRegionCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoRegion(void *p = nullptr);
   static void *newArray_TGeoRegion(Long_t size, void *p);
   static void delete_TGeoRegion(void *p);
   static void deleteArray_TGeoRegion(void *p);
   static void destruct_TGeoRegion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoRegion*)
   {
      ::TGeoRegion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoRegion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoRegion", ::TGeoRegion::Class_Version(), "TGeoRegion.h", 36,
                  typeid(::TGeoRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoRegion::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoRegion) );
      instance.SetNew(&new_TGeoRegion);
      instance.SetNewArray(&newArray_TGeoRegion);
      instance.SetDelete(&delete_TGeoRegion);
      instance.SetDeleteArray(&deleteArray_TGeoRegion);
      instance.SetDestructor(&destruct_TGeoRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoRegion*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoRegion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoRegion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoScaledShape(void *p = nullptr);
   static void *newArray_TGeoScaledShape(Long_t size, void *p);
   static void delete_TGeoScaledShape(void *p);
   static void deleteArray_TGeoScaledShape(void *p);
   static void destruct_TGeoScaledShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoScaledShape*)
   {
      ::TGeoScaledShape *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoScaledShape >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoScaledShape", ::TGeoScaledShape::Class_Version(), "TGeoScaledShape.h", 20,
                  typeid(::TGeoScaledShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoScaledShape::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoScaledShape) );
      instance.SetNew(&new_TGeoScaledShape);
      instance.SetNewArray(&newArray_TGeoScaledShape);
      instance.SetDelete(&delete_TGeoScaledShape);
      instance.SetDeleteArray(&deleteArray_TGeoScaledShape);
      instance.SetDestructor(&destruct_TGeoScaledShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoScaledShape*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoScaledShape*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoScaledShape*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoShapeAssembly(void *p = nullptr);
   static void *newArray_TGeoShapeAssembly(Long_t size, void *p);
   static void delete_TGeoShapeAssembly(void *p);
   static void deleteArray_TGeoShapeAssembly(void *p);
   static void destruct_TGeoShapeAssembly(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoShapeAssembly*)
   {
      ::TGeoShapeAssembly *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoShapeAssembly >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoShapeAssembly", ::TGeoShapeAssembly::Class_Version(), "TGeoShapeAssembly.h", 19,
                  typeid(::TGeoShapeAssembly), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoShapeAssembly::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoShapeAssembly) );
      instance.SetNew(&new_TGeoShapeAssembly);
      instance.SetNewArray(&newArray_TGeoShapeAssembly);
      instance.SetDelete(&delete_TGeoShapeAssembly);
      instance.SetDeleteArray(&deleteArray_TGeoShapeAssembly);
      instance.SetDestructor(&destruct_TGeoShapeAssembly);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoShapeAssembly*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoShapeAssembly*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoShapeAssembly*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoSphere(void *p = nullptr);
   static void *newArray_TGeoSphere(Long_t size, void *p);
   static void delete_TGeoSphere(void *p);
   static void deleteArray_TGeoSphere(void *p);
   static void destruct_TGeoSphere(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoSphere*)
   {
      ::TGeoSphere *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoSphere >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoSphere", ::TGeoSphere::Class_Version(), "TGeoSphere.h", 17,
                  typeid(::TGeoSphere), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoSphere::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoSphere) );
      instance.SetNew(&new_TGeoSphere);
      instance.SetNewArray(&newArray_TGeoSphere);
      instance.SetDelete(&delete_TGeoSphere);
      instance.SetDeleteArray(&deleteArray_TGeoSphere);
      instance.SetDestructor(&destruct_TGeoSphere);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoSphere*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoSphere*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoSphere*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTorus(void *p = nullptr);
   static void *newArray_TGeoTorus(Long_t size, void *p);
   static void delete_TGeoTorus(void *p);
   static void deleteArray_TGeoTorus(void *p);
   static void destruct_TGeoTorus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTorus*)
   {
      ::TGeoTorus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTorus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTorus", ::TGeoTorus::Class_Version(), "TGeoTorus.h", 17,
                  typeid(::TGeoTorus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTorus::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTorus) );
      instance.SetNew(&new_TGeoTorus);
      instance.SetNewArray(&newArray_TGeoTorus);
      instance.SetDelete(&delete_TGeoTorus);
      instance.SetDeleteArray(&deleteArray_TGeoTorus);
      instance.SetDestructor(&destruct_TGeoTorus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTorus*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTorus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTorus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrd1(void *p = nullptr);
   static void *newArray_TGeoTrd1(Long_t size, void *p);
   static void delete_TGeoTrd1(void *p);
   static void deleteArray_TGeoTrd1(void *p);
   static void destruct_TGeoTrd1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrd1*)
   {
      ::TGeoTrd1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrd1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrd1", ::TGeoTrd1::Class_Version(), "TGeoTrd1.h", 17,
                  typeid(::TGeoTrd1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrd1::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrd1) );
      instance.SetNew(&new_TGeoTrd1);
      instance.SetNewArray(&newArray_TGeoTrd1);
      instance.SetDelete(&delete_TGeoTrd1);
      instance.SetDeleteArray(&deleteArray_TGeoTrd1);
      instance.SetDestructor(&destruct_TGeoTrd1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrd1*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTrd1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTrd1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTrd2(void *p = nullptr);
   static void *newArray_TGeoTrd2(Long_t size, void *p);
   static void delete_TGeoTrd2(void *p);
   static void deleteArray_TGeoTrd2(void *p);
   static void destruct_TGeoTrd2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTrd2*)
   {
      ::TGeoTrd2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTrd2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTrd2", ::TGeoTrd2::Class_Version(), "TGeoTrd2.h", 17,
                  typeid(::TGeoTrd2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTrd2::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTrd2) );
      instance.SetNew(&new_TGeoTrd2);
      instance.SetNewArray(&newArray_TGeoTrd2);
      instance.SetDelete(&delete_TGeoTrd2);
      instance.SetDeleteArray(&deleteArray_TGeoTrd2);
      instance.SetDestructor(&destruct_TGeoTrd2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTrd2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTrd2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTrd2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoVoxelFinder(void *p = nullptr);
   static void *newArray_TGeoVoxelFinder(Long_t size, void *p);
   static void delete_TGeoVoxelFinder(void *p);
   static void deleteArray_TGeoVoxelFinder(void *p);
   static void destruct_TGeoVoxelFinder(void *p);
   static void streamer_TGeoVoxelFinder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoVoxelFinder*)
   {
      ::TGeoVoxelFinder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoVoxelFinder >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoVoxelFinder", ::TGeoVoxelFinder::Class_Version(), "TGeoVoxelFinder.h", 20,
                  typeid(::TGeoVoxelFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoVoxelFinder::Dictionary, isa_proxy, 17,
                  sizeof(::TGeoVoxelFinder) );
      instance.SetNew(&new_TGeoVoxelFinder);
      instance.SetNewArray(&newArray_TGeoVoxelFinder);
      instance.SetDelete(&delete_TGeoVoxelFinder);
      instance.SetDeleteArray(&deleteArray_TGeoVoxelFinder);
      instance.SetDestructor(&destruct_TGeoVoxelFinder);
      instance.SetStreamerFunc(&streamer_TGeoVoxelFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoVoxelFinder*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoVoxelFinder*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoVoxelFinder*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoXtru(void *p = nullptr);
   static void *newArray_TGeoXtru(Long_t size, void *p);
   static void delete_TGeoXtru(void *p);
   static void deleteArray_TGeoXtru(void *p);
   static void destruct_TGeoXtru(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoXtru*)
   {
      ::TGeoXtru *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoXtru >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoXtru", ::TGeoXtru::Class_Version(), "TGeoXtru.h", 22,
                  typeid(::TGeoXtru), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoXtru::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoXtru) );
      instance.SetNew(&new_TGeoXtru);
      instance.SetNewArray(&newArray_TGeoXtru);
      instance.SetDelete(&delete_TGeoXtru);
      instance.SetDeleteArray(&deleteArray_TGeoXtru);
      instance.SetDestructor(&destruct_TGeoXtru);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoXtru*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoXtru*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoXtru*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLGeomcLcLVertex_t_Dictionary();
   static void ROOTcLcLGeomcLcLVertex_t_TClassManip(TClass*);
   static void *new_ROOTcLcLGeomcLcLVertex_t(void *p = nullptr);
   static void *newArray_ROOTcLcLGeomcLcLVertex_t(Long_t size, void *p);
   static void delete_ROOTcLcLGeomcLcLVertex_t(void *p);
   static void deleteArray_ROOTcLcLGeomcLcLVertex_t(void *p);
   static void destruct_ROOTcLcLGeomcLcLVertex_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Geom::Vertex_t*)
   {
      ::ROOT::Geom::Vertex_t *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Geom::Vertex_t));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Geom::Vertex_t", "TGeoVector3.h", 21,
                  typeid(::ROOT::Geom::Vertex_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLGeomcLcLVertex_t_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Geom::Vertex_t) );
      instance.SetNew(&new_ROOTcLcLGeomcLcLVertex_t);
      instance.SetNewArray(&newArray_ROOTcLcLGeomcLcLVertex_t);
      instance.SetDelete(&delete_ROOTcLcLGeomcLcLVertex_t);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLGeomcLcLVertex_t);
      instance.SetDestructor(&destruct_ROOTcLcLGeomcLcLVertex_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Geom::Vertex_t*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Geom::Vertex_t*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Geom::Vertex_t*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLGeomcLcLVertex_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Geom::Vertex_t*>(nullptr))->GetClass();
      ROOTcLcLGeomcLcLVertex_t_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLGeomcLcLVertex_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGeoFacet_Dictionary();
   static void TGeoFacet_TClassManip(TClass*);
   static void *new_TGeoFacet(void *p = nullptr);
   static void *newArray_TGeoFacet(Long_t size, void *p);
   static void delete_TGeoFacet(void *p);
   static void deleteArray_TGeoFacet(void *p);
   static void destruct_TGeoFacet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoFacet*)
   {
      ::TGeoFacet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGeoFacet));
      static ::ROOT::TGenericClassInfo 
         instance("TGeoFacet", "TGeoTessellated.h", 20,
                  typeid(::TGeoFacet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGeoFacet_Dictionary, isa_proxy, 4,
                  sizeof(::TGeoFacet) );
      instance.SetNew(&new_TGeoFacet);
      instance.SetNewArray(&newArray_TGeoFacet);
      instance.SetDelete(&delete_TGeoFacet);
      instance.SetDeleteArray(&deleteArray_TGeoFacet);
      instance.SetDestructor(&destruct_TGeoFacet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoFacet*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoFacet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoFacet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGeoFacet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGeoFacet*>(nullptr))->GetClass();
      TGeoFacet_TClassManip(theClass);
   return theClass;
   }

   static void TGeoFacet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TGeoTessellated(void *p = nullptr);
   static void *newArray_TGeoTessellated(Long_t size, void *p);
   static void delete_TGeoTessellated(void *p);
   static void deleteArray_TGeoTessellated(void *p);
   static void destruct_TGeoTessellated(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGeoTessellated*)
   {
      ::TGeoTessellated *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGeoTessellated >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGeoTessellated", ::TGeoTessellated::Class_Version(), "TGeoTessellated.h", 57,
                  typeid(::TGeoTessellated), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGeoTessellated::Dictionary, isa_proxy, 4,
                  sizeof(::TGeoTessellated) );
      instance.SetNew(&new_TGeoTessellated);
      instance.SetNewArray(&newArray_TGeoTessellated);
      instance.SetDelete(&delete_TGeoTessellated);
      instance.SetDeleteArray(&deleteArray_TGeoTessellated);
      instance.SetDestructor(&destruct_TGeoTessellated);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGeoTessellated*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGeoTessellated*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGeoTessellated*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoConverter(void *p);
   static void deleteArray_TVirtualGeoConverter(void *p);
   static void destruct_TVirtualGeoConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoConverter*)
   {
      ::TVirtualGeoConverter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoConverter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoConverter", ::TVirtualGeoConverter::Class_Version(), "TVirtualGeoConverter.h", 19,
                  typeid(::TVirtualGeoConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoConverter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoConverter) );
      instance.SetDelete(&delete_TVirtualGeoConverter);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoConverter);
      instance.SetDestructor(&destruct_TVirtualGeoConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoConverter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualGeoConverter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualGeoConverter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoChecker(void *p);
   static void deleteArray_TVirtualGeoChecker(void *p);
   static void destruct_TVirtualGeoChecker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoChecker*)
   {
      ::TVirtualGeoChecker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoChecker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoChecker", ::TVirtualGeoChecker::Class_Version(), "TVirtualGeoChecker.h", 24,
                  typeid(::TVirtualGeoChecker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoChecker::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoChecker) );
      instance.SetDelete(&delete_TVirtualGeoChecker);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoChecker);
      instance.SetDestructor(&destruct_TVirtualGeoChecker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoChecker*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualGeoChecker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualGeoChecker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoPainter(void *p);
   static void deleteArray_TVirtualGeoPainter(void *p);
   static void destruct_TVirtualGeoPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoPainter*)
   {
      ::TVirtualGeoPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoPainter", ::TVirtualGeoPainter::Class_Version(), "TVirtualGeoPainter.h", 30,
                  typeid(::TVirtualGeoPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoPainter::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoPainter) );
      instance.SetDelete(&delete_TVirtualGeoPainter);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoPainter);
      instance.SetDestructor(&destruct_TVirtualGeoPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualGeoPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualGeoPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TVirtualGeoTrack(void *p);
   static void deleteArray_TVirtualGeoTrack(void *p);
   static void destruct_TVirtualGeoTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TVirtualGeoTrack*)
   {
      ::TVirtualGeoTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TVirtualGeoTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TVirtualGeoTrack", ::TVirtualGeoTrack::Class_Version(), "TVirtualGeoTrack.h", 23,
                  typeid(::TVirtualGeoTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TVirtualGeoTrack::Dictionary, isa_proxy, 4,
                  sizeof(::TVirtualGeoTrack) );
      instance.SetDelete(&delete_TVirtualGeoTrack);
      instance.SetDeleteArray(&deleteArray_TVirtualGeoTrack);
      instance.SetDestructor(&destruct_TVirtualGeoTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TVirtualGeoTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::TVirtualGeoTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TVirtualGeoTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGDMLMatrix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGDMLMatrix::Class_Name()
{
   return "TGDMLMatrix";
}

//______________________________________________________________________________
const char *TGDMLMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLMatrix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGDMLMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGDMLMatrix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGDMLMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLMatrix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGDMLMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGDMLMatrix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoShape::Class_Name()
{
   return "TGeoShape";
}

//______________________________________________________________________________
const char *TGeoShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBBox::Class_Name()
{
   return "TGeoBBox";
}

//______________________________________________________________________________
const char *TGeoBBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoArb8::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoArb8::Class_Name()
{
   return "TGeoArb8";
}

//______________________________________________________________________________
const char *TGeoArb8::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoArb8::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoArb8::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoArb8::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoArb8*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrap::Class_Name()
{
   return "TGeoTrap";
}

//______________________________________________________________________________
const char *TGeoTrap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGtra::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGtra::Class_Name()
{
   return "TGeoGtra";
}

//______________________________________________________________________________
const char *TGeoGtra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGtra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGtra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGtra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGtra*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoAtt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoAtt::Class_Name()
{
   return "TGeoAtt";
}

//______________________________________________________________________________
const char *TGeoAtt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoAtt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoAtt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoAtt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoAtt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBoolNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBoolNode::Class_Name()
{
   return "TGeoBoolNode";
}

//______________________________________________________________________________
const char *TGeoBoolNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBoolNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBoolNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBoolNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBoolNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoUnion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoUnion::Class_Name()
{
   return "TGeoUnion";
}

//______________________________________________________________________________
const char *TGeoUnion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoUnion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoUnion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoUnion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUnion*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIntersection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIntersection::Class_Name()
{
   return "TGeoIntersection";
}

//______________________________________________________________________________
const char *TGeoIntersection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIntersection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIntersection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIntersection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIntersection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoSubtraction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoSubtraction::Class_Name()
{
   return "TGeoSubtraction";
}

//______________________________________________________________________________
const char *TGeoSubtraction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoSubtraction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoSubtraction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoSubtraction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSubtraction*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMatrix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMatrix::Class_Name()
{
   return "TGeoMatrix";
}

//______________________________________________________________________________
const char *TGeoMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMatrix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTranslation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTranslation::Class_Name()
{
   return "TGeoTranslation";
}

//______________________________________________________________________________
const char *TGeoTranslation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTranslation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTranslation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTranslation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTranslation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRotation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRotation::Class_Name()
{
   return "TGeoRotation";
}

//______________________________________________________________________________
const char *TGeoRotation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRotation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRotation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRotation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRotation*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoScale::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoScale::Class_Name()
{
   return "TGeoScale";
}

//______________________________________________________________________________
const char *TGeoScale::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoScale::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoScale::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoScale::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScale*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCombiTrans::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCombiTrans::Class_Name()
{
   return "TGeoCombiTrans";
}

//______________________________________________________________________________
const char *TGeoCombiTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCombiTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCombiTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCombiTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCombiTrans*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGenTrans::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGenTrans::Class_Name()
{
   return "TGeoGenTrans";
}

//______________________________________________________________________________
const char *TGeoGenTrans::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGenTrans::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGenTrans::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGenTrans::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGenTrans*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIdentity::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIdentity::Class_Name()
{
   return "TGeoIdentity";
}

//______________________________________________________________________________
const char *TGeoIdentity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIdentity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIdentity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIdentity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIdentity*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHMatrix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHMatrix::Class_Name()
{
   return "TGeoHMatrix";
}

//______________________________________________________________________________
const char *TGeoHMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHMatrix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBranchArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBranchArray::Class_Name()
{
   return "TGeoBranchArray";
}

//______________________________________________________________________________
const char *TGeoBranchArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBranchArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBranchArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBranchArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBranchArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBuilder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBuilder::Class_Name()
{
   return "TGeoBuilder";
}

//______________________________________________________________________________
const char *TGeoBuilder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBuilder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBuilder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBuilder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBuilder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElement::Class_Name()
{
   return "TGeoElement";
}

//______________________________________________________________________________
const char *TGeoElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIsotope::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIsotope::Class_Name()
{
   return "TGeoIsotope";
}

//______________________________________________________________________________
const char *TGeoIsotope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIsotope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIsotope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIsotope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIsotope*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElementRN::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElementRN::Class_Name()
{
   return "TGeoElementRN";
}

//______________________________________________________________________________
const char *TGeoElementRN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElementRN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElementRN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElementRN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementRN*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoDecayChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoDecayChannel::Class_Name()
{
   return "TGeoDecayChannel";
}

//______________________________________________________________________________
const char *TGeoDecayChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoDecayChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoDecayChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoDecayChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoDecayChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBatemanSol::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBatemanSol::Class_Name()
{
   return "TGeoBatemanSol";
}

//______________________________________________________________________________
const char *TGeoBatemanSol::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBatemanSol::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBatemanSol::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBatemanSol::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBatemanSol*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElemIter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElemIter::Class_Name()
{
   return "TGeoElemIter";
}

//______________________________________________________________________________
const char *TGeoElemIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElemIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElemIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElemIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElemIter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoElementTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoElementTable::Class_Name()
{
   return "TGeoElementTable";
}

//______________________________________________________________________________
const char *TGeoElementTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoElementTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoElementTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoElementTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoElementTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMaterial::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMaterial::Class_Name()
{
   return "TGeoMaterial";
}

//______________________________________________________________________________
const char *TGeoMaterial::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMaterial::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMaterial::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMaterial::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMaterial*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMixture::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMixture::Class_Name()
{
   return "TGeoMixture";
}

//______________________________________________________________________________
const char *TGeoMixture::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMixture::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMixture::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMixture::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMixture*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoMedium::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoMedium::Class_Name()
{
   return "TGeoMedium";
}

//______________________________________________________________________________
const char *TGeoMedium::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoMedium::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoMedium::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoMedium::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoMedium*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolume::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolume::Class_Name()
{
   return "TGeoVolume";
}

//______________________________________________________________________________
const char *TGeoVolume::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolume::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolume::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolume::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolume*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolumeMulti::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolumeMulti::Class_Name()
{
   return "TGeoVolumeMulti";
}

//______________________________________________________________________________
const char *TGeoVolumeMulti::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolumeMulti::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolumeMulti::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolumeMulti::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeMulti*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVolumeAssembly::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVolumeAssembly::Class_Name()
{
   return "TGeoVolumeAssembly";
}

//______________________________________________________________________________
const char *TGeoVolumeAssembly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVolumeAssembly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVolumeAssembly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVolumeAssembly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVolumeAssembly*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternFinder::Class_Name()
{
   return "TGeoPatternFinder";
}

//______________________________________________________________________________
const char *TGeoPatternFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternX::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternX::Class_Name()
{
   return "TGeoPatternX";
}

//______________________________________________________________________________
const char *TGeoPatternX::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternX::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternX::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternX::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternX*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternY::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternY::Class_Name()
{
   return "TGeoPatternY";
}

//______________________________________________________________________________
const char *TGeoPatternY::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternY::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternY::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternY::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternY*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternZ::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternZ::Class_Name()
{
   return "TGeoPatternZ";
}

//______________________________________________________________________________
const char *TGeoPatternZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternZ*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternParaX::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternParaX::Class_Name()
{
   return "TGeoPatternParaX";
}

//______________________________________________________________________________
const char *TGeoPatternParaX::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternParaX::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternParaX::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternParaX::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaX*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternParaY::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternParaY::Class_Name()
{
   return "TGeoPatternParaY";
}

//______________________________________________________________________________
const char *TGeoPatternParaY::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternParaY::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternParaY::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternParaY::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaY*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternParaZ::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternParaZ::Class_Name()
{
   return "TGeoPatternParaZ";
}

//______________________________________________________________________________
const char *TGeoPatternParaZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternParaZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternParaZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternParaZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternParaZ*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternTrapZ::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternTrapZ::Class_Name()
{
   return "TGeoPatternTrapZ";
}

//______________________________________________________________________________
const char *TGeoPatternTrapZ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternTrapZ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternTrapZ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternTrapZ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternTrapZ*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternCylR::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternCylR::Class_Name()
{
   return "TGeoPatternCylR";
}

//______________________________________________________________________________
const char *TGeoPatternCylR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternCylR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternCylR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternCylR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylR*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternCylPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternCylPhi::Class_Name()
{
   return "TGeoPatternCylPhi";
}

//______________________________________________________________________________
const char *TGeoPatternCylPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternCylPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternCylPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternCylPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternCylPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternSphR::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternSphR::Class_Name()
{
   return "TGeoPatternSphR";
}

//______________________________________________________________________________
const char *TGeoPatternSphR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternSphR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternSphR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternSphR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphR*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternSphTheta::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternSphTheta::Class_Name()
{
   return "TGeoPatternSphTheta";
}

//______________________________________________________________________________
const char *TGeoPatternSphTheta::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternSphTheta::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternSphTheta::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternSphTheta::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphTheta*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternSphPhi::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternSphPhi::Class_Name()
{
   return "TGeoPatternSphPhi";
}

//______________________________________________________________________________
const char *TGeoPatternSphPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternSphPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternSphPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternSphPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternSphPhi*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPatternHoneycomb::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPatternHoneycomb::Class_Name()
{
   return "TGeoPatternHoneycomb";
}

//______________________________________________________________________________
const char *TGeoPatternHoneycomb::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPatternHoneycomb::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPatternHoneycomb::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPatternHoneycomb::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPatternHoneycomb*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNode::Class_Name()
{
   return "TGeoNode";
}

//______________________________________________________________________________
const char *TGeoNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeMatrix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeMatrix::Class_Name()
{
   return "TGeoNodeMatrix";
}

//______________________________________________________________________________
const char *TGeoNodeMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeMatrix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeOffset::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeOffset::Class_Name()
{
   return "TGeoNodeOffset";
}

//______________________________________________________________________________
const char *TGeoNodeOffset::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeOffset::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeOffset::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeOffset::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeOffset*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIteratorPlugin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIteratorPlugin::Class_Name()
{
   return "TGeoIteratorPlugin";
}

//______________________________________________________________________________
const char *TGeoIteratorPlugin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIteratorPlugin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIteratorPlugin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIteratorPlugin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIteratorPlugin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoIterator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoIterator::Class_Name()
{
   return "TGeoIterator";
}

//______________________________________________________________________________
const char *TGeoIterator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoIterator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoIterator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoIterator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoIterator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoStateInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoStateInfo::Class_Name()
{
   return "TGeoStateInfo";
}

//______________________________________________________________________________
const char *TGeoStateInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoStateInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoStateInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoStateInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoStateInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCacheState::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCacheState::Class_Name()
{
   return "TGeoCacheState";
}

//______________________________________________________________________________
const char *TGeoCacheState::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCacheState::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCacheState::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCacheState::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCacheState*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNodeCache::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNodeCache::Class_Name()
{
   return "TGeoNodeCache";
}

//______________________________________________________________________________
const char *TGeoNodeCache::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNodeCache::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNodeCache::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNodeCache::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNodeCache*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCompositeShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCompositeShape::Class_Name()
{
   return "TGeoCompositeShape";
}

//______________________________________________________________________________
const char *TGeoCompositeShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCompositeShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCompositeShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCompositeShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCompositeShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCone::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCone::Class_Name()
{
   return "TGeoCone";
}

//______________________________________________________________________________
const char *TGeoCone::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCone::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCone::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCone::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCone*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoConeSeg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoConeSeg::Class_Name()
{
   return "TGeoConeSeg";
}

//______________________________________________________________________________
const char *TGeoConeSeg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoConeSeg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoConeSeg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoConeSeg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoConeSeg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTube::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTube::Class_Name()
{
   return "TGeoTube";
}

//______________________________________________________________________________
const char *TGeoTube::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTube::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTube::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTube::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTube*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTubeSeg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTubeSeg::Class_Name()
{
   return "TGeoTubeSeg";
}

//______________________________________________________________________________
const char *TGeoTubeSeg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTubeSeg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTubeSeg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTubeSeg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTubeSeg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoCtub::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoCtub::Class_Name()
{
   return "TGeoCtub";
}

//______________________________________________________________________________
const char *TGeoCtub::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoCtub::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoCtub::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoCtub::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoCtub*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoEltu::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoEltu::Class_Name()
{
   return "TGeoEltu";
}

//______________________________________________________________________________
const char *TGeoEltu::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoEltu::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoEltu::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoEltu::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoEltu*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoExtension::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoExtension::Class_Name()
{
   return "TGeoExtension";
}

//______________________________________________________________________________
const char *TGeoExtension::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoExtension::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoExtension::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoExtension::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoExtension*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRCExtension::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRCExtension::Class_Name()
{
   return "TGeoRCExtension";
}

//______________________________________________________________________________
const char *TGeoRCExtension::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRCExtension::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRCExtension::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRCExtension::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRCExtension*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualMagField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualMagField::Class_Name()
{
   return "TVirtualMagField";
}

//______________________________________________________________________________
const char *TVirtualMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualMagField*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoUniformMagField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoUniformMagField::Class_Name()
{
   return "TGeoUniformMagField";
}

//______________________________________________________________________________
const char *TGeoUniformMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoUniformMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoUniformMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoUniformMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoUniformMagField*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoGlobalMagField::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoGlobalMagField::Class_Name()
{
   return "TGeoGlobalMagField";
}

//______________________________________________________________________________
const char *TGeoGlobalMagField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoGlobalMagField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoGlobalMagField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoGlobalMagField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoGlobalMagField*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHalfSpace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHalfSpace::Class_Name()
{
   return "TGeoHalfSpace";
}

//______________________________________________________________________________
const char *TGeoHalfSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHalfSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHalfSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHalfSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHalfSpace*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHelix::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHelix::Class_Name()
{
   return "TGeoHelix";
}

//______________________________________________________________________________
const char *TGeoHelix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHelix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHelix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHelix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHelix*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoHype::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoHype::Class_Name()
{
   return "TGeoHype";
}

//______________________________________________________________________________
const char *TGeoHype::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoHype::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoHype::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoHype::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoHype*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNavigator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNavigator::Class_Name()
{
   return "TGeoNavigator";
}

//______________________________________________________________________________
const char *TGeoNavigator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNavigator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNavigator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNavigator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoNavigatorArray::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoNavigatorArray::Class_Name()
{
   return "TGeoNavigatorArray";
}

//______________________________________________________________________________
const char *TGeoNavigatorArray::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoNavigatorArray::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoNavigatorArray::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoNavigatorArray::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoNavigatorArray*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoManager::Class_Name()
{
   return "TGeoManager";
}

//______________________________________________________________________________
const char *TGeoManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoOpticalSurface::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoOpticalSurface::Class_Name()
{
   return "TGeoOpticalSurface";
}

//______________________________________________________________________________
const char *TGeoOpticalSurface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoOpticalSurface*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoOpticalSurface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoOpticalSurface*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoOpticalSurface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoOpticalSurface*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoOpticalSurface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoOpticalSurface*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoSkinSurface::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoSkinSurface::Class_Name()
{
   return "TGeoSkinSurface";
}

//______________________________________________________________________________
const char *TGeoSkinSurface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSkinSurface*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoSkinSurface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSkinSurface*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoSkinSurface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSkinSurface*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoSkinSurface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSkinSurface*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoBorderSurface::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoBorderSurface::Class_Name()
{
   return "TGeoBorderSurface";
}

//______________________________________________________________________________
const char *TGeoBorderSurface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBorderSurface*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoBorderSurface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoBorderSurface*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoBorderSurface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBorderSurface*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoBorderSurface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoBorderSurface*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPara::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPara::Class_Name()
{
   return "TGeoPara";
}

//______________________________________________________________________________
const char *TGeoPara::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPara::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPara::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPara::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPara*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoParaboloid::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoParaboloid::Class_Name()
{
   return "TGeoParaboloid";
}

//______________________________________________________________________________
const char *TGeoParaboloid::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoParaboloid::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoParaboloid::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoParaboloid::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParaboloid*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoParallelWorld::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoParallelWorld::Class_Name()
{
   return "TGeoParallelWorld";
}

//______________________________________________________________________________
const char *TGeoParallelWorld::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoParallelWorld::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoParallelWorld::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoParallelWorld::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoParallelWorld*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPcon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPcon::Class_Name()
{
   return "TGeoPcon";
}

//______________________________________________________________________________
const char *TGeoPcon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPcon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPcon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPcon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPcon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPgon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPgon::Class_Name()
{
   return "TGeoPgon";
}

//______________________________________________________________________________
const char *TGeoPgon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPgon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPgon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPgon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPgon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPhysicalNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPhysicalNode::Class_Name()
{
   return "TGeoPhysicalNode";
}

//______________________________________________________________________________
const char *TGeoPhysicalNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPhysicalNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPhysicalNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPhysicalNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPhysicalNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPNEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPNEntry::Class_Name()
{
   return "TGeoPNEntry";
}

//______________________________________________________________________________
const char *TGeoPNEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPNEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPNEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPNEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPNEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoPolygon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoPolygon::Class_Name()
{
   return "TGeoPolygon";
}

//______________________________________________________________________________
const char *TGeoPolygon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoPolygon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoPolygon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoPolygon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoPolygon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRegionCut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRegionCut::Class_Name()
{
   return "TGeoRegionCut";
}

//______________________________________________________________________________
const char *TGeoRegionCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegionCut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRegionCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegionCut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRegionCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegionCut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRegionCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegionCut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoRegion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoRegion::Class_Name()
{
   return "TGeoRegion";
}

//______________________________________________________________________________
const char *TGeoRegion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoRegion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoRegion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoRegion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoRegion*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoScaledShape::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoScaledShape::Class_Name()
{
   return "TGeoScaledShape";
}

//______________________________________________________________________________
const char *TGeoScaledShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoScaledShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoScaledShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoScaledShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoScaledShape*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoShapeAssembly::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoShapeAssembly::Class_Name()
{
   return "TGeoShapeAssembly";
}

//______________________________________________________________________________
const char *TGeoShapeAssembly::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoShapeAssembly::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoShapeAssembly::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoShapeAssembly::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoShapeAssembly*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoSphere::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoSphere::Class_Name()
{
   return "TGeoSphere";
}

//______________________________________________________________________________
const char *TGeoSphere::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoSphere::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoSphere::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoSphere::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoSphere*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTorus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTorus::Class_Name()
{
   return "TGeoTorus";
}

//______________________________________________________________________________
const char *TGeoTorus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTorus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTorus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTorus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTorus*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrd1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrd1::Class_Name()
{
   return "TGeoTrd1";
}

//______________________________________________________________________________
const char *TGeoTrd1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrd1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrd1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrd1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTrd2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTrd2::Class_Name()
{
   return "TGeoTrd2";
}

//______________________________________________________________________________
const char *TGeoTrd2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTrd2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTrd2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTrd2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTrd2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoVoxelFinder::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoVoxelFinder::Class_Name()
{
   return "TGeoVoxelFinder";
}

//______________________________________________________________________________
const char *TGeoVoxelFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoVoxelFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoVoxelFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoVoxelFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoVoxelFinder*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoXtru::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoXtru::Class_Name()
{
   return "TGeoXtru";
}

//______________________________________________________________________________
const char *TGeoXtru::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoXtru::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoXtru::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoXtru::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoXtru*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGeoTessellated::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGeoTessellated::Class_Name()
{
   return "TGeoTessellated";
}

//______________________________________________________________________________
const char *TGeoTessellated::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTessellated*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGeoTessellated::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGeoTessellated*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGeoTessellated::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTessellated*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGeoTessellated::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGeoTessellated*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoConverter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoConverter::Class_Name()
{
   return "TVirtualGeoConverter";
}

//______________________________________________________________________________
const char *TVirtualGeoConverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoConverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoConverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoConverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoConverter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoChecker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoChecker::Class_Name()
{
   return "TVirtualGeoChecker";
}

//______________________________________________________________________________
const char *TVirtualGeoChecker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoChecker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoChecker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoChecker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoChecker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoChecker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoChecker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoChecker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoPainter::Class_Name()
{
   return "TVirtualGeoPainter";
}

//______________________________________________________________________________
const char *TVirtualGeoPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TVirtualGeoTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TVirtualGeoTrack::Class_Name()
{
   return "TVirtualGeoTrack";
}

//______________________________________________________________________________
const char *TVirtualGeoTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TVirtualGeoTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TVirtualGeoTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TVirtualGeoTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TVirtualGeoTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlE__thread_idcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<__thread_id,int> : new pair<__thread_id,int>;
   }
   static void *newArray_pairlE__thread_idcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<__thread_id,int>[nElements] : new pair<__thread_id,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlE__thread_idcOintgR(void *p) {
      delete (static_cast<pair<__thread_id,int>*>(p));
   }
   static void deleteArray_pairlE__thread_idcOintgR(void *p) {
      delete [] (static_cast<pair<__thread_id,int>*>(p));
   }
   static void destruct_pairlE__thread_idcOintgR(void *p) {
      typedef pair<__thread_id,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class pair<__thread_id,int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<__thread_id,TGeoNavigatorArray*> : new pair<__thread_id,TGeoNavigatorArray*>;
   }
   static void *newArray_pairlE__thread_idcOTGeoNavigatorArraymUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) pair<__thread_id,TGeoNavigatorArray*>[nElements] : new pair<__thread_id,TGeoNavigatorArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      delete (static_cast<pair<__thread_id,TGeoNavigatorArray*>*>(p));
   }
   static void deleteArray_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      delete [] (static_cast<pair<__thread_id,TGeoNavigatorArray*>*>(p));
   }
   static void destruct_pairlE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      typedef pair<__thread_id,TGeoNavigatorArray*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class pair<__thread_id,TGeoNavigatorArray*>

//______________________________________________________________________________
void TGDMLMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGDMLMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGDMLMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGDMLMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGDMLMatrix(void *p) {
      return  p ? new(p) ::TGDMLMatrix : new ::TGDMLMatrix;
   }
   static void *newArray_TGDMLMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGDMLMatrix[nElements] : new ::TGDMLMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGDMLMatrix(void *p) {
      delete (static_cast<::TGDMLMatrix*>(p));
   }
   static void deleteArray_TGDMLMatrix(void *p) {
      delete [] (static_cast<::TGDMLMatrix*>(p));
   }
   static void destruct_TGDMLMatrix(void *p) {
      typedef ::TGDMLMatrix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGDMLMatrix

//______________________________________________________________________________
void TGeoShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoShape::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoShape(void *p) {
      delete (static_cast<::TGeoShape*>(p));
   }
   static void deleteArray_TGeoShape(void *p) {
      delete [] (static_cast<::TGeoShape*>(p));
   }
   static void destruct_TGeoShape(void *p) {
      typedef ::TGeoShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoShape

//______________________________________________________________________________
void TGeoBBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBBox(void *p) {
      return  p ? new(p) ::TGeoBBox : new ::TGeoBBox;
   }
   static void *newArray_TGeoBBox(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoBBox[nElements] : new ::TGeoBBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoBBox(void *p) {
      delete (static_cast<::TGeoBBox*>(p));
   }
   static void deleteArray_TGeoBBox(void *p) {
      delete [] (static_cast<::TGeoBBox*>(p));
   }
   static void destruct_TGeoBBox(void *p) {
      typedef ::TGeoBBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoArb8(void *p) {
      return  p ? new(p) ::TGeoArb8 : new ::TGeoArb8;
   }
   static void *newArray_TGeoArb8(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoArb8[nElements] : new ::TGeoArb8[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoArb8(void *p) {
      delete (static_cast<::TGeoArb8*>(p));
   }
   static void deleteArray_TGeoArb8(void *p) {
      delete [] (static_cast<::TGeoArb8*>(p));
   }
   static void destruct_TGeoArb8(void *p) {
      typedef ::TGeoArb8 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoArb8(TBuffer &buf, void *obj) {
      ((::TGeoArb8*)obj)->::TGeoArb8::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoArb8

//______________________________________________________________________________
void TGeoTrap::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrap::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrap(void *p) {
      return  p ? new(p) ::TGeoTrap : new ::TGeoTrap;
   }
   static void *newArray_TGeoTrap(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrap[nElements] : new ::TGeoTrap[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrap(void *p) {
      delete (static_cast<::TGeoTrap*>(p));
   }
   static void deleteArray_TGeoTrap(void *p) {
      delete [] (static_cast<::TGeoTrap*>(p));
   }
   static void destruct_TGeoTrap(void *p) {
      typedef ::TGeoTrap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrap

//______________________________________________________________________________
void TGeoGtra::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGtra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoGtra::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoGtra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGtra(void *p) {
      return  p ? new(p) ::TGeoGtra : new ::TGeoGtra;
   }
   static void *newArray_TGeoGtra(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGtra[nElements] : new ::TGeoGtra[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGtra(void *p) {
      delete (static_cast<::TGeoGtra*>(p));
   }
   static void deleteArray_TGeoGtra(void *p) {
      delete [] (static_cast<::TGeoGtra*>(p));
   }
   static void destruct_TGeoGtra(void *p) {
      typedef ::TGeoGtra current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoGtra

//______________________________________________________________________________
void TGeoAtt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoAtt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoAtt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoAtt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoAtt(void *p) {
      return  p ? new(p) ::TGeoAtt : new ::TGeoAtt;
   }
   static void *newArray_TGeoAtt(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoAtt[nElements] : new ::TGeoAtt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoAtt(void *p) {
      delete (static_cast<::TGeoAtt*>(p));
   }
   static void deleteArray_TGeoAtt(void *p) {
      delete [] (static_cast<::TGeoAtt*>(p));
   }
   static void destruct_TGeoAtt(void *p) {
      typedef ::TGeoAtt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoAtt

//______________________________________________________________________________
void TGeoBoolNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBoolNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBoolNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBoolNode::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoBoolNode(void *p) {
      delete (static_cast<::TGeoBoolNode*>(p));
   }
   static void deleteArray_TGeoBoolNode(void *p) {
      delete [] (static_cast<::TGeoBoolNode*>(p));
   }
   static void destruct_TGeoBoolNode(void *p) {
      typedef ::TGeoBoolNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBoolNode

//______________________________________________________________________________
void TGeoUnion::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoUnion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoUnion::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoUnion::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoUnion(void *p) {
      return  p ? new(p) ::TGeoUnion : new ::TGeoUnion;
   }
   static void *newArray_TGeoUnion(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoUnion[nElements] : new ::TGeoUnion[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoUnion(void *p) {
      delete (static_cast<::TGeoUnion*>(p));
   }
   static void deleteArray_TGeoUnion(void *p) {
      delete [] (static_cast<::TGeoUnion*>(p));
   }
   static void destruct_TGeoUnion(void *p) {
      typedef ::TGeoUnion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoUnion

//______________________________________________________________________________
void TGeoIntersection::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIntersection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoIntersection::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoIntersection::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoIntersection(void *p) {
      return  p ? new(p) ::TGeoIntersection : new ::TGeoIntersection;
   }
   static void *newArray_TGeoIntersection(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoIntersection[nElements] : new ::TGeoIntersection[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoIntersection(void *p) {
      delete (static_cast<::TGeoIntersection*>(p));
   }
   static void deleteArray_TGeoIntersection(void *p) {
      delete [] (static_cast<::TGeoIntersection*>(p));
   }
   static void destruct_TGeoIntersection(void *p) {
      typedef ::TGeoIntersection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoIntersection

//______________________________________________________________________________
void TGeoSubtraction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoSubtraction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoSubtraction::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoSubtraction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoSubtraction(void *p) {
      return  p ? new(p) ::TGeoSubtraction : new ::TGeoSubtraction;
   }
   static void *newArray_TGeoSubtraction(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoSubtraction[nElements] : new ::TGeoSubtraction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoSubtraction(void *p) {
      delete (static_cast<::TGeoSubtraction*>(p));
   }
   static void deleteArray_TGeoSubtraction(void *p) {
      delete [] (static_cast<::TGeoSubtraction*>(p));
   }
   static void destruct_TGeoSubtraction(void *p) {
      typedef ::TGeoSubtraction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoSubtraction

//______________________________________________________________________________
void TGeoMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoMatrix(void *p) {
      delete (static_cast<::TGeoMatrix*>(p));
   }
   static void deleteArray_TGeoMatrix(void *p) {
      delete [] (static_cast<::TGeoMatrix*>(p));
   }
   static void destruct_TGeoMatrix(void *p) {
      typedef ::TGeoMatrix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMatrix

//______________________________________________________________________________
void TGeoTranslation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTranslation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTranslation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTranslation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTranslation(void *p) {
      return  p ? new(p) ::TGeoTranslation : new ::TGeoTranslation;
   }
   static void *newArray_TGeoTranslation(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTranslation[nElements] : new ::TGeoTranslation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTranslation(void *p) {
      delete (static_cast<::TGeoTranslation*>(p));
   }
   static void deleteArray_TGeoTranslation(void *p) {
      delete [] (static_cast<::TGeoTranslation*>(p));
   }
   static void destruct_TGeoTranslation(void *p) {
      typedef ::TGeoTranslation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTranslation

//______________________________________________________________________________
void TGeoRotation::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRotation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoRotation::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoRotation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRotation(void *p) {
      return  p ? new(p) ::TGeoRotation : new ::TGeoRotation;
   }
   static void *newArray_TGeoRotation(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoRotation[nElements] : new ::TGeoRotation[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoRotation(void *p) {
      delete (static_cast<::TGeoRotation*>(p));
   }
   static void deleteArray_TGeoRotation(void *p) {
      delete [] (static_cast<::TGeoRotation*>(p));
   }
   static void destruct_TGeoRotation(void *p) {
      typedef ::TGeoRotation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoRotation

//______________________________________________________________________________
void TGeoScale::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoScale.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoScale::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoScale::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoScale(void *p) {
      return  p ? new(p) ::TGeoScale : new ::TGeoScale;
   }
   static void *newArray_TGeoScale(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoScale[nElements] : new ::TGeoScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoScale(void *p) {
      delete (static_cast<::TGeoScale*>(p));
   }
   static void deleteArray_TGeoScale(void *p) {
      delete [] (static_cast<::TGeoScale*>(p));
   }
   static void destruct_TGeoScale(void *p) {
      typedef ::TGeoScale current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoScale

//______________________________________________________________________________
void TGeoCombiTrans::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCombiTrans.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCombiTrans::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCombiTrans::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCombiTrans(void *p) {
      return  p ? new(p) ::TGeoCombiTrans : new ::TGeoCombiTrans;
   }
   static void *newArray_TGeoCombiTrans(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCombiTrans[nElements] : new ::TGeoCombiTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCombiTrans(void *p) {
      delete (static_cast<::TGeoCombiTrans*>(p));
   }
   static void deleteArray_TGeoCombiTrans(void *p) {
      delete [] (static_cast<::TGeoCombiTrans*>(p));
   }
   static void destruct_TGeoCombiTrans(void *p) {
      typedef ::TGeoCombiTrans current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCombiTrans

//______________________________________________________________________________
void TGeoGenTrans::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGenTrans.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoGenTrans::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoGenTrans::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGenTrans(void *p) {
      return  p ? new(p) ::TGeoGenTrans : new ::TGeoGenTrans;
   }
   static void *newArray_TGeoGenTrans(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGenTrans[nElements] : new ::TGeoGenTrans[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGenTrans(void *p) {
      delete (static_cast<::TGeoGenTrans*>(p));
   }
   static void deleteArray_TGeoGenTrans(void *p) {
      delete [] (static_cast<::TGeoGenTrans*>(p));
   }
   static void destruct_TGeoGenTrans(void *p) {
      typedef ::TGeoGenTrans current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoGenTrans

//______________________________________________________________________________
void TGeoIdentity::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIdentity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoIdentity::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoIdentity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoIdentity(void *p) {
      return  p ? new(p) ::TGeoIdentity : new ::TGeoIdentity;
   }
   static void *newArray_TGeoIdentity(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoIdentity[nElements] : new ::TGeoIdentity[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoIdentity(void *p) {
      delete (static_cast<::TGeoIdentity*>(p));
   }
   static void deleteArray_TGeoIdentity(void *p) {
      delete [] (static_cast<::TGeoIdentity*>(p));
   }
   static void destruct_TGeoIdentity(void *p) {
      typedef ::TGeoIdentity current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoIdentity

//______________________________________________________________________________
void TGeoHMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHMatrix(void *p) {
      return  p ? new(p) ::TGeoHMatrix : new ::TGeoHMatrix;
   }
   static void *newArray_TGeoHMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHMatrix[nElements] : new ::TGeoHMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHMatrix(void *p) {
      delete (static_cast<::TGeoHMatrix*>(p));
   }
   static void deleteArray_TGeoHMatrix(void *p) {
      delete [] (static_cast<::TGeoHMatrix*>(p));
   }
   static void destruct_TGeoHMatrix(void *p) {
      typedef ::TGeoHMatrix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHMatrix

//______________________________________________________________________________
void TGeoBranchArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBranchArray.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBranchArray::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBranchArray::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBranchArray(void *p) {
      return  p ? new(p) ::TGeoBranchArray( (TRootIOCtor *)nullptr ) : new ::TGeoBranchArray( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_TGeoBranchArray(void *p) {
      delete (static_cast<::TGeoBranchArray*>(p));
   }
   static void deleteArray_TGeoBranchArray(void *p) {
      delete [] (static_cast<::TGeoBranchArray*>(p));
   }
   static void destruct_TGeoBranchArray(void *p) {
      typedef ::TGeoBranchArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBranchArray

//______________________________________________________________________________
void TGeoBuilder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBuilder.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoBuilder(void *p) {
      delete (static_cast<::TGeoBuilder*>(p));
   }
   static void deleteArray_TGeoBuilder(void *p) {
      delete [] (static_cast<::TGeoBuilder*>(p));
   }
   static void destruct_TGeoBuilder(void *p) {
      typedef ::TGeoBuilder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoBuilder(TBuffer &buf, void *obj) {
      ((::TGeoBuilder*)obj)->::TGeoBuilder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoBuilder

//______________________________________________________________________________
void TGeoElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoElement(void *p) {
      return  p ? new(p) ::TGeoElement : new ::TGeoElement;
   }
   static void *newArray_TGeoElement(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoElement[nElements] : new ::TGeoElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoElement(void *p) {
      delete (static_cast<::TGeoElement*>(p));
   }
   static void deleteArray_TGeoElement(void *p) {
      delete [] (static_cast<::TGeoElement*>(p));
   }
   static void destruct_TGeoElement(void *p) {
      typedef ::TGeoElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElement

//______________________________________________________________________________
void TGeoIsotope::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIsotope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoIsotope::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoIsotope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoIsotope(void *p) {
      return  p ? new(p) ::TGeoIsotope : new ::TGeoIsotope;
   }
   static void *newArray_TGeoIsotope(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoIsotope[nElements] : new ::TGeoIsotope[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoIsotope(void *p) {
      delete (static_cast<::TGeoIsotope*>(p));
   }
   static void deleteArray_TGeoIsotope(void *p) {
      delete [] (static_cast<::TGeoIsotope*>(p));
   }
   static void destruct_TGeoIsotope(void *p) {
      typedef ::TGeoIsotope current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoIsotope

//______________________________________________________________________________
void TGeoElementRN::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElementRN.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElementRN::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElementRN::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoElementRN(void *p) {
      return  p ? new(p) ::TGeoElementRN : new ::TGeoElementRN;
   }
   static void *newArray_TGeoElementRN(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoElementRN[nElements] : new ::TGeoElementRN[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoElementRN(void *p) {
      delete (static_cast<::TGeoElementRN*>(p));
   }
   static void deleteArray_TGeoElementRN(void *p) {
      delete [] (static_cast<::TGeoElementRN*>(p));
   }
   static void destruct_TGeoElementRN(void *p) {
      typedef ::TGeoElementRN current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElementRN

//______________________________________________________________________________
void TGeoDecayChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoDecayChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoDecayChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoDecayChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoDecayChannel(void *p) {
      return  p ? new(p) ::TGeoDecayChannel : new ::TGeoDecayChannel;
   }
   static void *newArray_TGeoDecayChannel(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoDecayChannel[nElements] : new ::TGeoDecayChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoDecayChannel(void *p) {
      delete (static_cast<::TGeoDecayChannel*>(p));
   }
   static void deleteArray_TGeoDecayChannel(void *p) {
      delete [] (static_cast<::TGeoDecayChannel*>(p));
   }
   static void destruct_TGeoDecayChannel(void *p) {
      typedef ::TGeoDecayChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoDecayChannel

//______________________________________________________________________________
void TGeoBatemanSol::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBatemanSol.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBatemanSol::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBatemanSol::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBatemanSol(void *p) {
      return  p ? new(p) ::TGeoBatemanSol : new ::TGeoBatemanSol;
   }
   static void *newArray_TGeoBatemanSol(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoBatemanSol[nElements] : new ::TGeoBatemanSol[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoBatemanSol(void *p) {
      delete (static_cast<::TGeoBatemanSol*>(p));
   }
   static void deleteArray_TGeoBatemanSol(void *p) {
      delete [] (static_cast<::TGeoBatemanSol*>(p));
   }
   static void destruct_TGeoBatemanSol(void *p) {
      typedef ::TGeoBatemanSol current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBatemanSol

//______________________________________________________________________________
void TGeoElemIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElemIter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElemIter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElemIter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoElemIter(void *p) {
      delete (static_cast<::TGeoElemIter*>(p));
   }
   static void deleteArray_TGeoElemIter(void *p) {
      delete [] (static_cast<::TGeoElemIter*>(p));
   }
   static void destruct_TGeoElemIter(void *p) {
      typedef ::TGeoElemIter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElemIter

//______________________________________________________________________________
void TGeoElementTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoElementTable.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoElementTable::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoElementTable::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoElementTable(void *p) {
      return  p ? new(p) ::TGeoElementTable : new ::TGeoElementTable;
   }
   static void *newArray_TGeoElementTable(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoElementTable[nElements] : new ::TGeoElementTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoElementTable(void *p) {
      delete (static_cast<::TGeoElementTable*>(p));
   }
   static void deleteArray_TGeoElementTable(void *p) {
      delete [] (static_cast<::TGeoElementTable*>(p));
   }
   static void destruct_TGeoElementTable(void *p) {
      typedef ::TGeoElementTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoElementTable

//______________________________________________________________________________
void TGeoMaterial::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMaterial.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMaterial::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMaterial::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMaterial(void *p) {
      return  p ? new(p) ::TGeoMaterial : new ::TGeoMaterial;
   }
   static void *newArray_TGeoMaterial(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMaterial[nElements] : new ::TGeoMaterial[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMaterial(void *p) {
      delete (static_cast<::TGeoMaterial*>(p));
   }
   static void deleteArray_TGeoMaterial(void *p) {
      delete [] (static_cast<::TGeoMaterial*>(p));
   }
   static void destruct_TGeoMaterial(void *p) {
      typedef ::TGeoMaterial current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMaterial

//______________________________________________________________________________
void TGeoMixture::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMixture.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMixture::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMixture::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMixture(void *p) {
      return  p ? new(p) ::TGeoMixture : new ::TGeoMixture;
   }
   static void *newArray_TGeoMixture(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMixture[nElements] : new ::TGeoMixture[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMixture(void *p) {
      delete (static_cast<::TGeoMixture*>(p));
   }
   static void deleteArray_TGeoMixture(void *p) {
      delete [] (static_cast<::TGeoMixture*>(p));
   }
   static void destruct_TGeoMixture(void *p) {
      typedef ::TGeoMixture current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMixture

//______________________________________________________________________________
void TGeoMedium::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoMedium.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoMedium::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoMedium::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoMedium(void *p) {
      return  p ? new(p) ::TGeoMedium : new ::TGeoMedium;
   }
   static void *newArray_TGeoMedium(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoMedium[nElements] : new ::TGeoMedium[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoMedium(void *p) {
      delete (static_cast<::TGeoMedium*>(p));
   }
   static void deleteArray_TGeoMedium(void *p) {
      delete [] (static_cast<::TGeoMedium*>(p));
   }
   static void destruct_TGeoMedium(void *p) {
      typedef ::TGeoMedium current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoMedium

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolume(void *p) {
      return  p ? new(p) ::TGeoVolume : new ::TGeoVolume;
   }
   static void *newArray_TGeoVolume(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolume[nElements] : new ::TGeoVolume[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolume(void *p) {
      delete (static_cast<::TGeoVolume*>(p));
   }
   static void deleteArray_TGeoVolume(void *p) {
      delete [] (static_cast<::TGeoVolume*>(p));
   }
   static void destruct_TGeoVolume(void *p) {
      typedef ::TGeoVolume current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoVolume(TBuffer &buf, void *obj) {
      ((::TGeoVolume*)obj)->::TGeoVolume::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoVolume

//______________________________________________________________________________
void TGeoVolumeMulti::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoVolumeMulti.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoVolumeMulti::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoVolumeMulti::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolumeMulti(void *p) {
      return  p ? new(p) ::TGeoVolumeMulti : new ::TGeoVolumeMulti;
   }
   static void *newArray_TGeoVolumeMulti(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolumeMulti[nElements] : new ::TGeoVolumeMulti[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolumeMulti(void *p) {
      delete (static_cast<::TGeoVolumeMulti*>(p));
   }
   static void deleteArray_TGeoVolumeMulti(void *p) {
      delete [] (static_cast<::TGeoVolumeMulti*>(p));
   }
   static void destruct_TGeoVolumeMulti(void *p) {
      typedef ::TGeoVolumeMulti current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoVolumeMulti

//______________________________________________________________________________
void TGeoVolumeAssembly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoVolumeAssembly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoVolumeAssembly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoVolumeAssembly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVolumeAssembly(void *p) {
      return  p ? new(p) ::TGeoVolumeAssembly : new ::TGeoVolumeAssembly;
   }
   static void *newArray_TGeoVolumeAssembly(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVolumeAssembly[nElements] : new ::TGeoVolumeAssembly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVolumeAssembly(void *p) {
      delete (static_cast<::TGeoVolumeAssembly*>(p));
   }
   static void deleteArray_TGeoVolumeAssembly(void *p) {
      delete [] (static_cast<::TGeoVolumeAssembly*>(p));
   }
   static void destruct_TGeoVolumeAssembly(void *p) {
      typedef ::TGeoVolumeAssembly current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoVolumeAssembly

//______________________________________________________________________________
void TGeoPatternFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoPatternFinder(void *p) {
      delete (static_cast<::TGeoPatternFinder*>(p));
   }
   static void deleteArray_TGeoPatternFinder(void *p) {
      delete [] (static_cast<::TGeoPatternFinder*>(p));
   }
   static void destruct_TGeoPatternFinder(void *p) {
      typedef ::TGeoPatternFinder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternFinder

//______________________________________________________________________________
void TGeoPatternX::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternX.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternX::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternX::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternX(void *p) {
      return  p ? new(p) ::TGeoPatternX : new ::TGeoPatternX;
   }
   static void *newArray_TGeoPatternX(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternX[nElements] : new ::TGeoPatternX[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternX(void *p) {
      delete (static_cast<::TGeoPatternX*>(p));
   }
   static void deleteArray_TGeoPatternX(void *p) {
      delete [] (static_cast<::TGeoPatternX*>(p));
   }
   static void destruct_TGeoPatternX(void *p) {
      typedef ::TGeoPatternX current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternX

//______________________________________________________________________________
void TGeoPatternY::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternY.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternY::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternY::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternY(void *p) {
      return  p ? new(p) ::TGeoPatternY : new ::TGeoPatternY;
   }
   static void *newArray_TGeoPatternY(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternY[nElements] : new ::TGeoPatternY[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternY(void *p) {
      delete (static_cast<::TGeoPatternY*>(p));
   }
   static void deleteArray_TGeoPatternY(void *p) {
      delete [] (static_cast<::TGeoPatternY*>(p));
   }
   static void destruct_TGeoPatternY(void *p) {
      typedef ::TGeoPatternY current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternY

//______________________________________________________________________________
void TGeoPatternZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternZ(void *p) {
      return  p ? new(p) ::TGeoPatternZ : new ::TGeoPatternZ;
   }
   static void *newArray_TGeoPatternZ(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternZ[nElements] : new ::TGeoPatternZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternZ(void *p) {
      delete (static_cast<::TGeoPatternZ*>(p));
   }
   static void deleteArray_TGeoPatternZ(void *p) {
      delete [] (static_cast<::TGeoPatternZ*>(p));
   }
   static void destruct_TGeoPatternZ(void *p) {
      typedef ::TGeoPatternZ current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternZ

//______________________________________________________________________________
void TGeoPatternParaX::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternParaX.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternParaX::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternParaX::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternParaX(void *p) {
      return  p ? new(p) ::TGeoPatternParaX : new ::TGeoPatternParaX;
   }
   static void *newArray_TGeoPatternParaX(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternParaX[nElements] : new ::TGeoPatternParaX[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternParaX(void *p) {
      delete (static_cast<::TGeoPatternParaX*>(p));
   }
   static void deleteArray_TGeoPatternParaX(void *p) {
      delete [] (static_cast<::TGeoPatternParaX*>(p));
   }
   static void destruct_TGeoPatternParaX(void *p) {
      typedef ::TGeoPatternParaX current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternParaX

//______________________________________________________________________________
void TGeoPatternParaY::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternParaY.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternParaY::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternParaY::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternParaY(void *p) {
      return  p ? new(p) ::TGeoPatternParaY : new ::TGeoPatternParaY;
   }
   static void *newArray_TGeoPatternParaY(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternParaY[nElements] : new ::TGeoPatternParaY[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternParaY(void *p) {
      delete (static_cast<::TGeoPatternParaY*>(p));
   }
   static void deleteArray_TGeoPatternParaY(void *p) {
      delete [] (static_cast<::TGeoPatternParaY*>(p));
   }
   static void destruct_TGeoPatternParaY(void *p) {
      typedef ::TGeoPatternParaY current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternParaY

//______________________________________________________________________________
void TGeoPatternParaZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternParaZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternParaZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternParaZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternParaZ(void *p) {
      return  p ? new(p) ::TGeoPatternParaZ : new ::TGeoPatternParaZ;
   }
   static void *newArray_TGeoPatternParaZ(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternParaZ[nElements] : new ::TGeoPatternParaZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternParaZ(void *p) {
      delete (static_cast<::TGeoPatternParaZ*>(p));
   }
   static void deleteArray_TGeoPatternParaZ(void *p) {
      delete [] (static_cast<::TGeoPatternParaZ*>(p));
   }
   static void destruct_TGeoPatternParaZ(void *p) {
      typedef ::TGeoPatternParaZ current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternParaZ

//______________________________________________________________________________
void TGeoPatternTrapZ::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternTrapZ.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternTrapZ::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternTrapZ::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternTrapZ(void *p) {
      return  p ? new(p) ::TGeoPatternTrapZ : new ::TGeoPatternTrapZ;
   }
   static void *newArray_TGeoPatternTrapZ(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternTrapZ[nElements] : new ::TGeoPatternTrapZ[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternTrapZ(void *p) {
      delete (static_cast<::TGeoPatternTrapZ*>(p));
   }
   static void deleteArray_TGeoPatternTrapZ(void *p) {
      delete [] (static_cast<::TGeoPatternTrapZ*>(p));
   }
   static void destruct_TGeoPatternTrapZ(void *p) {
      typedef ::TGeoPatternTrapZ current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternTrapZ

//______________________________________________________________________________
void TGeoPatternCylR::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternCylR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternCylR::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternCylR::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternCylR(void *p) {
      return  p ? new(p) ::TGeoPatternCylR : new ::TGeoPatternCylR;
   }
   static void *newArray_TGeoPatternCylR(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternCylR[nElements] : new ::TGeoPatternCylR[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternCylR(void *p) {
      delete (static_cast<::TGeoPatternCylR*>(p));
   }
   static void deleteArray_TGeoPatternCylR(void *p) {
      delete [] (static_cast<::TGeoPatternCylR*>(p));
   }
   static void destruct_TGeoPatternCylR(void *p) {
      typedef ::TGeoPatternCylR current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternCylR

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternCylPhi(void *p) {
      return  p ? new(p) ::TGeoPatternCylPhi : new ::TGeoPatternCylPhi;
   }
   static void *newArray_TGeoPatternCylPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternCylPhi[nElements] : new ::TGeoPatternCylPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternCylPhi(void *p) {
      delete (static_cast<::TGeoPatternCylPhi*>(p));
   }
   static void deleteArray_TGeoPatternCylPhi(void *p) {
      delete [] (static_cast<::TGeoPatternCylPhi*>(p));
   }
   static void destruct_TGeoPatternCylPhi(void *p) {
      typedef ::TGeoPatternCylPhi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPatternCylPhi(TBuffer &buf, void *obj) {
      ((::TGeoPatternCylPhi*)obj)->::TGeoPatternCylPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPatternCylPhi

//______________________________________________________________________________
void TGeoPatternSphR::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternSphR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternSphR::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternSphR::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternSphR(void *p) {
      return  p ? new(p) ::TGeoPatternSphR : new ::TGeoPatternSphR;
   }
   static void *newArray_TGeoPatternSphR(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternSphR[nElements] : new ::TGeoPatternSphR[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternSphR(void *p) {
      delete (static_cast<::TGeoPatternSphR*>(p));
   }
   static void deleteArray_TGeoPatternSphR(void *p) {
      delete [] (static_cast<::TGeoPatternSphR*>(p));
   }
   static void destruct_TGeoPatternSphR(void *p) {
      typedef ::TGeoPatternSphR current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternSphR

//______________________________________________________________________________
void TGeoPatternSphTheta::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternSphTheta.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternSphTheta::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternSphTheta::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternSphTheta(void *p) {
      return  p ? new(p) ::TGeoPatternSphTheta : new ::TGeoPatternSphTheta;
   }
   static void *newArray_TGeoPatternSphTheta(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternSphTheta[nElements] : new ::TGeoPatternSphTheta[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternSphTheta(void *p) {
      delete (static_cast<::TGeoPatternSphTheta*>(p));
   }
   static void deleteArray_TGeoPatternSphTheta(void *p) {
      delete [] (static_cast<::TGeoPatternSphTheta*>(p));
   }
   static void destruct_TGeoPatternSphTheta(void *p) {
      typedef ::TGeoPatternSphTheta current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternSphTheta

//______________________________________________________________________________
void TGeoPatternSphPhi::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternSphPhi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternSphPhi::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternSphPhi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternSphPhi(void *p) {
      return  p ? new(p) ::TGeoPatternSphPhi : new ::TGeoPatternSphPhi;
   }
   static void *newArray_TGeoPatternSphPhi(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternSphPhi[nElements] : new ::TGeoPatternSphPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternSphPhi(void *p) {
      delete (static_cast<::TGeoPatternSphPhi*>(p));
   }
   static void deleteArray_TGeoPatternSphPhi(void *p) {
      delete [] (static_cast<::TGeoPatternSphPhi*>(p));
   }
   static void destruct_TGeoPatternSphPhi(void *p) {
      typedef ::TGeoPatternSphPhi current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternSphPhi

//______________________________________________________________________________
void TGeoPatternHoneycomb::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPatternHoneycomb.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPatternHoneycomb::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPatternHoneycomb::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPatternHoneycomb(void *p) {
      return  p ? new(p) ::TGeoPatternHoneycomb : new ::TGeoPatternHoneycomb;
   }
   static void *newArray_TGeoPatternHoneycomb(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPatternHoneycomb[nElements] : new ::TGeoPatternHoneycomb[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPatternHoneycomb(void *p) {
      delete (static_cast<::TGeoPatternHoneycomb*>(p));
   }
   static void deleteArray_TGeoPatternHoneycomb(void *p) {
      delete [] (static_cast<::TGeoPatternHoneycomb*>(p));
   }
   static void destruct_TGeoPatternHoneycomb(void *p) {
      typedef ::TGeoPatternHoneycomb current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPatternHoneycomb

//______________________________________________________________________________
void TGeoNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNode::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoNode(void *p) {
      delete (static_cast<::TGeoNode*>(p));
   }
   static void deleteArray_TGeoNode(void *p) {
      delete [] (static_cast<::TGeoNode*>(p));
   }
   static void destruct_TGeoNode(void *p) {
      typedef ::TGeoNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNode

//______________________________________________________________________________
void TGeoNodeMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNodeMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNodeMatrix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeMatrix(void *p) {
      return  p ? new(p) ::TGeoNodeMatrix : new ::TGeoNodeMatrix;
   }
   static void *newArray_TGeoNodeMatrix(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeMatrix[nElements] : new ::TGeoNodeMatrix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeMatrix(void *p) {
      delete (static_cast<::TGeoNodeMatrix*>(p));
   }
   static void deleteArray_TGeoNodeMatrix(void *p) {
      delete [] (static_cast<::TGeoNodeMatrix*>(p));
   }
   static void destruct_TGeoNodeMatrix(void *p) {
      typedef ::TGeoNodeMatrix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNodeMatrix

//______________________________________________________________________________
void TGeoNodeOffset::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeOffset.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNodeOffset::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNodeOffset::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeOffset(void *p) {
      return  p ? new(p) ::TGeoNodeOffset : new ::TGeoNodeOffset;
   }
   static void *newArray_TGeoNodeOffset(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeOffset[nElements] : new ::TGeoNodeOffset[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeOffset(void *p) {
      delete (static_cast<::TGeoNodeOffset*>(p));
   }
   static void deleteArray_TGeoNodeOffset(void *p) {
      delete [] (static_cast<::TGeoNodeOffset*>(p));
   }
   static void destruct_TGeoNodeOffset(void *p) {
      typedef ::TGeoNodeOffset current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNodeOffset

//______________________________________________________________________________
void TGeoIteratorPlugin::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIteratorPlugin.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoIteratorPlugin(void *p) {
      delete (static_cast<::TGeoIteratorPlugin*>(p));
   }
   static void deleteArray_TGeoIteratorPlugin(void *p) {
      delete [] (static_cast<::TGeoIteratorPlugin*>(p));
   }
   static void destruct_TGeoIteratorPlugin(void *p) {
      typedef ::TGeoIteratorPlugin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoIteratorPlugin(TBuffer &buf, void *obj) {
      ((::TGeoIteratorPlugin*)obj)->::TGeoIteratorPlugin::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoIteratorPlugin

//______________________________________________________________________________
void TGeoIterator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoIterator.

   ::Error("TGeoIterator::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGeoIterator(void *p) {
      delete (static_cast<::TGeoIterator*>(p));
   }
   static void deleteArray_TGeoIterator(void *p) {
      delete [] (static_cast<::TGeoIterator*>(p));
   }
   static void destruct_TGeoIterator(void *p) {
      typedef ::TGeoIterator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoIterator(TBuffer &buf, void *obj) {
      ((::TGeoIterator*)obj)->::TGeoIterator::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoIterator

//______________________________________________________________________________
void TGeoStateInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoStateInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoStateInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoStateInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoStateInfo(void *p) {
      return  p ? new(p) ::TGeoStateInfo : new ::TGeoStateInfo;
   }
   static void *newArray_TGeoStateInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoStateInfo[nElements] : new ::TGeoStateInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoStateInfo(void *p) {
      delete (static_cast<::TGeoStateInfo*>(p));
   }
   static void deleteArray_TGeoStateInfo(void *p) {
      delete [] (static_cast<::TGeoStateInfo*>(p));
   }
   static void destruct_TGeoStateInfo(void *p) {
      typedef ::TGeoStateInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoStateInfo

//______________________________________________________________________________
void TGeoCacheState::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCacheState.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCacheState::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCacheState::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCacheState(void *p) {
      return  p ? new(p) ::TGeoCacheState : new ::TGeoCacheState;
   }
   static void *newArray_TGeoCacheState(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCacheState[nElements] : new ::TGeoCacheState[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCacheState(void *p) {
      delete (static_cast<::TGeoCacheState*>(p));
   }
   static void deleteArray_TGeoCacheState(void *p) {
      delete [] (static_cast<::TGeoCacheState*>(p));
   }
   static void destruct_TGeoCacheState(void *p) {
      typedef ::TGeoCacheState current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCacheState

//______________________________________________________________________________
void TGeoNodeCache::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNodeCache.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNodeCache::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNodeCache::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNodeCache(void *p) {
      return  p ? new(p) ::TGeoNodeCache : new ::TGeoNodeCache;
   }
   static void *newArray_TGeoNodeCache(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNodeCache[nElements] : new ::TGeoNodeCache[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNodeCache(void *p) {
      delete (static_cast<::TGeoNodeCache*>(p));
   }
   static void deleteArray_TGeoNodeCache(void *p) {
      delete [] (static_cast<::TGeoNodeCache*>(p));
   }
   static void destruct_TGeoNodeCache(void *p) {
      typedef ::TGeoNodeCache current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNodeCache

//______________________________________________________________________________
void TGeoCompositeShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCompositeShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCompositeShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCompositeShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCompositeShape(void *p) {
      return  p ? new(p) ::TGeoCompositeShape : new ::TGeoCompositeShape;
   }
   static void *newArray_TGeoCompositeShape(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCompositeShape[nElements] : new ::TGeoCompositeShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCompositeShape(void *p) {
      delete (static_cast<::TGeoCompositeShape*>(p));
   }
   static void deleteArray_TGeoCompositeShape(void *p) {
      delete [] (static_cast<::TGeoCompositeShape*>(p));
   }
   static void destruct_TGeoCompositeShape(void *p) {
      typedef ::TGeoCompositeShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCompositeShape

//______________________________________________________________________________
void TGeoCone::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCone.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCone::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCone::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCone(void *p) {
      return  p ? new(p) ::TGeoCone : new ::TGeoCone;
   }
   static void *newArray_TGeoCone(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCone[nElements] : new ::TGeoCone[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCone(void *p) {
      delete (static_cast<::TGeoCone*>(p));
   }
   static void deleteArray_TGeoCone(void *p) {
      delete [] (static_cast<::TGeoCone*>(p));
   }
   static void destruct_TGeoCone(void *p) {
      typedef ::TGeoCone current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCone

//______________________________________________________________________________
void TGeoConeSeg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoConeSeg.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoConeSeg::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoConeSeg::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoConeSeg(void *p) {
      return  p ? new(p) ::TGeoConeSeg : new ::TGeoConeSeg;
   }
   static void *newArray_TGeoConeSeg(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoConeSeg[nElements] : new ::TGeoConeSeg[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoConeSeg(void *p) {
      delete (static_cast<::TGeoConeSeg*>(p));
   }
   static void deleteArray_TGeoConeSeg(void *p) {
      delete [] (static_cast<::TGeoConeSeg*>(p));
   }
   static void destruct_TGeoConeSeg(void *p) {
      typedef ::TGeoConeSeg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoConeSeg

//______________________________________________________________________________
void TGeoTube::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTube.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTube::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTube::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTube(void *p) {
      return  p ? new(p) ::TGeoTube : new ::TGeoTube;
   }
   static void *newArray_TGeoTube(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTube[nElements] : new ::TGeoTube[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTube(void *p) {
      delete (static_cast<::TGeoTube*>(p));
   }
   static void deleteArray_TGeoTube(void *p) {
      delete [] (static_cast<::TGeoTube*>(p));
   }
   static void destruct_TGeoTube(void *p) {
      typedef ::TGeoTube current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTube

//______________________________________________________________________________
void TGeoTubeSeg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTubeSeg.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTubeSeg::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTubeSeg::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTubeSeg(void *p) {
      return  p ? new(p) ::TGeoTubeSeg : new ::TGeoTubeSeg;
   }
   static void *newArray_TGeoTubeSeg(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTubeSeg[nElements] : new ::TGeoTubeSeg[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTubeSeg(void *p) {
      delete (static_cast<::TGeoTubeSeg*>(p));
   }
   static void deleteArray_TGeoTubeSeg(void *p) {
      delete [] (static_cast<::TGeoTubeSeg*>(p));
   }
   static void destruct_TGeoTubeSeg(void *p) {
      typedef ::TGeoTubeSeg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTubeSeg

//______________________________________________________________________________
void TGeoCtub::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoCtub.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoCtub::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoCtub::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoCtub(void *p) {
      return  p ? new(p) ::TGeoCtub : new ::TGeoCtub;
   }
   static void *newArray_TGeoCtub(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoCtub[nElements] : new ::TGeoCtub[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoCtub(void *p) {
      delete (static_cast<::TGeoCtub*>(p));
   }
   static void deleteArray_TGeoCtub(void *p) {
      delete [] (static_cast<::TGeoCtub*>(p));
   }
   static void destruct_TGeoCtub(void *p) {
      typedef ::TGeoCtub current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoCtub

//______________________________________________________________________________
void TGeoEltu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoEltu.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoEltu::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoEltu::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoEltu(void *p) {
      return  p ? new(p) ::TGeoEltu : new ::TGeoEltu;
   }
   static void *newArray_TGeoEltu(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoEltu[nElements] : new ::TGeoEltu[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoEltu(void *p) {
      delete (static_cast<::TGeoEltu*>(p));
   }
   static void deleteArray_TGeoEltu(void *p) {
      delete [] (static_cast<::TGeoEltu*>(p));
   }
   static void destruct_TGeoEltu(void *p) {
      typedef ::TGeoEltu current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoEltu

//______________________________________________________________________________
void TGeoExtension::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoExtension.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoExtension::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoExtension::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::TGeoExtension

//______________________________________________________________________________
void TGeoRCExtension::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRCExtension.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoRCExtension::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoRCExtension::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRCExtension(void *p) {
      return  p ? new(p) ::TGeoRCExtension : new ::TGeoRCExtension;
   }
} // end of namespace ROOT for class ::TGeoRCExtension

//______________________________________________________________________________
void TVirtualMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualMagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualMagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualMagField::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualMagField(void *p) {
      delete (static_cast<::TVirtualMagField*>(p));
   }
   static void deleteArray_TVirtualMagField(void *p) {
      delete [] (static_cast<::TVirtualMagField*>(p));
   }
   static void destruct_TVirtualMagField(void *p) {
      typedef ::TVirtualMagField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualMagField

//______________________________________________________________________________
void TGeoUniformMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoUniformMagField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoUniformMagField::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoUniformMagField::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoUniformMagField(void *p) {
      return  p ? new(p) ::TGeoUniformMagField : new ::TGeoUniformMagField;
   }
   static void *newArray_TGeoUniformMagField(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoUniformMagField[nElements] : new ::TGeoUniformMagField[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoUniformMagField(void *p) {
      delete (static_cast<::TGeoUniformMagField*>(p));
   }
   static void deleteArray_TGeoUniformMagField(void *p) {
      delete [] (static_cast<::TGeoUniformMagField*>(p));
   }
   static void destruct_TGeoUniformMagField(void *p) {
      typedef ::TGeoUniformMagField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoUniformMagField

//______________________________________________________________________________
void TGeoGlobalMagField::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoGlobalMagField.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoGlobalMagField(void *p) {
      return  p ? new(p) ::TGeoGlobalMagField : new ::TGeoGlobalMagField;
   }
   static void *newArray_TGeoGlobalMagField(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoGlobalMagField[nElements] : new ::TGeoGlobalMagField[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoGlobalMagField(void *p) {
      delete (static_cast<::TGeoGlobalMagField*>(p));
   }
   static void deleteArray_TGeoGlobalMagField(void *p) {
      delete [] (static_cast<::TGeoGlobalMagField*>(p));
   }
   static void destruct_TGeoGlobalMagField(void *p) {
      typedef ::TGeoGlobalMagField current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoGlobalMagField(TBuffer &buf, void *obj) {
      ((::TGeoGlobalMagField*)obj)->::TGeoGlobalMagField::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoGlobalMagField

//______________________________________________________________________________
void TGeoHalfSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHalfSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHalfSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHalfSpace::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHalfSpace(void *p) {
      return  p ? new(p) ::TGeoHalfSpace : new ::TGeoHalfSpace;
   }
   static void *newArray_TGeoHalfSpace(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHalfSpace[nElements] : new ::TGeoHalfSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHalfSpace(void *p) {
      delete (static_cast<::TGeoHalfSpace*>(p));
   }
   static void deleteArray_TGeoHalfSpace(void *p) {
      delete [] (static_cast<::TGeoHalfSpace*>(p));
   }
   static void destruct_TGeoHalfSpace(void *p) {
      typedef ::TGeoHalfSpace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHalfSpace

//______________________________________________________________________________
void TGeoHelix::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHelix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHelix::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHelix::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHelix(void *p) {
      return  p ? new(p) ::TGeoHelix : new ::TGeoHelix;
   }
   static void *newArray_TGeoHelix(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHelix[nElements] : new ::TGeoHelix[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHelix(void *p) {
      delete (static_cast<::TGeoHelix*>(p));
   }
   static void deleteArray_TGeoHelix(void *p) {
      delete [] (static_cast<::TGeoHelix*>(p));
   }
   static void destruct_TGeoHelix(void *p) {
      typedef ::TGeoHelix current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHelix

//______________________________________________________________________________
void TGeoHype::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoHype.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoHype::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoHype::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoHype(void *p) {
      return  p ? new(p) ::TGeoHype : new ::TGeoHype;
   }
   static void *newArray_TGeoHype(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoHype[nElements] : new ::TGeoHype[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoHype(void *p) {
      delete (static_cast<::TGeoHype*>(p));
   }
   static void deleteArray_TGeoHype(void *p) {
      delete [] (static_cast<::TGeoHype*>(p));
   }
   static void destruct_TGeoHype(void *p) {
      typedef ::TGeoHype current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoHype

//______________________________________________________________________________
void TGeoNavigator::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNavigator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoNavigator::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoNavigator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNavigator(void *p) {
      return  p ? new(p) ::TGeoNavigator : new ::TGeoNavigator;
   }
   static void *newArray_TGeoNavigator(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNavigator[nElements] : new ::TGeoNavigator[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNavigator(void *p) {
      delete (static_cast<::TGeoNavigator*>(p));
   }
   static void deleteArray_TGeoNavigator(void *p) {
      delete [] (static_cast<::TGeoNavigator*>(p));
   }
   static void destruct_TGeoNavigator(void *p) {
      typedef ::TGeoNavigator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoNavigator

//______________________________________________________________________________
void TGeoNavigatorArray::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoNavigatorArray.

   TObjArray::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoNavigatorArray(void *p) {
      return  p ? new(p) ::TGeoNavigatorArray : new ::TGeoNavigatorArray;
   }
   static void *newArray_TGeoNavigatorArray(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoNavigatorArray[nElements] : new ::TGeoNavigatorArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoNavigatorArray(void *p) {
      delete (static_cast<::TGeoNavigatorArray*>(p));
   }
   static void deleteArray_TGeoNavigatorArray(void *p) {
      delete [] (static_cast<::TGeoNavigatorArray*>(p));
   }
   static void destruct_TGeoNavigatorArray(void *p) {
      typedef ::TGeoNavigatorArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoNavigatorArray(TBuffer &buf, void *obj) {
      ((::TGeoNavigatorArray*)obj)->::TGeoNavigatorArray::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TGeoNavigatorArray(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TGeoNavigatorArray*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TGeoNavigatorArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoManager(void *p) {
      return  p ? new(p) ::TGeoManager : new ::TGeoManager;
   }
   static void *newArray_TGeoManager(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoManager[nElements] : new ::TGeoManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoManager(void *p) {
      delete (static_cast<::TGeoManager*>(p));
   }
   static void deleteArray_TGeoManager(void *p) {
      delete [] (static_cast<::TGeoManager*>(p));
   }
   static void destruct_TGeoManager(void *p) {
      typedef ::TGeoManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoManager(TBuffer &buf, void *obj) {
      ((::TGeoManager*)obj)->::TGeoManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoManager

//______________________________________________________________________________
void TGeoOpticalSurface::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoOpticalSurface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoOpticalSurface::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoOpticalSurface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoOpticalSurface(void *p) {
      return  p ? new(p) ::TGeoOpticalSurface : new ::TGeoOpticalSurface;
   }
   static void *newArray_TGeoOpticalSurface(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoOpticalSurface[nElements] : new ::TGeoOpticalSurface[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoOpticalSurface(void *p) {
      delete (static_cast<::TGeoOpticalSurface*>(p));
   }
   static void deleteArray_TGeoOpticalSurface(void *p) {
      delete [] (static_cast<::TGeoOpticalSurface*>(p));
   }
   static void destruct_TGeoOpticalSurface(void *p) {
      typedef ::TGeoOpticalSurface current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoOpticalSurface

//______________________________________________________________________________
void TGeoSkinSurface::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoSkinSurface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoSkinSurface::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoSkinSurface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoSkinSurface(void *p) {
      return  p ? new(p) ::TGeoSkinSurface : new ::TGeoSkinSurface;
   }
   static void *newArray_TGeoSkinSurface(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoSkinSurface[nElements] : new ::TGeoSkinSurface[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoSkinSurface(void *p) {
      delete (static_cast<::TGeoSkinSurface*>(p));
   }
   static void deleteArray_TGeoSkinSurface(void *p) {
      delete [] (static_cast<::TGeoSkinSurface*>(p));
   }
   static void destruct_TGeoSkinSurface(void *p) {
      typedef ::TGeoSkinSurface current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoSkinSurface

//______________________________________________________________________________
void TGeoBorderSurface::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoBorderSurface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoBorderSurface::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoBorderSurface::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoBorderSurface(void *p) {
      return  p ? new(p) ::TGeoBorderSurface : new ::TGeoBorderSurface;
   }
   static void *newArray_TGeoBorderSurface(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoBorderSurface[nElements] : new ::TGeoBorderSurface[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoBorderSurface(void *p) {
      delete (static_cast<::TGeoBorderSurface*>(p));
   }
   static void deleteArray_TGeoBorderSurface(void *p) {
      delete [] (static_cast<::TGeoBorderSurface*>(p));
   }
   static void destruct_TGeoBorderSurface(void *p) {
      typedef ::TGeoBorderSurface current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoBorderSurface

//______________________________________________________________________________
void TGeoPara::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPara.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPara::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPara::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPara(void *p) {
      return  p ? new(p) ::TGeoPara : new ::TGeoPara;
   }
   static void *newArray_TGeoPara(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPara[nElements] : new ::TGeoPara[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPara(void *p) {
      delete (static_cast<::TGeoPara*>(p));
   }
   static void deleteArray_TGeoPara(void *p) {
      delete [] (static_cast<::TGeoPara*>(p));
   }
   static void destruct_TGeoPara(void *p) {
      typedef ::TGeoPara current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPara

//______________________________________________________________________________
void TGeoParaboloid::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoParaboloid.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoParaboloid::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoParaboloid::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoParaboloid(void *p) {
      return  p ? new(p) ::TGeoParaboloid : new ::TGeoParaboloid;
   }
   static void *newArray_TGeoParaboloid(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoParaboloid[nElements] : new ::TGeoParaboloid[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoParaboloid(void *p) {
      delete (static_cast<::TGeoParaboloid*>(p));
   }
   static void deleteArray_TGeoParaboloid(void *p) {
      delete [] (static_cast<::TGeoParaboloid*>(p));
   }
   static void destruct_TGeoParaboloid(void *p) {
      typedef ::TGeoParaboloid current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoParaboloid

//______________________________________________________________________________
void TGeoParallelWorld::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoParallelWorld.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoParallelWorld::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoParallelWorld::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoParallelWorld(void *p) {
      return  p ? new(p) ::TGeoParallelWorld : new ::TGeoParallelWorld;
   }
   static void *newArray_TGeoParallelWorld(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoParallelWorld[nElements] : new ::TGeoParallelWorld[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoParallelWorld(void *p) {
      delete (static_cast<::TGeoParallelWorld*>(p));
   }
   static void deleteArray_TGeoParallelWorld(void *p) {
      delete [] (static_cast<::TGeoParallelWorld*>(p));
   }
   static void destruct_TGeoParallelWorld(void *p) {
      typedef ::TGeoParallelWorld current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoParallelWorld

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPcon(void *p) {
      return  p ? new(p) ::TGeoPcon : new ::TGeoPcon;
   }
   static void *newArray_TGeoPcon(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPcon[nElements] : new ::TGeoPcon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPcon(void *p) {
      delete (static_cast<::TGeoPcon*>(p));
   }
   static void deleteArray_TGeoPcon(void *p) {
      delete [] (static_cast<::TGeoPcon*>(p));
   }
   static void destruct_TGeoPcon(void *p) {
      typedef ::TGeoPcon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoPcon(TBuffer &buf, void *obj) {
      ((::TGeoPcon*)obj)->::TGeoPcon::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoPcon

//______________________________________________________________________________
void TGeoPgon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPgon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPgon::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPgon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPgon(void *p) {
      return  p ? new(p) ::TGeoPgon : new ::TGeoPgon;
   }
   static void *newArray_TGeoPgon(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPgon[nElements] : new ::TGeoPgon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPgon(void *p) {
      delete (static_cast<::TGeoPgon*>(p));
   }
   static void deleteArray_TGeoPgon(void *p) {
      delete [] (static_cast<::TGeoPgon*>(p));
   }
   static void destruct_TGeoPgon(void *p) {
      typedef ::TGeoPgon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPgon

//______________________________________________________________________________
void TGeoPhysicalNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPhysicalNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPhysicalNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPhysicalNode::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPhysicalNode(void *p) {
      return  p ? new(p) ::TGeoPhysicalNode : new ::TGeoPhysicalNode;
   }
   static void *newArray_TGeoPhysicalNode(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPhysicalNode[nElements] : new ::TGeoPhysicalNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPhysicalNode(void *p) {
      delete (static_cast<::TGeoPhysicalNode*>(p));
   }
   static void deleteArray_TGeoPhysicalNode(void *p) {
      delete [] (static_cast<::TGeoPhysicalNode*>(p));
   }
   static void destruct_TGeoPhysicalNode(void *p) {
      typedef ::TGeoPhysicalNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPhysicalNode

//______________________________________________________________________________
void TGeoPNEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPNEntry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPNEntry::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPNEntry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPNEntry(void *p) {
      return  p ? new(p) ::TGeoPNEntry : new ::TGeoPNEntry;
   }
   static void *newArray_TGeoPNEntry(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPNEntry[nElements] : new ::TGeoPNEntry[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPNEntry(void *p) {
      delete (static_cast<::TGeoPNEntry*>(p));
   }
   static void deleteArray_TGeoPNEntry(void *p) {
      delete [] (static_cast<::TGeoPNEntry*>(p));
   }
   static void destruct_TGeoPNEntry(void *p) {
      typedef ::TGeoPNEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPNEntry

//______________________________________________________________________________
void TGeoPolygon::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoPolygon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoPolygon::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoPolygon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoPolygon(void *p) {
      return  p ? new(p) ::TGeoPolygon : new ::TGeoPolygon;
   }
   static void *newArray_TGeoPolygon(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoPolygon[nElements] : new ::TGeoPolygon[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoPolygon(void *p) {
      delete (static_cast<::TGeoPolygon*>(p));
   }
   static void deleteArray_TGeoPolygon(void *p) {
      delete [] (static_cast<::TGeoPolygon*>(p));
   }
   static void destruct_TGeoPolygon(void *p) {
      typedef ::TGeoPolygon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoPolygon

//______________________________________________________________________________
void TGeoRegionCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRegionCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoRegionCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoRegionCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRegionCut(void *p) {
      return  p ? new(p) ::TGeoRegionCut : new ::TGeoRegionCut;
   }
   static void *newArray_TGeoRegionCut(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoRegionCut[nElements] : new ::TGeoRegionCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoRegionCut(void *p) {
      delete (static_cast<::TGeoRegionCut*>(p));
   }
   static void deleteArray_TGeoRegionCut(void *p) {
      delete [] (static_cast<::TGeoRegionCut*>(p));
   }
   static void destruct_TGeoRegionCut(void *p) {
      typedef ::TGeoRegionCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoRegionCut

//______________________________________________________________________________
void TGeoRegion::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoRegion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoRegion::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoRegion::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoRegion(void *p) {
      return  p ? new(p) ::TGeoRegion : new ::TGeoRegion;
   }
   static void *newArray_TGeoRegion(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoRegion[nElements] : new ::TGeoRegion[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoRegion(void *p) {
      delete (static_cast<::TGeoRegion*>(p));
   }
   static void deleteArray_TGeoRegion(void *p) {
      delete [] (static_cast<::TGeoRegion*>(p));
   }
   static void destruct_TGeoRegion(void *p) {
      typedef ::TGeoRegion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoRegion

//______________________________________________________________________________
void TGeoScaledShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoScaledShape.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoScaledShape::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoScaledShape::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoScaledShape(void *p) {
      return  p ? new(p) ::TGeoScaledShape : new ::TGeoScaledShape;
   }
   static void *newArray_TGeoScaledShape(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoScaledShape[nElements] : new ::TGeoScaledShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoScaledShape(void *p) {
      delete (static_cast<::TGeoScaledShape*>(p));
   }
   static void deleteArray_TGeoScaledShape(void *p) {
      delete [] (static_cast<::TGeoScaledShape*>(p));
   }
   static void destruct_TGeoScaledShape(void *p) {
      typedef ::TGeoScaledShape current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoScaledShape

//______________________________________________________________________________
void TGeoShapeAssembly::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoShapeAssembly.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoShapeAssembly::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoShapeAssembly::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoShapeAssembly(void *p) {
      return  p ? new(p) ::TGeoShapeAssembly : new ::TGeoShapeAssembly;
   }
   static void *newArray_TGeoShapeAssembly(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoShapeAssembly[nElements] : new ::TGeoShapeAssembly[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoShapeAssembly(void *p) {
      delete (static_cast<::TGeoShapeAssembly*>(p));
   }
   static void deleteArray_TGeoShapeAssembly(void *p) {
      delete [] (static_cast<::TGeoShapeAssembly*>(p));
   }
   static void destruct_TGeoShapeAssembly(void *p) {
      typedef ::TGeoShapeAssembly current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoShapeAssembly

//______________________________________________________________________________
void TGeoSphere::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoSphere.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoSphere::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoSphere::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoSphere(void *p) {
      return  p ? new(p) ::TGeoSphere : new ::TGeoSphere;
   }
   static void *newArray_TGeoSphere(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoSphere[nElements] : new ::TGeoSphere[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoSphere(void *p) {
      delete (static_cast<::TGeoSphere*>(p));
   }
   static void deleteArray_TGeoSphere(void *p) {
      delete [] (static_cast<::TGeoSphere*>(p));
   }
   static void destruct_TGeoSphere(void *p) {
      typedef ::TGeoSphere current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoSphere

//______________________________________________________________________________
void TGeoTorus::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTorus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTorus::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTorus::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTorus(void *p) {
      return  p ? new(p) ::TGeoTorus : new ::TGeoTorus;
   }
   static void *newArray_TGeoTorus(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTorus[nElements] : new ::TGeoTorus[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTorus(void *p) {
      delete (static_cast<::TGeoTorus*>(p));
   }
   static void deleteArray_TGeoTorus(void *p) {
      delete [] (static_cast<::TGeoTorus*>(p));
   }
   static void destruct_TGeoTorus(void *p) {
      typedef ::TGeoTorus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTorus

//______________________________________________________________________________
void TGeoTrd1::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrd1.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrd1::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrd1::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrd1(void *p) {
      return  p ? new(p) ::TGeoTrd1 : new ::TGeoTrd1;
   }
   static void *newArray_TGeoTrd1(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrd1[nElements] : new ::TGeoTrd1[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrd1(void *p) {
      delete (static_cast<::TGeoTrd1*>(p));
   }
   static void deleteArray_TGeoTrd1(void *p) {
      delete [] (static_cast<::TGeoTrd1*>(p));
   }
   static void destruct_TGeoTrd1(void *p) {
      typedef ::TGeoTrd1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrd1

//______________________________________________________________________________
void TGeoTrd2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTrd2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTrd2::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTrd2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTrd2(void *p) {
      return  p ? new(p) ::TGeoTrd2 : new ::TGeoTrd2;
   }
   static void *newArray_TGeoTrd2(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTrd2[nElements] : new ::TGeoTrd2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTrd2(void *p) {
      delete (static_cast<::TGeoTrd2*>(p));
   }
   static void deleteArray_TGeoTrd2(void *p) {
      delete [] (static_cast<::TGeoTrd2*>(p));
   }
   static void destruct_TGeoTrd2(void *p) {
      typedef ::TGeoTrd2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTrd2

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoVoxelFinder(void *p) {
      return  p ? new(p) ::TGeoVoxelFinder : new ::TGeoVoxelFinder;
   }
   static void *newArray_TGeoVoxelFinder(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoVoxelFinder[nElements] : new ::TGeoVoxelFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoVoxelFinder(void *p) {
      delete (static_cast<::TGeoVoxelFinder*>(p));
   }
   static void deleteArray_TGeoVoxelFinder(void *p) {
      delete [] (static_cast<::TGeoVoxelFinder*>(p));
   }
   static void destruct_TGeoVoxelFinder(void *p) {
      typedef ::TGeoVoxelFinder current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGeoVoxelFinder(TBuffer &buf, void *obj) {
      ((::TGeoVoxelFinder*)obj)->::TGeoVoxelFinder::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGeoVoxelFinder

//______________________________________________________________________________
void TGeoXtru::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoXtru.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoXtru::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoXtru::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoXtru(void *p) {
      return  p ? new(p) ::TGeoXtru : new ::TGeoXtru;
   }
   static void *newArray_TGeoXtru(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoXtru[nElements] : new ::TGeoXtru[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoXtru(void *p) {
      delete (static_cast<::TGeoXtru*>(p));
   }
   static void deleteArray_TGeoXtru(void *p) {
      delete [] (static_cast<::TGeoXtru*>(p));
   }
   static void destruct_TGeoXtru(void *p) {
      typedef ::TGeoXtru current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoXtru

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLGeomcLcLVertex_t(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Geom::Vertex_t : new ::ROOT::Geom::Vertex_t;
   }
   static void *newArray_ROOTcLcLGeomcLcLVertex_t(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Geom::Vertex_t[nElements] : new ::ROOT::Geom::Vertex_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLGeomcLcLVertex_t(void *p) {
      delete (static_cast<::ROOT::Geom::Vertex_t*>(p));
   }
   static void deleteArray_ROOTcLcLGeomcLcLVertex_t(void *p) {
      delete [] (static_cast<::ROOT::Geom::Vertex_t*>(p));
   }
   static void destruct_ROOTcLcLGeomcLcLVertex_t(void *p) {
      typedef ::ROOT::Geom::Vertex_t current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Geom::Vertex_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoFacet(void *p) {
      return  p ? new(p) ::TGeoFacet : new ::TGeoFacet;
   }
   static void *newArray_TGeoFacet(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoFacet[nElements] : new ::TGeoFacet[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoFacet(void *p) {
      delete (static_cast<::TGeoFacet*>(p));
   }
   static void deleteArray_TGeoFacet(void *p) {
      delete [] (static_cast<::TGeoFacet*>(p));
   }
   static void destruct_TGeoFacet(void *p) {
      typedef ::TGeoFacet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoFacet

//______________________________________________________________________________
void TGeoTessellated::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGeoTessellated.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGeoTessellated::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGeoTessellated::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGeoTessellated(void *p) {
      return  p ? new(p) ::TGeoTessellated : new ::TGeoTessellated;
   }
   static void *newArray_TGeoTessellated(Long_t nElements, void *p) {
      return p ? new(p) ::TGeoTessellated[nElements] : new ::TGeoTessellated[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGeoTessellated(void *p) {
      delete (static_cast<::TGeoTessellated*>(p));
   }
   static void deleteArray_TGeoTessellated(void *p) {
      delete [] (static_cast<::TGeoTessellated*>(p));
   }
   static void destruct_TGeoTessellated(void *p) {
      typedef ::TGeoTessellated current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGeoTessellated

//______________________________________________________________________________
void TVirtualGeoConverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoConverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoConverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoConverter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoConverter(void *p) {
      delete (static_cast<::TVirtualGeoConverter*>(p));
   }
   static void deleteArray_TVirtualGeoConverter(void *p) {
      delete [] (static_cast<::TVirtualGeoConverter*>(p));
   }
   static void destruct_TVirtualGeoConverter(void *p) {
      typedef ::TVirtualGeoConverter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoConverter

//______________________________________________________________________________
void TVirtualGeoChecker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoChecker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoChecker::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoChecker::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoChecker(void *p) {
      delete (static_cast<::TVirtualGeoChecker*>(p));
   }
   static void deleteArray_TVirtualGeoChecker(void *p) {
      delete [] (static_cast<::TVirtualGeoChecker*>(p));
   }
   static void destruct_TVirtualGeoChecker(void *p) {
      typedef ::TVirtualGeoChecker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoChecker

//______________________________________________________________________________
void TVirtualGeoPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoPainter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoPainter(void *p) {
      delete (static_cast<::TVirtualGeoPainter*>(p));
   }
   static void deleteArray_TVirtualGeoPainter(void *p) {
      delete [] (static_cast<::TVirtualGeoPainter*>(p));
   }
   static void destruct_TVirtualGeoPainter(void *p) {
      typedef ::TVirtualGeoPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoPainter

//______________________________________________________________________________
void TVirtualGeoTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualGeoTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TVirtualGeoTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(TVirtualGeoTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TVirtualGeoTrack(void *p) {
      delete (static_cast<::TVirtualGeoTrack*>(p));
   }
   static void deleteArray_TVirtualGeoTrack(void *p) {
      delete [] (static_cast<::TVirtualGeoTrack*>(p));
   }
   static void destruct_TVirtualGeoTrack(void *p) {
      typedef ::TVirtualGeoTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TVirtualGeoTrack

namespace ROOT {
   static TClass *vectorlETGeoFacetgR_Dictionary();
   static void vectorlETGeoFacetgR_TClassManip(TClass*);
   static void *new_vectorlETGeoFacetgR(void *p = nullptr);
   static void *newArray_vectorlETGeoFacetgR(Long_t size, void *p);
   static void delete_vectorlETGeoFacetgR(void *p);
   static void deleteArray_vectorlETGeoFacetgR(void *p);
   static void destruct_vectorlETGeoFacetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGeoFacet>*)
   {
      vector<TGeoFacet> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGeoFacet>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGeoFacet>", -2, "functional", 86,
                  typeid(vector<TGeoFacet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGeoFacetgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGeoFacet>) );
      instance.SetNew(&new_vectorlETGeoFacetgR);
      instance.SetNewArray(&newArray_vectorlETGeoFacetgR);
      instance.SetDelete(&delete_vectorlETGeoFacetgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGeoFacetgR);
      instance.SetDestructor(&destruct_vectorlETGeoFacetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGeoFacet> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TGeoFacet>","std::__1::vector<TGeoFacet, std::__1::allocator<TGeoFacet>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TGeoFacet>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGeoFacetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TGeoFacet>*>(nullptr))->GetClass();
      vectorlETGeoFacetgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGeoFacetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGeoFacetgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TGeoFacet> : new vector<TGeoFacet>;
   }
   static void *newArray_vectorlETGeoFacetgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TGeoFacet>[nElements] : new vector<TGeoFacet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGeoFacetgR(void *p) {
      delete (static_cast<vector<TGeoFacet>*>(p));
   }
   static void deleteArray_vectorlETGeoFacetgR(void *p) {
      delete [] (static_cast<vector<TGeoFacet>*>(p));
   }
   static void destruct_vectorlETGeoFacetgR(void *p) {
      typedef vector<TGeoFacet> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TGeoFacet>

namespace ROOT {
   static TClass *vectorlEROOTcLcLGeomcLcLVertex_tgR_Dictionary();
   static void vectorlEROOTcLcLGeomcLcLVertex_tgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLGeomcLcLVertex_tgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p);
   static void deleteArray_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p);
   static void destruct_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Geom::Vertex_t>*)
   {
      vector<ROOT::Geom::Vertex_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Geom::Vertex_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Geom::Vertex_t>", -2, "functional", 86,
                  typeid(vector<ROOT::Geom::Vertex_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLGeomcLcLVertex_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Geom::Vertex_t>) );
      instance.SetNew(&new_vectorlEROOTcLcLGeomcLcLVertex_tgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLGeomcLcLVertex_tgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLGeomcLcLVertex_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLGeomcLcLVertex_tgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLGeomcLcLVertex_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Geom::Vertex_t> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Geom::Vertex_t>","std::__1::vector<ROOT::Geom::Vertex_t, std::__1::allocator<ROOT::Geom::Vertex_t>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Geom::Vertex_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLGeomcLcLVertex_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Geom::Vertex_t>*>(nullptr))->GetClass();
      vectorlEROOTcLcLGeomcLcLVertex_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLGeomcLcLVertex_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Geom::Vertex_t> : new vector<ROOT::Geom::Vertex_t>;
   }
   static void *newArray_vectorlEROOTcLcLGeomcLcLVertex_tgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Geom::Vertex_t>[nElements] : new vector<ROOT::Geom::Vertex_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p) {
      delete (static_cast<vector<ROOT::Geom::Vertex_t>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p) {
      delete [] (static_cast<vector<ROOT::Geom::Vertex_t>*>(p));
   }
   static void destruct_vectorlEROOTcLcLGeomcLcLVertex_tgR(void *p) {
      typedef vector<ROOT::Geom::Vertex_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Geom::Vertex_t>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = nullptr);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 975,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,double>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, double, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, double>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,double>*>(nullptr))->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete (static_cast<map<string,double>*>(p));
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] (static_cast<map<string,double>*>(p));
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplE__thread_idcOintgR_Dictionary();
   static void maplE__thread_idcOintgR_TClassManip(TClass*);
   static void *new_maplE__thread_idcOintgR(void *p = nullptr);
   static void *newArray_maplE__thread_idcOintgR(Long_t size, void *p);
   static void delete_maplE__thread_idcOintgR(void *p);
   static void deleteArray_maplE__thread_idcOintgR(void *p);
   static void destruct_maplE__thread_idcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<__thread_id,int>*)
   {
      map<__thread_id,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<__thread_id,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<__thread_id,int>", -2, "map", 975,
                  typeid(map<__thread_id,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplE__thread_idcOintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<__thread_id,int>) );
      instance.SetNew(&new_maplE__thread_idcOintgR);
      instance.SetNewArray(&newArray_maplE__thread_idcOintgR);
      instance.SetDelete(&delete_maplE__thread_idcOintgR);
      instance.SetDeleteArray(&deleteArray_maplE__thread_idcOintgR);
      instance.SetDestructor(&destruct_maplE__thread_idcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<__thread_id,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<__thread_id,int>","std::__1::map<std::__1::__thread_id, int, std::__1::less<std::__1::__thread_id>, std::__1::allocator<std::__1::pair<std::__1::__thread_id const, int>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<__thread_id,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplE__thread_idcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<__thread_id,int>*>(nullptr))->GetClass();
      maplE__thread_idcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplE__thread_idcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplE__thread_idcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<__thread_id,int> : new map<__thread_id,int>;
   }
   static void *newArray_maplE__thread_idcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<__thread_id,int>[nElements] : new map<__thread_id,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplE__thread_idcOintgR(void *p) {
      delete (static_cast<map<__thread_id,int>*>(p));
   }
   static void deleteArray_maplE__thread_idcOintgR(void *p) {
      delete [] (static_cast<map<__thread_id,int>*>(p));
   }
   static void destruct_maplE__thread_idcOintgR(void *p) {
      typedef map<__thread_id,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<__thread_id,int>

namespace ROOT {
   static TClass *maplE__thread_idcOTGeoNavigatorArraymUgR_Dictionary();
   static void maplE__thread_idcOTGeoNavigatorArraymUgR_TClassManip(TClass*);
   static void *new_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p = nullptr);
   static void *newArray_maplE__thread_idcOTGeoNavigatorArraymUgR(Long_t size, void *p);
   static void delete_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p);
   static void deleteArray_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p);
   static void destruct_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<__thread_id,TGeoNavigatorArray*>*)
   {
      map<__thread_id,TGeoNavigatorArray*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<__thread_id,TGeoNavigatorArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<__thread_id,TGeoNavigatorArray*>", -2, "map", 975,
                  typeid(map<__thread_id,TGeoNavigatorArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplE__thread_idcOTGeoNavigatorArraymUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<__thread_id,TGeoNavigatorArray*>) );
      instance.SetNew(&new_maplE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetNewArray(&newArray_maplE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetDelete(&delete_maplE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetDeleteArray(&deleteArray_maplE__thread_idcOTGeoNavigatorArraymUgR);
      instance.SetDestructor(&destruct_maplE__thread_idcOTGeoNavigatorArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<__thread_id,TGeoNavigatorArray*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<__thread_id,TGeoNavigatorArray*>","std::__1::map<std::__1::__thread_id, TGeoNavigatorArray*, std::__1::less<std::__1::__thread_id>, std::__1::allocator<std::__1::pair<std::__1::__thread_id const, TGeoNavigatorArray*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<__thread_id,TGeoNavigatorArray*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplE__thread_idcOTGeoNavigatorArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<__thread_id,TGeoNavigatorArray*>*>(nullptr))->GetClass();
      maplE__thread_idcOTGeoNavigatorArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplE__thread_idcOTGeoNavigatorArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<__thread_id,TGeoNavigatorArray*> : new map<__thread_id,TGeoNavigatorArray*>;
   }
   static void *newArray_maplE__thread_idcOTGeoNavigatorArraymUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<__thread_id,TGeoNavigatorArray*>[nElements] : new map<__thread_id,TGeoNavigatorArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      delete (static_cast<map<__thread_id,TGeoNavigatorArray*>*>(p));
   }
   static void deleteArray_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      delete [] (static_cast<map<__thread_id,TGeoNavigatorArray*>*>(p));
   }
   static void destruct_maplE__thread_idcOTGeoNavigatorArraymUgR(void *p) {
      typedef map<__thread_id,TGeoNavigatorArray*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<__thread_id,TGeoNavigatorArray*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGeom() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGeom) = RecordReadRules_libGeom();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGeom));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGeom_Impl() {
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
      TROOT::RegisterModule("libGeom",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGeom_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGeom_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGeom() {
  TriggerDictionaryInitialization_libGeom_Impl();
}
