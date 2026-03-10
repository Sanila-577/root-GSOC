// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTDataFrame
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
#include "ROOT/RCsvDS.hxx"
#include "ROOT/RVecDS.hxx"
#include "ROOT/RDataFrame.hxx"
#include "ROOT/RDataSource.hxx"
#include "ROOT/RDFHelpers.hxx"
#include "ROOT/RLazyDS.hxx"
#include "ROOT/RResultHandle.hxx"
#include "ROOT/RResultPtr.hxx"
#include "ROOT/RRootDS.hxx"
#include "ROOT/RSnapshotOptions.hxx"
#include "ROOT/RTrivialDS.hxx"
#include "ROOT/RTTreeDS.hxx"
#include "ROOT/RDF/ActionHelpers.hxx"
#include "ROOT/RDF/ColumnReaderUtils.hxx"
#include "ROOT/RDF/GraphNode.hxx"
#include "ROOT/RDF/GraphUtils.hxx"
#include "ROOT/RDF/HistoModels.hxx"
#include "ROOT/RDF/InterfaceUtils.hxx"
#include "ROOT/RDF/RActionBase.hxx"
#include "ROOT/RDF/RAction.hxx"
#include "ROOT/RDF/RActionSnapshot.hxx"
#include "ROOT/RDF/RActionImpl.hxx"
#include "ROOT/RDF/RColumnRegister.hxx"
#include "ROOT/RDF/RNewSampleNotifier.hxx"
#include "ROOT/RDF/RSampleInfo.hxx"
#include "ROOT/RDF/RDefineBase.hxx"
#include "ROOT/RDF/RDefaultValueFor.hxx"
#include "ROOT/RDF/RDefine.hxx"
#include "ROOT/RDF/RDefinePerSample.hxx"
#include "ROOT/RDF/RDefineReader.hxx"
#include "ROOT/RDF/RDSColumnReader.hxx"
#include "ROOT/RDF/RColumnReaderBase.hxx"
#include "ROOT/RDF/RCutFlowReport.hxx"
#include "ROOT/RDF/RDatasetSpec.hxx"
#include "ROOT/RDF/RDisplay.hxx"
#include "ROOT/RDF/RFilterBase.hxx"
#include "ROOT/RDF/RFilter.hxx"
#include "ROOT/RDF/RInterface.hxx"
#include "ROOT/RDF/RInterfaceBase.hxx"
#include "ROOT/RDF/RJittedAction.hxx"
#include "ROOT/RDF/RJittedDefine.hxx"
#include "ROOT/RDF/RJittedFilter.hxx"
#include "ROOT/RDF/RJittedVariation.hxx"
#include "ROOT/RDF/RLazyDSImpl.hxx"
#include "ROOT/RDF/RLoopManager.hxx"
#include "ROOT/RDF/RMergeableValue.hxx"
#include "ROOT/RDF/RMetaData.hxx"
#include "ROOT/RDF/RNodeBase.hxx"
#include "ROOT/RDF/RRangeBase.hxx"
#include "ROOT/RDF/RRange.hxx"
#include "ROOT/RDF/RResultMap.hxx"
#include "ROOT/RDF/RSample.hxx"
#include "ROOT/RDF/RFilterWithMissingValues.hxx"
#include "ROOT/RDF/RTreeColumnReader.hxx"
#include "ROOT/RDF/RVariation.hxx"
#include "ROOT/RDF/RVariationBase.hxx"
#include "ROOT/RDF/RVariationReader.hxx"
#include "ROOT/RDF/RVariationsDescription.hxx"
#include "ROOT/RDF/RVariedAction.hxx"
#include "ROOT/RDF/SnapshotHelpers.hxx"
#include "ROOT/RDF/Utils.hxx"
#include "ROOT/RDF/PyROOTHelpers.hxx"
#include "ROOT/RDF/RDFDescription.hxx"
#include "ROOT/RNTupleDS.hxx"
#include "ROOT/RSqliteDS.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   namespace Detail {
      namespace RDF {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLDetailcLcLRDF_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Detail::RDF", 0 /*version*/, "ROOT/RDF/RColumnReaderBase.hxx", 18,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLDetailcLcLRDF_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLDetailcLcLRDF_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   namespace RDF {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLRDF_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::RDF", 0 /*version*/, "ROOT/RDataSource.hxx", 37,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLRDF_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLRDF_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   namespace Internal {
      namespace RDF {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLInternalcLcLRDF_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Internal::RDF", 0 /*version*/, "ROOT/RDataSource.hxx", 54,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLInternalcLcLRDF_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLInternalcLcLRDF_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   namespace Internal {
      namespace RDF {
         namespace GraphDrawing {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLInternalcLcLRDFcLcLGraphDrawing_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Internal::RDF::GraphDrawing", 0 /*version*/, "ROOT/RDF/GraphNode.hxx", 24,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &ROOTcLcLInternalcLcLRDFcLcLGraphDrawing_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLInternalcLcLRDFcLcLGraphDrawing_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}
}

namespace ROOT {
   static TClass *TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR_Dictionary();
   static void TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR_TClassManip(TClass*);
   static void delete_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(void *p);
   static void deleteArray_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(void *p);
   static void destruct_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(void *p);
   static void streamer_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)
   {
      ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag> >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>", ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::Class_Version(), "TNotifyLink.h", 127,
                  typeid(::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR_Dictionary, isa_proxy, 16,
                  sizeof(::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>) );
      instance.SetDelete(&delete_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR);
      instance.SetDeleteArray(&deleteArray_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR);
      instance.SetDestructor(&destruct_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR);
      instance.SetStreamerFunc(&streamer_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)
   {
      return GenerateInitInstanceLocal(static_cast<::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*>(nullptr))->GetClass();
      TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR_TClassManip(theClass);
   return theClass;
   }

   static void TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRDisplay_Dictionary();
   static void ROOTcLcLRDFcLcLRDisplay_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRDisplay(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRDisplay(void *p);
   static void destruct_ROOTcLcLRDFcLcLRDisplay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RDisplay*)
   {
      ::ROOT::RDF::RDisplay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RDisplay));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RDisplay", "ROOT/RDF/RDisplay.hxx", 65,
                  typeid(::ROOT::RDF::RDisplay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRDisplay_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RDisplay) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRDisplay);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRDisplay);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRDisplay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RDisplay*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::RDisplay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RDisplay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRDisplay_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RDisplay*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLRDisplay_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRDisplay_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTCutInfo_Dictionary();
   static void ROOTcLcLRDFcLcLTCutInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTCutInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLTCutInfo(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTCutInfo(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTCutInfo(void *p);
   static void destruct_ROOTcLcLRDFcLcLTCutInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TCutInfo*)
   {
      ::ROOT::RDF::TCutInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TCutInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TCutInfo", "ROOT/RDF/RCutFlowReport.hxx", 38,
                  typeid(::ROOT::RDF::TCutInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTCutInfo_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::RDF::TCutInfo) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTCutInfo);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTCutInfo);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTCutInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTCutInfo);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTCutInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TCutInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::TCutInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TCutInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTCutInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TCutInfo*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLTCutInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTCutInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRCutFlowReport_Dictionary();
   static void ROOTcLcLRDFcLcLRCutFlowReport_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLRCutFlowReport(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLRCutFlowReport(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLRCutFlowReport(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRCutFlowReport(void *p);
   static void destruct_ROOTcLcLRDFcLcLRCutFlowReport(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RCutFlowReport*)
   {
      ::ROOT::RDF::RCutFlowReport *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RCutFlowReport));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RCutFlowReport", "ROOT/RDF/RCutFlowReport.hxx", 58,
                  typeid(::ROOT::RDF::RCutFlowReport), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRCutFlowReport_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::RDF::RCutFlowReport) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLRCutFlowReport);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLRCutFlowReport);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRCutFlowReport);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRCutFlowReport);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRCutFlowReport);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RCutFlowReport*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::RCutFlowReport*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RCutFlowReport*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRCutFlowReport_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RCutFlowReport*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLRCutFlowReport_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRCutFlowReport_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<ULong64_t>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<ULong64_t>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Detail::RDF::RMergeableValue<ULong64_t>","ROOT::Detail::RDF::RMergeableValue<unsigned long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<double>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<double>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<double>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<double>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<double>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<double>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TH1D>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TH1D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TH1D>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TH1D>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TH1D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TH1D>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TH1D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TH1D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TH1D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TH1D>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TGraph>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TGraph> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TGraph>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TGraph>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TGraph>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TGraph>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TGraph>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TGraph>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TGraph>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TGraph>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TH2D>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TH2D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TH2D>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TH2D>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TH2D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TH2D>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TH2D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TH2D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TH2D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TH2D>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TH3D>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TH3D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TH3D>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TH3D>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TH3D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TH3D>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TH3D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TH3D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TH3D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TH3D>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<THnT<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<THnT<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<THnT<double> >", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<THnT<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<THnT<double> >) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Detail::RDF::RMergeableValue<THnT<double> >","ROOT::Detail::RDF::RMergeableValue<THnD>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Detail::RDF::RMergeableValue<THnT<double> >","ROOT::Detail::RDF::RMergeableValue<THnT<double>>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TProfile>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TProfile> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TProfile>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TProfile>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TProfile>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TProfile>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TProfile>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TProfile>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TProfile>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TProfile>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TProfile2D> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TProfile2D>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TProfile2D>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TProfile2D>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TProfile2D>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<TStatistic>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<TStatistic> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<TStatistic>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<TStatistic>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<TStatistic>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<TStatistic>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<TStatistic>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<TStatistic>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TStatistic>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<TStatistic>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<Long64_t>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<Long64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<Long64_t>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<Long64_t>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("ROOT::Detail::RDF::RMergeableValue<Long64_t>","ROOT::Detail::RDF::RMergeableValue<long long>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<Long64_t>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<Long64_t>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<Long64_t>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<Long64_t>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<float>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<float>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<float>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<float>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<float>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<float>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<unsigned int>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<unsigned int>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<unsigned int>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<unsigned int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<unsigned int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<unsigned int>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValue<int>*)
   {
      ::ROOT::Detail::RDF::RMergeableValue<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValue<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValue<int>", "ROOT/RDF/RMergeableValue.hxx", 146,
                  typeid(::ROOT::Detail::RDF::RMergeableValue<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValue<int>) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValue<int>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValue<int>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValue<int>*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase_TClassManip(TClass*);
   static void *new_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p = nullptr);
   static void *newArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(Long_t size, void *p);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableValueBase*)
   {
      ::ROOT::Detail::RDF::RMergeableValueBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableValueBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableValueBase", "ROOT/RDF/RMergeableValue.hxx", 63,
                  typeid(::ROOT::Detail::RDF::RMergeableValueBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableValueBase) );
      instance.SetNew(&new_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase);
      instance.SetNewArray(&newArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase);
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableValueBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableValueBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValueBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableValueBase*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase_TClassManip(TClass*);
   static void *new_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p = nullptr);
   static void *newArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(Long_t size, void *p);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RMergeableVariationsBase*)
   {
      ::ROOT::Detail::RDF::RMergeableVariationsBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RMergeableVariationsBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RMergeableVariationsBase", "ROOT/RDF/RMergeableValue.hxx", 630,
                  typeid(::ROOT::Detail::RDF::RMergeableVariationsBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Detail::RDF::RMergeableVariationsBase) );
      instance.SetNew(&new_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase);
      instance.SetNewArray(&newArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase);
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RMergeableVariationsBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RMergeableVariationsBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableVariationsBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RMergeableVariationsBase*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLCountHelper_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLCountHelper_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::CountHelper*)
   {
      ::ROOT::Internal::RDF::CountHelper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::CountHelper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::CountHelper", "ROOT/RDF/ActionHelpers.hxx", 110,
                  typeid(::ROOT::Internal::RDF::CountHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLCountHelper_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::CountHelper) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLCountHelper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLCountHelper);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLCountHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::CountHelper*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::CountHelper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::CountHelper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLCountHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::CountHelper*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLCountHelper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLCountHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::BufferedFillHelper*)
   {
      ::ROOT::Internal::RDF::BufferedFillHelper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::BufferedFillHelper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::BufferedFillHelper", "ROOT/RDF/ActionHelpers.hxx", 188,
                  typeid(::ROOT::Internal::RDF::BufferedFillHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::BufferedFillHelper) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::BufferedFillHelper*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::BufferedFillHelper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::BufferedFillHelper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::BufferedFillHelper*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLMeanHelper_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLMeanHelper_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::MeanHelper*)
   {
      ::ROOT::Internal::RDF::MeanHelper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::MeanHelper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::MeanHelper", "ROOT/RDF/ActionHelpers.hxx", 1345,
                  typeid(::ROOT::Internal::RDF::MeanHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLMeanHelper_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::MeanHelper) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLMeanHelper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLMeanHelper);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLMeanHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::MeanHelper*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::MeanHelper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::MeanHelper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLMeanHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::MeanHelper*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLMeanHelper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLMeanHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTH1DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTH1DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTH1DModel(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLTH1DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTH1DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTH1DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTH1DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TH1DModel*)
   {
      ::ROOT::RDF::TH1DModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TH1DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TH1DModel", "ROOT/RDF/HistoModels.hxx", 34,
                  typeid(::ROOT::RDF::TH1DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTH1DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TH1DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTH1DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TH1DModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::TH1DModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TH1DModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTH1DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TH1DModel*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLTH1DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTH1DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTH2DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTH2DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTH2DModel(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLTH2DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTH2DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTH2DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTH2DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TH2DModel*)
   {
      ::ROOT::RDF::TH2DModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TH2DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TH2DModel", "ROOT/RDF/HistoModels.hxx", 52,
                  typeid(::ROOT::RDF::TH2DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTH2DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TH2DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTH2DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TH2DModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::TH2DModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TH2DModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTH2DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TH2DModel*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLTH2DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTH2DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTH3DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTH3DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTH3DModel(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLTH3DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTH3DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTH3DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTH3DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TH3DModel*)
   {
      ::ROOT::RDF::TH3DModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TH3DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TH3DModel", "ROOT/RDF/HistoModels.hxx", 77,
                  typeid(::ROOT::RDF::TH3DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTH3DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TH3DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTH3DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TH3DModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::TH3DModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TH3DModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTH3DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TH3DModel*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLTH3DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTH3DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTProfile1DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTProfile1DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTProfile1DModel(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLTProfile1DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTProfile1DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTProfile1DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTProfile1DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TProfile1DModel*)
   {
      ::ROOT::RDF::TProfile1DModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TProfile1DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TProfile1DModel", "ROOT/RDF/HistoModels.hxx", 156,
                  typeid(::ROOT::RDF::TProfile1DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTProfile1DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TProfile1DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTProfile1DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TProfile1DModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::TProfile1DModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TProfile1DModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTProfile1DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TProfile1DModel*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLTProfile1DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTProfile1DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTProfile2DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTProfile2DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTProfile2DModel(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLTProfile2DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTProfile2DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTProfile2DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTProfile2DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TProfile2DModel*)
   {
      ::ROOT::RDF::TProfile2DModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TProfile2DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TProfile2DModel", "ROOT/RDF/HistoModels.hxx", 181,
                  typeid(::ROOT::RDF::TProfile2DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTProfile2DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TProfile2DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTProfile2DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TProfile2DModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::TProfile2DModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TProfile2DModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTProfile2DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::TProfile2DModel*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLTProfile2DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTProfile2DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnRegister_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnRegister_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnRegister*)
   {
      ::ROOT::Internal::RDF::RColumnRegister *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnRegister));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnRegister", "ROOT/RDF/RColumnRegister.hxx", 68,
                  typeid(::ROOT::Internal::RDF::RColumnRegister), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnRegister_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnRegister) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnRegister*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::RColumnRegister*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RColumnRegister*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnRegister_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RColumnRegister*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnRegister_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnRegister_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRDefineBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRDefineBase_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRDefineBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRDefineBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRDefineBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RDefineBase*)
   {
      ::ROOT::Detail::RDF::RDefineBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RDefineBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RDefineBase", "ROOT/RDF/RDefineBase.hxx", 39,
                  typeid(::ROOT::Detail::RDF::RDefineBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRDefineBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RDefineBase) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRDefineBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRDefineBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRDefineBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RDefineBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RDefineBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RDefineBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRDefineBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RDefineBase*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRDefineBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRDefineBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRLoopManager_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRLoopManager_TClassManip(TClass*);
   static void *new_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p = nullptr);
   static void *newArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(Long_t size, void *p);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RLoopManager*)
   {
      ::ROOT::Detail::RDF::RLoopManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RLoopManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RLoopManager", "ROOT/RDF/RLoopManager.hxx", 117,
                  typeid(::ROOT::Detail::RDF::RLoopManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRLoopManager_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RLoopManager) );
      instance.SetNew(&new_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      instance.SetNewArray(&newArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RLoopManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RLoopManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RLoopManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRLoopManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RLoopManager*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRLoopManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRLoopManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRActionBase_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRActionBase_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RActionBase*)
   {
      ::ROOT::Internal::RDF::RActionBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RActionBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RActionBase", "ROOT/RDF/RActionBase.hxx", 40,
                  typeid(::ROOT::Internal::RDF::RActionBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRActionBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RActionBase) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRActionBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRActionBase);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRActionBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RActionBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::RActionBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RActionBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRActionBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RActionBase*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRActionBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRActionBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRFilterBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRFilterBase_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RFilterBase*)
   {
      ::ROOT::Detail::RDF::RFilterBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RFilterBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RFilterBase", "ROOT/RDF/RFilterBase.hxx", 38,
                  typeid(::ROOT::Detail::RDF::RFilterBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRFilterBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RFilterBase) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRFilterBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRFilterBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRFilterBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RFilterBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RFilterBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RFilterBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRFilterBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RFilterBase*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRFilterBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRFilterBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RJittedFilter*)
   {
      ::ROOT::Detail::RDF::RJittedFilter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RJittedFilter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RJittedFilter", "ROOT/RDF/RJittedFilter.hxx", 39,
                  typeid(::ROOT::Detail::RDF::RJittedFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RJittedFilter) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RJittedFilter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RJittedFilter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RJittedFilter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RJittedFilter*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRJittedAction_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRJittedAction_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRJittedAction(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRJittedAction(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRJittedAction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RJittedAction*)
   {
      ::ROOT::Internal::RDF::RJittedAction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RJittedAction));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RJittedAction", "ROOT/RDF/RJittedAction.hxx", 40,
                  typeid(::ROOT::Internal::RDF::RJittedAction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRJittedAction_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RJittedAction) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRJittedAction);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRJittedAction);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRJittedAction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RJittedAction*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::RJittedAction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RJittedAction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRJittedAction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RJittedAction*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRJittedAction_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRJittedAction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedDefine_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRJittedDefine_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RJittedDefine*)
   {
      ::ROOT::Detail::RDF::RJittedDefine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RJittedDefine));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RJittedDefine", "ROOT/RDF/RJittedDefine.hxx", 36,
                  typeid(::ROOT::Detail::RDF::RJittedDefine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRJittedDefine_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RJittedDefine) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RJittedDefine*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RJittedDefine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RJittedDefine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedDefine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RJittedDefine*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRJittedDefine_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRJittedDefine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR_Dictionary();
   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR(void *p);
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*)
   {
      ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>", "ROOT/RDF/RInterface.hxx", 123,
                  typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR_Dictionary();
   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR(void *p);
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*)
   {
      ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>", "ROOT/RDF/RInterface.hxx", 123,
                  typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)
   {
      ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RIgnoreErrorLevelRAII));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RIgnoreErrorLevelRAII", "ROOT/RDF/InterfaceUtils.hxx", 75,
                  typeid(::ROOT::Internal::RDF::RIgnoreErrorLevelRAII), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RIgnoreErrorLevelRAII) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRRangeBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRRangeBase_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RRangeBase*)
   {
      ::ROOT::Detail::RDF::RRangeBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RRangeBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RRangeBase", "ROOT/RDF/RRangeBase.hxx", 33,
                  typeid(::ROOT::Detail::RDF::RRangeBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRRangeBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RRangeBase) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRRangeBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRRangeBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRRangeBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RRangeBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Detail::RDF::RRangeBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RRangeBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRRangeBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Detail::RDF::RRangeBase*>(nullptr))->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRRangeBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRRangeBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDataFrame_Dictionary();
   static void ROOTcLcLRDataFrame_TClassManip(TClass*);
   static void delete_ROOTcLcLRDataFrame(void *p);
   static void deleteArray_ROOTcLcLRDataFrame(void *p);
   static void destruct_ROOTcLcLRDataFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDataFrame*)
   {
      ::ROOT::RDataFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDataFrame));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDataFrame", "ROOT/RDataFrame.hxx", 44,
                  typeid(::ROOT::RDataFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDataFrame_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDataFrame) );
      instance.SetDelete(&delete_ROOTcLcLRDataFrame);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDataFrame);
      instance.SetDestructor(&destruct_ROOTcLcLRDataFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDataFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDataFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDataFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDataFrame_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDataFrame*>(nullptr))->GetClass();
      ROOTcLcLRDataFrame_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDataFrame_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRCsvDS_Dictionary();
   static void ROOTcLcLRDFcLcLRCsvDS_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRCsvDS(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRCsvDS(void *p);
   static void destruct_ROOTcLcLRDFcLcLRCsvDS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RCsvDS*)
   {
      ::ROOT::RDF::RCsvDS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RCsvDS));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RCsvDS", "ROOT/RCsvDS.hxx", 45,
                  typeid(::ROOT::RDF::RCsvDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRCsvDS_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RCsvDS) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRCsvDS);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRCsvDS);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRCsvDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RCsvDS*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::RCsvDS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RCsvDS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRCsvDS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RCsvDS*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLRCsvDS_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRCsvDS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRRootDS_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRRootDS_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRRootDS(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRRootDS(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRRootDS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RRootDS*)
   {
      ::ROOT::Internal::RDF::RRootDS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RRootDS));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RRootDS", "ROOT/RRootDS.hxx", 28,
                  typeid(::ROOT::Internal::RDF::RRootDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRRootDS_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RRootDS) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRRootDS);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRRootDS);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRRootDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RRootDS*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RDF::RRootDS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RRootDS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRRootDS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RDF::RRootDS*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRRootDS_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRRootDS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRTrivialDS_Dictionary();
   static void ROOTcLcLRDFcLcLRTrivialDS_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLRTrivialDS(void *p = nullptr);
   static void *newArray_ROOTcLcLRDFcLcLRTrivialDS(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLRTrivialDS(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRTrivialDS(void *p);
   static void destruct_ROOTcLcLRDFcLcLRTrivialDS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RTrivialDS*)
   {
      ::ROOT::RDF::RTrivialDS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RTrivialDS));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RTrivialDS", "ROOT/RTrivialDS.hxx", 36,
                  typeid(::ROOT::RDF::RTrivialDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRTrivialDS_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RTrivialDS) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLRTrivialDS);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLRTrivialDS);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRTrivialDS);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRTrivialDS);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRTrivialDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RTrivialDS*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RDF::RTrivialDS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RTrivialDS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRTrivialDS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RDF::RTrivialDS*>(nullptr))->GetClass();
      ROOTcLcLRDFcLcLRTrivialDS_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRTrivialDS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
template <> atomic_TClass_ptr TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::Class_Name()
{
   return "TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>";
}

//______________________________________________________________________________
template <> const char *TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
template <> int TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> void TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>.

   TNotifyLinkBase::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(void *p) {
      delete (static_cast<::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*>(p));
   }
   static void deleteArray_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(void *p) {
      delete [] (static_cast<::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*>(p));
   }
   static void destruct_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(void *p) {
      typedef ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNotifyLinklEROOTcLcLInternalcLcLRDFcLcLRNewSampleFlaggR(TBuffer &buf, void *obj) {
      ((::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>*)obj)->::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>::Streamer(buf);
   }
} // end of namespace ROOT for class ::TNotifyLink<ROOT::Internal::RDF::RNewSampleFlag>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRDisplay(void *p) {
      delete (static_cast<::ROOT::RDF::RDisplay*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLRDisplay(void *p) {
      delete [] (static_cast<::ROOT::RDF::RDisplay*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLRDisplay(void *p) {
      typedef ::ROOT::RDF::RDisplay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RDisplay

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTCutInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TCutInfo : new ::ROOT::RDF::TCutInfo;
   }
   static void *newArray_ROOTcLcLRDFcLcLTCutInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TCutInfo[nElements] : new ::ROOT::RDF::TCutInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTCutInfo(void *p) {
      delete (static_cast<::ROOT::RDF::TCutInfo*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLTCutInfo(void *p) {
      delete [] (static_cast<::ROOT::RDF::TCutInfo*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLTCutInfo(void *p) {
      typedef ::ROOT::RDF::TCutInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TCutInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLRCutFlowReport(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::RCutFlowReport : new ::ROOT::RDF::RCutFlowReport;
   }
   static void *newArray_ROOTcLcLRDFcLcLRCutFlowReport(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::RCutFlowReport[nElements] : new ::ROOT::RDF::RCutFlowReport[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRCutFlowReport(void *p) {
      delete (static_cast<::ROOT::RDF::RCutFlowReport*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLRCutFlowReport(void *p) {
      delete [] (static_cast<::ROOT::RDF::RCutFlowReport*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLRCutFlowReport(void *p) {
      typedef ::ROOT::RDF::RCutFlowReport current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RCutFlowReport

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<ULong64_t>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEULong64_tgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<ULong64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<ULong64_t>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<double>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<double>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEdoublegR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<double>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TH1D>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TH1D>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH1DgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TH1D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TH1D>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TGraph>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TGraph>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TGraph> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TGraph>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETGraphAsymmErrorsgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TGraphAsymmErrors>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TH2D>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TH2D>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH2DgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TH2D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TH2D>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TH3D>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TH3D>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETH3DgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TH3D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TH3D>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<THnT<double> >*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETHnTlEdoublegRsPgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<THnT<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<THnT<double> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TProfile>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TProfile>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfilegR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TProfile> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TProfile>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TProfile2D>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETProfile2DgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TProfile2D> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TProfile2D>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<TStatistic>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<TStatistic>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelETStatisticgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<TStatistic> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<TStatistic>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<Long64_t>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<Long64_t>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelELong64_tgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<Long64_t> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<Long64_t>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<float>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<float>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEfloatgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<float>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<unsigned int>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<unsigned int>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEunsignedsPintgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<unsigned int>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValue<int>*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValue<int>*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValuelEintgR(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValue<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValue<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Detail::RDF::RMergeableValueBase : new ::ROOT::Detail::RDF::RMergeableValueBase;
   }
   static void *newArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Detail::RDF::RMergeableValueBase[nElements] : new ::ROOT::Detail::RDF::RMergeableValueBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableValueBase*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableValueBase*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableValueBase(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableValueBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableValueBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Detail::RDF::RMergeableVariationsBase : new ::ROOT::Detail::RDF::RMergeableVariationsBase;
   }
   static void *newArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Detail::RDF::RMergeableVariationsBase[nElements] : new ::ROOT::Detail::RDF::RMergeableVariationsBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RMergeableVariationsBase*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RMergeableVariationsBase*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRMergeableVariationsBase(void *p) {
      typedef ::ROOT::Detail::RDF::RMergeableVariationsBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RMergeableVariationsBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::CountHelper*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::CountHelper*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p) {
      typedef ::ROOT::Internal::RDF::CountHelper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::CountHelper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::BufferedFillHelper*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::BufferedFillHelper*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLBufferedFillHelper(void *p) {
      typedef ::ROOT::Internal::RDF::BufferedFillHelper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::BufferedFillHelper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::MeanHelper*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::MeanHelper*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p) {
      typedef ::ROOT::Internal::RDF::MeanHelper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::MeanHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TH1DModel : new ::ROOT::RDF::TH1DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTH1DModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TH1DModel[nElements] : new ::ROOT::RDF::TH1DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      delete (static_cast<::ROOT::RDF::TH1DModel*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      delete [] (static_cast<::ROOT::RDF::TH1DModel*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      typedef ::ROOT::RDF::TH1DModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TH1DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TH2DModel : new ::ROOT::RDF::TH2DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTH2DModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TH2DModel[nElements] : new ::ROOT::RDF::TH2DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      delete (static_cast<::ROOT::RDF::TH2DModel*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      delete [] (static_cast<::ROOT::RDF::TH2DModel*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      typedef ::ROOT::RDF::TH2DModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TH2DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TH3DModel : new ::ROOT::RDF::TH3DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTH3DModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TH3DModel[nElements] : new ::ROOT::RDF::TH3DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      delete (static_cast<::ROOT::RDF::TH3DModel*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      delete [] (static_cast<::ROOT::RDF::TH3DModel*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      typedef ::ROOT::RDF::TH3DModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TH3DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TProfile1DModel : new ::ROOT::RDF::TProfile1DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTProfile1DModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TProfile1DModel[nElements] : new ::ROOT::RDF::TProfile1DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      delete (static_cast<::ROOT::RDF::TProfile1DModel*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      delete [] (static_cast<::ROOT::RDF::TProfile1DModel*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      typedef ::ROOT::RDF::TProfile1DModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TProfile1DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TProfile2DModel : new ::ROOT::RDF::TProfile2DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTProfile2DModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::TProfile2DModel[nElements] : new ::ROOT::RDF::TProfile2DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      delete (static_cast<::ROOT::RDF::TProfile2DModel*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      delete [] (static_cast<::ROOT::RDF::TProfile2DModel*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      typedef ::ROOT::RDF::TProfile2DModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TProfile2DModel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::RColumnRegister*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::RColumnRegister*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnRegister(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnRegister current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnRegister

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRDefineBase(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RDefineBase*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRDefineBase(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RDefineBase*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRDefineBase(void *p) {
      typedef ::ROOT::Detail::RDF::RDefineBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RDefineBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Detail::RDF::RLoopManager : new ::ROOT::Detail::RDF::RLoopManager;
   }
   static void *newArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Detail::RDF::RLoopManager[nElements] : new ::ROOT::Detail::RDF::RLoopManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RLoopManager*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RLoopManager*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      typedef ::ROOT::Detail::RDF::RLoopManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RLoopManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::RActionBase*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::RActionBase*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p) {
      typedef ::ROOT::Internal::RDF::RActionBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RActionBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RFilterBase*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RFilterBase*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p) {
      typedef ::ROOT::Detail::RDF::RFilterBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RFilterBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RJittedFilter*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RJittedFilter*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p) {
      typedef ::ROOT::Detail::RDF::RJittedFilter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RJittedFilter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRJittedAction(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::RJittedAction*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRJittedAction(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::RJittedAction*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRJittedAction(void *p) {
      typedef ::ROOT::Internal::RDF::RJittedAction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RJittedAction

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RJittedDefine*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RJittedDefine*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedDefine(void *p) {
      typedef ::ROOT::Detail::RDF::RJittedDefine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RJittedDefine

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR(void *p) {
      delete (static_cast<::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR(void *p) {
      delete [] (static_cast<::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRDefineBasegR(void *p) {
      typedef ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RDefineBase>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR(void *p) {
      delete (static_cast<::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR(void *p) {
      delete [] (static_cast<::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasegR(void *p) {
      typedef ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      typedef ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p) {
      delete (static_cast<::ROOT::Detail::RDF::RRangeBase*>(p));
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p) {
      delete [] (static_cast<::ROOT::Detail::RDF::RRangeBase*>(p));
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p) {
      typedef ::ROOT::Detail::RDF::RRangeBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RRangeBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDataFrame(void *p) {
      delete (static_cast<::ROOT::RDataFrame*>(p));
   }
   static void deleteArray_ROOTcLcLRDataFrame(void *p) {
      delete [] (static_cast<::ROOT::RDataFrame*>(p));
   }
   static void destruct_ROOTcLcLRDataFrame(void *p) {
      typedef ::ROOT::RDataFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDataFrame

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRCsvDS(void *p) {
      delete (static_cast<::ROOT::RDF::RCsvDS*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLRCsvDS(void *p) {
      delete [] (static_cast<::ROOT::RDF::RCsvDS*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLRCsvDS(void *p) {
      typedef ::ROOT::RDF::RCsvDS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RCsvDS

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRRootDS(void *p) {
      delete (static_cast<::ROOT::Internal::RDF::RRootDS*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRRootDS(void *p) {
      delete [] (static_cast<::ROOT::Internal::RDF::RRootDS*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRRootDS(void *p) {
      typedef ::ROOT::Internal::RDF::RRootDS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RRootDS

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::RTrivialDS : new ::ROOT::RDF::RTrivialDS;
   }
   static void *newArray_ROOTcLcLRDFcLcLRTrivialDS(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RDF::RTrivialDS[nElements] : new ::ROOT::RDF::RTrivialDS[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      delete (static_cast<::ROOT::RDF::RTrivialDS*>(p));
   }
   static void deleteArray_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      delete [] (static_cast<::ROOT::RDF::RTrivialDS*>(p));
   }
   static void destruct_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      typedef ::ROOT::RDF::RTrivialDS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RTrivialDS

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
   static TClass *vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR_Dictionary();
   static void vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p);
   static void deleteArray_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p);
   static void destruct_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Detail::RDF::RMergeableValueBase*>*)
   {
      vector<ROOT::Detail::RDF::RMergeableValueBase*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Detail::RDF::RMergeableValueBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Detail::RDF::RMergeableValueBase*>", -2, "functional", 86,
                  typeid(vector<ROOT::Detail::RDF::RMergeableValueBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Detail::RDF::RMergeableValueBase*>) );
      instance.SetNew(&new_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR);
      instance.SetDelete(&delete_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Detail::RDF::RMergeableValueBase*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Detail::RDF::RMergeableValueBase*>","std::__1::vector<ROOT::Detail::RDF::RMergeableValueBase*, std::__1::allocator<ROOT::Detail::RDF::RMergeableValueBase*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Detail::RDF::RMergeableValueBase*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Detail::RDF::RMergeableValueBase*>*>(nullptr))->GetClass();
      vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Detail::RDF::RMergeableValueBase*> : new vector<ROOT::Detail::RDF::RMergeableValueBase*>;
   }
   static void *newArray_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Detail::RDF::RMergeableValueBase*>[nElements] : new vector<ROOT::Detail::RDF::RMergeableValueBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p) {
      delete (static_cast<vector<ROOT::Detail::RDF::RMergeableValueBase*>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p) {
      delete [] (static_cast<vector<ROOT::Detail::RDF::RMergeableValueBase*>*>(p));
   }
   static void destruct_vectorlEROOTcLcLDetailcLcLRDFcLcLRMergeableValueBasemUgR(void *p) {
      typedef vector<ROOT::Detail::RDF::RMergeableValueBase*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Detail::RDF::RMergeableValueBase*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTDataFrame() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTDataFrame) = RecordReadRules_libROOTDataFrame();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTDataFrame));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTDataFrame_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libROOTDataFrame",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTDataFrame_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTDataFrame_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTDataFrame() {
  TriggerDictionaryInitialization_libROOTDataFrame_Impl();
}
