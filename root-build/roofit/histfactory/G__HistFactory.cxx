// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__HistFactory
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
#include "RooStats/HistFactory/Detail/HistFactoryImpl.h"
#include "RooStats/HistFactory/FlexibleInterpVar.h"
#include "RooStats/HistFactory/HistFactoryException.h"
#include "RooStats/HistFactory/HistFactoryModelUtils.h"
#include "RooStats/HistFactory/HistFactoryNavigation.h"
#include "RooStats/HistFactory/HistoToWorkspaceFactoryFast.h"
#include "RooStats/HistFactory/LinInterpVar.h"
#include "RooStats/HistFactory/MakeModelAndMeasurementsFast.h"
#include "RooStats/HistFactory/Measurement.h"
#include "RooStats/HistFactory/ParamHistFunc.h"
#include "RooStats/HistFactory/PiecewiseInterpolation.h"
#include "RooStats/HistFactory/RooBarlowBeestonLL.h"
#include "RooStats/HistFactory/ConfigParser.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace RooStats {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStats_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats", 0 /*version*/, "RooFit/ModelConfig.h", 31,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &RooStats_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooStats_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace RooStats {
   namespace HistFactory {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStatscLcLHistFactory_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats::HistFactory", 0 /*version*/, "RooStats/HistFactory/Measurement.h", 28,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &RooStatscLcLHistFactory_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooStatscLcLHistFactory_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLOverallSys_Dictionary();
   static void RooStatscLcLHistFactorycLcLOverallSys_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLOverallSys(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLOverallSys(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLOverallSys(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLOverallSys(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLOverallSys(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::OverallSys*)
   {
      ::RooStats::HistFactory::OverallSys *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::OverallSys));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::OverallSys", "RooStats/HistFactory/Measurement.h", 45,
                  typeid(::RooStats::HistFactory::OverallSys), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLOverallSys_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::OverallSys) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLOverallSys);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLOverallSys);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLOverallSys);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLOverallSys);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLOverallSys);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::OverallSys*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::OverallSys*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::OverallSys*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLOverallSys_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::OverallSys*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLOverallSys_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLOverallSys_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLNormFactor_Dictionary();
   static void RooStatscLcLHistFactorycLcLNormFactor_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLNormFactor(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLNormFactor(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLNormFactor(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLNormFactor(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLNormFactor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::NormFactor*)
   {
      ::RooStats::HistFactory::NormFactor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::NormFactor));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::NormFactor", "RooStats/HistFactory/Measurement.h", 69,
                  typeid(::RooStats::HistFactory::NormFactor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLNormFactor_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::NormFactor) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLNormFactor);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLNormFactor);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLNormFactor);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLNormFactor);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLNormFactor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::NormFactor*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::NormFactor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::NormFactor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLNormFactor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::NormFactor*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLNormFactor_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLNormFactor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLHistogramUncertaintyBase_Dictionary();
   static void RooStatscLcLHistFactorycLcLHistogramUncertaintyBase_TClassManip(TClass*);
   static void delete_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistogramUncertaintyBase*)
   {
      ::RooStats::HistFactory::HistogramUncertaintyBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::HistogramUncertaintyBase));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistogramUncertaintyBase", "RooStats/HistFactory/Measurement.h", 99,
                  typeid(::RooStats::HistFactory::HistogramUncertaintyBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLHistogramUncertaintyBase_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistogramUncertaintyBase) );
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistogramUncertaintyBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::HistogramUncertaintyBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistogramUncertaintyBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLHistogramUncertaintyBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistogramUncertaintyBase*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLHistogramUncertaintyBase_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLHistogramUncertaintyBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLHistoSys_Dictionary();
   static void RooStatscLcLHistFactorycLcLHistoSys_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLHistoSys(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLHistoSys(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistoSys(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoSys(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistoSys(void *p);

   // Schema evolution read functions
   static void read_RooStatscLcLHistFactorycLcLHistoSys_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fhLow = oldObj->GetId("fhLow");
      static Int_t id_fhHigh = oldObj->GetId("fhHigh");
#endif
      struct RooStatscLcLHistFactorycLcLHistoSys_Onfile {
         RooStats::HistFactory::HistRef &fhLow;
         RooStats::HistFactory::HistRef &fhHigh;
         RooStatscLcLHistFactorycLcLHistoSys_Onfile(RooStats::HistFactory::HistRef &onfile_fhLow, RooStats::HistFactory::HistRef &onfile_fhHigh ): fhLow(onfile_fhLow), fhHigh(onfile_fhHigh) {}
      };
      static Long_t offset_Onfile_RooStatscLcLHistFactorycLcLHistoSys_fhLow = oldObj->GetClass()->GetDataMemberOffset("fhLow");
      static Long_t offset_Onfile_RooStatscLcLHistFactorycLcLHistoSys_fhHigh = oldObj->GetClass()->GetDataMemberOffset("fhHigh");
      char *onfile_add = (char*)oldObj->GetObject();
      RooStatscLcLHistFactorycLcLHistoSys_Onfile onfile(
         *(RooStats::HistFactory::HistRef*)(onfile_add+offset_Onfile_RooStatscLcLHistFactorycLcLHistoSys_fhLow),
         *(RooStats::HistFactory::HistRef*)(onfile_add+offset_Onfile_RooStatscLcLHistFactorycLcLHistoSys_fhHigh) );

      RooStats::HistFactory::HistoSys* newObj = (RooStats::HistFactory::HistoSys*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     newObj->SetHistoLow ( onfile.fhLow.ReleaseObject() ); \
           newObj->SetHistoHigh( onfile.fhHigh.ReleaseObject() ); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistoSys*)
   {
      ::RooStats::HistFactory::HistoSys *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::HistoSys));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistoSys", "RooStats/HistFactory/Measurement.h", 164,
                  typeid(::RooStats::HistFactory::HistoSys), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLHistoSys_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistoSys) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistoSys);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistoSys);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistoSys);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistoSys);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistoSys);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooStats::HistFactory::HistoSys";
      rule->fTarget      = "";
      rule->fSource      = "RooStats::HistFactory::HistRef fhLow; RooStats::HistFactory::HistRef fhHigh; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooStatscLcLHistFactorycLcLHistoSys_0);
      rule->fCode        = "newObj->SetHistoLow ( onfile.fhLow.ReleaseObject() ); \\n           newObj->SetHistoHigh( onfile.fhHigh.ReleaseObject() ); ";
      rule->fChecksum    = "[0xa79a9653]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistoSys*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::HistoSys*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistoSys*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLHistoSys_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistoSys*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLHistoSys_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLHistoSys_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLHistoFactor_Dictionary();
   static void RooStatscLcLHistFactorycLcLHistoFactor_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLHistoFactor(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLHistoFactor(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistoFactor(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoFactor(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistoFactor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistoFactor*)
   {
      ::RooStats::HistFactory::HistoFactor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::HistoFactor));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistoFactor", "RooStats/HistFactory/Measurement.h", 173,
                  typeid(::RooStats::HistFactory::HistoFactor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLHistoFactor_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistoFactor) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistoFactor);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistoFactor);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistoFactor);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistoFactor);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistoFactor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistoFactor*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::HistoFactor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistoFactor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLHistoFactor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistoFactor*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLHistoFactor_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLHistoFactor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLShapeSys_Dictionary();
   static void RooStatscLcLHistFactorycLcLShapeSys_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLShapeSys(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLShapeSys(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLShapeSys(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLShapeSys(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLShapeSys(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::ShapeSys*)
   {
      ::RooStats::HistFactory::ShapeSys *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::ShapeSys));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::ShapeSys", "RooStats/HistFactory/Measurement.h", 182,
                  typeid(::RooStats::HistFactory::ShapeSys), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLShapeSys_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::ShapeSys) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLShapeSys);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLShapeSys);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLShapeSys);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLShapeSys);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLShapeSys);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::ShapeSys*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::ShapeSys*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::ShapeSys*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLShapeSys_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::ShapeSys*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLShapeSys_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLShapeSys_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLShapeFactor_Dictionary();
   static void RooStatscLcLHistFactorycLcLShapeFactor_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLShapeFactor(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLShapeFactor(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLShapeFactor(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLShapeFactor(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLShapeFactor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::ShapeFactor*)
   {
      ::RooStats::HistFactory::ShapeFactor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::ShapeFactor));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::ShapeFactor", "RooStats/HistFactory/Measurement.h", 224,
                  typeid(::RooStats::HistFactory::ShapeFactor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLShapeFactor_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::ShapeFactor) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLShapeFactor);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLShapeFactor);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLShapeFactor);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLShapeFactor);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLShapeFactor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::ShapeFactor*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::ShapeFactor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::ShapeFactor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLShapeFactor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::ShapeFactor*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLShapeFactor_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLShapeFactor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLStatError_Dictionary();
   static void RooStatscLcLHistFactorycLcLStatError_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLStatError(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLStatError(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLStatError(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLStatError(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLStatError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::StatError*)
   {
      ::RooStats::HistFactory::StatError *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::StatError));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::StatError", "RooStats/HistFactory/Measurement.h", 272,
                  typeid(::RooStats::HistFactory::StatError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLStatError_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::StatError) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLStatError);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLStatError);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLStatError);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLStatError);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLStatError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::StatError*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::StatError*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::StatError*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLStatError_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::StatError*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLStatError_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLStatError_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLStatErrorConfig_Dictionary();
   static void RooStatscLcLHistFactorycLcLStatErrorConfig_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLStatErrorConfig(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::StatErrorConfig*)
   {
      ::RooStats::HistFactory::StatErrorConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::StatErrorConfig));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::StatErrorConfig", "RooStats/HistFactory/Measurement.h", 309,
                  typeid(::RooStats::HistFactory::StatErrorConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLStatErrorConfig_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::StatErrorConfig) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLStatErrorConfig);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLStatErrorConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::StatErrorConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::StatErrorConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::StatErrorConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLStatErrorConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::StatErrorConfig*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLStatErrorConfig_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLStatErrorConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLHistRef_Dictionary();
   static void RooStatscLcLHistFactorycLcLHistRef_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLHistRef(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLHistRef(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistRef(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistRef(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistRef(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistRef*)
   {
      ::RooStats::HistFactory::HistRef *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::HistRef));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistRef", "RooStats/HistFactory/Measurement.h", 329,
                  typeid(::RooStats::HistFactory::HistRef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLHistRef_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistRef) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistRef);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistRef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistRef*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::HistRef*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistRef*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLHistRef_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistRef*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLHistRef_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLHistRef_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLAsimov_Dictionary();
   static void RooStatscLcLHistFactorycLcLAsimov_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLAsimov(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLAsimov(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLAsimov(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLAsimov(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLAsimov(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Asimov*)
   {
      ::RooStats::HistFactory::Asimov *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Asimov));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Asimov", "RooStats/HistFactory/Measurement.h", 356,
                  typeid(::RooStats::HistFactory::Asimov), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLAsimov_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Asimov) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLAsimov);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLAsimov);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Asimov*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::Asimov*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Asimov*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLAsimov_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Asimov*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLAsimov_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLAsimov_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLPreprocessFunction_Dictionary();
   static void RooStatscLcLHistFactorycLcLPreprocessFunction_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLPreprocessFunction(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::PreprocessFunction*)
   {
      ::RooStats::HistFactory::PreprocessFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::PreprocessFunction));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::PreprocessFunction", "RooStats/HistFactory/Measurement.h", 379,
                  typeid(::RooStats::HistFactory::PreprocessFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLPreprocessFunction_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::PreprocessFunction) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLPreprocessFunction);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLPreprocessFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::PreprocessFunction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::PreprocessFunction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::PreprocessFunction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLPreprocessFunction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::PreprocessFunction*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLPreprocessFunction_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLPreprocessFunction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLData_Dictionary();
   static void RooStatscLcLHistFactorycLcLData_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLData(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLData(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLData(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLData(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Data*)
   {
      ::RooStats::HistFactory::Data *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Data));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Data", "RooStats/HistFactory/Measurement.h", 405,
                  typeid(::RooStats::HistFactory::Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLData_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Data) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLData);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLData);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLData);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLData);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Data*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::Data*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Data*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Data*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLData_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLSample_Dictionary();
   static void RooStatscLcLHistFactorycLcLSample_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLSample(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLSample(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLSample(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLSample(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLSample(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Sample*)
   {
      ::RooStats::HistFactory::Sample *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Sample));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Sample", "RooStats/HistFactory/Measurement.h", 445,
                  typeid(::RooStats::HistFactory::Sample), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLSample_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Sample) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLSample);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLSample);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLSample);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLSample);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLSample);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Sample*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::Sample*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Sample*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLSample_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Sample*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLSample_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLSample_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooStatscLcLHistFactorycLcLChannel_Dictionary();
   static void RooStatscLcLHistFactorycLcLChannel_TClassManip(TClass*);
   static void *new_RooStatscLcLHistFactorycLcLChannel(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLChannel(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLChannel(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLChannel(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Channel*)
   {
      ::RooStats::HistFactory::Channel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooStats::HistFactory::Channel));
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Channel", "RooStats/HistFactory/Measurement.h", 575,
                  typeid(::RooStats::HistFactory::Channel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooStatscLcLHistFactorycLcLChannel_Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Channel) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLChannel);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLChannel);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLChannel);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLChannel);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Channel*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::Channel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Channel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooStatscLcLHistFactorycLcLChannel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Channel*>(nullptr))->GetClass();
      RooStatscLcLHistFactorycLcLChannel_TClassManip(theClass);
   return theClass;
   }

   static void RooStatscLcLHistFactorycLcLChannel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLMeasurement(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLMeasurement(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLMeasurement(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLMeasurement(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLMeasurement(void *p);

   // Schema evolution read functions
   static void read_RooStatscLcLHistFactorycLcLMeasurement_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fPOI = oldObj->GetId("fPOI");
#endif
      struct RooStatscLcLHistFactorycLcLMeasurement_Onfile {
         std::string &fPOI;
         RooStatscLcLHistFactorycLcLMeasurement_Onfile(std::string &onfile_fPOI ): fPOI(onfile_fPOI) {}
      };
      static Long_t offset_Onfile_RooStatscLcLHistFactorycLcLMeasurement_fPOI = oldObj->GetClass()->GetDataMemberOffset("fPOI");
      char *onfile_add = (char*)oldObj->GetObject();
      RooStatscLcLHistFactorycLcLMeasurement_Onfile onfile(
         *(std::string*)(onfile_add+offset_Onfile_RooStatscLcLHistFactorycLcLMeasurement_fPOI) );

      static TClassRef cls("RooStats::HistFactory::Measurement");
      static Long_t offset_fPOI = cls->GetDataMemberOffset("fPOI");
      vector<string>& fPOI = *(vector<string>*)(target+offset_fPOI);
      RooStats::HistFactory::Measurement* newObj = (RooStats::HistFactory::Measurement*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      fPOI.push_back(onfile.fPOI) ; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::Measurement*)
   {
      ::RooStats::HistFactory::Measurement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::Measurement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::Measurement", ::RooStats::HistFactory::Measurement::Class_Version(), "RooStats/HistFactory/Measurement.h", 650,
                  typeid(::RooStats::HistFactory::Measurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::Measurement::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::Measurement) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLMeasurement);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLMeasurement);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "RooStats::HistFactory::Measurement";
      rule->fTarget      = "fPOI";
      rule->fSource      = "string fPOI; ";
      rule->fFunctionPtr = (void *)TFunc2void( read_RooStatscLcLHistFactorycLcLMeasurement_0);
      rule->fCode        = " fPOI.push_back(onfile.fPOI) ; ";
      rule->fChecksum    = "[973506941]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::Measurement*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::Measurement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::Measurement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::FlexibleInterpVar*)
   {
      ::RooStats::HistFactory::FlexibleInterpVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::FlexibleInterpVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::FlexibleInterpVar", ::RooStats::HistFactory::FlexibleInterpVar::Class_Version(), "RooStats/HistFactory/FlexibleInterpVar.h", 22,
                  typeid(::RooStats::HistFactory::FlexibleInterpVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::FlexibleInterpVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::FlexibleInterpVar) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLFlexibleInterpVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::FlexibleInterpVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::FlexibleInterpVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::FlexibleInterpVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ParamHistFunc(void *p = nullptr);
   static void *newArray_ParamHistFunc(Long_t size, void *p);
   static void delete_ParamHistFunc(void *p);
   static void deleteArray_ParamHistFunc(void *p);
   static void destruct_ParamHistFunc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ParamHistFunc*)
   {
      ::ParamHistFunc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ParamHistFunc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ParamHistFunc", ::ParamHistFunc::Class_Version(), "RooStats/HistFactory/ParamHistFunc.h", 24,
                  typeid(::ParamHistFunc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ParamHistFunc::Dictionary, isa_proxy, 4,
                  sizeof(::ParamHistFunc) );
      instance.SetNew(&new_ParamHistFunc);
      instance.SetNewArray(&newArray_ParamHistFunc);
      instance.SetDelete(&delete_ParamHistFunc);
      instance.SetDeleteArray(&deleteArray_ParamHistFunc);
      instance.SetDestructor(&destruct_ParamHistFunc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ParamHistFunc*)
   {
      return GenerateInitInstanceLocal(static_cast<::ParamHistFunc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ParamHistFunc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistFactoryNavigation*)
   {
      ::RooStats::HistFactory::HistFactoryNavigation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::HistFactoryNavigation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistFactoryNavigation", ::RooStats::HistFactory::HistFactoryNavigation::Class_Version(), "RooStats/HistFactory/HistFactoryNavigation.h", 20,
                  typeid(::RooStats::HistFactory::HistFactoryNavigation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::HistFactoryNavigation::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistFactoryNavigation) );
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistFactoryNavigation);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistFactoryNavigation);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistFactoryNavigation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistFactoryNavigation*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::HistFactoryNavigation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistFactoryNavigation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)
   {
      ::RooStats::HistFactory::HistoToWorkspaceFactoryFast *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::HistoToWorkspaceFactoryFast >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::HistoToWorkspaceFactoryFast", ::RooStats::HistFactory::HistoToWorkspaceFactoryFast::Class_Version(), "RooStats/HistFactory/HistoToWorkspaceFactoryFast.h", 43,
                  typeid(::RooStats::HistFactory::HistoToWorkspaceFactoryFast), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::HistoToWorkspaceFactoryFast::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::HistoToWorkspaceFactoryFast) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::HistoToWorkspaceFactoryFast*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHistFactorycLcLLinInterpVar(void *p = nullptr);
   static void *newArray_RooStatscLcLHistFactorycLcLLinInterpVar(Long_t size, void *p);
   static void delete_RooStatscLcLHistFactorycLcLLinInterpVar(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLLinInterpVar(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLLinInterpVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::LinInterpVar*)
   {
      ::RooStats::HistFactory::LinInterpVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::LinInterpVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::LinInterpVar", ::RooStats::HistFactory::LinInterpVar::Class_Version(), "RooStats/HistFactory/LinInterpVar.h", 25,
                  typeid(::RooStats::HistFactory::LinInterpVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::LinInterpVar::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::LinInterpVar) );
      instance.SetNew(&new_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetNewArray(&newArray_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLLinInterpVar);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLLinInterpVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::LinInterpVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::LinInterpVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::LinInterpVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PiecewiseInterpolation(void *p = nullptr);
   static void *newArray_PiecewiseInterpolation(Long_t size, void *p);
   static void delete_PiecewiseInterpolation(void *p);
   static void deleteArray_PiecewiseInterpolation(void *p);
   static void destruct_PiecewiseInterpolation(void *p);
   static void streamer_PiecewiseInterpolation(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PiecewiseInterpolation*)
   {
      ::PiecewiseInterpolation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PiecewiseInterpolation >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("PiecewiseInterpolation", ::PiecewiseInterpolation::Class_Version(), "RooStats/HistFactory/PiecewiseInterpolation.h", 30,
                  typeid(::PiecewiseInterpolation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PiecewiseInterpolation::Dictionary, isa_proxy, 17,
                  sizeof(::PiecewiseInterpolation) );
      instance.SetNew(&new_PiecewiseInterpolation);
      instance.SetNewArray(&newArray_PiecewiseInterpolation);
      instance.SetDelete(&delete_PiecewiseInterpolation);
      instance.SetDeleteArray(&deleteArray_PiecewiseInterpolation);
      instance.SetDestructor(&destruct_PiecewiseInterpolation);
      instance.SetStreamerFunc(&streamer_PiecewiseInterpolation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PiecewiseInterpolation*)
   {
      return GenerateInitInstanceLocal(static_cast<::PiecewiseInterpolation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::PiecewiseInterpolation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p);
   static void deleteArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p);
   static void destruct_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HistFactory::RooBarlowBeestonLL*)
   {
      ::RooStats::HistFactory::RooBarlowBeestonLL *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HistFactory::RooBarlowBeestonLL >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HistFactory::RooBarlowBeestonLL", ::RooStats::HistFactory::RooBarlowBeestonLL::Class_Version(), "RooStats/HistFactory/RooBarlowBeestonLL.h", 25,
                  typeid(::RooStats::HistFactory::RooBarlowBeestonLL), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HistFactory::RooBarlowBeestonLL::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HistFactory::RooBarlowBeestonLL) );
      instance.SetDelete(&delete_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      instance.SetDestructor(&destruct_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HistFactory::RooBarlowBeestonLL*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HistFactory::RooBarlowBeestonLL*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HistFactory::RooBarlowBeestonLL*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr Measurement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Measurement::Class_Name()
{
   return "RooStats::HistFactory::Measurement";
}

//______________________________________________________________________________
const char *Measurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Measurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Measurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Measurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::Measurement*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr FlexibleInterpVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FlexibleInterpVar::Class_Name()
{
   return "RooStats::HistFactory::FlexibleInterpVar";
}

//______________________________________________________________________________
const char *FlexibleInterpVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FlexibleInterpVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FlexibleInterpVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FlexibleInterpVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::FlexibleInterpVar*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
//______________________________________________________________________________
atomic_TClass_ptr ParamHistFunc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ParamHistFunc::Class_Name()
{
   return "ParamHistFunc";
}

//______________________________________________________________________________
const char *ParamHistFunc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ParamHistFunc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ParamHistFunc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ParamHistFunc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ParamHistFunc*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr HistFactoryNavigation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HistFactoryNavigation::Class_Name()
{
   return "RooStats::HistFactory::HistFactoryNavigation";
}

//______________________________________________________________________________
const char *HistFactoryNavigation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HistFactoryNavigation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistFactoryNavigation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistFactoryNavigation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistFactoryNavigation*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr HistoToWorkspaceFactoryFast::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HistoToWorkspaceFactoryFast::Class_Name()
{
   return "RooStats::HistFactory::HistoToWorkspaceFactoryFast";
}

//______________________________________________________________________________
const char *HistoToWorkspaceFactoryFast::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HistoToWorkspaceFactoryFast::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HistoToWorkspaceFactoryFast::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HistoToWorkspaceFactoryFast::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::HistoToWorkspaceFactoryFast*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr LinInterpVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LinInterpVar::Class_Name()
{
   return "RooStats::HistFactory::LinInterpVar";
}

//______________________________________________________________________________
const char *LinInterpVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LinInterpVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LinInterpVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LinInterpVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::LinInterpVar*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
//______________________________________________________________________________
atomic_TClass_ptr PiecewiseInterpolation::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PiecewiseInterpolation::Class_Name()
{
   return "PiecewiseInterpolation";
}

//______________________________________________________________________________
const char *PiecewiseInterpolation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PiecewiseInterpolation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PiecewiseInterpolation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PiecewiseInterpolation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PiecewiseInterpolation*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
atomic_TClass_ptr RooBarlowBeestonLL::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RooBarlowBeestonLL::Class_Name()
{
   return "RooStats::HistFactory::RooBarlowBeestonLL";
}

//______________________________________________________________________________
const char *RooBarlowBeestonLL::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RooBarlowBeestonLL::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RooBarlowBeestonLL::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RooBarlowBeestonLL::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HistFactory::RooBarlowBeestonLL*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLOverallSys(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::OverallSys : new ::RooStats::HistFactory::OverallSys;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLOverallSys(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::OverallSys[nElements] : new ::RooStats::HistFactory::OverallSys[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLOverallSys(void *p) {
      delete (static_cast<::RooStats::HistFactory::OverallSys*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLOverallSys(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::OverallSys*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLOverallSys(void *p) {
      typedef ::RooStats::HistFactory::OverallSys current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::OverallSys

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLNormFactor(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::NormFactor : new ::RooStats::HistFactory::NormFactor;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLNormFactor(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::NormFactor[nElements] : new ::RooStats::HistFactory::NormFactor[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLNormFactor(void *p) {
      delete (static_cast<::RooStats::HistFactory::NormFactor*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLNormFactor(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::NormFactor*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLNormFactor(void *p) {
      typedef ::RooStats::HistFactory::NormFactor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::NormFactor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase(void *p) {
      delete (static_cast<::RooStats::HistFactory::HistogramUncertaintyBase*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::HistogramUncertaintyBase*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistogramUncertaintyBase(void *p) {
      typedef ::RooStats::HistFactory::HistogramUncertaintyBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistogramUncertaintyBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistoSys(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::HistoSys : new ::RooStats::HistFactory::HistoSys;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistoSys(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::HistoSys[nElements] : new ::RooStats::HistFactory::HistoSys[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistoSys(void *p) {
      delete (static_cast<::RooStats::HistFactory::HistoSys*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoSys(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::HistoSys*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistoSys(void *p) {
      typedef ::RooStats::HistFactory::HistoSys current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistoSys

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistoFactor(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::HistoFactor : new ::RooStats::HistFactory::HistoFactor;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistoFactor(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::HistoFactor[nElements] : new ::RooStats::HistFactory::HistoFactor[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistoFactor(void *p) {
      delete (static_cast<::RooStats::HistFactory::HistoFactor*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoFactor(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::HistoFactor*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistoFactor(void *p) {
      typedef ::RooStats::HistFactory::HistoFactor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistoFactor

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLShapeSys(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::ShapeSys : new ::RooStats::HistFactory::ShapeSys;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLShapeSys(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::ShapeSys[nElements] : new ::RooStats::HistFactory::ShapeSys[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLShapeSys(void *p) {
      delete (static_cast<::RooStats::HistFactory::ShapeSys*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLShapeSys(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::ShapeSys*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLShapeSys(void *p) {
      typedef ::RooStats::HistFactory::ShapeSys current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::ShapeSys

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLShapeFactor(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::ShapeFactor : new ::RooStats::HistFactory::ShapeFactor;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLShapeFactor(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::ShapeFactor[nElements] : new ::RooStats::HistFactory::ShapeFactor[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLShapeFactor(void *p) {
      delete (static_cast<::RooStats::HistFactory::ShapeFactor*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLShapeFactor(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::ShapeFactor*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLShapeFactor(void *p) {
      typedef ::RooStats::HistFactory::ShapeFactor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::ShapeFactor

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLStatError(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::StatError : new ::RooStats::HistFactory::StatError;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLStatError(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::StatError[nElements] : new ::RooStats::HistFactory::StatError[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLStatError(void *p) {
      delete (static_cast<::RooStats::HistFactory::StatError*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLStatError(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::StatError*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLStatError(void *p) {
      typedef ::RooStats::HistFactory::StatError current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::StatError

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::StatErrorConfig : new ::RooStats::HistFactory::StatErrorConfig;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLStatErrorConfig(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::StatErrorConfig[nElements] : new ::RooStats::HistFactory::StatErrorConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      delete (static_cast<::RooStats::HistFactory::StatErrorConfig*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::StatErrorConfig*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLStatErrorConfig(void *p) {
      typedef ::RooStats::HistFactory::StatErrorConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::StatErrorConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::HistRef : new ::RooStats::HistFactory::HistRef;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistRef(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::HistRef[nElements] : new ::RooStats::HistFactory::HistRef[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      delete (static_cast<::RooStats::HistFactory::HistRef*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::HistRef*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistRef(void *p) {
      typedef ::RooStats::HistFactory::HistRef current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistRef

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Asimov : new ::RooStats::HistFactory::Asimov;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLAsimov(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Asimov[nElements] : new ::RooStats::HistFactory::Asimov[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      delete (static_cast<::RooStats::HistFactory::Asimov*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::Asimov*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLAsimov(void *p) {
      typedef ::RooStats::HistFactory::Asimov current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Asimov

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::PreprocessFunction : new ::RooStats::HistFactory::PreprocessFunction;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLPreprocessFunction(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::PreprocessFunction[nElements] : new ::RooStats::HistFactory::PreprocessFunction[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      delete (static_cast<::RooStats::HistFactory::PreprocessFunction*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::PreprocessFunction*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLPreprocessFunction(void *p) {
      typedef ::RooStats::HistFactory::PreprocessFunction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::PreprocessFunction

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Data : new ::RooStats::HistFactory::Data;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Data[nElements] : new ::RooStats::HistFactory::Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLData(void *p) {
      delete (static_cast<::RooStats::HistFactory::Data*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLData(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::Data*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLData(void *p) {
      typedef ::RooStats::HistFactory::Data current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Data

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLSample(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Sample : new ::RooStats::HistFactory::Sample;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLSample(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Sample[nElements] : new ::RooStats::HistFactory::Sample[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLSample(void *p) {
      delete (static_cast<::RooStats::HistFactory::Sample*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLSample(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::Sample*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLSample(void *p) {
      typedef ::RooStats::HistFactory::Sample current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Sample

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLChannel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Channel : new ::RooStats::HistFactory::Channel;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLChannel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HistFactory::Channel[nElements] : new ::RooStats::HistFactory::Channel[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLChannel(void *p) {
      delete (static_cast<::RooStats::HistFactory::Channel*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLChannel(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::Channel*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLChannel(void *p) {
      typedef ::RooStats::HistFactory::Channel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Channel

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void Measurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::Measurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::Measurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::Measurement::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::Measurement : new ::RooStats::HistFactory::Measurement;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::Measurement[nElements] : new ::RooStats::HistFactory::Measurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      delete (static_cast<::RooStats::HistFactory::Measurement*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::Measurement*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLMeasurement(void *p) {
      typedef ::RooStats::HistFactory::Measurement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::Measurement

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void FlexibleInterpVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::FlexibleInterpVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::FlexibleInterpVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::FlexibleInterpVar::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::FlexibleInterpVar : new ::RooStats::HistFactory::FlexibleInterpVar;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::FlexibleInterpVar[nElements] : new ::RooStats::HistFactory::FlexibleInterpVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      delete (static_cast<::RooStats::HistFactory::FlexibleInterpVar*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::FlexibleInterpVar*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLFlexibleInterpVar(void *p) {
      typedef ::RooStats::HistFactory::FlexibleInterpVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::FlexibleInterpVar

//______________________________________________________________________________
void ParamHistFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class ParamHistFunc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ParamHistFunc::Class(),this);
   } else {
      R__b.WriteClassBuffer(ParamHistFunc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ParamHistFunc(void *p) {
      return  p ? new(p) ::ParamHistFunc : new ::ParamHistFunc;
   }
   static void *newArray_ParamHistFunc(Long_t nElements, void *p) {
      return p ? new(p) ::ParamHistFunc[nElements] : new ::ParamHistFunc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ParamHistFunc(void *p) {
      delete (static_cast<::ParamHistFunc*>(p));
   }
   static void deleteArray_ParamHistFunc(void *p) {
      delete [] (static_cast<::ParamHistFunc*>(p));
   }
   static void destruct_ParamHistFunc(void *p) {
      typedef ::ParamHistFunc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ParamHistFunc

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void HistFactoryNavigation::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::HistFactoryNavigation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::HistFactoryNavigation::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::HistFactoryNavigation::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p) {
      delete (static_cast<::RooStats::HistFactory::HistFactoryNavigation*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::HistFactoryNavigation*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistFactoryNavigation(void *p) {
      typedef ::RooStats::HistFactory::HistFactoryNavigation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistFactoryNavigation

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void HistoToWorkspaceFactoryFast::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::HistoToWorkspaceFactoryFast.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::HistoToWorkspaceFactoryFast::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::HistoToWorkspaceFactoryFast::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::HistoToWorkspaceFactoryFast : new ::RooStats::HistFactory::HistoToWorkspaceFactoryFast;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::HistoToWorkspaceFactoryFast[nElements] : new ::RooStats::HistFactory::HistoToWorkspaceFactoryFast[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      delete (static_cast<::RooStats::HistFactory::HistoToWorkspaceFactoryFast*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::HistoToWorkspaceFactoryFast*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLHistoToWorkspaceFactoryFast(void *p) {
      typedef ::RooStats::HistFactory::HistoToWorkspaceFactoryFast current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::HistoToWorkspaceFactoryFast

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void LinInterpVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::LinInterpVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::LinInterpVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::LinInterpVar::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      return  p ? new(p) ::RooStats::HistFactory::LinInterpVar : new ::RooStats::HistFactory::LinInterpVar;
   }
   static void *newArray_RooStatscLcLHistFactorycLcLLinInterpVar(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HistFactory::LinInterpVar[nElements] : new ::RooStats::HistFactory::LinInterpVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      delete (static_cast<::RooStats::HistFactory::LinInterpVar*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::LinInterpVar*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLLinInterpVar(void *p) {
      typedef ::RooStats::HistFactory::LinInterpVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::LinInterpVar

namespace ROOT {
   // Wrappers around operator new
   static void *new_PiecewiseInterpolation(void *p) {
      return  p ? new(p) ::PiecewiseInterpolation : new ::PiecewiseInterpolation;
   }
   static void *newArray_PiecewiseInterpolation(Long_t nElements, void *p) {
      return p ? new(p) ::PiecewiseInterpolation[nElements] : new ::PiecewiseInterpolation[nElements];
   }
   // Wrapper around operator delete
   static void delete_PiecewiseInterpolation(void *p) {
      delete (static_cast<::PiecewiseInterpolation*>(p));
   }
   static void deleteArray_PiecewiseInterpolation(void *p) {
      delete [] (static_cast<::PiecewiseInterpolation*>(p));
   }
   static void destruct_PiecewiseInterpolation(void *p) {
      typedef ::PiecewiseInterpolation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_PiecewiseInterpolation(TBuffer &buf, void *obj) {
      ((::PiecewiseInterpolation*)obj)->::PiecewiseInterpolation::Streamer(buf);
   }
} // end of namespace ROOT for class ::PiecewiseInterpolation

namespace RooStats {
   namespace HistFactory {
//______________________________________________________________________________
void RooBarlowBeestonLL::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HistFactory::RooBarlowBeestonLL.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HistFactory::RooBarlowBeestonLL::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HistFactory::RooBarlowBeestonLL::Class(),this);
   }
}

} // namespace RooStats::HistFactory
} // namespace RooStats::HistFactory
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      delete (static_cast<::RooStats::HistFactory::RooBarlowBeestonLL*>(p));
   }
   static void deleteArray_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      delete [] (static_cast<::RooStats::HistFactory::RooBarlowBeestonLL*>(p));
   }
   static void destruct_RooStatscLcLHistFactorycLcLRooBarlowBeestonLL(void *p) {
      typedef ::RooStats::HistFactory::RooBarlowBeestonLL current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HistFactory::RooBarlowBeestonLL

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
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLShapeSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::ShapeSys>*)
   {
      vector<RooStats::HistFactory::ShapeSys> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::ShapeSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::ShapeSys>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::ShapeSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLShapeSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::ShapeSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLShapeSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::ShapeSys> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::ShapeSys>","std::__1::vector<RooStats::HistFactory::ShapeSys, std::__1::allocator<RooStats::HistFactory::ShapeSys>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::ShapeSys>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::ShapeSys>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLShapeSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLShapeSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::ShapeSys> : new vector<RooStats::HistFactory::ShapeSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::ShapeSys>[nElements] : new vector<RooStats::HistFactory::ShapeSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::ShapeSys>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::ShapeSys>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeSysgR(void *p) {
      typedef vector<RooStats::HistFactory::ShapeSys> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::ShapeSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::ShapeFactor>*)
   {
      vector<RooStats::HistFactory::ShapeFactor> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::ShapeFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::ShapeFactor>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::ShapeFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::ShapeFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::ShapeFactor> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::ShapeFactor>","std::__1::vector<RooStats::HistFactory::ShapeFactor, std::__1::allocator<RooStats::HistFactory::ShapeFactor>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::ShapeFactor>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::ShapeFactor>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLShapeFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::ShapeFactor> : new vector<RooStats::HistFactory::ShapeFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::ShapeFactor>[nElements] : new vector<RooStats::HistFactory::ShapeFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::ShapeFactor>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::ShapeFactor>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLShapeFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::ShapeFactor> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::ShapeFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLSamplegR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLSamplegR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Sample>*)
   {
      vector<RooStats::HistFactory::Sample> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Sample>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Sample>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::Sample>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLSamplegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RooStats::HistFactory::Sample>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLSamplegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Sample> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::Sample>","std::__1::vector<RooStats::HistFactory::Sample, std::__1::allocator<RooStats::HistFactory::Sample>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Sample>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLSamplegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Sample>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLSamplegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLSamplegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Sample> : new vector<RooStats::HistFactory::Sample>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Sample>[nElements] : new vector<RooStats::HistFactory::Sample>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::Sample>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::Sample>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLSamplegR(void *p) {
      typedef vector<RooStats::HistFactory::Sample> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Sample>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::PreprocessFunction>*)
   {
      vector<RooStats::HistFactory::PreprocessFunction> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::PreprocessFunction>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::PreprocessFunction>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::PreprocessFunction>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::PreprocessFunction>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::PreprocessFunction> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::PreprocessFunction>","std::__1::vector<RooStats::HistFactory::PreprocessFunction, std::__1::allocator<RooStats::HistFactory::PreprocessFunction>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::PreprocessFunction>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::PreprocessFunction>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::PreprocessFunction> : new vector<RooStats::HistFactory::PreprocessFunction>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::PreprocessFunction>[nElements] : new vector<RooStats::HistFactory::PreprocessFunction>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::PreprocessFunction>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::PreprocessFunction>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLPreprocessFunctiongR(void *p) {
      typedef vector<RooStats::HistFactory::PreprocessFunction> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::PreprocessFunction>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLOverallSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLOverallSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::OverallSys>*)
   {
      vector<RooStats::HistFactory::OverallSys> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::OverallSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::OverallSys>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::OverallSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLOverallSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::OverallSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLOverallSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::OverallSys> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::OverallSys>","std::__1::vector<RooStats::HistFactory::OverallSys, std::__1::allocator<RooStats::HistFactory::OverallSys>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::OverallSys>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLOverallSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::OverallSys>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLOverallSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLOverallSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::OverallSys> : new vector<RooStats::HistFactory::OverallSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::OverallSys>[nElements] : new vector<RooStats::HistFactory::OverallSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::OverallSys>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::OverallSys>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLOverallSysgR(void *p) {
      typedef vector<RooStats::HistFactory::OverallSys> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::OverallSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLNormFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLNormFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::NormFactor>*)
   {
      vector<RooStats::HistFactory::NormFactor> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::NormFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::NormFactor>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::NormFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLNormFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::NormFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLNormFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::NormFactor> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::NormFactor>","std::__1::vector<RooStats::HistFactory::NormFactor, std::__1::allocator<RooStats::HistFactory::NormFactor>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::NormFactor>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLNormFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::NormFactor>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLNormFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLNormFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::NormFactor> : new vector<RooStats::HistFactory::NormFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::NormFactor>[nElements] : new vector<RooStats::HistFactory::NormFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::NormFactor>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::NormFactor>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLNormFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::NormFactor> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::NormFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoSysgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLHistoSysgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::HistoSys>*)
   {
      vector<RooStats::HistFactory::HistoSys> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::HistoSys>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::HistoSys>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::HistoSys>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLHistoSysgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::HistoSys>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLHistoSysgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::HistoSys> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::HistoSys>","std::__1::vector<RooStats::HistFactory::HistoSys, std::__1::allocator<RooStats::HistFactory::HistoSys>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::HistoSys>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoSysgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::HistoSys>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLHistoSysgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLHistoSysgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::HistoSys> : new vector<RooStats::HistFactory::HistoSys>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::HistoSys>[nElements] : new vector<RooStats::HistFactory::HistoSys>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::HistoSys>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::HistoSys>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoSysgR(void *p) {
      typedef vector<RooStats::HistFactory::HistoSys> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::HistoSys>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::HistoFactor>*)
   {
      vector<RooStats::HistFactory::HistoFactor> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::HistoFactor>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::HistoFactor>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::HistoFactor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::HistoFactor>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::HistoFactor> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::HistoFactor>","std::__1::vector<RooStats::HistFactory::HistoFactor, std::__1::allocator<RooStats::HistFactory::HistoFactor>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::HistoFactor>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::HistoFactor>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLHistoFactorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::HistoFactor> : new vector<RooStats::HistFactory::HistoFactor>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::HistoFactor>[nElements] : new vector<RooStats::HistFactory::HistoFactor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::HistoFactor>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::HistoFactor>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistoFactorgR(void *p) {
      typedef vector<RooStats::HistFactory::HistoFactor> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::HistoFactor>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistRefgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLHistRefgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::HistRef>*)
   {
      vector<RooStats::HistFactory::HistRef> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::HistRef>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::HistRef>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::HistRef>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLHistRefgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RooStats::HistFactory::HistRef>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLHistRefgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::HistRef> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::HistRef>","std::__1::vector<RooStats::HistFactory::HistRef, std::__1::allocator<RooStats::HistFactory::HistRef>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::HistRef>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLHistRefgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::HistRef>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLHistRefgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLHistRefgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::HistRef> : new vector<RooStats::HistFactory::HistRef>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::HistRef>[nElements] : new vector<RooStats::HistFactory::HistRef>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::HistRef>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::HistRef>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLHistRefgR(void *p) {
      typedef vector<RooStats::HistFactory::HistRef> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::HistRef>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLDatagR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLDatagR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLDatagR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Data>*)
   {
      vector<RooStats::HistFactory::Data> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Data>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Data>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::Data>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::Data>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Data> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::Data>","std::__1::vector<RooStats::HistFactory::Data, std::__1::allocator<RooStats::HistFactory::Data>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Data>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Data>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Data> : new vector<RooStats::HistFactory::Data>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Data>[nElements] : new vector<RooStats::HistFactory::Data>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::Data>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::Data>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLDatagR(void *p) {
      typedef vector<RooStats::HistFactory::Data> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Data>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLChannelgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLChannelgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Channel>*)
   {
      vector<RooStats::HistFactory::Channel> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Channel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Channel>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::Channel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLChannelgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RooStats::HistFactory::Channel>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Channel> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::Channel>","std::__1::vector<RooStats::HistFactory::Channel, std::__1::allocator<RooStats::HistFactory::Channel>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Channel>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Channel>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Channel> : new vector<RooStats::HistFactory::Channel>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Channel>[nElements] : new vector<RooStats::HistFactory::Channel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::Channel>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::Channel>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLChannelgR(void *p) {
      typedef vector<RooStats::HistFactory::Channel> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Channel>

namespace ROOT {
   static TClass *vectorlERooStatscLcLHistFactorycLcLAsimovgR_Dictionary();
   static void vectorlERooStatscLcLHistFactorycLcLAsimovgR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p);
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p);
   static void destruct_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::HistFactory::Asimov>*)
   {
      vector<RooStats::HistFactory::Asimov> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::HistFactory::Asimov>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::HistFactory::Asimov>", -2, "functional", 86,
                  typeid(vector<RooStats::HistFactory::Asimov>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLHistFactorycLcLAsimovgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::HistFactory::Asimov>) );
      instance.SetNew(&new_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetDelete(&delete_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLHistFactorycLcLAsimovgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::HistFactory::Asimov> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::HistFactory::Asimov>","std::__1::vector<RooStats::HistFactory::Asimov, std::__1::allocator<RooStats::HistFactory::Asimov>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Asimov>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLHistFactorycLcLAsimovgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::HistFactory::Asimov>*>(nullptr))->GetClass();
      vectorlERooStatscLcLHistFactorycLcLAsimovgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLHistFactorycLcLAsimovgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Asimov> : new vector<RooStats::HistFactory::Asimov>;
   }
   static void *newArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::HistFactory::Asimov>[nElements] : new vector<RooStats::HistFactory::Asimov>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      delete (static_cast<vector<RooStats::HistFactory::Asimov>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      delete [] (static_cast<vector<RooStats::HistFactory::Asimov>*>(p));
   }
   static void destruct_vectorlERooStatscLcLHistFactorycLcLAsimovgR(void *p) {
      typedef vector<RooStats::HistFactory::Asimov> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::HistFactory::Asimov>

namespace ROOT {
   static TClass *maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_Dictionary();
   static void maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p);
   static void deleteArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p);
   static void destruct_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,map<string,RooAbsReal*> >*)
   {
      map<string,map<string,RooAbsReal*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,map<string,RooAbsReal*> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,map<string,RooAbsReal*> >", -2, "map", 975,
                  typeid(map<string,map<string,RooAbsReal*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,map<string,RooAbsReal*> >) );
      instance.SetNew(&new_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetDelete(&delete_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,map<string,RooAbsReal*> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,map<string,RooAbsReal*> >","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsReal*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsReal*>>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsReal*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsReal*>>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,map<string,RooAbsReal*> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,map<string,RooAbsReal*> >*>(nullptr))->GetClass();
      maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOmaplEstringcORooAbsRealmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,map<string,RooAbsReal*> > : new map<string,map<string,RooAbsReal*> >;
   }
   static void *newArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,map<string,RooAbsReal*> >[nElements] : new map<string,map<string,RooAbsReal*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      delete (static_cast<map<string,map<string,RooAbsReal*> >*>(p));
   }
   static void deleteArray_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      delete [] (static_cast<map<string,map<string,RooAbsReal*> >*>(p));
   }
   static void destruct_maplEstringcOmaplEstringcORooAbsRealmUgRsPgR(void *p) {
      typedef map<string,map<string,RooAbsReal*> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,map<string,RooAbsReal*> >

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
   static TClass *maplEstringcOboolgR_Dictionary();
   static void maplEstringcOboolgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolgR(void *p = nullptr);
   static void *newArray_maplEstringcOboolgR(Long_t size, void *p);
   static void delete_maplEstringcOboolgR(void *p);
   static void deleteArray_maplEstringcOboolgR(void *p);
   static void destruct_maplEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool>*)
   {
      map<string,bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool>", -2, "map", 975,
                  typeid(map<string,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,bool>) );
      instance.SetNew(&new_maplEstringcOboolgR);
      instance.SetNewArray(&newArray_maplEstringcOboolgR);
      instance.SetDelete(&delete_maplEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolgR);
      instance.SetDestructor(&destruct_maplEstringcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,bool>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, bool, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, bool>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,bool>*>(nullptr))->GetClass();
      maplEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,bool> : new map<string,bool>;
   }
   static void *newArray_maplEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,bool>[nElements] : new map<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolgR(void *p) {
      delete (static_cast<map<string,bool>*>(p));
   }
   static void deleteArray_maplEstringcOboolgR(void *p) {
      delete [] (static_cast<map<string,bool>*>(p));
   }
   static void destruct_maplEstringcOboolgR(void *p) {
      typedef map<string,bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,bool>

namespace ROOT {
   static TClass *maplEstringcORooArgSetmUgR_Dictionary();
   static void maplEstringcORooArgSetmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooArgSetmUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooArgSetmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooArgSetmUgR(void *p);
   static void deleteArray_maplEstringcORooArgSetmUgR(void *p);
   static void destruct_maplEstringcORooArgSetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooArgSet*>*)
   {
      map<string,RooArgSet*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooArgSet*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooArgSet*>", -2, "map", 975,
                  typeid(map<string,RooArgSet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooArgSetmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooArgSet*>) );
      instance.SetNew(&new_maplEstringcORooArgSetmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooArgSetmUgR);
      instance.SetDelete(&delete_maplEstringcORooArgSetmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooArgSetmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooArgSetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooArgSet*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooArgSet*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooArgSet*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooArgSet*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooArgSet*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooArgSetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooArgSet*>*>(nullptr))->GetClass();
      maplEstringcORooArgSetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooArgSetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooArgSetmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooArgSet*> : new map<string,RooArgSet*>;
   }
   static void *newArray_maplEstringcORooArgSetmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooArgSet*>[nElements] : new map<string,RooArgSet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooArgSetmUgR(void *p) {
      delete (static_cast<map<string,RooArgSet*>*>(p));
   }
   static void deleteArray_maplEstringcORooArgSetmUgR(void *p) {
      delete [] (static_cast<map<string,RooArgSet*>*>(p));
   }
   static void destruct_maplEstringcORooArgSetmUgR(void *p) {
      typedef map<string,RooArgSet*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooArgSet*>

namespace ROOT {
   static TClass *maplEstringcORooAbsRealmUgR_Dictionary();
   static void maplEstringcORooAbsRealmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsRealmUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooAbsRealmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsRealmUgR(void *p);
   static void deleteArray_maplEstringcORooAbsRealmUgR(void *p);
   static void destruct_maplEstringcORooAbsRealmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsReal*>*)
   {
      map<string,RooAbsReal*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsReal*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsReal*>", -2, "map", 975,
                  typeid(map<string,RooAbsReal*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsRealmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooAbsReal*>) );
      instance.SetNew(&new_maplEstringcORooAbsRealmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsRealmUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsRealmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsRealmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsRealmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsReal*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooAbsReal*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsReal*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsReal*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooAbsReal*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsRealmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooAbsReal*>*>(nullptr))->GetClass();
      maplEstringcORooAbsRealmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsRealmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsRealmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsReal*> : new map<string,RooAbsReal*>;
   }
   static void *newArray_maplEstringcORooAbsRealmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsReal*>[nElements] : new map<string,RooAbsReal*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsRealmUgR(void *p) {
      delete (static_cast<map<string,RooAbsReal*>*>(p));
   }
   static void deleteArray_maplEstringcORooAbsRealmUgR(void *p) {
      delete [] (static_cast<map<string,RooAbsReal*>*>(p));
   }
   static void destruct_maplEstringcORooAbsRealmUgR(void *p) {
      typedef map<string,RooAbsReal*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsReal*>

namespace ROOT {
   static TClass *maplEstringcORooAbsPdfmUgR_Dictionary();
   static void maplEstringcORooAbsPdfmUgR_TClassManip(TClass*);
   static void *new_maplEstringcORooAbsPdfmUgR(void *p = nullptr);
   static void *newArray_maplEstringcORooAbsPdfmUgR(Long_t size, void *p);
   static void delete_maplEstringcORooAbsPdfmUgR(void *p);
   static void deleteArray_maplEstringcORooAbsPdfmUgR(void *p);
   static void destruct_maplEstringcORooAbsPdfmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,RooAbsPdf*>*)
   {
      map<string,RooAbsPdf*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,RooAbsPdf*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,RooAbsPdf*>", -2, "map", 975,
                  typeid(map<string,RooAbsPdf*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcORooAbsPdfmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,RooAbsPdf*>) );
      instance.SetNew(&new_maplEstringcORooAbsPdfmUgR);
      instance.SetNewArray(&newArray_maplEstringcORooAbsPdfmUgR);
      instance.SetDelete(&delete_maplEstringcORooAbsPdfmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcORooAbsPdfmUgR);
      instance.SetDestructor(&destruct_maplEstringcORooAbsPdfmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,RooAbsPdf*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,RooAbsPdf*>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, RooAbsPdf*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, RooAbsPdf*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,RooAbsPdf*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcORooAbsPdfmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,RooAbsPdf*>*>(nullptr))->GetClass();
      maplEstringcORooAbsPdfmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcORooAbsPdfmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcORooAbsPdfmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsPdf*> : new map<string,RooAbsPdf*>;
   }
   static void *newArray_maplEstringcORooAbsPdfmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,RooAbsPdf*>[nElements] : new map<string,RooAbsPdf*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcORooAbsPdfmUgR(void *p) {
      delete (static_cast<map<string,RooAbsPdf*>*>(p));
   }
   static void deleteArray_maplEstringcORooAbsPdfmUgR(void *p) {
      delete [] (static_cast<map<string,RooAbsPdf*>*>(p));
   }
   static void destruct_maplEstringcORooAbsPdfmUgR(void *p) {
      typedef map<string,RooAbsPdf*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,RooAbsPdf*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libHistFactory() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libHistFactory) = RecordReadRules_libHistFactory();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libHistFactory));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libHistFactory_Impl() {
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
      TROOT::RegisterModule("libHistFactory",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHistFactory_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHistFactory_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHistFactory() {
  TriggerDictionaryInitialization_libHistFactory_Impl();
}
