// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooFitXRooFit
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
#include "RooBrowser.h"
#include "XRooFit.h"
#include "RooFit/xRooFit/xRooFit.h"
#include "RooFit/xRooFit/xRooNode.h"
#include "RooFit/xRooFit/xRooNLLVar.h"
#include "RooFit/xRooFit/xRooHypoSpace.h"
#include "RooFit/xRooFit/xRooBrowser.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooBrowser*)
   {
      ::ROOT::Experimental::XRooFit::xRooBrowser *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::XRooFit::xRooBrowser >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooBrowser", ::ROOT::Experimental::XRooFit::xRooBrowser::Class_Version(), "RooFit/xRooFit/xRooBrowser.h", 30,
                  typeid(::ROOT::Experimental::XRooFit::xRooBrowser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::XRooFit::xRooBrowser::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooBrowser) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooBrowser*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooBrowser*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooBrowser*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit_Dictionary();
   static void ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooFit*)
   {
      ::ROOT::Experimental::XRooFit::xRooFit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::XRooFit::xRooFit));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooFit", "RooFit/xRooFit/xRooFit.h", 59,
                  typeid(::ROOT::Experimental::XRooFit::xRooFit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooFit) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooFit*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooFit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooFit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooFit*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*)
   {
      ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooFit::StoredFitResult", ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult::Class_Version(), "RooFit/xRooFit/xRooFit.h", 115,
                  typeid(::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar_Dictionary();
   static void ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooNLLVar*)
   {
      ::ROOT::Experimental::XRooFit::xRooNLLVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::XRooFit::xRooNLLVar));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooNLLVar", "RooFit/xRooFit/xRooNLLVar.h", 59,
                  typeid(::ROOT::Experimental::XRooFit::xRooNLLVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooNLLVar) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooNLLVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooNLLVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooNLLVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooNLLVar*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooHypoSpace*)
   {
      ::ROOT::Experimental::XRooFit::xRooHypoSpace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::XRooFit::xRooHypoSpace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooHypoSpace", ::ROOT::Experimental::XRooFit::xRooHypoSpace::Class_Version(), "RooFit/xRooFit/xRooHypoSpace.h", 27,
                  typeid(::ROOT::Experimental::XRooFit::xRooHypoSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::XRooFit::xRooHypoSpace::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooHypoSpace) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooHypoSpace*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooHypoSpace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooHypoSpace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooNode*)
   {
      ::ROOT::Experimental::XRooFit::xRooNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::XRooFit::xRooNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooNode", ::ROOT::Experimental::XRooFit::xRooNode::Class_Version(), "RooFit/xRooFit/xRooNode.h", 52,
                  typeid(::ROOT::Experimental::XRooFit::xRooNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::XRooFit::xRooNode::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooNode) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*)
   {
      ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::XRooFit::xRooNode::InteractiveObject", ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject::Class_Version(), "RooFit/xRooFit/xRooNode.h", 499,
                  typeid(::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
atomic_TClass_ptr xRooBrowser::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *xRooBrowser::Class_Name()
{
   return "ROOT::Experimental::XRooFit::xRooBrowser";
}

//______________________________________________________________________________
const char *xRooBrowser::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooBrowser*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int xRooBrowser::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooBrowser*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *xRooBrowser::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooBrowser*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *xRooBrowser::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooBrowser*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
atomic_TClass_ptr xRooFit::StoredFitResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *xRooFit::StoredFitResult::Class_Name()
{
   return "ROOT::Experimental::XRooFit::xRooFit::StoredFitResult";
}

//______________________________________________________________________________
const char *xRooFit::StoredFitResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int xRooFit::StoredFitResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *xRooFit::StoredFitResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *xRooFit::StoredFitResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
atomic_TClass_ptr xRooHypoSpace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *xRooHypoSpace::Class_Name()
{
   return "ROOT::Experimental::XRooFit::xRooHypoSpace";
}

//______________________________________________________________________________
const char *xRooHypoSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooHypoSpace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int xRooHypoSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooHypoSpace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *xRooHypoSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooHypoSpace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *xRooHypoSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooHypoSpace*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
atomic_TClass_ptr xRooNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *xRooNode::Class_Name()
{
   return "ROOT::Experimental::XRooFit::xRooNode";
}

//______________________________________________________________________________
const char *xRooNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int xRooNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *xRooNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *xRooNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
atomic_TClass_ptr xRooNode::InteractiveObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *xRooNode::InteractiveObject::Class_Name()
{
   return "ROOT::Experimental::XRooFit::xRooNode::InteractiveObject";
}

//______________________________________________________________________________
const char *xRooNode::InteractiveObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int xRooNode::InteractiveObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *xRooNode::InteractiveObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *xRooNode::InteractiveObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
void xRooBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::XRooFit::xRooBrowser.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::XRooFit::xRooBrowser::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::XRooFit::xRooBrowser::Class(),this);
   }
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p) {
      return  p ? new(p) ::ROOT::Experimental::XRooFit::xRooBrowser : new ::ROOT::Experimental::XRooFit::xRooBrowser;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::XRooFit::xRooBrowser[nElements] : new ::ROOT::Experimental::XRooFit::xRooBrowser[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooBrowser*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooBrowser*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooBrowser(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooBrowser current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooBrowser

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::XRooFit::xRooFit : new ::ROOT::Experimental::XRooFit::xRooFit;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::XRooFit::xRooFit[nElements] : new ::ROOT::Experimental::XRooFit::xRooFit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooFit*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooFit*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFit(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooFit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooFit

namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
void xRooFit::StoredFitResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::XRooFit::xRooFit::StoredFitResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::XRooFit::xRooFit::StoredFitResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::XRooFit::xRooFit::StoredFitResult::Class(),this);
   }
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooFitcLcLStoredFitResult(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooFit::StoredFitResult

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooNLLVar*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooNLLVar*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNLLVar(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooNLLVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooNLLVar

namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
void xRooHypoSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::XRooFit::xRooHypoSpace.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::XRooFit::xRooHypoSpace::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::XRooFit::xRooHypoSpace::Class(),this);
   }
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p) {
      return  p ? new(p) ::ROOT::Experimental::XRooFit::xRooHypoSpace : new ::ROOT::Experimental::XRooFit::xRooHypoSpace;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::XRooFit::xRooHypoSpace[nElements] : new ::ROOT::Experimental::XRooFit::xRooHypoSpace[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooHypoSpace*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooHypoSpace*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooHypoSpace(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooHypoSpace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooHypoSpace

namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
void xRooNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::XRooFit::xRooNode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::XRooFit::xRooNode::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::XRooFit::xRooNode::Class(),this);
   }
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p) {
      return  p ? new(p) ::ROOT::Experimental::XRooFit::xRooNode : new ::ROOT::Experimental::XRooFit::xRooNode;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::XRooFit::xRooNode[nElements] : new ::ROOT::Experimental::XRooFit::xRooNode[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooNode*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooNode*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNode(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooNode

namespace ROOT {
   namespace Experimental {
      namespace XRooFit {
//______________________________________________________________________________
void xRooNode::InteractiveObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::XRooFit::xRooNode::InteractiveObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::XRooFit::xRooNode::InteractiveObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::XRooFit::xRooNode::InteractiveObject::Class(),this);
   }
}

} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
} // namespace ROOT::Experimental::XRooFit
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p) {
      return  p ? new(p) ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject : new ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject[nElements] : new ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p) {
      delete (static_cast<::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p) {
      delete [] (static_cast<::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodecLcLInteractiveObject(void *p) {
      typedef ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::XRooFit::xRooNode::InteractiveObject

namespace ROOT {
   static TClass *vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR_Dictionary();
   static void vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(Long_t size, void *p);
   static void delete_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p);
   static void deleteArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p);
   static void destruct_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >*)
   {
      vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >", -2, "functional", 86,
                  typeid(vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >) );
      instance.SetNew(&new_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR);
      instance.SetNewArray(&newArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR);
      instance.SetDelete(&delete_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR);
      instance.SetDestructor(&destruct_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >","std::__1::vector<std::__1::shared_ptr<ROOT::Experimental::XRooFit::xRooNode>, std::__1::allocator<std::__1::shared_ptr<ROOT::Experimental::XRooFit::xRooNode>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >*>(nullptr))->GetClass();
      vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> > : new vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >;
   }
   static void *newArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >[nElements] : new vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p) {
      delete (static_cast<vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >*>(p));
   }
   static void deleteArray_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p) {
      delete [] (static_cast<vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >*>(p));
   }
   static void destruct_vectorlEshared_ptrlEROOTcLcLExperimentalcLcLXRooFitcLcLxRooNodegRsPgR(void *p) {
      typedef vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<shared_ptr<ROOT::Experimental::XRooFit::xRooNode> >

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRooFitXRooFit() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRooFitXRooFit) = RecordReadRules_libRooFitXRooFit();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRooFitXRooFit));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRooFitXRooFit_Impl() {
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
      TROOT::RegisterModule("libRooFitXRooFit",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooFitXRooFit_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooFitXRooFit_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooFitXRooFit() {
  TriggerDictionaryInitialization_libRooFitXRooFit_Impl();
}
