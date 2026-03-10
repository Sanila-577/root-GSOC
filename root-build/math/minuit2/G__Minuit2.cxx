// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Minuit2
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
#include "Minuit2/AnalyticalGradientCalculator.h"
#include "Minuit2/BFGSErrorUpdator.h"
#include "Minuit2/CombinedMinimizer.h"
#include "Minuit2/CombinedMinimumBuilder.h"
#include "Minuit2/ContoursError.h"
#include "Minuit2/DavidonErrorUpdator.h"
#include "Minuit2/ExternalInternalGradientCalculator.h"
#include "Minuit2/FCNAdapter.h"
#include "Minuit2/FCNBase.h"
#include "Minuit2/FCNGradientBase.h"
#include "Minuit2/FumiliBuilder.h"
#include "Minuit2/FumiliChi2FCN.h"
#include "Minuit2/FumiliErrorUpdator.h"
#include "Minuit2/FumiliFCNAdapter.h"
#include "Minuit2/FumiliFCNBase.h"
#include "Minuit2/FumiliGradientCalculator.h"
#include "Minuit2/FumiliMaximumLikelihoodFCN.h"
#include "Minuit2/FumiliMinimizer.h"
#include "Minuit2/FumiliStandardChi2FCN.h"
#include "Minuit2/FumiliStandardMaximumLikelihoodFCN.h"
#include "Minuit2/FunctionGradient.h"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/GradientCalculator.h"
#include "Minuit2/HessianGradientCalculator.h"
#include "Minuit2/InitialGradientCalculator.h"
#include "Minuit2/MinimumBuilder.h"
#include "Minuit2/MinimumError.h"
#include "Minuit2/MinimumErrorUpdator.h"
#include "Minuit2/MinimumParameters.h"
#include "Minuit2/MinimumSeed.h"
#include "Minuit2/MinimumSeedGenerator.h"
#include "Minuit2/MinimumState.h"
#include "Minuit2/MinosError.h"
#include "Minuit2/Minuit2Minimizer.h"
#include "Minuit2/MinuitParameter.h"
#include "Minuit2/MnApplication.h"
#include "Minuit2/MnConfig.h"
#include "Minuit2/MnContours.h"
#include "Minuit2/MnCovarianceSqueeze.h"
#include "Minuit2/MnCross.h"
#include "Minuit2/MnEigen.h"
#include "Minuit2/MnFcn.h"
#include "Minuit2/MnFumiliMinimize.h"
#include "Minuit2/MnFunctionCross.h"
#include "Minuit2/MnGlobalCorrelationCoeff.h"
#include "Minuit2/MnHesse.h"
#include "Minuit2/MnLineSearch.h"
#include "Minuit2/MnMachinePrecision.h"
#include "Minuit2/MnMatrix.h"
#include "Minuit2/MnMatrixfwd.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/MnMinimize.h"
#include "Minuit2/MnMinos.h"
#include "Minuit2/MnParabola.h"
#include "Minuit2/MnParabolaFactory.h"
#include "Minuit2/MnParameterScan.h"
#include "Minuit2/MnParameterTransformation.h"
#include "Minuit2/MnPlot.h"
#include "Minuit2/MnPoint.h"
#include "Minuit2/MnPosDef.h"
#include "Minuit2/MnPrint.h"
#include "Minuit2/MnScan.h"
#include "Minuit2/MnSeedGenerator.h"
#include "Minuit2/MnSimplex.h"
#include "Minuit2/MnStrategy.h"
#include "Minuit2/MnTraceObject.h"
#include "Minuit2/MnUserCovariance.h"
#include "Minuit2/MnUserFcn.h"
#include "Minuit2/MnUserParameterState.h"
#include "Minuit2/MnUserParameters.h"
#include "Minuit2/MnUserTransformation.h"
#include "Minuit2/ModularFunctionMinimizer.h"
#include "Minuit2/NegativeG2LineSearch.h"
#include "Minuit2/Numerical2PGradientCalculator.h"
#include "Minuit2/NumericalDerivator.h"
#include "Minuit2/ParametricFunction.h"
#include "Minuit2/ScanBuilder.h"
#include "Minuit2/ScanMinimizer.h"
#include "Minuit2/SimplexBuilder.h"
#include "Minuit2/SimplexMinimizer.h"
#include "Minuit2/SimplexParameters.h"
#include "Minuit2/SimplexSeedGenerator.h"
#include "Minuit2/VariableMetricBuilder.h"
#include "Minuit2/VariableMetricEDMEstimator.h"
#include "Minuit2/VariableMetricMinimizer.h"
#include "TMinuit2TraceObject.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnStrategy_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnStrategy_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnStrategy(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnStrategy(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnStrategy(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnStrategy(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnStrategy(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnStrategy*)
   {
      ::ROOT::Minuit2::MnStrategy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnStrategy));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnStrategy", "Minuit2/MnStrategy.h", 27,
                  typeid(::ROOT::Minuit2::MnStrategy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnStrategy_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnStrategy) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnStrategy);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnStrategy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnStrategy*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnStrategy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnStrategy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnStrategy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnStrategy*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnStrategy_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnStrategy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLModularFunctionMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLModularFunctionMinimizer_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::ModularFunctionMinimizer*)
   {
      ::ROOT::Minuit2::ModularFunctionMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::ModularFunctionMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::ModularFunctionMinimizer", "Minuit2/ModularFunctionMinimizer.h", 41,
                  typeid(::ROOT::Minuit2::ModularFunctionMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLModularFunctionMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::ModularFunctionMinimizer) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLModularFunctionMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLModularFunctionMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLModularFunctionMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::ModularFunctionMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::ModularFunctionMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::ModularFunctionMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLModularFunctionMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::ModularFunctionMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLModularFunctionMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLModularFunctionMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnTraceObject_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnTraceObject_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnTraceObject(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnTraceObject(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnTraceObject(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnTraceObject(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnTraceObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnTraceObject*)
   {
      ::ROOT::Minuit2::MnTraceObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnTraceObject));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnTraceObject", "Minuit2/MnTraceObject.h", 20,
                  typeid(::ROOT::Minuit2::MnTraceObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnTraceObject_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnTraceObject) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnTraceObject);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnTraceObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnTraceObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnTraceObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnTraceObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnTraceObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnTraceObject*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnTraceObject_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnTraceObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLVariableMetricMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLVariableMetricMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::VariableMetricMinimizer*)
   {
      ::ROOT::Minuit2::VariableMetricMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::VariableMetricMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::VariableMetricMinimizer", "Minuit2/VariableMetricMinimizer.h", 33,
                  typeid(::ROOT::Minuit2::VariableMetricMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLVariableMetricMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::VariableMetricMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLVariableMetricMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::VariableMetricMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::VariableMetricMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::VariableMetricMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLVariableMetricMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::VariableMetricMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLVariableMetricMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLVariableMetricMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLSimplexMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLSimplexMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::SimplexMinimizer*)
   {
      ::ROOT::Minuit2::SimplexMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::SimplexMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::SimplexMinimizer", "Minuit2/SimplexMinimizer.h", 28,
                  typeid(::ROOT::Minuit2::SimplexMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLSimplexMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::SimplexMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLSimplexMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::SimplexMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::SimplexMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::SimplexMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLSimplexMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::SimplexMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLSimplexMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLSimplexMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLCombinedMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLCombinedMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::CombinedMinimizer*)
   {
      ::ROOT::Minuit2::CombinedMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::CombinedMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::CombinedMinimizer", "Minuit2/CombinedMinimizer.h", 30,
                  typeid(::ROOT::Minuit2::CombinedMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLCombinedMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::CombinedMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLCombinedMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::CombinedMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::CombinedMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::CombinedMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLCombinedMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::CombinedMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLCombinedMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLCombinedMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMinuitParameter_Dictionary();
   static void ROOTcLcLMinuit2cLcLMinuitParameter_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMinuitParameter(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMinuitParameter(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMinuitParameter(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuitParameter(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMinuitParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MinuitParameter*)
   {
      ::ROOT::Minuit2::MinuitParameter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MinuitParameter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MinuitParameter", "Minuit2/MinuitParameter.h", 33,
                  typeid(::ROOT::Minuit2::MinuitParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMinuitParameter_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MinuitParameter) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMinuitParameter);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMinuitParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MinuitParameter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MinuitParameter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MinuitParameter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMinuitParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MinuitParameter*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMinuitParameter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMinuitParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMachinePrecision_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMachinePrecision_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMachinePrecision*)
   {
      ::ROOT::Minuit2::MnMachinePrecision *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMachinePrecision));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMachinePrecision", "Minuit2/MnMachinePrecision.h", 32,
                  typeid(::ROOT::Minuit2::MnMachinePrecision), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMachinePrecision_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMachinePrecision) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMachinePrecision);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMachinePrecision*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnMachinePrecision*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMachinePrecision*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMachinePrecision_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMachinePrecision*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnMachinePrecision_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMachinePrecision_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameters_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnUserParameters_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameters(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameters(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameters(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameters(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnUserParameters*)
   {
      ::ROOT::Minuit2::MnUserParameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnUserParameters));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnUserParameters", "Minuit2/MnUserParameters.h", 36,
                  typeid(::ROOT::Minuit2::MnUserParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnUserParameters_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnUserParameters) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnUserParameters);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnUserParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnUserParameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnUserParameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnUserParameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnUserParameters*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnUserParameters_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnUserParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameterState_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnUserParameterState_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameterState(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnUserParameterState*)
   {
      ::ROOT::Minuit2::MnUserParameterState *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnUserParameterState));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnUserParameterState", "Minuit2/MnUserParameterState.h", 35,
                  typeid(::ROOT::Minuit2::MnUserParameterState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnUserParameterState_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnUserParameterState) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnUserParameterState);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnUserParameterState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnUserParameterState*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnUserParameterState*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnUserParameterState*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnUserParameterState_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnUserParameterState*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnUserParameterState_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnUserParameterState_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMinosError_Dictionary();
   static void ROOTcLcLMinuit2cLcLMinosError_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMinosError(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMinosError(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMinosError(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMinosError(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMinosError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MinosError*)
   {
      ::ROOT::Minuit2::MinosError *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MinosError));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MinosError", "Minuit2/MinosError.h", 25,
                  typeid(::ROOT::Minuit2::MinosError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMinosError_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MinosError) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMinosError);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMinosError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MinosError*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MinosError*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MinosError*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMinosError_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MinosError*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMinosError_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMinosError_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFCNBase_Dictionary();
   static void ROOTcLcLMinuit2cLcLFCNBase_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFCNBase(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNBase(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFCNBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FCNBase*)
   {
      ::ROOT::Minuit2::FCNBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FCNBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FCNBase", "Minuit2/FCNBase.h", 37,
                  typeid(::ROOT::Minuit2::FCNBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFCNBase_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FCNBase) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFCNBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFCNBase);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFCNBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FCNBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::FCNBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FCNBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFCNBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FCNBase*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLFCNBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFCNBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFCNGradientBase_Dictionary();
   static void ROOTcLcLMinuit2cLcLFCNGradientBase_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FCNGradientBase*)
   {
      ::ROOT::Minuit2::FCNGradientBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FCNGradientBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FCNGradientBase", "Minuit2/FCNGradientBase.h", 26,
                  typeid(::ROOT::Minuit2::FCNGradientBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFCNGradientBase_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FCNGradientBase) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFCNGradientBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFCNGradientBase);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFCNGradientBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FCNGradientBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::FCNGradientBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FCNGradientBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFCNGradientBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FCNGradientBase*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLFCNGradientBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFCNGradientBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFunctionMinimum_Dictionary();
   static void ROOTcLcLMinuit2cLcLFunctionMinimum_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FunctionMinimum*)
   {
      ::ROOT::Minuit2::FunctionMinimum *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FunctionMinimum));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FunctionMinimum", "Minuit2/FunctionMinimum.h", 37,
                  typeid(::ROOT::Minuit2::FunctionMinimum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFunctionMinimum_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FunctionMinimum) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFunctionMinimum);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimum);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFunctionMinimum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FunctionMinimum*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::FunctionMinimum*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FunctionMinimum*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFunctionMinimum_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FunctionMinimum*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLFunctionMinimum_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFunctionMinimum_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFumiliFCNBase_Dictionary();
   static void ROOTcLcLMinuit2cLcLFumiliFCNBase_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FumiliFCNBase*)
   {
      ::ROOT::Minuit2::FumiliFCNBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FumiliFCNBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FumiliFCNBase", "Minuit2/FumiliFCNBase.h", 46,
                  typeid(::ROOT::Minuit2::FumiliFCNBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFumiliFCNBase_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FumiliFCNBase) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFumiliFCNBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFumiliFCNBase);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFumiliFCNBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FumiliFCNBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::FumiliFCNBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FumiliFCNBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFumiliFCNBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FumiliFCNBase*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLFumiliFCNBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFumiliFCNBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLFumiliMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLFumiliMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::FumiliMinimizer*)
   {
      ::ROOT::Minuit2::FumiliMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::FumiliMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::FumiliMinimizer", "Minuit2/FumiliMinimizer.h", 47,
                  typeid(::ROOT::Minuit2::FumiliMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLFumiliMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::FumiliMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLFumiliMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::FumiliMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::FumiliMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FumiliMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLFumiliMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::FumiliMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLFumiliMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLFumiliMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMinuit2Minimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLMinuit2Minimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::Minuit2Minimizer*)
   {
      ::ROOT::Minuit2::Minuit2Minimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::Minuit2Minimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::Minuit2Minimizer", "Minuit2/Minuit2Minimizer.h", 58,
                  typeid(::ROOT::Minuit2::Minuit2Minimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMinuit2Minimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::Minuit2Minimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMinuit2Minimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::Minuit2Minimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::Minuit2Minimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::Minuit2Minimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMinuit2Minimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::Minuit2Minimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMinuit2Minimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMinuit2Minimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnApplication_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnApplication_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnApplication(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnApplication(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnApplication(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnApplication*)
   {
      ::ROOT::Minuit2::MnApplication *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnApplication));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnApplication", "Minuit2/MnApplication.h", 36,
                  typeid(::ROOT::Minuit2::MnApplication), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnApplication_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnApplication) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnApplication);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnApplication);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnApplication);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnApplication*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnApplication*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnApplication*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnApplication_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnApplication*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnApplication_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnApplication_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnContours_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnContours_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnContours(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnContours(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnContours(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnContours*)
   {
      ::ROOT::Minuit2::MnContours *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnContours));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnContours", "Minuit2/MnContours.h", 35,
                  typeid(::ROOT::Minuit2::MnContours), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnContours_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnContours) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnContours);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnContours);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnContours);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnContours*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnContours*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnContours*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnContours_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnContours*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnContours_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnContours_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnFumiliMinimize_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnFumiliMinimize_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnFumiliMinimize*)
   {
      ::ROOT::Minuit2::MnFumiliMinimize *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnFumiliMinimize));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnFumiliMinimize", "Minuit2/MnFumiliMinimize.h", 38,
                  typeid(::ROOT::Minuit2::MnFumiliMinimize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnFumiliMinimize_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnFumiliMinimize) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnFumiliMinimize);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnFumiliMinimize);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnFumiliMinimize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnFumiliMinimize*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnFumiliMinimize*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnFumiliMinimize*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnFumiliMinimize_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnFumiliMinimize*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnFumiliMinimize_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnFumiliMinimize_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnHesse_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnHesse_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnHesse(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnHesse(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnHesse(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnHesse(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnHesse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnHesse*)
   {
      ::ROOT::Minuit2::MnHesse *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnHesse));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnHesse", "Minuit2/MnHesse.h", 41,
                  typeid(::ROOT::Minuit2::MnHesse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnHesse_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnHesse) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnHesse);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnHesse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnHesse*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnHesse*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnHesse*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnHesse_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnHesse*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnHesse_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnHesse_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMigrad_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMigrad_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnMigrad(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMigrad(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMigrad(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMigrad*)
   {
      ::ROOT::Minuit2::MnMigrad *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMigrad));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMigrad", "Minuit2/MnMigrad.h", 32,
                  typeid(::ROOT::Minuit2::MnMigrad), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMigrad_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMigrad) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMigrad);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMigrad);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMigrad);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMigrad*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnMigrad*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMigrad*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMigrad_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMigrad*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnMigrad_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMigrad_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMinimize_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMinimize_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnMinimize(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinimize(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMinimize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMinimize*)
   {
      ::ROOT::Minuit2::MnMinimize *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMinimize));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMinimize", "Minuit2/MnMinimize.h", 30,
                  typeid(::ROOT::Minuit2::MnMinimize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMinimize_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMinimize) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMinimize);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMinimize);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMinimize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMinimize*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnMinimize*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMinimize*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMinimize_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMinimize*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnMinimize_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMinimize_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnMinos_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnMinos_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnMinos(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinos(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnMinos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnMinos*)
   {
      ::ROOT::Minuit2::MnMinos *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnMinos));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnMinos", "Minuit2/MnMinos.h", 33,
                  typeid(::ROOT::Minuit2::MnMinos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnMinos_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnMinos) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnMinos);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnMinos);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnMinos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnMinos*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnMinos*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMinos*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnMinos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnMinos*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnMinos_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnMinos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnPlot_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnPlot_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLMnPlot(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLMnPlot(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLMnPlot(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnPlot(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnPlot*)
   {
      ::ROOT::Minuit2::MnPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnPlot));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnPlot", "Minuit2/MnPlot.h", 29,
                  typeid(::ROOT::Minuit2::MnPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnPlot_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnPlot) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnPlot);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnPlot_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnPlot*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnPlot_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnPlot_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLScanMinimizer_Dictionary();
   static void ROOTcLcLMinuit2cLcLScanMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMinuit2cLcLScanMinimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMinuit2cLcLScanMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMinuit2cLcLScanMinimizer(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLScanMinimizer(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLScanMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::ScanMinimizer*)
   {
      ::ROOT::Minuit2::ScanMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::ScanMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::ScanMinimizer", "Minuit2/ScanMinimizer.h", 28,
                  typeid(::ROOT::Minuit2::ScanMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLScanMinimizer_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::ScanMinimizer) );
      instance.SetNew(&new_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLScanMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLScanMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::ScanMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::ScanMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::ScanMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLScanMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::ScanMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLScanMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLScanMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnScan_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnScan_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnScan(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnScan(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnScan(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnScan*)
   {
      ::ROOT::Minuit2::MnScan *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnScan));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnScan", "Minuit2/MnScan.h", 33,
                  typeid(::ROOT::Minuit2::MnScan), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnScan_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnScan) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnScan);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnScan);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnScan);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnScan*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnScan*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnScan*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnScan_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnScan*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnScan_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnScan_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMinuit2cLcLMnSimplex_Dictionary();
   static void ROOTcLcLMinuit2cLcLMnSimplex_TClassManip(TClass*);
   static void delete_ROOTcLcLMinuit2cLcLMnSimplex(void *p);
   static void deleteArray_ROOTcLcLMinuit2cLcLMnSimplex(void *p);
   static void destruct_ROOTcLcLMinuit2cLcLMnSimplex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Minuit2::MnSimplex*)
   {
      ::ROOT::Minuit2::MnSimplex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Minuit2::MnSimplex));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Minuit2::MnSimplex", "Minuit2/MnSimplex.h", 35,
                  typeid(::ROOT::Minuit2::MnSimplex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMinuit2cLcLMnSimplex_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::Minuit2::MnSimplex) );
      instance.SetDelete(&delete_ROOTcLcLMinuit2cLcLMnSimplex);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMinuit2cLcLMnSimplex);
      instance.SetDestructor(&destruct_ROOTcLcLMinuit2cLcLMnSimplex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Minuit2::MnSimplex*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Minuit2::MnSimplex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnSimplex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMinuit2cLcLMnSimplex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Minuit2::MnSimplex*>(nullptr))->GetClass();
      ROOTcLcLMinuit2cLcLMnSimplex_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMinuit2cLcLMnSimplex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMinuit2TraceObject(void *p = nullptr);
   static void *newArray_TMinuit2TraceObject(Long_t size, void *p);
   static void delete_TMinuit2TraceObject(void *p);
   static void deleteArray_TMinuit2TraceObject(void *p);
   static void destruct_TMinuit2TraceObject(void *p);
   static void streamer_TMinuit2TraceObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMinuit2TraceObject*)
   {
      ::TMinuit2TraceObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMinuit2TraceObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMinuit2TraceObject", ::TMinuit2TraceObject::Class_Version(), "TMinuit2TraceObject.h", 30,
                  typeid(::TMinuit2TraceObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMinuit2TraceObject::Dictionary, isa_proxy, 16,
                  sizeof(::TMinuit2TraceObject) );
      instance.SetNew(&new_TMinuit2TraceObject);
      instance.SetNewArray(&newArray_TMinuit2TraceObject);
      instance.SetDelete(&delete_TMinuit2TraceObject);
      instance.SetDeleteArray(&deleteArray_TMinuit2TraceObject);
      instance.SetDestructor(&destruct_TMinuit2TraceObject);
      instance.SetStreamerFunc(&streamer_TMinuit2TraceObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMinuit2TraceObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMinuit2TraceObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMinuit2TraceObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TMinuit2TraceObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMinuit2TraceObject::Class_Name()
{
   return "TMinuit2TraceObject";
}

//______________________________________________________________________________
const char *TMinuit2TraceObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMinuit2TraceObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMinuit2TraceObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMinuit2TraceObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMinuit2TraceObject*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnStrategy : new ::ROOT::Minuit2::MnStrategy;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnStrategy(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnStrategy[nElements] : new ::ROOT::Minuit2::MnStrategy[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnStrategy*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnStrategy*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnStrategy(void *p) {
      typedef ::ROOT::Minuit2::MnStrategy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnStrategy

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::ModularFunctionMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::ModularFunctionMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLModularFunctionMinimizer(void *p) {
      typedef ::ROOT::Minuit2::ModularFunctionMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::ModularFunctionMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnTraceObject : new ::ROOT::Minuit2::MnTraceObject;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnTraceObject(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnTraceObject[nElements] : new ::ROOT::Minuit2::MnTraceObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnTraceObject*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnTraceObject*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnTraceObject(void *p) {
      typedef ::ROOT::Minuit2::MnTraceObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnTraceObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::VariableMetricMinimizer : new ::ROOT::Minuit2::VariableMetricMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::VariableMetricMinimizer[nElements] : new ::ROOT::Minuit2::VariableMetricMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::VariableMetricMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::VariableMetricMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLVariableMetricMinimizer(void *p) {
      typedef ::ROOT::Minuit2::VariableMetricMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::VariableMetricMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::SimplexMinimizer : new ::ROOT::Minuit2::SimplexMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::SimplexMinimizer[nElements] : new ::ROOT::Minuit2::SimplexMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::SimplexMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::SimplexMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLSimplexMinimizer(void *p) {
      typedef ::ROOT::Minuit2::SimplexMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::SimplexMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::CombinedMinimizer : new ::ROOT::Minuit2::CombinedMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::CombinedMinimizer[nElements] : new ::ROOT::Minuit2::CombinedMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::CombinedMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::CombinedMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLCombinedMinimizer(void *p) {
      typedef ::ROOT::Minuit2::CombinedMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::CombinedMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MinuitParameter : new ::ROOT::Minuit2::MinuitParameter;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMinuitParameter(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MinuitParameter[nElements] : new ::ROOT::Minuit2::MinuitParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      delete (static_cast<::ROOT::Minuit2::MinuitParameter*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MinuitParameter*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMinuitParameter(void *p) {
      typedef ::ROOT::Minuit2::MinuitParameter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MinuitParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnMachinePrecision : new ::ROOT::Minuit2::MnMachinePrecision;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnMachinePrecision[nElements] : new ::ROOT::Minuit2::MnMachinePrecision[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnMachinePrecision*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnMachinePrecision*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMachinePrecision(void *p) {
      typedef ::ROOT::Minuit2::MnMachinePrecision current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMachinePrecision

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnUserParameters : new ::ROOT::Minuit2::MnUserParameters;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameters(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnUserParameters[nElements] : new ::ROOT::Minuit2::MnUserParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnUserParameters*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnUserParameters*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameters(void *p) {
      typedef ::ROOT::Minuit2::MnUserParameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnUserParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnUserParameterState : new ::ROOT::Minuit2::MnUserParameterState;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnUserParameterState(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnUserParameterState[nElements] : new ::ROOT::Minuit2::MnUserParameterState[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnUserParameterState*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnUserParameterState*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnUserParameterState(void *p) {
      typedef ::ROOT::Minuit2::MnUserParameterState current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnUserParameterState

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MinosError : new ::ROOT::Minuit2::MinosError;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMinosError(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MinosError[nElements] : new ::ROOT::Minuit2::MinosError[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      delete (static_cast<::ROOT::Minuit2::MinosError*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MinosError*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMinosError(void *p) {
      typedef ::ROOT::Minuit2::MinosError current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MinosError

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFCNBase(void *p) {
      delete (static_cast<::ROOT::Minuit2::FCNBase*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNBase(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::FCNBase*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLFCNBase(void *p) {
      typedef ::ROOT::Minuit2::FCNBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FCNBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p) {
      delete (static_cast<::ROOT::Minuit2::FCNGradientBase*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::FCNGradientBase*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLFCNGradientBase(void *p) {
      typedef ::ROOT::Minuit2::FCNGradientBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FCNGradientBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p) {
      delete (static_cast<::ROOT::Minuit2::FunctionMinimum*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::FunctionMinimum*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLFunctionMinimum(void *p) {
      typedef ::ROOT::Minuit2::FunctionMinimum current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FunctionMinimum

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p) {
      delete (static_cast<::ROOT::Minuit2::FumiliFCNBase*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::FumiliFCNBase*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLFumiliFCNBase(void *p) {
      typedef ::ROOT::Minuit2::FumiliFCNBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FumiliFCNBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::FumiliMinimizer : new ::ROOT::Minuit2::FumiliMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::FumiliMinimizer[nElements] : new ::ROOT::Minuit2::FumiliMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::FumiliMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::FumiliMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLFumiliMinimizer(void *p) {
      typedef ::ROOT::Minuit2::FumiliMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::FumiliMinimizer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::Minuit2Minimizer : new ::ROOT::Minuit2::Minuit2Minimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::Minuit2Minimizer[nElements] : new ::ROOT::Minuit2::Minuit2Minimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::Minuit2Minimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::Minuit2Minimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMinuit2Minimizer(void *p) {
      typedef ::ROOT::Minuit2::Minuit2Minimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::Minuit2Minimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnApplication(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnApplication*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnApplication(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnApplication*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnApplication(void *p) {
      typedef ::ROOT::Minuit2::MnApplication current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnApplication

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnContours(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnContours*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnContours(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnContours*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnContours(void *p) {
      typedef ::ROOT::Minuit2::MnContours current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnContours

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnFumiliMinimize*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnFumiliMinimize*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnFumiliMinimize(void *p) {
      typedef ::ROOT::Minuit2::MnFumiliMinimize current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnFumiliMinimize

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnHesse : new ::ROOT::Minuit2::MnHesse;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnHesse(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnHesse[nElements] : new ::ROOT::Minuit2::MnHesse[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnHesse*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnHesse*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnHesse(void *p) {
      typedef ::ROOT::Minuit2::MnHesse current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnHesse

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMigrad(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnMigrad*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMigrad(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnMigrad*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMigrad(void *p) {
      typedef ::ROOT::Minuit2::MnMigrad current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMigrad

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMinimize(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnMinimize*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinimize(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnMinimize*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMinimize(void *p) {
      typedef ::ROOT::Minuit2::MnMinimize current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMinimize

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnMinos(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnMinos*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnMinos(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnMinos*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnMinos(void *p) {
      typedef ::ROOT::Minuit2::MnMinos current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnMinos

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnPlot : new ::ROOT::Minuit2::MnPlot;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLMnPlot(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::MnPlot[nElements] : new ::ROOT::Minuit2::MnPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnPlot*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnPlot*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnPlot(void *p) {
      typedef ::ROOT::Minuit2::MnPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnPlot

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::ScanMinimizer : new ::ROOT::Minuit2::ScanMinimizer;
   }
   static void *newArray_ROOTcLcLMinuit2cLcLScanMinimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Minuit2::ScanMinimizer[nElements] : new ::ROOT::Minuit2::ScanMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      delete (static_cast<::ROOT::Minuit2::ScanMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::ScanMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLScanMinimizer(void *p) {
      typedef ::ROOT::Minuit2::ScanMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::ScanMinimizer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnScan(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnScan*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnScan(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnScan*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnScan(void *p) {
      typedef ::ROOT::Minuit2::MnScan current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnScan

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLMinuit2cLcLMnSimplex(void *p) {
      delete (static_cast<::ROOT::Minuit2::MnSimplex*>(p));
   }
   static void deleteArray_ROOTcLcLMinuit2cLcLMnSimplex(void *p) {
      delete [] (static_cast<::ROOT::Minuit2::MnSimplex*>(p));
   }
   static void destruct_ROOTcLcLMinuit2cLcLMnSimplex(void *p) {
      typedef ::ROOT::Minuit2::MnSimplex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Minuit2::MnSimplex

//______________________________________________________________________________
void TMinuit2TraceObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMinuit2TraceObject.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMinuit2TraceObject(void *p) {
      return  p ? new(p) ::TMinuit2TraceObject : new ::TMinuit2TraceObject;
   }
   static void *newArray_TMinuit2TraceObject(Long_t nElements, void *p) {
      return p ? new(p) ::TMinuit2TraceObject[nElements] : new ::TMinuit2TraceObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMinuit2TraceObject(void *p) {
      delete (static_cast<::TMinuit2TraceObject*>(p));
   }
   static void deleteArray_TMinuit2TraceObject(void *p) {
      delete [] (static_cast<::TMinuit2TraceObject*>(p));
   }
   static void destruct_TMinuit2TraceObject(void *p) {
      typedef ::TMinuit2TraceObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMinuit2TraceObject(TBuffer &buf, void *obj) {
      ((::TMinuit2TraceObject*)obj)->::TMinuit2TraceObject::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMinuit2TraceObject

namespace ROOT {
   static TClass *vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_Dictionary();
   static void vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p);
   static void deleteArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p);
   static void destruct_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Minuit2::MinuitParameter>*)
   {
      vector<ROOT::Minuit2::MinuitParameter> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Minuit2::MinuitParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Minuit2::MinuitParameter>", -2, "functional", 86,
                  typeid(vector<ROOT::Minuit2::MinuitParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ROOT::Minuit2::MinuitParameter>) );
      instance.SetNew(&new_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetDelete(&delete_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Minuit2::MinuitParameter> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Minuit2::MinuitParameter>","std::__1::vector<ROOT::Minuit2::MinuitParameter, std::__1::allocator<ROOT::Minuit2::MinuitParameter>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Minuit2::MinuitParameter>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Minuit2::MinuitParameter>*>(nullptr))->GetClass();
      vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLMinuit2cLcLMinuitParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Minuit2::MinuitParameter> : new vector<ROOT::Minuit2::MinuitParameter>;
   }
   static void *newArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Minuit2::MinuitParameter>[nElements] : new vector<ROOT::Minuit2::MinuitParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      delete (static_cast<vector<ROOT::Minuit2::MinuitParameter>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      delete [] (static_cast<vector<ROOT::Minuit2::MinuitParameter>*>(p));
   }
   static void destruct_vectorlEROOTcLcLMinuit2cLcLMinuitParametergR(void *p) {
      typedef vector<ROOT::Minuit2::MinuitParameter> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Minuit2::MinuitParameter>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libMinuit2() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libMinuit2) = RecordReadRules_libMinuit2();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libMinuit2));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libMinuit2_Impl() {
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
      TROOT::RegisterModule("libMinuit2",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMinuit2_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMinuit2_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMinuit2() {
  TriggerDictionaryInitialization_libMinuit2_Impl();
}
