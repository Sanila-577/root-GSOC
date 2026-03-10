// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooStats
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
#include "RooStats/AsymptoticCalculator.h"
#include "RooStats/BayesianCalculator.h"
#include "RooStats/BernsteinCorrection.h"
#include "RooStats/CombinedCalculator.h"
#include "RooStats/ConfidenceBelt.h"
#include "RooStats/ConfInterval.h"
#include "RooStats/DebuggingSampler.h"
#include "RooStats/DebuggingTestStat.h"
#include "RooStats/DetailedOutputAggregator.h"
#include "RooStats/FeldmanCousins.h"
#include "RooStats/FrequentistCalculator.h"
#include "RooStats/Heaviside.h"
#include "RooStats/HybridCalculator.h"
#include "RooStats/HybridPlot.h"
#include "RooStats/HybridResult.h"
#include "RooStats/HypoTestCalculatorGeneric.h"
#include "RooStats/HypoTestCalculator.h"
#include "RooStats/HypoTestInverter.h"
#include "RooStats/HypoTestInverterPlot.h"
#include "RooStats/HypoTestInverterResult.h"
#include "RooStats/HypoTestPlot.h"
#include "RooStats/HypoTestResult.h"
#include "RooStats/IntervalCalculator.h"
#include "RooStats/LikelihoodInterval.h"
#include "RooStats/LikelihoodIntervalPlot.h"
#include "RooStats/MarkovChain.h"
#include "RooStats/MaxLikelihoodEstimateTestStat.h"
#include "RooStats/MCMCCalculator.h"
#include "RooStats/MCMCInterval.h"
#include "RooStats/MCMCIntervalPlot.h"
#include "RooStats/MetropolisHastings.h"
#include "RooStats/ModelConfig.h"
#include "RooStats/NeymanConstruction.h"
#include "RooStats/NumberCountingPdfFactory.h"
#include "RooStats/NumberCountingUtils.h"
#include "RooStats/NumEventsTestStat.h"
#include "RooStats/PdfProposal.h"
#include "RooStats/PointSetInterval.h"
#include "RooStats/ProfileInspector.h"
#include "RooStats/ProfileLikelihoodCalculator.h"
#include "RooStats/ProfileLikelihoodTestStat.h"
#include "RooStats/ProposalFunction.h"
#include "RooStats/ProposalHelper.h"
#include "RooStats/RatioOfProfiledLikelihoodsTestStat.h"
#include "RooStats/RooStatsUtils.h"
#include "RooStats/SamplingDistPlot.h"
#include "RooStats/SamplingDistribution.h"
#include "RooStats/SequentialProposal.h"
#include "RooStats/SimpleInterval.h"
#include "RooStats/SimpleLikelihoodRatioTestStat.h"
#include "RooStats/SPlot.h"
#include "RooStats/TestStatistic.h"
#include "RooStats/TestStatSampler.h"
#include "RooStats/ToyMCImportanceSampler.h"
#include "RooStats/ToyMCSampler.h"
#include "RooStats/UniformProposal.h"
#include "RooStats/UpperLimitMCSModule.h"

// Header files passed via #pragma extra_include
#include "Math/IFunction.h"
#include "Math/Minimizer.h"
#include "RooFunctor.h"
#include "TGraphErrors.h"
#include "RooLagrangianMorphFunc.h"

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
   namespace NumberCountingUtils {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RooStatscLcLNumberCountingUtils_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RooStats::NumberCountingUtils", 0 /*version*/, "RooStats/NumberCountingUtils.h", 71,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &RooStatscLcLNumberCountingUtils_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RooStatscLcLNumberCountingUtils_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static void delete_RooStatscLcLHypoTestCalculator(void *p);
   static void deleteArray_RooStatscLcLHypoTestCalculator(void *p);
   static void destruct_RooStatscLcLHypoTestCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestCalculator*)
   {
      ::RooStats::HypoTestCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestCalculator", ::RooStats::HypoTestCalculator::Class_Version(), "RooStats/HypoTestCalculator.h", 59,
                  typeid(::RooStats::HypoTestCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestCalculator) );
      instance.SetDelete(&delete_RooStatscLcLHypoTestCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLTestStatistic(void *p);
   static void deleteArray_RooStatscLcLTestStatistic(void *p);
   static void destruct_RooStatscLcLTestStatistic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::TestStatistic*)
   {
      ::RooStats::TestStatistic *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::TestStatistic >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::TestStatistic", ::RooStats::TestStatistic::Class_Version(), "RooStats/TestStatistic.h", 31,
                  typeid(::RooStats::TestStatistic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::TestStatistic::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::TestStatistic) );
      instance.SetDelete(&delete_RooStatscLcLTestStatistic);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLTestStatistic);
      instance.SetDestructor(&destruct_RooStatscLcLTestStatistic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::TestStatistic*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::TestStatistic*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::TestStatistic*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLTestStatSampler(void *p);
   static void deleteArray_RooStatscLcLTestStatSampler(void *p);
   static void destruct_RooStatscLcLTestStatSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::TestStatSampler*)
   {
      ::RooStats::TestStatSampler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::TestStatSampler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::TestStatSampler", ::RooStats::TestStatSampler::Class_Version(), "RooStats/TestStatSampler.h", 39,
                  typeid(::RooStats::TestStatSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::TestStatSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::TestStatSampler) );
      instance.SetDelete(&delete_RooStatscLcLTestStatSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLTestStatSampler);
      instance.SetDestructor(&destruct_RooStatscLcLTestStatSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::TestStatSampler*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::TestStatSampler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::TestStatSampler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingDistribution(void *p = nullptr);
   static void *newArray_RooStatscLcLSamplingDistribution(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingDistribution(void *p);
   static void deleteArray_RooStatscLcLSamplingDistribution(void *p);
   static void destruct_RooStatscLcLSamplingDistribution(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingDistribution*)
   {
      ::RooStats::SamplingDistribution *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingDistribution >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingDistribution", ::RooStats::SamplingDistribution::Class_Version(), "RooStats/SamplingDistribution.h", 28,
                  typeid(::RooStats::SamplingDistribution), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingDistribution::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingDistribution) );
      instance.SetNew(&new_RooStatscLcLSamplingDistribution);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingDistribution);
      instance.SetDelete(&delete_RooStatscLcLSamplingDistribution);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingDistribution);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingDistribution);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingDistribution*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SamplingDistribution*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SamplingDistribution*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestResult(void *p = nullptr);
   static void *newArray_RooStatscLcLHypoTestResult(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestResult(void *p);
   static void deleteArray_RooStatscLcLHypoTestResult(void *p);
   static void destruct_RooStatscLcLHypoTestResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestResult*)
   {
      ::RooStats::HypoTestResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestResult", ::RooStats::HypoTestResult::Class_Version(), "RooStats/HypoTestResult.h", 22,
                  typeid(::RooStats::HypoTestResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestResult::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestResult) );
      instance.SetNew(&new_RooStatscLcLHypoTestResult);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestResult);
      instance.SetDelete(&delete_RooStatscLcLHypoTestResult);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestResult);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHypoTestCalculatorGeneric(void *p);
   static void deleteArray_RooStatscLcLHypoTestCalculatorGeneric(void *p);
   static void destruct_RooStatscLcLHypoTestCalculatorGeneric(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestCalculatorGeneric*)
   {
      ::RooStats::HypoTestCalculatorGeneric *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestCalculatorGeneric >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestCalculatorGeneric", ::RooStats::HypoTestCalculatorGeneric::Class_Version(), "RooStats/HypoTestCalculatorGeneric.h", 34,
                  typeid(::RooStats::HypoTestCalculatorGeneric), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestCalculatorGeneric::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestCalculatorGeneric) );
      instance.SetDelete(&delete_RooStatscLcLHypoTestCalculatorGeneric);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestCalculatorGeneric);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestCalculatorGeneric);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestCalculatorGeneric*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestCalculatorGeneric*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestCalculatorGeneric*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLAsymptoticCalculator(void *p);
   static void deleteArray_RooStatscLcLAsymptoticCalculator(void *p);
   static void destruct_RooStatscLcLAsymptoticCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::AsymptoticCalculator*)
   {
      ::RooStats::AsymptoticCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::AsymptoticCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::AsymptoticCalculator", ::RooStats::AsymptoticCalculator::Class_Version(), "RooStats/AsymptoticCalculator.h", 27,
                  typeid(::RooStats::AsymptoticCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::AsymptoticCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::AsymptoticCalculator) );
      instance.SetDelete(&delete_RooStatscLcLAsymptoticCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLAsymptoticCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLAsymptoticCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::AsymptoticCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::AsymptoticCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::AsymptoticCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLIntervalCalculator(void *p);
   static void deleteArray_RooStatscLcLIntervalCalculator(void *p);
   static void destruct_RooStatscLcLIntervalCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::IntervalCalculator*)
   {
      ::RooStats::IntervalCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::IntervalCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::IntervalCalculator", ::RooStats::IntervalCalculator::Class_Version(), "RooStats/IntervalCalculator.h", 55,
                  typeid(::RooStats::IntervalCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::IntervalCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::IntervalCalculator) );
      instance.SetDelete(&delete_RooStatscLcLIntervalCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLIntervalCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLIntervalCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::IntervalCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::IntervalCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::IntervalCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLConfInterval(void *p);
   static void deleteArray_RooStatscLcLConfInterval(void *p);
   static void destruct_RooStatscLcLConfInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ConfInterval*)
   {
      ::RooStats::ConfInterval *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ConfInterval >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ConfInterval", ::RooStats::ConfInterval::Class_Version(), "RooStats/ConfInterval.h", 35,
                  typeid(::RooStats::ConfInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ConfInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ConfInterval) );
      instance.SetDelete(&delete_RooStatscLcLConfInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLConfInterval);
      instance.SetDestructor(&destruct_RooStatscLcLConfInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ConfInterval*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ConfInterval*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ConfInterval*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSimpleInterval(void *p = nullptr);
   static void *newArray_RooStatscLcLSimpleInterval(Long_t size, void *p);
   static void delete_RooStatscLcLSimpleInterval(void *p);
   static void deleteArray_RooStatscLcLSimpleInterval(void *p);
   static void destruct_RooStatscLcLSimpleInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SimpleInterval*)
   {
      ::RooStats::SimpleInterval *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SimpleInterval >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SimpleInterval", ::RooStats::SimpleInterval::Class_Version(), "RooStats/SimpleInterval.h", 20,
                  typeid(::RooStats::SimpleInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SimpleInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SimpleInterval) );
      instance.SetNew(&new_RooStatscLcLSimpleInterval);
      instance.SetNewArray(&newArray_RooStatscLcLSimpleInterval);
      instance.SetDelete(&delete_RooStatscLcLSimpleInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSimpleInterval);
      instance.SetDestructor(&destruct_RooStatscLcLSimpleInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SimpleInterval*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SimpleInterval*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SimpleInterval*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLBayesianCalculator(void *p = nullptr);
   static void *newArray_RooStatscLcLBayesianCalculator(Long_t size, void *p);
   static void delete_RooStatscLcLBayesianCalculator(void *p);
   static void deleteArray_RooStatscLcLBayesianCalculator(void *p);
   static void destruct_RooStatscLcLBayesianCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::BayesianCalculator*)
   {
      ::RooStats::BayesianCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::BayesianCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::BayesianCalculator", ::RooStats::BayesianCalculator::Class_Version(), "RooStats/BayesianCalculator.h", 37,
                  typeid(::RooStats::BayesianCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::BayesianCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::BayesianCalculator) );
      instance.SetNew(&new_RooStatscLcLBayesianCalculator);
      instance.SetNewArray(&newArray_RooStatscLcLBayesianCalculator);
      instance.SetDelete(&delete_RooStatscLcLBayesianCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLBayesianCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLBayesianCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::BayesianCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::BayesianCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::BayesianCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLBernsteinCorrection(void *p = nullptr);
   static void *newArray_RooStatscLcLBernsteinCorrection(Long_t size, void *p);
   static void delete_RooStatscLcLBernsteinCorrection(void *p);
   static void deleteArray_RooStatscLcLBernsteinCorrection(void *p);
   static void destruct_RooStatscLcLBernsteinCorrection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::BernsteinCorrection*)
   {
      ::RooStats::BernsteinCorrection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::BernsteinCorrection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::BernsteinCorrection", ::RooStats::BernsteinCorrection::Class_Version(), "RooStats/BernsteinCorrection.h", 22,
                  typeid(::RooStats::BernsteinCorrection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::BernsteinCorrection::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::BernsteinCorrection) );
      instance.SetNew(&new_RooStatscLcLBernsteinCorrection);
      instance.SetNewArray(&newArray_RooStatscLcLBernsteinCorrection);
      instance.SetDelete(&delete_RooStatscLcLBernsteinCorrection);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLBernsteinCorrection);
      instance.SetDestructor(&destruct_RooStatscLcLBernsteinCorrection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::BernsteinCorrection*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::BernsteinCorrection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::BernsteinCorrection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLCombinedCalculator(void *p);
   static void deleteArray_RooStatscLcLCombinedCalculator(void *p);
   static void destruct_RooStatscLcLCombinedCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::CombinedCalculator*)
   {
      ::RooStats::CombinedCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::CombinedCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::CombinedCalculator", ::RooStats::CombinedCalculator::Class_Version(), "RooStats/CombinedCalculator.h", 62,
                  typeid(::RooStats::CombinedCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::CombinedCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::CombinedCalculator) );
      instance.SetDelete(&delete_RooStatscLcLCombinedCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLCombinedCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLCombinedCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::CombinedCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::CombinedCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::CombinedCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingSummaryLookup(void *p = nullptr);
   static void *newArray_RooStatscLcLSamplingSummaryLookup(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingSummaryLookup(void *p);
   static void deleteArray_RooStatscLcLSamplingSummaryLookup(void *p);
   static void destruct_RooStatscLcLSamplingSummaryLookup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingSummaryLookup*)
   {
      ::RooStats::SamplingSummaryLookup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingSummaryLookup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingSummaryLookup", ::RooStats::SamplingSummaryLookup::Class_Version(), "RooStats/ConfidenceBelt.h", 30,
                  typeid(::RooStats::SamplingSummaryLookup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingSummaryLookup::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingSummaryLookup) );
      instance.SetNew(&new_RooStatscLcLSamplingSummaryLookup);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingSummaryLookup);
      instance.SetDelete(&delete_RooStatscLcLSamplingSummaryLookup);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingSummaryLookup);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingSummaryLookup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingSummaryLookup*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SamplingSummaryLookup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SamplingSummaryLookup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLAcceptanceRegion(void *p = nullptr);
   static void *newArray_RooStatscLcLAcceptanceRegion(Long_t size, void *p);
   static void delete_RooStatscLcLAcceptanceRegion(void *p);
   static void deleteArray_RooStatscLcLAcceptanceRegion(void *p);
   static void destruct_RooStatscLcLAcceptanceRegion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::AcceptanceRegion*)
   {
      ::RooStats::AcceptanceRegion *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::AcceptanceRegion >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::AcceptanceRegion", ::RooStats::AcceptanceRegion::Class_Version(), "RooStats/ConfidenceBelt.h", 95,
                  typeid(::RooStats::AcceptanceRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::AcceptanceRegion::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::AcceptanceRegion) );
      instance.SetNew(&new_RooStatscLcLAcceptanceRegion);
      instance.SetNewArray(&newArray_RooStatscLcLAcceptanceRegion);
      instance.SetDelete(&delete_RooStatscLcLAcceptanceRegion);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLAcceptanceRegion);
      instance.SetDestructor(&destruct_RooStatscLcLAcceptanceRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::AcceptanceRegion*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::AcceptanceRegion*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::AcceptanceRegion*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingSummary(void *p = nullptr);
   static void *newArray_RooStatscLcLSamplingSummary(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingSummary(void *p);
   static void deleteArray_RooStatscLcLSamplingSummary(void *p);
   static void destruct_RooStatscLcLSamplingSummary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingSummary*)
   {
      ::RooStats::SamplingSummary *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingSummary >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingSummary", ::RooStats::SamplingSummary::Class_Version(), "RooStats/ConfidenceBelt.h", 116,
                  typeid(::RooStats::SamplingSummary), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingSummary::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingSummary) );
      instance.SetNew(&new_RooStatscLcLSamplingSummary);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingSummary);
      instance.SetDelete(&delete_RooStatscLcLSamplingSummary);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingSummary);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingSummary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingSummary*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SamplingSummary*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SamplingSummary*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLConfidenceBelt(void *p = nullptr);
   static void *newArray_RooStatscLcLConfidenceBelt(Long_t size, void *p);
   static void delete_RooStatscLcLConfidenceBelt(void *p);
   static void deleteArray_RooStatscLcLConfidenceBelt(void *p);
   static void destruct_RooStatscLcLConfidenceBelt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ConfidenceBelt*)
   {
      ::RooStats::ConfidenceBelt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ConfidenceBelt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ConfidenceBelt", ::RooStats::ConfidenceBelt::Class_Version(), "RooStats/ConfidenceBelt.h", 149,
                  typeid(::RooStats::ConfidenceBelt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ConfidenceBelt::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ConfidenceBelt) );
      instance.SetNew(&new_RooStatscLcLConfidenceBelt);
      instance.SetNewArray(&newArray_RooStatscLcLConfidenceBelt);
      instance.SetDelete(&delete_RooStatscLcLConfidenceBelt);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLConfidenceBelt);
      instance.SetDestructor(&destruct_RooStatscLcLConfidenceBelt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ConfidenceBelt*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ConfidenceBelt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ConfidenceBelt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLDebuggingSampler(void *p);
   static void deleteArray_RooStatscLcLDebuggingSampler(void *p);
   static void destruct_RooStatscLcLDebuggingSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::DebuggingSampler*)
   {
      ::RooStats::DebuggingSampler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::DebuggingSampler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::DebuggingSampler", ::RooStats::DebuggingSampler::Class_Version(), "RooStats/DebuggingSampler.h", 35,
                  typeid(::RooStats::DebuggingSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::DebuggingSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::DebuggingSampler) );
      instance.SetDelete(&delete_RooStatscLcLDebuggingSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLDebuggingSampler);
      instance.SetDestructor(&destruct_RooStatscLcLDebuggingSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::DebuggingSampler*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::DebuggingSampler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::DebuggingSampler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLToyMCSampler(void *p);
   static void deleteArray_RooStatscLcLToyMCSampler(void *p);
   static void destruct_RooStatscLcLToyMCSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ToyMCSampler*)
   {
      ::RooStats::ToyMCSampler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ToyMCSampler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ToyMCSampler", ::RooStats::ToyMCSampler::Class_Version(), "RooStats/ToyMCSampler.h", 66,
                  typeid(::RooStats::ToyMCSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ToyMCSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ToyMCSampler) );
      instance.SetDelete(&delete_RooStatscLcLToyMCSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLToyMCSampler);
      instance.SetDestructor(&destruct_RooStatscLcLToyMCSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ToyMCSampler*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ToyMCSampler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ToyMCSampler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLDebuggingTestStat(void *p);
   static void deleteArray_RooStatscLcLDebuggingTestStat(void *p);
   static void destruct_RooStatscLcLDebuggingTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::DebuggingTestStat*)
   {
      ::RooStats::DebuggingTestStat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::DebuggingTestStat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::DebuggingTestStat", ::RooStats::DebuggingTestStat::Class_Version(), "RooStats/DebuggingTestStat.h", 37,
                  typeid(::RooStats::DebuggingTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::DebuggingTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::DebuggingTestStat) );
      instance.SetDelete(&delete_RooStatscLcLDebuggingTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLDebuggingTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLDebuggingTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::DebuggingTestStat*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::DebuggingTestStat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::DebuggingTestStat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLDetailedOutputAggregator(void *p = nullptr);
   static void *newArray_RooStatscLcLDetailedOutputAggregator(Long_t size, void *p);
   static void delete_RooStatscLcLDetailedOutputAggregator(void *p);
   static void deleteArray_RooStatscLcLDetailedOutputAggregator(void *p);
   static void destruct_RooStatscLcLDetailedOutputAggregator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::DetailedOutputAggregator*)
   {
      ::RooStats::DetailedOutputAggregator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::DetailedOutputAggregator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::DetailedOutputAggregator", ::RooStats::DetailedOutputAggregator::Class_Version(), "RooStats/DetailedOutputAggregator.h", 24,
                  typeid(::RooStats::DetailedOutputAggregator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::DetailedOutputAggregator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::DetailedOutputAggregator) );
      instance.SetNew(&new_RooStatscLcLDetailedOutputAggregator);
      instance.SetNewArray(&newArray_RooStatscLcLDetailedOutputAggregator);
      instance.SetDelete(&delete_RooStatscLcLDetailedOutputAggregator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLDetailedOutputAggregator);
      instance.SetDestructor(&destruct_RooStatscLcLDetailedOutputAggregator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::DetailedOutputAggregator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::DetailedOutputAggregator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::DetailedOutputAggregator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLPointSetInterval(void *p = nullptr);
   static void *newArray_RooStatscLcLPointSetInterval(Long_t size, void *p);
   static void delete_RooStatscLcLPointSetInterval(void *p);
   static void deleteArray_RooStatscLcLPointSetInterval(void *p);
   static void destruct_RooStatscLcLPointSetInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::PointSetInterval*)
   {
      ::RooStats::PointSetInterval *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::PointSetInterval >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::PointSetInterval", ::RooStats::PointSetInterval::Class_Version(), "RooStats/PointSetInterval.h", 21,
                  typeid(::RooStats::PointSetInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::PointSetInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::PointSetInterval) );
      instance.SetNew(&new_RooStatscLcLPointSetInterval);
      instance.SetNewArray(&newArray_RooStatscLcLPointSetInterval);
      instance.SetDelete(&delete_RooStatscLcLPointSetInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLPointSetInterval);
      instance.SetDestructor(&destruct_RooStatscLcLPointSetInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::PointSetInterval*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::PointSetInterval*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::PointSetInterval*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLFeldmanCousins(void *p);
   static void deleteArray_RooStatscLcLFeldmanCousins(void *p);
   static void destruct_RooStatscLcLFeldmanCousins(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::FeldmanCousins*)
   {
      ::RooStats::FeldmanCousins *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::FeldmanCousins >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::FeldmanCousins", ::RooStats::FeldmanCousins::Class_Version(), "RooStats/FeldmanCousins.h", 33,
                  typeid(::RooStats::FeldmanCousins), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::FeldmanCousins::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::FeldmanCousins) );
      instance.SetDelete(&delete_RooStatscLcLFeldmanCousins);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLFeldmanCousins);
      instance.SetDestructor(&destruct_RooStatscLcLFeldmanCousins);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::FeldmanCousins*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::FeldmanCousins*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::FeldmanCousins*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLFrequentistCalculator(void *p);
   static void deleteArray_RooStatscLcLFrequentistCalculator(void *p);
   static void destruct_RooStatscLcLFrequentistCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::FrequentistCalculator*)
   {
      ::RooStats::FrequentistCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::FrequentistCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::FrequentistCalculator", ::RooStats::FrequentistCalculator::Class_Version(), "RooStats/FrequentistCalculator.h", 25,
                  typeid(::RooStats::FrequentistCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::FrequentistCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::FrequentistCalculator) );
      instance.SetDelete(&delete_RooStatscLcLFrequentistCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLFrequentistCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLFrequentistCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::FrequentistCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::FrequentistCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::FrequentistCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHeaviside(void *p = nullptr);
   static void *newArray_RooStatscLcLHeaviside(Long_t size, void *p);
   static void delete_RooStatscLcLHeaviside(void *p);
   static void deleteArray_RooStatscLcLHeaviside(void *p);
   static void destruct_RooStatscLcLHeaviside(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::Heaviside*)
   {
      ::RooStats::Heaviside *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::Heaviside >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::Heaviside", ::RooStats::Heaviside::Class_Version(), "RooStats/Heaviside.h", 21,
                  typeid(::RooStats::Heaviside), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::Heaviside::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::Heaviside) );
      instance.SetNew(&new_RooStatscLcLHeaviside);
      instance.SetNewArray(&newArray_RooStatscLcLHeaviside);
      instance.SetDelete(&delete_RooStatscLcLHeaviside);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHeaviside);
      instance.SetDestructor(&destruct_RooStatscLcLHeaviside);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::Heaviside*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::Heaviside*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::Heaviside*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHybridCalculator(void *p);
   static void deleteArray_RooStatscLcLHybridCalculator(void *p);
   static void destruct_RooStatscLcLHybridCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridCalculator*)
   {
      ::RooStats::HybridCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridCalculator", ::RooStats::HybridCalculator::Class_Version(), "RooStats/HybridCalculator.h", 22,
                  typeid(::RooStats::HybridCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridCalculator) );
      instance.SetDelete(&delete_RooStatscLcLHybridCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLHybridCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HybridCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HybridCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHybridPlot(void *p);
   static void deleteArray_RooStatscLcLHybridPlot(void *p);
   static void destruct_RooStatscLcLHybridPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridPlot*)
   {
      ::RooStats::HybridPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridPlot", ::RooStats::HybridPlot::Class_Version(), "RooStats/HybridPlot.h", 36,
                  typeid(::RooStats::HybridPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridPlot) );
      instance.SetDelete(&delete_RooStatscLcLHybridPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridPlot);
      instance.SetDestructor(&destruct_RooStatscLcLHybridPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HybridPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HybridPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHybridResult(void *p = nullptr);
   static void *newArray_RooStatscLcLHybridResult(Long_t size, void *p);
   static void delete_RooStatscLcLHybridResult(void *p);
   static void deleteArray_RooStatscLcLHybridResult(void *p);
   static void destruct_RooStatscLcLHybridResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HybridResult*)
   {
      ::RooStats::HybridResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HybridResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HybridResult", ::RooStats::HybridResult::Class_Version(), "RooStats/HybridResult.h", 27,
                  typeid(::RooStats::HybridResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HybridResult::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HybridResult) );
      instance.SetNew(&new_RooStatscLcLHybridResult);
      instance.SetNewArray(&newArray_RooStatscLcLHybridResult);
      instance.SetDelete(&delete_RooStatscLcLHybridResult);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHybridResult);
      instance.SetDestructor(&destruct_RooStatscLcLHybridResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HybridResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HybridResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HybridResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestInverterResult(void *p = nullptr);
   static void *newArray_RooStatscLcLHypoTestInverterResult(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestInverterResult(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverterResult(void *p);
   static void destruct_RooStatscLcLHypoTestInverterResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverterResult*)
   {
      ::RooStats::HypoTestInverterResult *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverterResult >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverterResult", ::RooStats::HypoTestInverterResult::Class_Version(), "RooStats/HypoTestInverterResult.h", 26,
                  typeid(::RooStats::HypoTestInverterResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverterResult::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverterResult) );
      instance.SetNew(&new_RooStatscLcLHypoTestInverterResult);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestInverterResult);
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverterResult);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverterResult);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverterResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverterResult*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestInverterResult*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestInverterResult*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestInverter(void *p = nullptr);
   static void *newArray_RooStatscLcLHypoTestInverter(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestInverter(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverter(void *p);
   static void destruct_RooStatscLcLHypoTestInverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverter*)
   {
      ::RooStats::HypoTestInverter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverter", ::RooStats::HypoTestInverter::Class_Version(), "RooStats/HypoTestInverter.h", 36,
                  typeid(::RooStats::HypoTestInverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverter::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverter) );
      instance.SetNew(&new_RooStatscLcLHypoTestInverter);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestInverter);
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverter);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverter);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverter*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestInverter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestInverter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLHypoTestInverterPlot(void *p);
   static void deleteArray_RooStatscLcLHypoTestInverterPlot(void *p);
   static void destruct_RooStatscLcLHypoTestInverterPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestInverterPlot*)
   {
      ::RooStats::HypoTestInverterPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestInverterPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestInverterPlot", ::RooStats::HypoTestInverterPlot::Class_Version(), "RooStats/HypoTestInverterPlot.h", 26,
                  typeid(::RooStats::HypoTestInverterPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestInverterPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestInverterPlot) );
      instance.SetDelete(&delete_RooStatscLcLHypoTestInverterPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestInverterPlot);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestInverterPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestInverterPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestInverterPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestInverterPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSamplingDistPlot(void *p = nullptr);
   static void *newArray_RooStatscLcLSamplingDistPlot(Long_t size, void *p);
   static void delete_RooStatscLcLSamplingDistPlot(void *p);
   static void deleteArray_RooStatscLcLSamplingDistPlot(void *p);
   static void destruct_RooStatscLcLSamplingDistPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SamplingDistPlot*)
   {
      ::RooStats::SamplingDistPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SamplingDistPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SamplingDistPlot", ::RooStats::SamplingDistPlot::Class_Version(), "RooStats/SamplingDistPlot.h", 33,
                  typeid(::RooStats::SamplingDistPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SamplingDistPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SamplingDistPlot) );
      instance.SetNew(&new_RooStatscLcLSamplingDistPlot);
      instance.SetNewArray(&newArray_RooStatscLcLSamplingDistPlot);
      instance.SetDelete(&delete_RooStatscLcLSamplingDistPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSamplingDistPlot);
      instance.SetDestructor(&destruct_RooStatscLcLSamplingDistPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SamplingDistPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SamplingDistPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SamplingDistPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLHypoTestPlot(void *p = nullptr);
   static void *newArray_RooStatscLcLHypoTestPlot(Long_t size, void *p);
   static void delete_RooStatscLcLHypoTestPlot(void *p);
   static void deleteArray_RooStatscLcLHypoTestPlot(void *p);
   static void destruct_RooStatscLcLHypoTestPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::HypoTestPlot*)
   {
      ::RooStats::HypoTestPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::HypoTestPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::HypoTestPlot", ::RooStats::HypoTestPlot::Class_Version(), "RooStats/HypoTestPlot.h", 22,
                  typeid(::RooStats::HypoTestPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::HypoTestPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::HypoTestPlot) );
      instance.SetNew(&new_RooStatscLcLHypoTestPlot);
      instance.SetNewArray(&newArray_RooStatscLcLHypoTestPlot);
      instance.SetDelete(&delete_RooStatscLcLHypoTestPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLHypoTestPlot);
      instance.SetDestructor(&destruct_RooStatscLcLHypoTestPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::HypoTestPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::HypoTestPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::HypoTestPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLLikelihoodInterval(void *p = nullptr);
   static void *newArray_RooStatscLcLLikelihoodInterval(Long_t size, void *p);
   static void delete_RooStatscLcLLikelihoodInterval(void *p);
   static void deleteArray_RooStatscLcLLikelihoodInterval(void *p);
   static void destruct_RooStatscLcLLikelihoodInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::LikelihoodInterval*)
   {
      ::RooStats::LikelihoodInterval *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::LikelihoodInterval >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::LikelihoodInterval", ::RooStats::LikelihoodInterval::Class_Version(), "RooStats/LikelihoodInterval.h", 34,
                  typeid(::RooStats::LikelihoodInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::LikelihoodInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::LikelihoodInterval) );
      instance.SetNew(&new_RooStatscLcLLikelihoodInterval);
      instance.SetNewArray(&newArray_RooStatscLcLLikelihoodInterval);
      instance.SetDelete(&delete_RooStatscLcLLikelihoodInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLLikelihoodInterval);
      instance.SetDestructor(&destruct_RooStatscLcLLikelihoodInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::LikelihoodInterval*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::LikelihoodInterval*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::LikelihoodInterval*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLLikelihoodIntervalPlot(void *p = nullptr);
   static void *newArray_RooStatscLcLLikelihoodIntervalPlot(Long_t size, void *p);
   static void delete_RooStatscLcLLikelihoodIntervalPlot(void *p);
   static void deleteArray_RooStatscLcLLikelihoodIntervalPlot(void *p);
   static void destruct_RooStatscLcLLikelihoodIntervalPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::LikelihoodIntervalPlot*)
   {
      ::RooStats::LikelihoodIntervalPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::LikelihoodIntervalPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::LikelihoodIntervalPlot", ::RooStats::LikelihoodIntervalPlot::Class_Version(), "RooStats/LikelihoodIntervalPlot.h", 30,
                  typeid(::RooStats::LikelihoodIntervalPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::LikelihoodIntervalPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::LikelihoodIntervalPlot) );
      instance.SetNew(&new_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetNewArray(&newArray_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetDelete(&delete_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLLikelihoodIntervalPlot);
      instance.SetDestructor(&destruct_RooStatscLcLLikelihoodIntervalPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::LikelihoodIntervalPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::LikelihoodIntervalPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::LikelihoodIntervalPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMarkovChain(void *p = nullptr);
   static void *newArray_RooStatscLcLMarkovChain(Long_t size, void *p);
   static void delete_RooStatscLcLMarkovChain(void *p);
   static void deleteArray_RooStatscLcLMarkovChain(void *p);
   static void destruct_RooStatscLcLMarkovChain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MarkovChain*)
   {
      ::RooStats::MarkovChain *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MarkovChain >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MarkovChain", ::RooStats::MarkovChain::Class_Version(), "RooStats/MarkovChain.h", 26,
                  typeid(::RooStats::MarkovChain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MarkovChain::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MarkovChain) );
      instance.SetNew(&new_RooStatscLcLMarkovChain);
      instance.SetNewArray(&newArray_RooStatscLcLMarkovChain);
      instance.SetDelete(&delete_RooStatscLcLMarkovChain);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMarkovChain);
      instance.SetDestructor(&destruct_RooStatscLcLMarkovChain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MarkovChain*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::MarkovChain*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::MarkovChain*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p = nullptr);
   static void *newArray_RooStatscLcLMaxLikelihoodEstimateTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p);
   static void deleteArray_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p);
   static void destruct_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MaxLikelihoodEstimateTestStat*)
   {
      ::RooStats::MaxLikelihoodEstimateTestStat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MaxLikelihoodEstimateTestStat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MaxLikelihoodEstimateTestStat", ::RooStats::MaxLikelihoodEstimateTestStat::Class_Version(), "RooStats/MaxLikelihoodEstimateTestStat.h", 37,
                  typeid(::RooStats::MaxLikelihoodEstimateTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MaxLikelihoodEstimateTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MaxLikelihoodEstimateTestStat) );
      instance.SetNew(&new_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetDelete(&delete_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMaxLikelihoodEstimateTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLMaxLikelihoodEstimateTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MaxLikelihoodEstimateTestStat*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::MaxLikelihoodEstimateTestStat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::MaxLikelihoodEstimateTestStat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLProposalFunction(void *p);
   static void deleteArray_RooStatscLcLProposalFunction(void *p);
   static void destruct_RooStatscLcLProposalFunction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProposalFunction*)
   {
      ::RooStats::ProposalFunction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProposalFunction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProposalFunction", ::RooStats::ProposalFunction::Class_Version(), "RooStats/ProposalFunction.h", 41,
                  typeid(::RooStats::ProposalFunction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProposalFunction::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProposalFunction) );
      instance.SetDelete(&delete_RooStatscLcLProposalFunction);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProposalFunction);
      instance.SetDestructor(&destruct_RooStatscLcLProposalFunction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProposalFunction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ProposalFunction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ProposalFunction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMCMCInterval(void *p = nullptr);
   static void *newArray_RooStatscLcLMCMCInterval(Long_t size, void *p);
   static void delete_RooStatscLcLMCMCInterval(void *p);
   static void deleteArray_RooStatscLcLMCMCInterval(void *p);
   static void destruct_RooStatscLcLMCMCInterval(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MCMCInterval*)
   {
      ::RooStats::MCMCInterval *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MCMCInterval >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MCMCInterval", ::RooStats::MCMCInterval::Class_Version(), "RooStats/MCMCInterval.h", 33,
                  typeid(::RooStats::MCMCInterval), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MCMCInterval::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MCMCInterval) );
      instance.SetNew(&new_RooStatscLcLMCMCInterval);
      instance.SetNewArray(&newArray_RooStatscLcLMCMCInterval);
      instance.SetDelete(&delete_RooStatscLcLMCMCInterval);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMCMCInterval);
      instance.SetDestructor(&destruct_RooStatscLcLMCMCInterval);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MCMCInterval*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::MCMCInterval*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::MCMCInterval*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMCMCCalculator(void *p = nullptr);
   static void *newArray_RooStatscLcLMCMCCalculator(Long_t size, void *p);
   static void delete_RooStatscLcLMCMCCalculator(void *p);
   static void deleteArray_RooStatscLcLMCMCCalculator(void *p);
   static void destruct_RooStatscLcLMCMCCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MCMCCalculator*)
   {
      ::RooStats::MCMCCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MCMCCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MCMCCalculator", ::RooStats::MCMCCalculator::Class_Version(), "RooStats/MCMCCalculator.h", 31,
                  typeid(::RooStats::MCMCCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MCMCCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MCMCCalculator) );
      instance.SetNew(&new_RooStatscLcLMCMCCalculator);
      instance.SetNewArray(&newArray_RooStatscLcLMCMCCalculator);
      instance.SetDelete(&delete_RooStatscLcLMCMCCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMCMCCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLMCMCCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MCMCCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::MCMCCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::MCMCCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMCMCIntervalPlot(void *p = nullptr);
   static void *newArray_RooStatscLcLMCMCIntervalPlot(Long_t size, void *p);
   static void delete_RooStatscLcLMCMCIntervalPlot(void *p);
   static void deleteArray_RooStatscLcLMCMCIntervalPlot(void *p);
   static void destruct_RooStatscLcLMCMCIntervalPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MCMCIntervalPlot*)
   {
      ::RooStats::MCMCIntervalPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MCMCIntervalPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MCMCIntervalPlot", ::RooStats::MCMCIntervalPlot::Class_Version(), "RooStats/MCMCIntervalPlot.h", 30,
                  typeid(::RooStats::MCMCIntervalPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MCMCIntervalPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MCMCIntervalPlot) );
      instance.SetNew(&new_RooStatscLcLMCMCIntervalPlot);
      instance.SetNewArray(&newArray_RooStatscLcLMCMCIntervalPlot);
      instance.SetDelete(&delete_RooStatscLcLMCMCIntervalPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMCMCIntervalPlot);
      instance.SetDestructor(&destruct_RooStatscLcLMCMCIntervalPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MCMCIntervalPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::MCMCIntervalPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::MCMCIntervalPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLMetropolisHastings(void *p = nullptr);
   static void *newArray_RooStatscLcLMetropolisHastings(Long_t size, void *p);
   static void delete_RooStatscLcLMetropolisHastings(void *p);
   static void deleteArray_RooStatscLcLMetropolisHastings(void *p);
   static void destruct_RooStatscLcLMetropolisHastings(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::MetropolisHastings*)
   {
      ::RooStats::MetropolisHastings *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::MetropolisHastings >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::MetropolisHastings", ::RooStats::MetropolisHastings::Class_Version(), "RooStats/MetropolisHastings.h", 24,
                  typeid(::RooStats::MetropolisHastings), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::MetropolisHastings::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::MetropolisHastings) );
      instance.SetNew(&new_RooStatscLcLMetropolisHastings);
      instance.SetNewArray(&newArray_RooStatscLcLMetropolisHastings);
      instance.SetDelete(&delete_RooStatscLcLMetropolisHastings);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLMetropolisHastings);
      instance.SetDestructor(&destruct_RooStatscLcLMetropolisHastings);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::MetropolisHastings*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::MetropolisHastings*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::MetropolisHastings*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLNeymanConstruction(void *p);
   static void deleteArray_RooStatscLcLNeymanConstruction(void *p);
   static void destruct_RooStatscLcLNeymanConstruction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::NeymanConstruction*)
   {
      ::RooStats::NeymanConstruction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::NeymanConstruction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::NeymanConstruction", ::RooStats::NeymanConstruction::Class_Version(), "RooStats/NeymanConstruction.h", 36,
                  typeid(::RooStats::NeymanConstruction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::NeymanConstruction::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::NeymanConstruction) );
      instance.SetDelete(&delete_RooStatscLcLNeymanConstruction);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLNeymanConstruction);
      instance.SetDestructor(&destruct_RooStatscLcLNeymanConstruction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::NeymanConstruction*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::NeymanConstruction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::NeymanConstruction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLNumberCountingPdfFactory(void *p = nullptr);
   static void *newArray_RooStatscLcLNumberCountingPdfFactory(Long_t size, void *p);
   static void delete_RooStatscLcLNumberCountingPdfFactory(void *p);
   static void deleteArray_RooStatscLcLNumberCountingPdfFactory(void *p);
   static void destruct_RooStatscLcLNumberCountingPdfFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::NumberCountingPdfFactory*)
   {
      ::RooStats::NumberCountingPdfFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::NumberCountingPdfFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::NumberCountingPdfFactory", ::RooStats::NumberCountingPdfFactory::Class_Version(), "RooStats/NumberCountingPdfFactory.h", 22,
                  typeid(::RooStats::NumberCountingPdfFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::NumberCountingPdfFactory::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::NumberCountingPdfFactory) );
      instance.SetNew(&new_RooStatscLcLNumberCountingPdfFactory);
      instance.SetNewArray(&newArray_RooStatscLcLNumberCountingPdfFactory);
      instance.SetDelete(&delete_RooStatscLcLNumberCountingPdfFactory);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLNumberCountingPdfFactory);
      instance.SetDestructor(&destruct_RooStatscLcLNumberCountingPdfFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::NumberCountingPdfFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::NumberCountingPdfFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::NumberCountingPdfFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLNumEventsTestStat(void *p = nullptr);
   static void *newArray_RooStatscLcLNumEventsTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLNumEventsTestStat(void *p);
   static void deleteArray_RooStatscLcLNumEventsTestStat(void *p);
   static void destruct_RooStatscLcLNumEventsTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::NumEventsTestStat*)
   {
      ::RooStats::NumEventsTestStat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::NumEventsTestStat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::NumEventsTestStat", ::RooStats::NumEventsTestStat::Class_Version(), "RooStats/NumEventsTestStat.h", 41,
                  typeid(::RooStats::NumEventsTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::NumEventsTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::NumEventsTestStat) );
      instance.SetNew(&new_RooStatscLcLNumEventsTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLNumEventsTestStat);
      instance.SetDelete(&delete_RooStatscLcLNumEventsTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLNumEventsTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLNumEventsTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::NumEventsTestStat*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::NumEventsTestStat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::NumEventsTestStat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLPdfProposal(void *p = nullptr);
   static void *newArray_RooStatscLcLPdfProposal(Long_t size, void *p);
   static void delete_RooStatscLcLPdfProposal(void *p);
   static void deleteArray_RooStatscLcLPdfProposal(void *p);
   static void destruct_RooStatscLcLPdfProposal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::PdfProposal*)
   {
      ::RooStats::PdfProposal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::PdfProposal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::PdfProposal", ::RooStats::PdfProposal::Class_Version(), "RooStats/PdfProposal.h", 30,
                  typeid(::RooStats::PdfProposal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::PdfProposal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::PdfProposal) );
      instance.SetNew(&new_RooStatscLcLPdfProposal);
      instance.SetNewArray(&newArray_RooStatscLcLPdfProposal);
      instance.SetDelete(&delete_RooStatscLcLPdfProposal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLPdfProposal);
      instance.SetDestructor(&destruct_RooStatscLcLPdfProposal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::PdfProposal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::PdfProposal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::PdfProposal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProfileInspector(void *p = nullptr);
   static void *newArray_RooStatscLcLProfileInspector(Long_t size, void *p);
   static void delete_RooStatscLcLProfileInspector(void *p);
   static void deleteArray_RooStatscLcLProfileInspector(void *p);
   static void destruct_RooStatscLcLProfileInspector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProfileInspector*)
   {
      ::RooStats::ProfileInspector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProfileInspector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProfileInspector", ::RooStats::ProfileInspector::Class_Version(), "RooStats/ProfileInspector.h", 27,
                  typeid(::RooStats::ProfileInspector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProfileInspector::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProfileInspector) );
      instance.SetNew(&new_RooStatscLcLProfileInspector);
      instance.SetNewArray(&newArray_RooStatscLcLProfileInspector);
      instance.SetDelete(&delete_RooStatscLcLProfileInspector);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProfileInspector);
      instance.SetDestructor(&destruct_RooStatscLcLProfileInspector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProfileInspector*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ProfileInspector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ProfileInspector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProfileLikelihoodCalculator(void *p = nullptr);
   static void *newArray_RooStatscLcLProfileLikelihoodCalculator(Long_t size, void *p);
   static void delete_RooStatscLcLProfileLikelihoodCalculator(void *p);
   static void deleteArray_RooStatscLcLProfileLikelihoodCalculator(void *p);
   static void destruct_RooStatscLcLProfileLikelihoodCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProfileLikelihoodCalculator*)
   {
      ::RooStats::ProfileLikelihoodCalculator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProfileLikelihoodCalculator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProfileLikelihoodCalculator", ::RooStats::ProfileLikelihoodCalculator::Class_Version(), "RooStats/ProfileLikelihoodCalculator.h", 22,
                  typeid(::RooStats::ProfileLikelihoodCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProfileLikelihoodCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProfileLikelihoodCalculator) );
      instance.SetNew(&new_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetNewArray(&newArray_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetDelete(&delete_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProfileLikelihoodCalculator);
      instance.SetDestructor(&destruct_RooStatscLcLProfileLikelihoodCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProfileLikelihoodCalculator*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ProfileLikelihoodCalculator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ProfileLikelihoodCalculator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLProfileLikelihoodTestStat(void *p);
   static void deleteArray_RooStatscLcLProfileLikelihoodTestStat(void *p);
   static void destruct_RooStatscLcLProfileLikelihoodTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProfileLikelihoodTestStat*)
   {
      ::RooStats::ProfileLikelihoodTestStat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProfileLikelihoodTestStat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProfileLikelihoodTestStat", ::RooStats::ProfileLikelihoodTestStat::Class_Version(), "RooStats/ProfileLikelihoodTestStat.h", 30,
                  typeid(::RooStats::ProfileLikelihoodTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProfileLikelihoodTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProfileLikelihoodTestStat) );
      instance.SetDelete(&delete_RooStatscLcLProfileLikelihoodTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProfileLikelihoodTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLProfileLikelihoodTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProfileLikelihoodTestStat*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ProfileLikelihoodTestStat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ProfileLikelihoodTestStat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLUniformProposal(void *p = nullptr);
   static void *newArray_RooStatscLcLUniformProposal(Long_t size, void *p);
   static void delete_RooStatscLcLUniformProposal(void *p);
   static void deleteArray_RooStatscLcLUniformProposal(void *p);
   static void destruct_RooStatscLcLUniformProposal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::UniformProposal*)
   {
      ::RooStats::UniformProposal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::UniformProposal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::UniformProposal", ::RooStats::UniformProposal::Class_Version(), "RooStats/UniformProposal.h", 25,
                  typeid(::RooStats::UniformProposal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::UniformProposal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::UniformProposal) );
      instance.SetNew(&new_RooStatscLcLUniformProposal);
      instance.SetNewArray(&newArray_RooStatscLcLUniformProposal);
      instance.SetDelete(&delete_RooStatscLcLUniformProposal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLUniformProposal);
      instance.SetDestructor(&destruct_RooStatscLcLUniformProposal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::UniformProposal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::UniformProposal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::UniformProposal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLProposalHelper(void *p = nullptr);
   static void *newArray_RooStatscLcLProposalHelper(Long_t size, void *p);
   static void delete_RooStatscLcLProposalHelper(void *p);
   static void deleteArray_RooStatscLcLProposalHelper(void *p);
   static void destruct_RooStatscLcLProposalHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ProposalHelper*)
   {
      ::RooStats::ProposalHelper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ProposalHelper >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ProposalHelper", ::RooStats::ProposalHelper::Class_Version(), "RooStats/ProposalHelper.h", 29,
                  typeid(::RooStats::ProposalHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ProposalHelper::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ProposalHelper) );
      instance.SetNew(&new_RooStatscLcLProposalHelper);
      instance.SetNewArray(&newArray_RooStatscLcLProposalHelper);
      instance.SetDelete(&delete_RooStatscLcLProposalHelper);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLProposalHelper);
      instance.SetDestructor(&destruct_RooStatscLcLProposalHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ProposalHelper*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ProposalHelper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ProposalHelper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p);
   static void deleteArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p);
   static void destruct_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)
   {
      ::RooStats::RatioOfProfiledLikelihoodsTestStat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::RatioOfProfiledLikelihoodsTestStat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::RatioOfProfiledLikelihoodsTestStat", ::RooStats::RatioOfProfiledLikelihoodsTestStat::Class_Version(), "RooStats/RatioOfProfiledLikelihoodsTestStat.h", 24,
                  typeid(::RooStats::RatioOfProfiledLikelihoodsTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::RatioOfProfiledLikelihoodsTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::RatioOfProfiledLikelihoodsTestStat) );
      instance.SetDelete(&delete_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLRatioOfProfiledLikelihoodsTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::RatioOfProfiledLikelihoodsTestStat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::RatioOfProfiledLikelihoodsTestStat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSequentialProposal(void *p = nullptr);
   static void *newArray_RooStatscLcLSequentialProposal(Long_t size, void *p);
   static void delete_RooStatscLcLSequentialProposal(void *p);
   static void deleteArray_RooStatscLcLSequentialProposal(void *p);
   static void destruct_RooStatscLcLSequentialProposal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SequentialProposal*)
   {
      ::RooStats::SequentialProposal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SequentialProposal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SequentialProposal", ::RooStats::SequentialProposal::Class_Version(), "RooStats/SequentialProposal.h", 20,
                  typeid(::RooStats::SequentialProposal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SequentialProposal::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SequentialProposal) );
      instance.SetNew(&new_RooStatscLcLSequentialProposal);
      instance.SetNewArray(&newArray_RooStatscLcLSequentialProposal);
      instance.SetDelete(&delete_RooStatscLcLSequentialProposal);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSequentialProposal);
      instance.SetDestructor(&destruct_RooStatscLcLSequentialProposal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SequentialProposal*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SequentialProposal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SequentialProposal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p = nullptr);
   static void *newArray_RooStatscLcLSimpleLikelihoodRatioTestStat(Long_t size, void *p);
   static void delete_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p);
   static void deleteArray_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p);
   static void destruct_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SimpleLikelihoodRatioTestStat*)
   {
      ::RooStats::SimpleLikelihoodRatioTestStat *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SimpleLikelihoodRatioTestStat >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SimpleLikelihoodRatioTestStat", ::RooStats::SimpleLikelihoodRatioTestStat::Class_Version(), "RooStats/SimpleLikelihoodRatioTestStat.h", 23,
                  typeid(::RooStats::SimpleLikelihoodRatioTestStat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SimpleLikelihoodRatioTestStat::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SimpleLikelihoodRatioTestStat) );
      instance.SetNew(&new_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetNewArray(&newArray_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetDelete(&delete_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSimpleLikelihoodRatioTestStat);
      instance.SetDestructor(&destruct_RooStatscLcLSimpleLikelihoodRatioTestStat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SimpleLikelihoodRatioTestStat*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SimpleLikelihoodRatioTestStat*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SimpleLikelihoodRatioTestStat*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RooStatscLcLSPlot(void *p = nullptr);
   static void *newArray_RooStatscLcLSPlot(Long_t size, void *p);
   static void delete_RooStatscLcLSPlot(void *p);
   static void deleteArray_RooStatscLcLSPlot(void *p);
   static void destruct_RooStatscLcLSPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::SPlot*)
   {
      ::RooStats::SPlot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::SPlot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::SPlot", ::RooStats::SPlot::Class_Version(), "RooStats/SPlot.h", 32,
                  typeid(::RooStats::SPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::SPlot::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::SPlot) );
      instance.SetNew(&new_RooStatscLcLSPlot);
      instance.SetNewArray(&newArray_RooStatscLcLSPlot);
      instance.SetDelete(&delete_RooStatscLcLSPlot);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLSPlot);
      instance.SetDestructor(&destruct_RooStatscLcLSPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::SPlot*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::SPlot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::SPlot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLToyMCImportanceSampler(void *p);
   static void deleteArray_RooStatscLcLToyMCImportanceSampler(void *p);
   static void destruct_RooStatscLcLToyMCImportanceSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::ToyMCImportanceSampler*)
   {
      ::RooStats::ToyMCImportanceSampler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::ToyMCImportanceSampler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::ToyMCImportanceSampler", ::RooStats::ToyMCImportanceSampler::Class_Version(), "RooStats/ToyMCImportanceSampler.h", 22,
                  typeid(::RooStats::ToyMCImportanceSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::ToyMCImportanceSampler::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::ToyMCImportanceSampler) );
      instance.SetDelete(&delete_RooStatscLcLToyMCImportanceSampler);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLToyMCImportanceSampler);
      instance.SetDestructor(&destruct_RooStatscLcLToyMCImportanceSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::ToyMCImportanceSampler*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::ToyMCImportanceSampler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::ToyMCImportanceSampler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RooStatscLcLUpperLimitMCSModule(void *p);
   static void deleteArray_RooStatscLcLUpperLimitMCSModule(void *p);
   static void destruct_RooStatscLcLUpperLimitMCSModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooStats::UpperLimitMCSModule*)
   {
      ::RooStats::UpperLimitMCSModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RooStats::UpperLimitMCSModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RooStats::UpperLimitMCSModule", ::RooStats::UpperLimitMCSModule::Class_Version(), "RooStats/UpperLimitMCSModule.h", 27,
                  typeid(::RooStats::UpperLimitMCSModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RooStats::UpperLimitMCSModule::Dictionary, isa_proxy, 4,
                  sizeof(::RooStats::UpperLimitMCSModule) );
      instance.SetDelete(&delete_RooStatscLcLUpperLimitMCSModule);
      instance.SetDeleteArray(&deleteArray_RooStatscLcLUpperLimitMCSModule);
      instance.SetDestructor(&destruct_RooStatscLcLUpperLimitMCSModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooStats::UpperLimitMCSModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooStats::UpperLimitMCSModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooStats::UpperLimitMCSModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestCalculator::Class_Name()
{
   return "RooStats::HypoTestCalculator";
}

//______________________________________________________________________________
const char *HypoTestCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr TestStatistic::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TestStatistic::Class_Name()
{
   return "RooStats::TestStatistic";
}

//______________________________________________________________________________
const char *TestStatistic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TestStatistic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TestStatistic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TestStatistic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatistic*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr TestStatSampler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TestStatSampler::Class_Name()
{
   return "RooStats::TestStatSampler";
}

//______________________________________________________________________________
const char *TestStatSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TestStatSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TestStatSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TestStatSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::TestStatSampler*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingDistribution::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingDistribution::Class_Name()
{
   return "RooStats::SamplingDistribution";
}

//______________________________________________________________________________
const char *SamplingDistribution::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingDistribution::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingDistribution::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingDistribution::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistribution*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestResult::Class_Name()
{
   return "RooStats::HypoTestResult";
}

//______________________________________________________________________________
const char *HypoTestResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestResult*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestCalculatorGeneric::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestCalculatorGeneric::Class_Name()
{
   return "RooStats::HypoTestCalculatorGeneric";
}

//______________________________________________________________________________
const char *HypoTestCalculatorGeneric::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestCalculatorGeneric::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestCalculatorGeneric::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestCalculatorGeneric::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestCalculatorGeneric*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr AsymptoticCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AsymptoticCalculator::Class_Name()
{
   return "RooStats::AsymptoticCalculator";
}

//______________________________________________________________________________
const char *AsymptoticCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AsymptoticCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AsymptoticCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AsymptoticCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AsymptoticCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr IntervalCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *IntervalCalculator::Class_Name()
{
   return "RooStats::IntervalCalculator";
}

//______________________________________________________________________________
const char *IntervalCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int IntervalCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IntervalCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IntervalCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::IntervalCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ConfInterval::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ConfInterval::Class_Name()
{
   return "RooStats::ConfInterval";
}

//______________________________________________________________________________
const char *ConfInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ConfInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ConfInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ConfInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfInterval*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SimpleInterval::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SimpleInterval::Class_Name()
{
   return "RooStats::SimpleInterval";
}

//______________________________________________________________________________
const char *SimpleInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SimpleInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimpleInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimpleInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleInterval*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr BayesianCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BayesianCalculator::Class_Name()
{
   return "RooStats::BayesianCalculator";
}

//______________________________________________________________________________
const char *BayesianCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BayesianCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BayesianCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BayesianCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BayesianCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr BernsteinCorrection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BernsteinCorrection::Class_Name()
{
   return "RooStats::BernsteinCorrection";
}

//______________________________________________________________________________
const char *BernsteinCorrection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BernsteinCorrection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BernsteinCorrection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BernsteinCorrection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::BernsteinCorrection*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr CombinedCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CombinedCalculator::Class_Name()
{
   return "RooStats::CombinedCalculator";
}

//______________________________________________________________________________
const char *CombinedCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CombinedCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CombinedCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CombinedCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::CombinedCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingSummaryLookup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingSummaryLookup::Class_Name()
{
   return "RooStats::SamplingSummaryLookup";
}

//______________________________________________________________________________
const char *SamplingSummaryLookup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingSummaryLookup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingSummaryLookup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingSummaryLookup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummaryLookup*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr AcceptanceRegion::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AcceptanceRegion::Class_Name()
{
   return "RooStats::AcceptanceRegion";
}

//______________________________________________________________________________
const char *AcceptanceRegion::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AcceptanceRegion::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AcceptanceRegion::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AcceptanceRegion::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::AcceptanceRegion*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingSummary::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingSummary::Class_Name()
{
   return "RooStats::SamplingSummary";
}

//______________________________________________________________________________
const char *SamplingSummary::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingSummary::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingSummary::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingSummary::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingSummary*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ConfidenceBelt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ConfidenceBelt::Class_Name()
{
   return "RooStats::ConfidenceBelt";
}

//______________________________________________________________________________
const char *ConfidenceBelt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ConfidenceBelt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ConfidenceBelt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ConfidenceBelt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ConfidenceBelt*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr DebuggingSampler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DebuggingSampler::Class_Name()
{
   return "RooStats::DebuggingSampler";
}

//______________________________________________________________________________
const char *DebuggingSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DebuggingSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DebuggingSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DebuggingSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingSampler*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ToyMCSampler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ToyMCSampler::Class_Name()
{
   return "RooStats::ToyMCSampler";
}

//______________________________________________________________________________
const char *ToyMCSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ToyMCSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ToyMCSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ToyMCSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCSampler*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr DebuggingTestStat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DebuggingTestStat::Class_Name()
{
   return "RooStats::DebuggingTestStat";
}

//______________________________________________________________________________
const char *DebuggingTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DebuggingTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DebuggingTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DebuggingTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DebuggingTestStat*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr DetailedOutputAggregator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DetailedOutputAggregator::Class_Name()
{
   return "RooStats::DetailedOutputAggregator";
}

//______________________________________________________________________________
const char *DetailedOutputAggregator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DetailedOutputAggregator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetailedOutputAggregator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetailedOutputAggregator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::DetailedOutputAggregator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr PointSetInterval::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PointSetInterval::Class_Name()
{
   return "RooStats::PointSetInterval";
}

//______________________________________________________________________________
const char *PointSetInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PointSetInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PointSetInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PointSetInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PointSetInterval*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr FeldmanCousins::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FeldmanCousins::Class_Name()
{
   return "RooStats::FeldmanCousins";
}

//______________________________________________________________________________
const char *FeldmanCousins::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FeldmanCousins::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FeldmanCousins::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FeldmanCousins::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FeldmanCousins*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr FrequentistCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FrequentistCalculator::Class_Name()
{
   return "RooStats::FrequentistCalculator";
}

//______________________________________________________________________________
const char *FrequentistCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FrequentistCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FrequentistCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FrequentistCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::FrequentistCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr Heaviside::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Heaviside::Class_Name()
{
   return "RooStats::Heaviside";
}

//______________________________________________________________________________
const char *Heaviside::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Heaviside::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Heaviside::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Heaviside::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::Heaviside*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridCalculator::Class_Name()
{
   return "RooStats::HybridCalculator";
}

//______________________________________________________________________________
const char *HybridCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HybridCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridPlot::Class_Name()
{
   return "RooStats::HybridPlot";
}

//______________________________________________________________________________
const char *HybridPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HybridPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HybridResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HybridResult::Class_Name()
{
   return "RooStats::HybridResult";
}

//______________________________________________________________________________
const char *HybridResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HybridResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HybridResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HybridResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HybridResult*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverterResult::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverterResult::Class_Name()
{
   return "RooStats::HypoTestInverterResult";
}

//______________________________________________________________________________
const char *HypoTestInverterResult::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverterResult::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverterResult::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverterResult::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterResult*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverter::Class_Name()
{
   return "RooStats::HypoTestInverter";
}

//______________________________________________________________________________
const char *HypoTestInverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverter*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestInverterPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestInverterPlot::Class_Name()
{
   return "RooStats::HypoTestInverterPlot";
}

//______________________________________________________________________________
const char *HypoTestInverterPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestInverterPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestInverterPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestInverterPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestInverterPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SamplingDistPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SamplingDistPlot::Class_Name()
{
   return "RooStats::SamplingDistPlot";
}

//______________________________________________________________________________
const char *SamplingDistPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SamplingDistPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SamplingDistPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SamplingDistPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SamplingDistPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr HypoTestPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *HypoTestPlot::Class_Name()
{
   return "RooStats::HypoTestPlot";
}

//______________________________________________________________________________
const char *HypoTestPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int HypoTestPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HypoTestPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HypoTestPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::HypoTestPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr LikelihoodInterval::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LikelihoodInterval::Class_Name()
{
   return "RooStats::LikelihoodInterval";
}

//______________________________________________________________________________
const char *LikelihoodInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LikelihoodInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LikelihoodInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LikelihoodInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodInterval*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr LikelihoodIntervalPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *LikelihoodIntervalPlot::Class_Name()
{
   return "RooStats::LikelihoodIntervalPlot";
}

//______________________________________________________________________________
const char *LikelihoodIntervalPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int LikelihoodIntervalPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LikelihoodIntervalPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LikelihoodIntervalPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::LikelihoodIntervalPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MarkovChain::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MarkovChain::Class_Name()
{
   return "RooStats::MarkovChain";
}

//______________________________________________________________________________
const char *MarkovChain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MarkovChain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MarkovChain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MarkovChain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MarkovChain*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MaxLikelihoodEstimateTestStat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MaxLikelihoodEstimateTestStat::Class_Name()
{
   return "RooStats::MaxLikelihoodEstimateTestStat";
}

//______________________________________________________________________________
const char *MaxLikelihoodEstimateTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MaxLikelihoodEstimateTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MaxLikelihoodEstimateTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MaxLikelihoodEstimateTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MaxLikelihoodEstimateTestStat*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProposalFunction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ProposalFunction::Class_Name()
{
   return "RooStats::ProposalFunction";
}

//______________________________________________________________________________
const char *ProposalFunction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ProposalFunction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProposalFunction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProposalFunction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalFunction*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MCMCInterval::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MCMCInterval::Class_Name()
{
   return "RooStats::MCMCInterval";
}

//______________________________________________________________________________
const char *MCMCInterval::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MCMCInterval::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCMCInterval::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCMCInterval::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCInterval*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MCMCCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MCMCCalculator::Class_Name()
{
   return "RooStats::MCMCCalculator";
}

//______________________________________________________________________________
const char *MCMCCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MCMCCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCMCCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCMCCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MCMCIntervalPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MCMCIntervalPlot::Class_Name()
{
   return "RooStats::MCMCIntervalPlot";
}

//______________________________________________________________________________
const char *MCMCIntervalPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MCMCIntervalPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCMCIntervalPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCMCIntervalPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MCMCIntervalPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr MetropolisHastings::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MetropolisHastings::Class_Name()
{
   return "RooStats::MetropolisHastings";
}

//______________________________________________________________________________
const char *MetropolisHastings::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MetropolisHastings::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MetropolisHastings::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MetropolisHastings::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::MetropolisHastings*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr NeymanConstruction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *NeymanConstruction::Class_Name()
{
   return "RooStats::NeymanConstruction";
}

//______________________________________________________________________________
const char *NeymanConstruction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int NeymanConstruction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NeymanConstruction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NeymanConstruction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NeymanConstruction*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr NumberCountingPdfFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *NumberCountingPdfFactory::Class_Name()
{
   return "RooStats::NumberCountingPdfFactory";
}

//______________________________________________________________________________
const char *NumberCountingPdfFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int NumberCountingPdfFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NumberCountingPdfFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NumberCountingPdfFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumberCountingPdfFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr NumEventsTestStat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *NumEventsTestStat::Class_Name()
{
   return "RooStats::NumEventsTestStat";
}

//______________________________________________________________________________
const char *NumEventsTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int NumEventsTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *NumEventsTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *NumEventsTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::NumEventsTestStat*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr PdfProposal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *PdfProposal::Class_Name()
{
   return "RooStats::PdfProposal";
}

//______________________________________________________________________________
const char *PdfProposal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int PdfProposal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PdfProposal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PdfProposal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::PdfProposal*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProfileInspector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ProfileInspector::Class_Name()
{
   return "RooStats::ProfileInspector";
}

//______________________________________________________________________________
const char *ProfileInspector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ProfileInspector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProfileInspector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProfileInspector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileInspector*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProfileLikelihoodCalculator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ProfileLikelihoodCalculator::Class_Name()
{
   return "RooStats::ProfileLikelihoodCalculator";
}

//______________________________________________________________________________
const char *ProfileLikelihoodCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ProfileLikelihoodCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProfileLikelihoodCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProfileLikelihoodCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodCalculator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProfileLikelihoodTestStat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ProfileLikelihoodTestStat::Class_Name()
{
   return "RooStats::ProfileLikelihoodTestStat";
}

//______________________________________________________________________________
const char *ProfileLikelihoodTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ProfileLikelihoodTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProfileLikelihoodTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProfileLikelihoodTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProfileLikelihoodTestStat*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr UniformProposal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UniformProposal::Class_Name()
{
   return "RooStats::UniformProposal";
}

//______________________________________________________________________________
const char *UniformProposal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UniformProposal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UniformProposal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UniformProposal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UniformProposal*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ProposalHelper::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ProposalHelper::Class_Name()
{
   return "RooStats::ProposalHelper";
}

//______________________________________________________________________________
const char *ProposalHelper::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ProposalHelper::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProposalHelper::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProposalHelper::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ProposalHelper*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr RatioOfProfiledLikelihoodsTestStat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RatioOfProfiledLikelihoodsTestStat::Class_Name()
{
   return "RooStats::RatioOfProfiledLikelihoodsTestStat";
}

//______________________________________________________________________________
const char *RatioOfProfiledLikelihoodsTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RatioOfProfiledLikelihoodsTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RatioOfProfiledLikelihoodsTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RatioOfProfiledLikelihoodsTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::RatioOfProfiledLikelihoodsTestStat*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SequentialProposal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SequentialProposal::Class_Name()
{
   return "RooStats::SequentialProposal";
}

//______________________________________________________________________________
const char *SequentialProposal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SequentialProposal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SequentialProposal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SequentialProposal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SequentialProposal*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SimpleLikelihoodRatioTestStat::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SimpleLikelihoodRatioTestStat::Class_Name()
{
   return "RooStats::SimpleLikelihoodRatioTestStat";
}

//______________________________________________________________________________
const char *SimpleLikelihoodRatioTestStat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SimpleLikelihoodRatioTestStat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SimpleLikelihoodRatioTestStat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SimpleLikelihoodRatioTestStat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SimpleLikelihoodRatioTestStat*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr SPlot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SPlot::Class_Name()
{
   return "RooStats::SPlot";
}

//______________________________________________________________________________
const char *SPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::SPlot*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr ToyMCImportanceSampler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ToyMCImportanceSampler::Class_Name()
{
   return "RooStats::ToyMCImportanceSampler";
}

//______________________________________________________________________________
const char *ToyMCImportanceSampler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ToyMCImportanceSampler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ToyMCImportanceSampler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ToyMCImportanceSampler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::ToyMCImportanceSampler*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
atomic_TClass_ptr UpperLimitMCSModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *UpperLimitMCSModule::Class_Name()
{
   return "RooStats::UpperLimitMCSModule";
}

//______________________________________________________________________________
const char *UpperLimitMCSModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int UpperLimitMCSModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UpperLimitMCSModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UpperLimitMCSModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RooStats::UpperLimitMCSModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace RooStats
namespace RooStats {
//______________________________________________________________________________
void HypoTestCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestCalculator(void *p) {
      delete (static_cast<::RooStats::HypoTestCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestCalculator(void *p) {
      delete [] (static_cast<::RooStats::HypoTestCalculator*>(p));
   }
   static void destruct_RooStatscLcLHypoTestCalculator(void *p) {
      typedef ::RooStats::HypoTestCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestCalculator

namespace RooStats {
//______________________________________________________________________________
void TestStatistic::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::TestStatistic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::TestStatistic::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::TestStatistic::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLTestStatistic(void *p) {
      delete (static_cast<::RooStats::TestStatistic*>(p));
   }
   static void deleteArray_RooStatscLcLTestStatistic(void *p) {
      delete [] (static_cast<::RooStats::TestStatistic*>(p));
   }
   static void destruct_RooStatscLcLTestStatistic(void *p) {
      typedef ::RooStats::TestStatistic current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::TestStatistic

namespace RooStats {
//______________________________________________________________________________
void TestStatSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::TestStatSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::TestStatSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::TestStatSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLTestStatSampler(void *p) {
      delete (static_cast<::RooStats::TestStatSampler*>(p));
   }
   static void deleteArray_RooStatscLcLTestStatSampler(void *p) {
      delete [] (static_cast<::RooStats::TestStatSampler*>(p));
   }
   static void destruct_RooStatscLcLTestStatSampler(void *p) {
      typedef ::RooStats::TestStatSampler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::TestStatSampler

namespace RooStats {
//______________________________________________________________________________
void SamplingDistribution::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingDistribution.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingDistribution::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingDistribution::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingDistribution(void *p) {
      return  p ? new(p) ::RooStats::SamplingDistribution : new ::RooStats::SamplingDistribution;
   }
   static void *newArray_RooStatscLcLSamplingDistribution(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingDistribution[nElements] : new ::RooStats::SamplingDistribution[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingDistribution(void *p) {
      delete (static_cast<::RooStats::SamplingDistribution*>(p));
   }
   static void deleteArray_RooStatscLcLSamplingDistribution(void *p) {
      delete [] (static_cast<::RooStats::SamplingDistribution*>(p));
   }
   static void destruct_RooStatscLcLSamplingDistribution(void *p) {
      typedef ::RooStats::SamplingDistribution current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingDistribution

namespace RooStats {
//______________________________________________________________________________
void HypoTestResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestResult::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestResult(void *p) {
      return  p ? new(p) ::RooStats::HypoTestResult : new ::RooStats::HypoTestResult;
   }
   static void *newArray_RooStatscLcLHypoTestResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestResult[nElements] : new ::RooStats::HypoTestResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestResult(void *p) {
      delete (static_cast<::RooStats::HypoTestResult*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestResult(void *p) {
      delete [] (static_cast<::RooStats::HypoTestResult*>(p));
   }
   static void destruct_RooStatscLcLHypoTestResult(void *p) {
      typedef ::RooStats::HypoTestResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestResult

namespace RooStats {
//______________________________________________________________________________
void HypoTestCalculatorGeneric::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestCalculatorGeneric.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestCalculatorGeneric::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestCalculatorGeneric::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestCalculatorGeneric(void *p) {
      delete (static_cast<::RooStats::HypoTestCalculatorGeneric*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestCalculatorGeneric(void *p) {
      delete [] (static_cast<::RooStats::HypoTestCalculatorGeneric*>(p));
   }
   static void destruct_RooStatscLcLHypoTestCalculatorGeneric(void *p) {
      typedef ::RooStats::HypoTestCalculatorGeneric current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestCalculatorGeneric

namespace RooStats {
//______________________________________________________________________________
void AsymptoticCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::AsymptoticCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::AsymptoticCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::AsymptoticCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLAsymptoticCalculator(void *p) {
      delete (static_cast<::RooStats::AsymptoticCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLAsymptoticCalculator(void *p) {
      delete [] (static_cast<::RooStats::AsymptoticCalculator*>(p));
   }
   static void destruct_RooStatscLcLAsymptoticCalculator(void *p) {
      typedef ::RooStats::AsymptoticCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::AsymptoticCalculator

namespace RooStats {
//______________________________________________________________________________
void IntervalCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::IntervalCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::IntervalCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::IntervalCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLIntervalCalculator(void *p) {
      delete (static_cast<::RooStats::IntervalCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLIntervalCalculator(void *p) {
      delete [] (static_cast<::RooStats::IntervalCalculator*>(p));
   }
   static void destruct_RooStatscLcLIntervalCalculator(void *p) {
      typedef ::RooStats::IntervalCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::IntervalCalculator

namespace RooStats {
//______________________________________________________________________________
void ConfInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ConfInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ConfInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ConfInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLConfInterval(void *p) {
      delete (static_cast<::RooStats::ConfInterval*>(p));
   }
   static void deleteArray_RooStatscLcLConfInterval(void *p) {
      delete [] (static_cast<::RooStats::ConfInterval*>(p));
   }
   static void destruct_RooStatscLcLConfInterval(void *p) {
      typedef ::RooStats::ConfInterval current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ConfInterval

namespace RooStats {
//______________________________________________________________________________
void SimpleInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SimpleInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SimpleInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SimpleInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSimpleInterval(void *p) {
      return  p ? new(p) ::RooStats::SimpleInterval : new ::RooStats::SimpleInterval;
   }
   static void *newArray_RooStatscLcLSimpleInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SimpleInterval[nElements] : new ::RooStats::SimpleInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSimpleInterval(void *p) {
      delete (static_cast<::RooStats::SimpleInterval*>(p));
   }
   static void deleteArray_RooStatscLcLSimpleInterval(void *p) {
      delete [] (static_cast<::RooStats::SimpleInterval*>(p));
   }
   static void destruct_RooStatscLcLSimpleInterval(void *p) {
      typedef ::RooStats::SimpleInterval current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SimpleInterval

namespace RooStats {
//______________________________________________________________________________
void BayesianCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::BayesianCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::BayesianCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::BayesianCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLBayesianCalculator(void *p) {
      return  p ? new(p) ::RooStats::BayesianCalculator : new ::RooStats::BayesianCalculator;
   }
   static void *newArray_RooStatscLcLBayesianCalculator(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::BayesianCalculator[nElements] : new ::RooStats::BayesianCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLBayesianCalculator(void *p) {
      delete (static_cast<::RooStats::BayesianCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLBayesianCalculator(void *p) {
      delete [] (static_cast<::RooStats::BayesianCalculator*>(p));
   }
   static void destruct_RooStatscLcLBayesianCalculator(void *p) {
      typedef ::RooStats::BayesianCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::BayesianCalculator

namespace RooStats {
//______________________________________________________________________________
void BernsteinCorrection::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::BernsteinCorrection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::BernsteinCorrection::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::BernsteinCorrection::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLBernsteinCorrection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::BernsteinCorrection : new ::RooStats::BernsteinCorrection;
   }
   static void *newArray_RooStatscLcLBernsteinCorrection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::BernsteinCorrection[nElements] : new ::RooStats::BernsteinCorrection[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLBernsteinCorrection(void *p) {
      delete (static_cast<::RooStats::BernsteinCorrection*>(p));
   }
   static void deleteArray_RooStatscLcLBernsteinCorrection(void *p) {
      delete [] (static_cast<::RooStats::BernsteinCorrection*>(p));
   }
   static void destruct_RooStatscLcLBernsteinCorrection(void *p) {
      typedef ::RooStats::BernsteinCorrection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::BernsteinCorrection

namespace RooStats {
//______________________________________________________________________________
void CombinedCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::CombinedCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::CombinedCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::CombinedCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLCombinedCalculator(void *p) {
      delete (static_cast<::RooStats::CombinedCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLCombinedCalculator(void *p) {
      delete [] (static_cast<::RooStats::CombinedCalculator*>(p));
   }
   static void destruct_RooStatscLcLCombinedCalculator(void *p) {
      typedef ::RooStats::CombinedCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::CombinedCalculator

namespace RooStats {
//______________________________________________________________________________
void SamplingSummaryLookup::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingSummaryLookup.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingSummaryLookup::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingSummaryLookup::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingSummaryLookup(void *p) {
      return  p ? new(p) ::RooStats::SamplingSummaryLookup : new ::RooStats::SamplingSummaryLookup;
   }
   static void *newArray_RooStatscLcLSamplingSummaryLookup(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingSummaryLookup[nElements] : new ::RooStats::SamplingSummaryLookup[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingSummaryLookup(void *p) {
      delete (static_cast<::RooStats::SamplingSummaryLookup*>(p));
   }
   static void deleteArray_RooStatscLcLSamplingSummaryLookup(void *p) {
      delete [] (static_cast<::RooStats::SamplingSummaryLookup*>(p));
   }
   static void destruct_RooStatscLcLSamplingSummaryLookup(void *p) {
      typedef ::RooStats::SamplingSummaryLookup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingSummaryLookup

namespace RooStats {
//______________________________________________________________________________
void AcceptanceRegion::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::AcceptanceRegion.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::AcceptanceRegion::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::AcceptanceRegion::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLAcceptanceRegion(void *p) {
      return  p ? new(p) ::RooStats::AcceptanceRegion : new ::RooStats::AcceptanceRegion;
   }
   static void *newArray_RooStatscLcLAcceptanceRegion(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::AcceptanceRegion[nElements] : new ::RooStats::AcceptanceRegion[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLAcceptanceRegion(void *p) {
      delete (static_cast<::RooStats::AcceptanceRegion*>(p));
   }
   static void deleteArray_RooStatscLcLAcceptanceRegion(void *p) {
      delete [] (static_cast<::RooStats::AcceptanceRegion*>(p));
   }
   static void destruct_RooStatscLcLAcceptanceRegion(void *p) {
      typedef ::RooStats::AcceptanceRegion current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::AcceptanceRegion

namespace RooStats {
//______________________________________________________________________________
void SamplingSummary::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingSummary.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingSummary::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingSummary::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingSummary(void *p) {
      return  p ? new(p) ::RooStats::SamplingSummary : new ::RooStats::SamplingSummary;
   }
   static void *newArray_RooStatscLcLSamplingSummary(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingSummary[nElements] : new ::RooStats::SamplingSummary[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingSummary(void *p) {
      delete (static_cast<::RooStats::SamplingSummary*>(p));
   }
   static void deleteArray_RooStatscLcLSamplingSummary(void *p) {
      delete [] (static_cast<::RooStats::SamplingSummary*>(p));
   }
   static void destruct_RooStatscLcLSamplingSummary(void *p) {
      typedef ::RooStats::SamplingSummary current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingSummary

namespace RooStats {
//______________________________________________________________________________
void ConfidenceBelt::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ConfidenceBelt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ConfidenceBelt::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ConfidenceBelt::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLConfidenceBelt(void *p) {
      return  p ? new(p) ::RooStats::ConfidenceBelt : new ::RooStats::ConfidenceBelt;
   }
   static void *newArray_RooStatscLcLConfidenceBelt(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ConfidenceBelt[nElements] : new ::RooStats::ConfidenceBelt[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLConfidenceBelt(void *p) {
      delete (static_cast<::RooStats::ConfidenceBelt*>(p));
   }
   static void deleteArray_RooStatscLcLConfidenceBelt(void *p) {
      delete [] (static_cast<::RooStats::ConfidenceBelt*>(p));
   }
   static void destruct_RooStatscLcLConfidenceBelt(void *p) {
      typedef ::RooStats::ConfidenceBelt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ConfidenceBelt

namespace RooStats {
//______________________________________________________________________________
void DebuggingSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::DebuggingSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::DebuggingSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::DebuggingSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLDebuggingSampler(void *p) {
      delete (static_cast<::RooStats::DebuggingSampler*>(p));
   }
   static void deleteArray_RooStatscLcLDebuggingSampler(void *p) {
      delete [] (static_cast<::RooStats::DebuggingSampler*>(p));
   }
   static void destruct_RooStatscLcLDebuggingSampler(void *p) {
      typedef ::RooStats::DebuggingSampler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::DebuggingSampler

namespace RooStats {
//______________________________________________________________________________
void ToyMCSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ToyMCSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ToyMCSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ToyMCSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLToyMCSampler(void *p) {
      delete (static_cast<::RooStats::ToyMCSampler*>(p));
   }
   static void deleteArray_RooStatscLcLToyMCSampler(void *p) {
      delete [] (static_cast<::RooStats::ToyMCSampler*>(p));
   }
   static void destruct_RooStatscLcLToyMCSampler(void *p) {
      typedef ::RooStats::ToyMCSampler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ToyMCSampler

namespace RooStats {
//______________________________________________________________________________
void DebuggingTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::DebuggingTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::DebuggingTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::DebuggingTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLDebuggingTestStat(void *p) {
      delete (static_cast<::RooStats::DebuggingTestStat*>(p));
   }
   static void deleteArray_RooStatscLcLDebuggingTestStat(void *p) {
      delete [] (static_cast<::RooStats::DebuggingTestStat*>(p));
   }
   static void destruct_RooStatscLcLDebuggingTestStat(void *p) {
      typedef ::RooStats::DebuggingTestStat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::DebuggingTestStat

namespace RooStats {
//______________________________________________________________________________
void DetailedOutputAggregator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::DetailedOutputAggregator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::DetailedOutputAggregator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::DetailedOutputAggregator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLDetailedOutputAggregator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::DetailedOutputAggregator : new ::RooStats::DetailedOutputAggregator;
   }
   static void *newArray_RooStatscLcLDetailedOutputAggregator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::DetailedOutputAggregator[nElements] : new ::RooStats::DetailedOutputAggregator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLDetailedOutputAggregator(void *p) {
      delete (static_cast<::RooStats::DetailedOutputAggregator*>(p));
   }
   static void deleteArray_RooStatscLcLDetailedOutputAggregator(void *p) {
      delete [] (static_cast<::RooStats::DetailedOutputAggregator*>(p));
   }
   static void destruct_RooStatscLcLDetailedOutputAggregator(void *p) {
      typedef ::RooStats::DetailedOutputAggregator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::DetailedOutputAggregator

namespace RooStats {
//______________________________________________________________________________
void PointSetInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::PointSetInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::PointSetInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::PointSetInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLPointSetInterval(void *p) {
      return  p ? new(p) ::RooStats::PointSetInterval : new ::RooStats::PointSetInterval;
   }
   static void *newArray_RooStatscLcLPointSetInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::PointSetInterval[nElements] : new ::RooStats::PointSetInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLPointSetInterval(void *p) {
      delete (static_cast<::RooStats::PointSetInterval*>(p));
   }
   static void deleteArray_RooStatscLcLPointSetInterval(void *p) {
      delete [] (static_cast<::RooStats::PointSetInterval*>(p));
   }
   static void destruct_RooStatscLcLPointSetInterval(void *p) {
      typedef ::RooStats::PointSetInterval current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::PointSetInterval

namespace RooStats {
//______________________________________________________________________________
void FeldmanCousins::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::FeldmanCousins.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::FeldmanCousins::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::FeldmanCousins::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLFeldmanCousins(void *p) {
      delete (static_cast<::RooStats::FeldmanCousins*>(p));
   }
   static void deleteArray_RooStatscLcLFeldmanCousins(void *p) {
      delete [] (static_cast<::RooStats::FeldmanCousins*>(p));
   }
   static void destruct_RooStatscLcLFeldmanCousins(void *p) {
      typedef ::RooStats::FeldmanCousins current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::FeldmanCousins

namespace RooStats {
//______________________________________________________________________________
void FrequentistCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::FrequentistCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::FrequentistCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::FrequentistCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLFrequentistCalculator(void *p) {
      delete (static_cast<::RooStats::FrequentistCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLFrequentistCalculator(void *p) {
      delete [] (static_cast<::RooStats::FrequentistCalculator*>(p));
   }
   static void destruct_RooStatscLcLFrequentistCalculator(void *p) {
      typedef ::RooStats::FrequentistCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::FrequentistCalculator

namespace RooStats {
//______________________________________________________________________________
void Heaviside::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::Heaviside.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::Heaviside::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::Heaviside::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHeaviside(void *p) {
      return  p ? new(p) ::RooStats::Heaviside : new ::RooStats::Heaviside;
   }
   static void *newArray_RooStatscLcLHeaviside(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::Heaviside[nElements] : new ::RooStats::Heaviside[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHeaviside(void *p) {
      delete (static_cast<::RooStats::Heaviside*>(p));
   }
   static void deleteArray_RooStatscLcLHeaviside(void *p) {
      delete [] (static_cast<::RooStats::Heaviside*>(p));
   }
   static void destruct_RooStatscLcLHeaviside(void *p) {
      typedef ::RooStats::Heaviside current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::Heaviside

namespace RooStats {
//______________________________________________________________________________
void HybridCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridCalculator(void *p) {
      delete (static_cast<::RooStats::HybridCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLHybridCalculator(void *p) {
      delete [] (static_cast<::RooStats::HybridCalculator*>(p));
   }
   static void destruct_RooStatscLcLHybridCalculator(void *p) {
      typedef ::RooStats::HybridCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridCalculator

namespace RooStats {
//______________________________________________________________________________
void HybridPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridPlot(void *p) {
      delete (static_cast<::RooStats::HybridPlot*>(p));
   }
   static void deleteArray_RooStatscLcLHybridPlot(void *p) {
      delete [] (static_cast<::RooStats::HybridPlot*>(p));
   }
   static void destruct_RooStatscLcLHybridPlot(void *p) {
      typedef ::RooStats::HybridPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridPlot

namespace RooStats {
//______________________________________________________________________________
void HybridResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HybridResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HybridResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HybridResult::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHybridResult(void *p) {
      return  p ? new(p) ::RooStats::HybridResult : new ::RooStats::HybridResult;
   }
   static void *newArray_RooStatscLcLHybridResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HybridResult[nElements] : new ::RooStats::HybridResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHybridResult(void *p) {
      delete (static_cast<::RooStats::HybridResult*>(p));
   }
   static void deleteArray_RooStatscLcLHybridResult(void *p) {
      delete [] (static_cast<::RooStats::HybridResult*>(p));
   }
   static void destruct_RooStatscLcLHybridResult(void *p) {
      typedef ::RooStats::HybridResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HybridResult

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverterResult::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverterResult.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverterResult::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverterResult::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestInverterResult(void *p) {
      return  p ? new(p) ::RooStats::HypoTestInverterResult : new ::RooStats::HypoTestInverterResult;
   }
   static void *newArray_RooStatscLcLHypoTestInverterResult(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestInverterResult[nElements] : new ::RooStats::HypoTestInverterResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverterResult(void *p) {
      delete (static_cast<::RooStats::HypoTestInverterResult*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestInverterResult(void *p) {
      delete [] (static_cast<::RooStats::HypoTestInverterResult*>(p));
   }
   static void destruct_RooStatscLcLHypoTestInverterResult(void *p) {
      typedef ::RooStats::HypoTestInverterResult current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverterResult

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverter::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestInverter(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HypoTestInverter : new ::RooStats::HypoTestInverter;
   }
   static void *newArray_RooStatscLcLHypoTestInverter(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::HypoTestInverter[nElements] : new ::RooStats::HypoTestInverter[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverter(void *p) {
      delete (static_cast<::RooStats::HypoTestInverter*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestInverter(void *p) {
      delete [] (static_cast<::RooStats::HypoTestInverter*>(p));
   }
   static void destruct_RooStatscLcLHypoTestInverter(void *p) {
      typedef ::RooStats::HypoTestInverter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverter

namespace RooStats {
//______________________________________________________________________________
void HypoTestInverterPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestInverterPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestInverterPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestInverterPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestInverterPlot(void *p) {
      delete (static_cast<::RooStats::HypoTestInverterPlot*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestInverterPlot(void *p) {
      delete [] (static_cast<::RooStats::HypoTestInverterPlot*>(p));
   }
   static void destruct_RooStatscLcLHypoTestInverterPlot(void *p) {
      typedef ::RooStats::HypoTestInverterPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestInverterPlot

namespace RooStats {
//______________________________________________________________________________
void SamplingDistPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SamplingDistPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SamplingDistPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SamplingDistPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSamplingDistPlot(void *p) {
      return  p ? new(p) ::RooStats::SamplingDistPlot : new ::RooStats::SamplingDistPlot;
   }
   static void *newArray_RooStatscLcLSamplingDistPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SamplingDistPlot[nElements] : new ::RooStats::SamplingDistPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSamplingDistPlot(void *p) {
      delete (static_cast<::RooStats::SamplingDistPlot*>(p));
   }
   static void deleteArray_RooStatscLcLSamplingDistPlot(void *p) {
      delete [] (static_cast<::RooStats::SamplingDistPlot*>(p));
   }
   static void destruct_RooStatscLcLSamplingDistPlot(void *p) {
      typedef ::RooStats::SamplingDistPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SamplingDistPlot

namespace RooStats {
//______________________________________________________________________________
void HypoTestPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::HypoTestPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::HypoTestPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::HypoTestPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLHypoTestPlot(void *p) {
      return  p ? new(p) ::RooStats::HypoTestPlot : new ::RooStats::HypoTestPlot;
   }
   static void *newArray_RooStatscLcLHypoTestPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::HypoTestPlot[nElements] : new ::RooStats::HypoTestPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLHypoTestPlot(void *p) {
      delete (static_cast<::RooStats::HypoTestPlot*>(p));
   }
   static void deleteArray_RooStatscLcLHypoTestPlot(void *p) {
      delete [] (static_cast<::RooStats::HypoTestPlot*>(p));
   }
   static void destruct_RooStatscLcLHypoTestPlot(void *p) {
      typedef ::RooStats::HypoTestPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::HypoTestPlot

namespace RooStats {
//______________________________________________________________________________
void LikelihoodInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::LikelihoodInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::LikelihoodInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::LikelihoodInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLLikelihoodInterval(void *p) {
      return  p ? new(p) ::RooStats::LikelihoodInterval : new ::RooStats::LikelihoodInterval;
   }
   static void *newArray_RooStatscLcLLikelihoodInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::LikelihoodInterval[nElements] : new ::RooStats::LikelihoodInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLLikelihoodInterval(void *p) {
      delete (static_cast<::RooStats::LikelihoodInterval*>(p));
   }
   static void deleteArray_RooStatscLcLLikelihoodInterval(void *p) {
      delete [] (static_cast<::RooStats::LikelihoodInterval*>(p));
   }
   static void destruct_RooStatscLcLLikelihoodInterval(void *p) {
      typedef ::RooStats::LikelihoodInterval current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::LikelihoodInterval

namespace RooStats {
//______________________________________________________________________________
void LikelihoodIntervalPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::LikelihoodIntervalPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::LikelihoodIntervalPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::LikelihoodIntervalPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      return  p ? new(p) ::RooStats::LikelihoodIntervalPlot : new ::RooStats::LikelihoodIntervalPlot;
   }
   static void *newArray_RooStatscLcLLikelihoodIntervalPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::LikelihoodIntervalPlot[nElements] : new ::RooStats::LikelihoodIntervalPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      delete (static_cast<::RooStats::LikelihoodIntervalPlot*>(p));
   }
   static void deleteArray_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      delete [] (static_cast<::RooStats::LikelihoodIntervalPlot*>(p));
   }
   static void destruct_RooStatscLcLLikelihoodIntervalPlot(void *p) {
      typedef ::RooStats::LikelihoodIntervalPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::LikelihoodIntervalPlot

namespace RooStats {
//______________________________________________________________________________
void MarkovChain::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MarkovChain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MarkovChain::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MarkovChain::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMarkovChain(void *p) {
      return  p ? new(p) ::RooStats::MarkovChain : new ::RooStats::MarkovChain;
   }
   static void *newArray_RooStatscLcLMarkovChain(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MarkovChain[nElements] : new ::RooStats::MarkovChain[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMarkovChain(void *p) {
      delete (static_cast<::RooStats::MarkovChain*>(p));
   }
   static void deleteArray_RooStatscLcLMarkovChain(void *p) {
      delete [] (static_cast<::RooStats::MarkovChain*>(p));
   }
   static void destruct_RooStatscLcLMarkovChain(void *p) {
      typedef ::RooStats::MarkovChain current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MarkovChain

namespace RooStats {
//______________________________________________________________________________
void MaxLikelihoodEstimateTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MaxLikelihoodEstimateTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MaxLikelihoodEstimateTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MaxLikelihoodEstimateTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::MaxLikelihoodEstimateTestStat : new ::RooStats::MaxLikelihoodEstimateTestStat;
   }
   static void *newArray_RooStatscLcLMaxLikelihoodEstimateTestStat(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::MaxLikelihoodEstimateTestStat[nElements] : new ::RooStats::MaxLikelihoodEstimateTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      delete (static_cast<::RooStats::MaxLikelihoodEstimateTestStat*>(p));
   }
   static void deleteArray_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      delete [] (static_cast<::RooStats::MaxLikelihoodEstimateTestStat*>(p));
   }
   static void destruct_RooStatscLcLMaxLikelihoodEstimateTestStat(void *p) {
      typedef ::RooStats::MaxLikelihoodEstimateTestStat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MaxLikelihoodEstimateTestStat

namespace RooStats {
//______________________________________________________________________________
void ProposalFunction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProposalFunction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProposalFunction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProposalFunction::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLProposalFunction(void *p) {
      delete (static_cast<::RooStats::ProposalFunction*>(p));
   }
   static void deleteArray_RooStatscLcLProposalFunction(void *p) {
      delete [] (static_cast<::RooStats::ProposalFunction*>(p));
   }
   static void destruct_RooStatscLcLProposalFunction(void *p) {
      typedef ::RooStats::ProposalFunction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProposalFunction

namespace RooStats {
//______________________________________________________________________________
void MCMCInterval::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MCMCInterval.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MCMCInterval::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MCMCInterval::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMCMCInterval(void *p) {
      return  p ? new(p) ::RooStats::MCMCInterval : new ::RooStats::MCMCInterval;
   }
   static void *newArray_RooStatscLcLMCMCInterval(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MCMCInterval[nElements] : new ::RooStats::MCMCInterval[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMCMCInterval(void *p) {
      delete (static_cast<::RooStats::MCMCInterval*>(p));
   }
   static void deleteArray_RooStatscLcLMCMCInterval(void *p) {
      delete [] (static_cast<::RooStats::MCMCInterval*>(p));
   }
   static void destruct_RooStatscLcLMCMCInterval(void *p) {
      typedef ::RooStats::MCMCInterval current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MCMCInterval

namespace RooStats {
//______________________________________________________________________________
void MCMCCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MCMCCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MCMCCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MCMCCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMCMCCalculator(void *p) {
      return  p ? new(p) ::RooStats::MCMCCalculator : new ::RooStats::MCMCCalculator;
   }
   static void *newArray_RooStatscLcLMCMCCalculator(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MCMCCalculator[nElements] : new ::RooStats::MCMCCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMCMCCalculator(void *p) {
      delete (static_cast<::RooStats::MCMCCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLMCMCCalculator(void *p) {
      delete [] (static_cast<::RooStats::MCMCCalculator*>(p));
   }
   static void destruct_RooStatscLcLMCMCCalculator(void *p) {
      typedef ::RooStats::MCMCCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MCMCCalculator

namespace RooStats {
//______________________________________________________________________________
void MCMCIntervalPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MCMCIntervalPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MCMCIntervalPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MCMCIntervalPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMCMCIntervalPlot(void *p) {
      return  p ? new(p) ::RooStats::MCMCIntervalPlot : new ::RooStats::MCMCIntervalPlot;
   }
   static void *newArray_RooStatscLcLMCMCIntervalPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MCMCIntervalPlot[nElements] : new ::RooStats::MCMCIntervalPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMCMCIntervalPlot(void *p) {
      delete (static_cast<::RooStats::MCMCIntervalPlot*>(p));
   }
   static void deleteArray_RooStatscLcLMCMCIntervalPlot(void *p) {
      delete [] (static_cast<::RooStats::MCMCIntervalPlot*>(p));
   }
   static void destruct_RooStatscLcLMCMCIntervalPlot(void *p) {
      typedef ::RooStats::MCMCIntervalPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MCMCIntervalPlot

namespace RooStats {
//______________________________________________________________________________
void MetropolisHastings::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::MetropolisHastings.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::MetropolisHastings::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::MetropolisHastings::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLMetropolisHastings(void *p) {
      return  p ? new(p) ::RooStats::MetropolisHastings : new ::RooStats::MetropolisHastings;
   }
   static void *newArray_RooStatscLcLMetropolisHastings(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::MetropolisHastings[nElements] : new ::RooStats::MetropolisHastings[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLMetropolisHastings(void *p) {
      delete (static_cast<::RooStats::MetropolisHastings*>(p));
   }
   static void deleteArray_RooStatscLcLMetropolisHastings(void *p) {
      delete [] (static_cast<::RooStats::MetropolisHastings*>(p));
   }
   static void destruct_RooStatscLcLMetropolisHastings(void *p) {
      typedef ::RooStats::MetropolisHastings current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::MetropolisHastings

namespace RooStats {
//______________________________________________________________________________
void NeymanConstruction::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::NeymanConstruction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::NeymanConstruction::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::NeymanConstruction::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLNeymanConstruction(void *p) {
      delete (static_cast<::RooStats::NeymanConstruction*>(p));
   }
   static void deleteArray_RooStatscLcLNeymanConstruction(void *p) {
      delete [] (static_cast<::RooStats::NeymanConstruction*>(p));
   }
   static void destruct_RooStatscLcLNeymanConstruction(void *p) {
      typedef ::RooStats::NeymanConstruction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::NeymanConstruction

namespace RooStats {
//______________________________________________________________________________
void NumberCountingPdfFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::NumberCountingPdfFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::NumberCountingPdfFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::NumberCountingPdfFactory::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLNumberCountingPdfFactory(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::NumberCountingPdfFactory : new ::RooStats::NumberCountingPdfFactory;
   }
   static void *newArray_RooStatscLcLNumberCountingPdfFactory(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::NumberCountingPdfFactory[nElements] : new ::RooStats::NumberCountingPdfFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLNumberCountingPdfFactory(void *p) {
      delete (static_cast<::RooStats::NumberCountingPdfFactory*>(p));
   }
   static void deleteArray_RooStatscLcLNumberCountingPdfFactory(void *p) {
      delete [] (static_cast<::RooStats::NumberCountingPdfFactory*>(p));
   }
   static void destruct_RooStatscLcLNumberCountingPdfFactory(void *p) {
      typedef ::RooStats::NumberCountingPdfFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::NumberCountingPdfFactory

namespace RooStats {
//______________________________________________________________________________
void NumEventsTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::NumEventsTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::NumEventsTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::NumEventsTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLNumEventsTestStat(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::NumEventsTestStat : new ::RooStats::NumEventsTestStat;
   }
   static void *newArray_RooStatscLcLNumEventsTestStat(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::NumEventsTestStat[nElements] : new ::RooStats::NumEventsTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLNumEventsTestStat(void *p) {
      delete (static_cast<::RooStats::NumEventsTestStat*>(p));
   }
   static void deleteArray_RooStatscLcLNumEventsTestStat(void *p) {
      delete [] (static_cast<::RooStats::NumEventsTestStat*>(p));
   }
   static void destruct_RooStatscLcLNumEventsTestStat(void *p) {
      typedef ::RooStats::NumEventsTestStat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::NumEventsTestStat

namespace RooStats {
//______________________________________________________________________________
void PdfProposal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::PdfProposal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::PdfProposal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::PdfProposal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLPdfProposal(void *p) {
      return  p ? new(p) ::RooStats::PdfProposal : new ::RooStats::PdfProposal;
   }
   static void *newArray_RooStatscLcLPdfProposal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::PdfProposal[nElements] : new ::RooStats::PdfProposal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLPdfProposal(void *p) {
      delete (static_cast<::RooStats::PdfProposal*>(p));
   }
   static void deleteArray_RooStatscLcLPdfProposal(void *p) {
      delete [] (static_cast<::RooStats::PdfProposal*>(p));
   }
   static void destruct_RooStatscLcLPdfProposal(void *p) {
      typedef ::RooStats::PdfProposal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::PdfProposal

namespace RooStats {
//______________________________________________________________________________
void ProfileInspector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProfileInspector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProfileInspector::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProfileInspector::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProfileInspector(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::ProfileInspector : new ::RooStats::ProfileInspector;
   }
   static void *newArray_RooStatscLcLProfileInspector(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::ProfileInspector[nElements] : new ::RooStats::ProfileInspector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProfileInspector(void *p) {
      delete (static_cast<::RooStats::ProfileInspector*>(p));
   }
   static void deleteArray_RooStatscLcLProfileInspector(void *p) {
      delete [] (static_cast<::RooStats::ProfileInspector*>(p));
   }
   static void destruct_RooStatscLcLProfileInspector(void *p) {
      typedef ::RooStats::ProfileInspector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProfileInspector

namespace RooStats {
//______________________________________________________________________________
void ProfileLikelihoodCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProfileLikelihoodCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProfileLikelihoodCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProfileLikelihoodCalculator::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::ProfileLikelihoodCalculator : new ::RooStats::ProfileLikelihoodCalculator;
   }
   static void *newArray_RooStatscLcLProfileLikelihoodCalculator(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::ProfileLikelihoodCalculator[nElements] : new ::RooStats::ProfileLikelihoodCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      delete (static_cast<::RooStats::ProfileLikelihoodCalculator*>(p));
   }
   static void deleteArray_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      delete [] (static_cast<::RooStats::ProfileLikelihoodCalculator*>(p));
   }
   static void destruct_RooStatscLcLProfileLikelihoodCalculator(void *p) {
      typedef ::RooStats::ProfileLikelihoodCalculator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProfileLikelihoodCalculator

namespace RooStats {
//______________________________________________________________________________
void ProfileLikelihoodTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProfileLikelihoodTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProfileLikelihoodTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProfileLikelihoodTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      delete (static_cast<::RooStats::ProfileLikelihoodTestStat*>(p));
   }
   static void deleteArray_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      delete [] (static_cast<::RooStats::ProfileLikelihoodTestStat*>(p));
   }
   static void destruct_RooStatscLcLProfileLikelihoodTestStat(void *p) {
      typedef ::RooStats::ProfileLikelihoodTestStat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProfileLikelihoodTestStat

namespace RooStats {
//______________________________________________________________________________
void UniformProposal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::UniformProposal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::UniformProposal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::UniformProposal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLUniformProposal(void *p) {
      return  p ? new(p) ::RooStats::UniformProposal : new ::RooStats::UniformProposal;
   }
   static void *newArray_RooStatscLcLUniformProposal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::UniformProposal[nElements] : new ::RooStats::UniformProposal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLUniformProposal(void *p) {
      delete (static_cast<::RooStats::UniformProposal*>(p));
   }
   static void deleteArray_RooStatscLcLUniformProposal(void *p) {
      delete [] (static_cast<::RooStats::UniformProposal*>(p));
   }
   static void destruct_RooStatscLcLUniformProposal(void *p) {
      typedef ::RooStats::UniformProposal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::UniformProposal

namespace RooStats {
//______________________________________________________________________________
void ProposalHelper::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ProposalHelper.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ProposalHelper::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ProposalHelper::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLProposalHelper(void *p) {
      return  p ? new(p) ::RooStats::ProposalHelper : new ::RooStats::ProposalHelper;
   }
   static void *newArray_RooStatscLcLProposalHelper(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::ProposalHelper[nElements] : new ::RooStats::ProposalHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLProposalHelper(void *p) {
      delete (static_cast<::RooStats::ProposalHelper*>(p));
   }
   static void deleteArray_RooStatscLcLProposalHelper(void *p) {
      delete [] (static_cast<::RooStats::ProposalHelper*>(p));
   }
   static void destruct_RooStatscLcLProposalHelper(void *p) {
      typedef ::RooStats::ProposalHelper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ProposalHelper

namespace RooStats {
//______________________________________________________________________________
void RatioOfProfiledLikelihoodsTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::RatioOfProfiledLikelihoodsTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::RatioOfProfiledLikelihoodsTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::RatioOfProfiledLikelihoodsTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      delete (static_cast<::RooStats::RatioOfProfiledLikelihoodsTestStat*>(p));
   }
   static void deleteArray_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      delete [] (static_cast<::RooStats::RatioOfProfiledLikelihoodsTestStat*>(p));
   }
   static void destruct_RooStatscLcLRatioOfProfiledLikelihoodsTestStat(void *p) {
      typedef ::RooStats::RatioOfProfiledLikelihoodsTestStat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::RatioOfProfiledLikelihoodsTestStat

namespace RooStats {
//______________________________________________________________________________
void SequentialProposal::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SequentialProposal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SequentialProposal::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SequentialProposal::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSequentialProposal(void *p) {
      return  p ? new(p) ::RooStats::SequentialProposal : new ::RooStats::SequentialProposal;
   }
   static void *newArray_RooStatscLcLSequentialProposal(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SequentialProposal[nElements] : new ::RooStats::SequentialProposal[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSequentialProposal(void *p) {
      delete (static_cast<::RooStats::SequentialProposal*>(p));
   }
   static void deleteArray_RooStatscLcLSequentialProposal(void *p) {
      delete [] (static_cast<::RooStats::SequentialProposal*>(p));
   }
   static void destruct_RooStatscLcLSequentialProposal(void *p) {
      typedef ::RooStats::SequentialProposal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SequentialProposal

namespace RooStats {
//______________________________________________________________________________
void SimpleLikelihoodRatioTestStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SimpleLikelihoodRatioTestStat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SimpleLikelihoodRatioTestStat::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SimpleLikelihoodRatioTestStat::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::SimpleLikelihoodRatioTestStat : new ::RooStats::SimpleLikelihoodRatioTestStat;
   }
   static void *newArray_RooStatscLcLSimpleLikelihoodRatioTestStat(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooStats::SimpleLikelihoodRatioTestStat[nElements] : new ::RooStats::SimpleLikelihoodRatioTestStat[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      delete (static_cast<::RooStats::SimpleLikelihoodRatioTestStat*>(p));
   }
   static void deleteArray_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      delete [] (static_cast<::RooStats::SimpleLikelihoodRatioTestStat*>(p));
   }
   static void destruct_RooStatscLcLSimpleLikelihoodRatioTestStat(void *p) {
      typedef ::RooStats::SimpleLikelihoodRatioTestStat current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SimpleLikelihoodRatioTestStat

namespace RooStats {
//______________________________________________________________________________
void SPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::SPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::SPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::SPlot::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrappers around operator new
   static void *new_RooStatscLcLSPlot(void *p) {
      return  p ? new(p) ::RooStats::SPlot : new ::RooStats::SPlot;
   }
   static void *newArray_RooStatscLcLSPlot(Long_t nElements, void *p) {
      return p ? new(p) ::RooStats::SPlot[nElements] : new ::RooStats::SPlot[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooStatscLcLSPlot(void *p) {
      delete (static_cast<::RooStats::SPlot*>(p));
   }
   static void deleteArray_RooStatscLcLSPlot(void *p) {
      delete [] (static_cast<::RooStats::SPlot*>(p));
   }
   static void destruct_RooStatscLcLSPlot(void *p) {
      typedef ::RooStats::SPlot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::SPlot

namespace RooStats {
//______________________________________________________________________________
void ToyMCImportanceSampler::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::ToyMCImportanceSampler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::ToyMCImportanceSampler::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::ToyMCImportanceSampler::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLToyMCImportanceSampler(void *p) {
      delete (static_cast<::RooStats::ToyMCImportanceSampler*>(p));
   }
   static void deleteArray_RooStatscLcLToyMCImportanceSampler(void *p) {
      delete [] (static_cast<::RooStats::ToyMCImportanceSampler*>(p));
   }
   static void destruct_RooStatscLcLToyMCImportanceSampler(void *p) {
      typedef ::RooStats::ToyMCImportanceSampler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::ToyMCImportanceSampler

namespace RooStats {
//______________________________________________________________________________
void UpperLimitMCSModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class RooStats::UpperLimitMCSModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RooStats::UpperLimitMCSModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(RooStats::UpperLimitMCSModule::Class(),this);
   }
}

} // namespace RooStats
namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooStatscLcLUpperLimitMCSModule(void *p) {
      delete (static_cast<::RooStats::UpperLimitMCSModule*>(p));
   }
   static void deleteArray_RooStatscLcLUpperLimitMCSModule(void *p) {
      delete [] (static_cast<::RooStats::UpperLimitMCSModule*>(p));
   }
   static void destruct_RooStatscLcLUpperLimitMCSModule(void *p) {
      typedef ::RooStats::UpperLimitMCSModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooStats::UpperLimitMCSModule

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
   static TClass *vectorlERooStatscLcLSamplingSummarygR_Dictionary();
   static void vectorlERooStatscLcLSamplingSummarygR_TClassManip(TClass*);
   static void *new_vectorlERooStatscLcLSamplingSummarygR(void *p = nullptr);
   static void *newArray_vectorlERooStatscLcLSamplingSummarygR(Long_t size, void *p);
   static void delete_vectorlERooStatscLcLSamplingSummarygR(void *p);
   static void deleteArray_vectorlERooStatscLcLSamplingSummarygR(void *p);
   static void destruct_vectorlERooStatscLcLSamplingSummarygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooStats::SamplingSummary>*)
   {
      vector<RooStats::SamplingSummary> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooStats::SamplingSummary>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooStats::SamplingSummary>", -2, "functional", 86,
                  typeid(vector<RooStats::SamplingSummary>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooStatscLcLSamplingSummarygR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooStats::SamplingSummary>) );
      instance.SetNew(&new_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetNewArray(&newArray_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetDelete(&delete_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetDeleteArray(&deleteArray_vectorlERooStatscLcLSamplingSummarygR);
      instance.SetDestructor(&destruct_vectorlERooStatscLcLSamplingSummarygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooStats::SamplingSummary> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooStats::SamplingSummary>","std::__1::vector<RooStats::SamplingSummary, std::__1::allocator<RooStats::SamplingSummary>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooStats::SamplingSummary>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooStatscLcLSamplingSummarygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooStats::SamplingSummary>*>(nullptr))->GetClass();
      vectorlERooStatscLcLSamplingSummarygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooStatscLcLSamplingSummarygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::SamplingSummary> : new vector<RooStats::SamplingSummary>;
   }
   static void *newArray_vectorlERooStatscLcLSamplingSummarygR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooStats::SamplingSummary>[nElements] : new vector<RooStats::SamplingSummary>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      delete (static_cast<vector<RooStats::SamplingSummary>*>(p));
   }
   static void deleteArray_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      delete [] (static_cast<vector<RooStats::SamplingSummary>*>(p));
   }
   static void destruct_vectorlERooStatscLcLSamplingSummarygR(void *p) {
      typedef vector<RooStats::SamplingSummary> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooStats::SamplingSummary>

namespace ROOT {
   static TClass *vectorlERooRealVarmUgR_Dictionary();
   static void vectorlERooRealVarmUgR_TClassManip(TClass*);
   static void *new_vectorlERooRealVarmUgR(void *p = nullptr);
   static void *newArray_vectorlERooRealVarmUgR(Long_t size, void *p);
   static void delete_vectorlERooRealVarmUgR(void *p);
   static void deleteArray_vectorlERooRealVarmUgR(void *p);
   static void destruct_vectorlERooRealVarmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RooRealVar*>*)
   {
      vector<RooRealVar*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RooRealVar*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RooRealVar*>", -2, "functional", 86,
                  typeid(vector<RooRealVar*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERooRealVarmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RooRealVar*>) );
      instance.SetNew(&new_vectorlERooRealVarmUgR);
      instance.SetNewArray(&newArray_vectorlERooRealVarmUgR);
      instance.SetDelete(&delete_vectorlERooRealVarmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERooRealVarmUgR);
      instance.SetDestructor(&destruct_vectorlERooRealVarmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RooRealVar*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<RooRealVar*>","std::__1::vector<RooRealVar*, std::__1::allocator<RooRealVar*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<RooRealVar*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERooRealVarmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<RooRealVar*>*>(nullptr))->GetClass();
      vectorlERooRealVarmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERooRealVarmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERooRealVarmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooRealVar*> : new vector<RooRealVar*>;
   }
   static void *newArray_vectorlERooRealVarmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<RooRealVar*>[nElements] : new vector<RooRealVar*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERooRealVarmUgR(void *p) {
      delete (static_cast<vector<RooRealVar*>*>(p));
   }
   static void deleteArray_vectorlERooRealVarmUgR(void *p) {
      delete [] (static_cast<vector<RooRealVar*>*>(p));
   }
   static void destruct_vectorlERooRealVarmUgR(void *p) {
      typedef vector<RooRealVar*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<RooRealVar*>

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
   static TClass *maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOpairlEdoublecOdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_maplEintcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,pair<double,double> >*)
   {
      map<int,pair<double,double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,pair<double,double> >", -2, "map", 975,
                  typeid(map<int,pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,pair<double,double> >) );
      instance.SetNew(&new_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEintcOpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,pair<double,double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,pair<double,double> >","std::__1::map<int, std::__1::pair<double, double>, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, std::__1::pair<double, double>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,pair<double,double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,pair<double,double> >*>(nullptr))->GetClass();
      maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,pair<double,double> > : new map<int,pair<double,double> >;
   }
   static void *newArray_maplEintcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,pair<double,double> >[nElements] : new map<int,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete (static_cast<map<int,pair<double,double> >*>(p));
   }
   static void deleteArray_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] (static_cast<map<int,pair<double,double> >*>(p));
   }
   static void destruct_maplEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef map<int,pair<double,double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,pair<double,double> >

namespace ROOT {
   static TClass *maplEintcORooStatscLcLAcceptanceRegiongR_Dictionary();
   static void maplEintcORooStatscLcLAcceptanceRegiongR_TClassManip(TClass*);
   static void *new_maplEintcORooStatscLcLAcceptanceRegiongR(void *p = nullptr);
   static void *newArray_maplEintcORooStatscLcLAcceptanceRegiongR(Long_t size, void *p);
   static void delete_maplEintcORooStatscLcLAcceptanceRegiongR(void *p);
   static void deleteArray_maplEintcORooStatscLcLAcceptanceRegiongR(void *p);
   static void destruct_maplEintcORooStatscLcLAcceptanceRegiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,RooStats::AcceptanceRegion>*)
   {
      map<int,RooStats::AcceptanceRegion> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,RooStats::AcceptanceRegion>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,RooStats::AcceptanceRegion>", -2, "map", 975,
                  typeid(map<int,RooStats::AcceptanceRegion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcORooStatscLcLAcceptanceRegiongR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,RooStats::AcceptanceRegion>) );
      instance.SetNew(&new_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetNewArray(&newArray_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetDelete(&delete_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetDeleteArray(&deleteArray_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.SetDestructor(&destruct_maplEintcORooStatscLcLAcceptanceRegiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,RooStats::AcceptanceRegion> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,RooStats::AcceptanceRegion>","std::__1::map<int, RooStats::AcceptanceRegion, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, RooStats::AcceptanceRegion>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,RooStats::AcceptanceRegion>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcORooStatscLcLAcceptanceRegiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,RooStats::AcceptanceRegion>*>(nullptr))->GetClass();
      maplEintcORooStatscLcLAcceptanceRegiongR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcORooStatscLcLAcceptanceRegiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,RooStats::AcceptanceRegion> : new map<int,RooStats::AcceptanceRegion>;
   }
   static void *newArray_maplEintcORooStatscLcLAcceptanceRegiongR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,RooStats::AcceptanceRegion>[nElements] : new map<int,RooStats::AcceptanceRegion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      delete (static_cast<map<int,RooStats::AcceptanceRegion>*>(p));
   }
   static void deleteArray_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      delete [] (static_cast<map<int,RooStats::AcceptanceRegion>*>(p));
   }
   static void destruct_maplEintcORooStatscLcLAcceptanceRegiongR(void *p) {
      typedef map<int,RooStats::AcceptanceRegion> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,RooStats::AcceptanceRegion>

namespace ROOT {
   static TClass *maplERooRealVarmUcORooAbsRealmUgR_Dictionary();
   static void maplERooRealVarmUcORooAbsRealmUgR_TClassManip(TClass*);
   static void *new_maplERooRealVarmUcORooAbsRealmUgR(void *p = nullptr);
   static void *newArray_maplERooRealVarmUcORooAbsRealmUgR(Long_t size, void *p);
   static void delete_maplERooRealVarmUcORooAbsRealmUgR(void *p);
   static void deleteArray_maplERooRealVarmUcORooAbsRealmUgR(void *p);
   static void destruct_maplERooRealVarmUcORooAbsRealmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<RooRealVar*,RooAbsReal*>*)
   {
      map<RooRealVar*,RooAbsReal*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<RooRealVar*,RooAbsReal*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<RooRealVar*,RooAbsReal*>", -2, "map", 975,
                  typeid(map<RooRealVar*,RooAbsReal*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplERooRealVarmUcORooAbsRealmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<RooRealVar*,RooAbsReal*>) );
      instance.SetNew(&new_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetNewArray(&newArray_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetDelete(&delete_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetDeleteArray(&deleteArray_maplERooRealVarmUcORooAbsRealmUgR);
      instance.SetDestructor(&destruct_maplERooRealVarmUcORooAbsRealmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<RooRealVar*,RooAbsReal*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<RooRealVar*,RooAbsReal*>","std::__1::map<RooRealVar*, RooAbsReal*, std::__1::less<RooRealVar*>, std::__1::allocator<std::__1::pair<RooRealVar* const, RooAbsReal*>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<RooRealVar*,RooAbsReal*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplERooRealVarmUcORooAbsRealmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<RooRealVar*,RooAbsReal*>*>(nullptr))->GetClass();
      maplERooRealVarmUcORooAbsRealmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplERooRealVarmUcORooAbsRealmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<RooRealVar*,RooAbsReal*> : new map<RooRealVar*,RooAbsReal*>;
   }
   static void *newArray_maplERooRealVarmUcORooAbsRealmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<RooRealVar*,RooAbsReal*>[nElements] : new map<RooRealVar*,RooAbsReal*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      delete (static_cast<map<RooRealVar*,RooAbsReal*>*>(p));
   }
   static void deleteArray_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      delete [] (static_cast<map<RooRealVar*,RooAbsReal*>*>(p));
   }
   static void destruct_maplERooRealVarmUcORooAbsRealmUgR(void *p) {
      typedef map<RooRealVar*,RooAbsReal*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<RooRealVar*,RooAbsReal*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRooStats() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRooStats) = RecordReadRules_libRooStats();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRooStats));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRooStats_Impl() {
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
      TROOT::RegisterModule("libRooStats",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooStats_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooStats_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooStats() {
  TriggerDictionaryInitialization_libRooStats_Impl();
}
