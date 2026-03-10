// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTHist
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
#include "ROOT/RAxes.hxx"
#include "ROOT/RAxisVariant.hxx"
#include "ROOT/RBinIndex.hxx"
#include "ROOT/RBinIndexRange.hxx"
#include "ROOT/RBinWithError.hxx"
#include "ROOT/RCategoricalAxis.hxx"
#include "ROOT/RHist.hxx"
#include "ROOT/RHistAutoAxisFiller.hxx"
#include "ROOT/RHistConcurrentFiller.hxx"
#include "ROOT/RHistEngine.hxx"
#include "ROOT/RHistFillContext.hxx"
#include "ROOT/RHistStats.hxx"
#include "ROOT/RHistUtils.hxx"
#include "ROOT/RLinearizedIndex.hxx"
#include "ROOT/RRegularAxis.hxx"
#include "ROOT/RVariableBinAxis.hxx"
#include "ROOT/RWeight.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRCategoricalAxis_Dictionary();
   static void ROOTcLcLExperimentalcLcLRCategoricalAxis_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRCategoricalAxis(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRCategoricalAxis(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRCategoricalAxis(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRCategoricalAxis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RCategoricalAxis*)
   {
      ::ROOT::Experimental::RCategoricalAxis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RCategoricalAxis));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RCategoricalAxis", "ROOT/RCategoricalAxis.hxx", 42,
                  typeid(::ROOT::Experimental::RCategoricalAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRCategoricalAxis_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RCategoricalAxis) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRCategoricalAxis);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRCategoricalAxis);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRCategoricalAxis);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRCategoricalAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RCategoricalAxis*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RCategoricalAxis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RCategoricalAxis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRCategoricalAxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RCategoricalAxis*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRCategoricalAxis_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRCategoricalAxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRRegularAxis_Dictionary();
   static void ROOTcLcLExperimentalcLcLRRegularAxis_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRRegularAxis(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRRegularAxis(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRRegularAxis(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRRegularAxis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RRegularAxis*)
   {
      ::ROOT::Experimental::RRegularAxis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RRegularAxis));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RRegularAxis", "ROOT/RRegularAxis.hxx", 38,
                  typeid(::ROOT::Experimental::RRegularAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRRegularAxis_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RRegularAxis) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRRegularAxis);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRRegularAxis);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRRegularAxis);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRRegularAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RRegularAxis*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RRegularAxis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RRegularAxis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRRegularAxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RRegularAxis*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRRegularAxis_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRRegularAxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRVariableBinAxis_Dictionary();
   static void ROOTcLcLExperimentalcLcLRVariableBinAxis_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRVariableBinAxis(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRVariableBinAxis(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRVariableBinAxis(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRVariableBinAxis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RVariableBinAxis*)
   {
      ::ROOT::Experimental::RVariableBinAxis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RVariableBinAxis));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RVariableBinAxis", "ROOT/RVariableBinAxis.hxx", 41,
                  typeid(::ROOT::Experimental::RVariableBinAxis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRVariableBinAxis_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RVariableBinAxis) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRVariableBinAxis);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRVariableBinAxis);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRVariableBinAxis);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRVariableBinAxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RVariableBinAxis*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RVariableBinAxis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RVariableBinAxis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRVariableBinAxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RVariableBinAxis*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRVariableBinAxis_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRVariableBinAxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRAxisVariant_Dictionary();
   static void ROOTcLcLExperimentalcLcLRAxisVariant_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRAxisVariant(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisVariant(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRAxisVariant(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRAxisVariant(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RAxisVariant*)
   {
      ::ROOT::Experimental::RAxisVariant *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RAxisVariant));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RAxisVariant", "ROOT/RAxisVariant.hxx", 30,
                  typeid(::ROOT::Experimental::RAxisVariant), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRAxisVariant_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RAxisVariant) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRAxisVariant);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRAxisVariant);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRAxisVariant);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRAxisVariant);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RAxisVariant*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RAxisVariant*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RAxisVariant*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRAxisVariant_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RAxisVariant*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRAxisVariant_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRAxisVariant_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*)
   {
      ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<double>*)
   {
      ::ROOT::Experimental::RHistEngine<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<double>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<double>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<float>*)
   {
      ::ROOT::Experimental::RHistEngine<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<float>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<float>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<ULong64_t>*)
   {
      ::ROOT::Experimental::RHistEngine<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<ULong64_t>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<ULong64_t>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::RHistEngine<ULong64_t>","ROOT::Experimental::RHistEngine<unsigned long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<ULong64_t>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<Long64_t>*)
   {
      ::ROOT::Experimental::RHistEngine<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<Long64_t>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<Long64_t>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::RHistEngine<Long64_t>","ROOT::Experimental::RHistEngine<long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<Long64_t>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<unsigned long>*)
   {
      ::ROOT::Experimental::RHistEngine<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<unsigned long>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<unsigned long>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<unsigned long>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelElonggR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelElonggR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<long>*)
   {
      ::ROOT::Experimental::RHistEngine<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<long>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelElonggR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<long>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelElonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelElonggR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelElonggR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelElonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<long>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelElonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<unsigned int>*)
   {
      ::ROOT::Experimental::RHistEngine<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<unsigned int>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<unsigned int>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::RHistEngine<unsigned int>","ROOT::Experimental::RHistEngine<unsigned>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<unsigned int>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEintgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistEnginelEintgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistEngine<int>*)
   {
      ::ROOT::Experimental::RHistEngine<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistEngine<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistEngine<int>", "ROOT/RHistEngine.hxx", 70,
                  typeid(::ROOT::Experimental::RHistEngine<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistEnginelEintgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistEngine<int>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistEnginelEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistEnginelEintgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistEnginelEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistEngine<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistEngine<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistEnginelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistEngine<int>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistEnginelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistEnginelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRAxes_Dictionary();
   static void ROOTcLcLExperimentalcLcLInternalcLcLRAxes_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::Internal::RAxes*)
   {
      ::ROOT::Experimental::Internal::RAxes *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::Internal::RAxes));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::Internal::RAxes", "ROOT/RAxes.hxx", 39,
                  typeid(::ROOT::Experimental::Internal::RAxes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLInternalcLcLRAxes_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::Internal::RAxes) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLInternalcLcLRAxes);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRAxes);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLInternalcLcLRAxes);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLInternalcLcLRAxes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::Internal::RAxes*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::Internal::RAxes*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::Internal::RAxes*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLInternalcLcLRAxes_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::Internal::RAxes*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLInternalcLcLRAxes_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLInternalcLcLRAxes_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistStats_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistStats_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistStats(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStats(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistStats(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistStats(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHistStats*)
   {
      ::ROOT::Experimental::RHistStats *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHistStats));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHistStats", "ROOT/RHistStats.hxx", 41,
                  typeid(::ROOT::Experimental::RHistStats), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistStats_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHistStats) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistStats);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistStats);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistStats);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistStats);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHistStats*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHistStats*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistStats*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistStats_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHistStats*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistStats_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistStats_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*)
   {
      ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEdoublegR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEdoublegR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEdoublegR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEdoublegR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEdoublegR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<double>*)
   {
      ::ROOT::Experimental::RHist<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<double>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEdoublegR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<double>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEdoublegR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<double>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEfloatgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEfloatgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEfloatgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEfloatgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEfloatgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEfloatgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<float>*)
   {
      ::ROOT::Experimental::RHist<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<float>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEfloatgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<float>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEfloatgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<float>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEULong64_tgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEULong64_tgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<ULong64_t>*)
   {
      ::ROOT::Experimental::RHist<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<ULong64_t>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEULong64_tgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<ULong64_t>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::RHist<ULong64_t>","ROOT::Experimental::RHist<unsigned long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<ULong64_t>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlELong64_tgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlELong64_tgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<Long64_t>*)
   {
      ::ROOT::Experimental::RHist<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<Long64_t>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlELong64_tgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<Long64_t>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlELong64_tgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlELong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::RHist<Long64_t>","ROOT::Experimental::RHist<long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<Long64_t>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<unsigned long>*)
   {
      ::ROOT::Experimental::RHist<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<unsigned long>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<unsigned long>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<unsigned long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<unsigned long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<unsigned long>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlElonggR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlElonggR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlElonggR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlElonggR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlElonggR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlElonggR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<long>*)
   {
      ::ROOT::Experimental::RHist<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<long>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlElonggR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<long>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlElonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlElonggR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlElonggR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlElonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<long>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<long>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<long>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<unsigned int>*)
   {
      ::ROOT::Experimental::RHist<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<unsigned int>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<unsigned int>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Experimental::RHist<unsigned int>","ROOT::Experimental::RHist<unsigned>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<unsigned int>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRHistlEintgR_Dictionary();
   static void ROOTcLcLExperimentalcLcLRHistlEintgR_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRHistlEintgR(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEintgR(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEintgR(void *p);
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEintgR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RHist<int>*)
   {
      ::ROOT::Experimental::RHist<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RHist<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RHist<int>", "ROOT/RHist.hxx", 64,
                  typeid(::ROOT::Experimental::RHist<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRHistlEintgR_Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::Experimental::RHist<int>) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRHistlEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRHistlEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRHistlEintgR);
      instance.SetStreamerFunc(&streamer_ROOTcLcLExperimentalcLcLRHistlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RHist<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RHist<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRHistlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RHist<int>*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRHistlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRHistlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRCategoricalAxis(void *p) {
      delete (static_cast<::ROOT::Experimental::RCategoricalAxis*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRCategoricalAxis(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RCategoricalAxis*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRCategoricalAxis(void *p) {
      typedef ::ROOT::Experimental::RCategoricalAxis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRCategoricalAxis(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RCategoricalAxis*)obj)->::ROOT::Experimental::RCategoricalAxis::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RCategoricalAxis

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRRegularAxis(void *p) {
      delete (static_cast<::ROOT::Experimental::RRegularAxis*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRRegularAxis(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RRegularAxis*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRRegularAxis(void *p) {
      typedef ::ROOT::Experimental::RRegularAxis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRRegularAxis(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RRegularAxis*)obj)->::ROOT::Experimental::RRegularAxis::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RRegularAxis

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRVariableBinAxis(void *p) {
      delete (static_cast<::ROOT::Experimental::RVariableBinAxis*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRVariableBinAxis(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RVariableBinAxis*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRVariableBinAxis(void *p) {
      typedef ::ROOT::Experimental::RVariableBinAxis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRVariableBinAxis(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RVariableBinAxis*)obj)->::ROOT::Experimental::RVariableBinAxis::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RVariableBinAxis

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRAxisVariant(void *p) {
      delete (static_cast<::ROOT::Experimental::RAxisVariant*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRAxisVariant(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RAxisVariant*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRAxisVariant(void *p) {
      typedef ::ROOT::Experimental::RAxisVariant current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRAxisVariant(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RAxisVariant*)obj)->::ROOT::Experimental::RAxisVariant::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RAxisVariant

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEROOTcLcLExperimentalcLcLRBinWithErrorgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>*)obj)->::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<ROOT::Experimental::RBinWithError>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEdoublegR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<double>*)obj)->::ROOT::Experimental::RHistEngine<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEfloatgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<float>*)obj)->::ROOT::Experimental::RHistEngine<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<float>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<ULong64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<ULong64_t>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEULong64_tgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<ULong64_t>*)obj)->::ROOT::Experimental::RHistEngine<ULong64_t>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<ULong64_t>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<Long64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<Long64_t>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelELong64_tgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<Long64_t>*)obj)->::ROOT::Experimental::RHistEngine<Long64_t>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<Long64_t>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<unsigned long>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<unsigned long>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPlonggR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<unsigned long>*)obj)->::ROOT::Experimental::RHistEngine<unsigned long>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<unsigned long>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<long>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<long>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelElonggR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<long>*)obj)->::ROOT::Experimental::RHistEngine<long>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<long>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<unsigned int>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<unsigned int>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEunsignedsPintgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<unsigned int>*)obj)->::ROOT::Experimental::RHistEngine<unsigned int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<unsigned int>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistEngine<int>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistEngine<int>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(void *p) {
      typedef ::ROOT::Experimental::RHistEngine<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistEnginelEintgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistEngine<int>*)obj)->::ROOT::Experimental::RHistEngine<int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistEngine<int>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(void *p) {
      delete (static_cast<::ROOT::Experimental::Internal::RAxes*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(void *p) {
      delete [] (static_cast<::ROOT::Experimental::Internal::RAxes*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(void *p) {
      typedef ::ROOT::Experimental::Internal::RAxes current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLInternalcLcLRAxes(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::Internal::RAxes*)obj)->::ROOT::Experimental::Internal::RAxes::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::Internal::RAxes

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistStats(void *p) {
      delete (static_cast<::ROOT::Experimental::RHistStats*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistStats(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHistStats*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistStats(void *p) {
      typedef ::ROOT::Experimental::RHistStats current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistStats(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHistStats*)obj)->::ROOT::Experimental::RHistStats::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHistStats

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(void *p) {
      typedef ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEROOTcLcLExperimentalcLcLRBinWithErrorgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>*)obj)->::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<ROOT::Experimental::RBinWithError>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEdoublegR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<double>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<double>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEdoublegR(void *p) {
      typedef ::ROOT::Experimental::RHist<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEdoublegR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<double>*)obj)->::ROOT::Experimental::RHist<double>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEfloatgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<float>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<float>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEfloatgR(void *p) {
      typedef ::ROOT::Experimental::RHist<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEfloatgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<float>*)obj)->::ROOT::Experimental::RHist<float>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<float>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<ULong64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<ULong64_t>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(void *p) {
      typedef ::ROOT::Experimental::RHist<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEULong64_tgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<ULong64_t>*)obj)->::ROOT::Experimental::RHist<ULong64_t>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<ULong64_t>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<Long64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<Long64_t>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(void *p) {
      typedef ::ROOT::Experimental::RHist<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlELong64_tgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<Long64_t>*)obj)->::ROOT::Experimental::RHist<Long64_t>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<Long64_t>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<unsigned long>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<unsigned long>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(void *p) {
      typedef ::ROOT::Experimental::RHist<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEunsignedsPlonggR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<unsigned long>*)obj)->::ROOT::Experimental::RHist<unsigned long>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<unsigned long>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlElonggR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<long>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlElonggR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<long>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlElonggR(void *p) {
      typedef ::ROOT::Experimental::RHist<long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlElonggR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<long>*)obj)->::ROOT::Experimental::RHist<long>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<long>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<unsigned int>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<unsigned int>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(void *p) {
      typedef ::ROOT::Experimental::RHist<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEunsignedsPintgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<unsigned int>*)obj)->::ROOT::Experimental::RHist<unsigned int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<unsigned int>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRHistlEintgR(void *p) {
      delete (static_cast<::ROOT::Experimental::RHist<int>*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRHistlEintgR(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RHist<int>*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRHistlEintgR(void *p) {
      typedef ::ROOT::Experimental::RHist<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLExperimentalcLcLRHistlEintgR(TBuffer &buf, void *obj) {
      ((::ROOT::Experimental::RHist<int>*)obj)->::ROOT::Experimental::RHist<int>::Streamer(buf);
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RHist<int>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTHist() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTHist) = RecordReadRules_libROOTHist();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTHist));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTHist_Impl() {
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
      TROOT::RegisterModule("libROOTHist",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTHist_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTHist_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTHist() {
  TriggerDictionaryInitialization_libROOTHist_Impl();
}
