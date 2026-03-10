// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTFitPanelv7
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
#include "ROOT/RFitPanel.hxx"
#include "ROOT/RFitPanelModel.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModel_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModel_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModel(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel*)
   {
      ::ROOT::Experimental::RFitPanelModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel", "ROOT/RFitPanelModel.hxx", 37,
                  typeid(::ROOT::Experimental::RFitPanelModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModel_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModel);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModel);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModel);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel::RComboBoxItem*)
   {
      ::ROOT::Experimental::RFitPanelModel::RComboBoxItem *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel::RComboBoxItem));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel::RComboBoxItem", "ROOT/RFitPanelModel.hxx", 51,
                  typeid(::ROOT::Experimental::RFitPanelModel::RComboBoxItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel::RComboBoxItem) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel::RComboBoxItem*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel::RComboBoxItem*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RComboBoxItem*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RComboBoxItem*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel::RMethodInfo*)
   {
      ::ROOT::Experimental::RFitPanelModel::RMethodInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel::RMethodInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel::RMethodInfo", "ROOT/RFitPanelModel.hxx", 58,
                  typeid(::ROOT::Experimental::RFitPanelModel::RMethodInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel::RMethodInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel::RMethodInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel::RMethodInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RMethodInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RMethodInfo*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*)
   {
      ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm", "ROOT/RFitPanelModel.hxx", 66,
                  typeid(::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel::RItemInfo*)
   {
      ::ROOT::Experimental::RFitPanelModel::RItemInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel::RItemInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel::RItemInfo", "ROOT/RFitPanelModel.hxx", 75,
                  typeid(::ROOT::Experimental::RFitPanelModel::RItemInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel::RItemInfo) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel::RItemInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel::RItemInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RItemInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RItemInfo*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel::RFuncPar*)
   {
      ::ROOT::Experimental::RFitPanelModel::RFuncPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel::RFuncPar));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel::RFuncPar", "ROOT/RFitPanelModel.hxx", 87,
                  typeid(::ROOT::Experimental::RFitPanelModel::RFuncPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel::RFuncPar) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel::RFuncPar*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel::RFuncPar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RFuncPar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RFuncPar*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanelModel::RFuncParsList*)
   {
      ::ROOT::Experimental::RFitPanelModel::RFuncParsList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanelModel::RFuncParsList));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanelModel::RFuncParsList", "ROOT/RFitPanelModel.hxx", 100,
                  typeid(::ROOT::Experimental::RFitPanelModel::RFuncParsList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanelModel::RFuncParsList) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanelModel::RFuncParsList*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanelModel::RFuncParsList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RFuncParsList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanelModel::RFuncParsList*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRFitPanel_Dictionary();
   static void ROOTcLcLExperimentalcLcLRFitPanel_TClassManip(TClass*);
   static void *new_ROOTcLcLExperimentalcLcLRFitPanel(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanel(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRFitPanel(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanel(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RFitPanel*)
   {
      ::ROOT::Experimental::RFitPanel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RFitPanel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RFitPanel", "ROOT/RFitPanel.hxx", 35,
                  typeid(::ROOT::Experimental::RFitPanel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRFitPanel_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RFitPanel) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRFitPanel);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRFitPanel);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRFitPanel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRFitPanel);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRFitPanel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RFitPanel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RFitPanel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRFitPanel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RFitPanel*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRFitPanel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRFitPanel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel : new ::ROOT::Experimental::RFitPanelModel;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel[nElements] : new ::ROOT::Experimental::RFitPanelModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModel(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RComboBoxItem : new ::ROOT::Experimental::RFitPanelModel::RComboBoxItem;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RComboBoxItem[nElements] : new ::ROOT::Experimental::RFitPanelModel::RComboBoxItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel::RComboBoxItem*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel::RComboBoxItem*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItem(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel::RComboBoxItem current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel::RComboBoxItem

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RMethodInfo : new ::ROOT::Experimental::RFitPanelModel::RMethodInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RMethodInfo[nElements] : new ::ROOT::Experimental::RFitPanelModel::RMethodInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel::RMethodInfo*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel::RMethodInfo*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfo(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel::RMethodInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel::RMethodInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm : new ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm[nElements] : new ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithm(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RItemInfo : new ::ROOT::Experimental::RFitPanelModel::RItemInfo;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RItemInfo[nElements] : new ::ROOT::Experimental::RFitPanelModel::RItemInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel::RItemInfo*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel::RItemInfo*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfo(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel::RItemInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel::RItemInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RFuncPar : new ::ROOT::Experimental::RFitPanelModel::RFuncPar;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RFuncPar[nElements] : new ::ROOT::Experimental::RFitPanelModel::RFuncPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel::RFuncPar*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel::RFuncPar*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPar(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel::RFuncPar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel::RFuncPar

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RFuncParsList : new ::ROOT::Experimental::RFitPanelModel::RFuncParsList;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanelModel::RFuncParsList[nElements] : new ::ROOT::Experimental::RFitPanelModel::RFuncParsList[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanelModel::RFuncParsList*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanelModel::RFuncParsList*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncParsList(void *p) {
      typedef ::ROOT::Experimental::RFitPanelModel::RFuncParsList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanelModel::RFuncParsList

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRFitPanel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanel : new ::ROOT::Experimental::RFitPanel;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRFitPanel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Experimental::RFitPanel[nElements] : new ::ROOT::Experimental::RFitPanel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRFitPanel(void *p) {
      delete (static_cast<::ROOT::Experimental::RFitPanel*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRFitPanel(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RFitPanel*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRFitPanel(void *p) {
      typedef ::ROOT::Experimental::RFitPanel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RFitPanel

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>*)
   {
      vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>","std::__1::vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm, std::__1::allocator<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm> : new vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>[nElements] : new vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMinimezerAlgorithmgR(void *p) {
      typedef vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RFitPanelModel::RMinimezerAlgorithm>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>*)
   {
      vector<ROOT::Experimental::RFitPanelModel::RMethodInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RFitPanelModel::RMethodInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>","std::__1::vector<ROOT::Experimental::RFitPanelModel::RMethodInfo, std::__1::allocator<ROOT::Experimental::RFitPanelModel::RMethodInfo>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RMethodInfo> : new vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>[nElements] : new vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRMethodInfogR(void *p) {
      typedef vector<ROOT::Experimental::RFitPanelModel::RMethodInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RFitPanelModel::RMethodInfo>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RFitPanelModel::RItemInfo>*)
   {
      vector<ROOT::Experimental::RFitPanelModel::RItemInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RFitPanelModel::RItemInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RFitPanelModel::RItemInfo>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RFitPanelModel::RItemInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RFitPanelModel::RItemInfo>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RFitPanelModel::RItemInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RFitPanelModel::RItemInfo>","std::__1::vector<ROOT::Experimental::RFitPanelModel::RItemInfo, std::__1::allocator<ROOT::Experimental::RFitPanelModel::RItemInfo>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RItemInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RItemInfo>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RItemInfo> : new vector<ROOT::Experimental::RFitPanelModel::RItemInfo>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RItemInfo>[nElements] : new vector<ROOT::Experimental::RFitPanelModel::RItemInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RFitPanelModel::RItemInfo>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RFitPanelModel::RItemInfo>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRItemInfogR(void *p) {
      typedef vector<ROOT::Experimental::RFitPanelModel::RItemInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RFitPanelModel::RItemInfo>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RFitPanelModel::RFuncPar>*)
   {
      vector<ROOT::Experimental::RFitPanelModel::RFuncPar> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RFitPanelModel::RFuncPar>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RFitPanelModel::RFuncPar>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RFitPanelModel::RFuncPar>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RFitPanelModel::RFuncPar>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RFitPanelModel::RFuncPar> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RFitPanelModel::RFuncPar>","std::__1::vector<ROOT::Experimental::RFitPanelModel::RFuncPar, std::__1::allocator<ROOT::Experimental::RFitPanelModel::RFuncPar>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RFuncPar>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RFuncPar>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RFuncPar> : new vector<ROOT::Experimental::RFitPanelModel::RFuncPar>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RFuncPar>[nElements] : new vector<ROOT::Experimental::RFitPanelModel::RFuncPar>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RFitPanelModel::RFuncPar>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RFitPanelModel::RFuncPar>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRFuncPargR(void *p) {
      typedef vector<ROOT::Experimental::RFitPanelModel::RFuncPar> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RFitPanelModel::RFuncPar>

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>*)
   {
      vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>","std::__1::vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem, std::__1::allocator<ROOT::Experimental::RFitPanelModel::RComboBoxItem>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem> : new vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>[nElements] : new vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRFitPanelModelcLcLRComboBoxItemgR(void *p) {
      typedef vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RFitPanelModel::RComboBoxItem>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTFitPanelv7() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTFitPanelv7) = RecordReadRules_libROOTFitPanelv7();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTFitPanelv7));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTFitPanelv7_Impl() {
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
      TROOT::RegisterModule("libROOTFitPanelv7",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTFitPanelv7_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTFitPanelv7_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTFitPanelv7() {
  TriggerDictionaryInitialization_libROOTFitPanelv7_Impl();
}
