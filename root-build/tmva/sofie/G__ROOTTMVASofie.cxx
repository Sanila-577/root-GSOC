// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTTMVASofie
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
#include "TMVA/OperatorList.hxx"
#include "TMVA/RModel_Base.hxx"
#include "TMVA/RModel.hxx"
#include "TMVA/ROperator.hxx"
#include "TMVA/ROperator_Basic_Is.hxx"
#include "TMVA/ROperator_BasicUnary.hxx"
#include "TMVA/ROperator_BasicBinary.hxx"
#include "TMVA/ROperator_BasicNary.hxx"
#include "TMVA/ROperator_BatchNormalization.hxx"
#include "TMVA/ROperator_Conv.hxx"
#include "TMVA/ROperator_ConvTranspose.hxx"
#include "TMVA/ROperator_Gemm.hxx"
#include "TMVA/ROperator_Relu.hxx"
#include "TMVA/ROperator_Tanh.hxx"
#include "TMVA/ROperator_LeakyRelu.hxx"
#include "TMVA/ROperator_Reshape.hxx"
#include "TMVA/ROperator_Selu.hxx"
#include "TMVA/ROperator_Sigmoid.hxx"
#include "TMVA/ROperator_Slice.hxx"
#include "TMVA/ROperator_Transpose.hxx"
#include "TMVA/ROperator_Pool.hxx"
#include "TMVA/ROperator_Concat.hxx"
#include "TMVA/ROperator_Identity.hxx"
#include "TMVA/ROperator_Constant.hxx"
#include "TMVA/ROperator_Softmax.hxx"
#include "TMVA/ROperator_Reduce.hxx"
#include "TMVA/ROperator_Shape.hxx"
#include "TMVA/ROperator_Cast.hxx"
#include "TMVA/ROperator_Custom.hxx"
#include "TMVA/ROperator_LayerNormalization.hxx"
#include "TMVA/ROperator_Expand.hxx"
#include "TMVA/ROperator_Erf.hxx"
#include "TMVA/ROperator_Swish.hxx"
#include "TMVA/ROperator_Elu.hxx"
#include "TMVA/ROperator_Comparision.hxx"
#include "TMVA/ROperator_EyeLike.hxx"
#include "TMVA/ROperator_Range.hxx"
#include "TMVA/ROperator_TopK.hxx"
#include "TMVA/ROperator_Tile.hxx"
#include "TMVA/ROperator_Split.hxx"
#include "TMVA/ROperator_SubGraph.hxx"
#include "TMVA/ROperator_Pad.hxx"
#include "TMVA/ROperator_Where.hxx"
#include "TMVA/ROperator_Einsum.hxx"
#include "TMVA/ROperator_Random.hxx"
#include "TMVA/ROperator_ScatterElements.hxx"
#include "TMVA/ROperator_Gather.hxx"
#include "TMVA/ROperator_GatherND.hxx"
#include "TMVA/ROperator_NonZero.hxx"
#include "TMVA/ROperator_Not.hxx"
#include "TMVA/SOFIE_common.hxx"
#include "TMVA/SOFIEHelpers.hxx"
#include "TMVA/FunctionList.hxx"
#include "TMVA/RModel_GNN.hxx"
#include "TMVA/RModel_GraphIndependent.hxx"
#include "TMVA/RFunction.hxx"
#include "TMVA/RFunction_MLP.hxx"
#include "TMVA/RFunction_Sum.hxx"
#include "TMVA/RFunction_Mean.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace TMVA {
   namespace Experimental {
      namespace SOFIE {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TMVAcLcLExperimentalcLcLSOFIE_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TMVA::Experimental::SOFIE", 0 /*version*/, "TMVA/SOFIE_common.hxx", 26,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TMVAcLcLExperimentalcLcLSOFIE_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TMVAcLcLExperimentalcLcLSOFIE_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLDim_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLDim_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::Dim*)
   {
      ::TMVA::Experimental::SOFIE::Dim *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::Dim));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::Dim", "TMVA/SOFIE_common.hxx", 63,
                  typeid(::TMVA::Experimental::SOFIE::Dim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLDim_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::Dim) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLDim);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLDim);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLDim);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLDim);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLDim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::Dim*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::Dim*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::Dim*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLDim_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::Dim*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLDim_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLDim_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::InputTensorInfo*)
   {
      ::TMVA::Experimental::SOFIE::InputTensorInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::InputTensorInfo));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::InputTensorInfo", "TMVA/SOFIE_common.hxx", 109,
                  typeid(::TMVA::Experimental::SOFIE::InputTensorInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::InputTensorInfo) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::InputTensorInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::InputTensorInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::InputTensorInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::InputTensorInfo*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::TensorInfo*)
   {
      ::TMVA::Experimental::SOFIE::TensorInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::TensorInfo));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::TensorInfo", "TMVA/SOFIE_common.hxx", 114,
                  typeid(::TMVA::Experimental::SOFIE::TensorInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::TensorInfo) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::TensorInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::TensorInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::TensorInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::TensorInfo*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::InitializedTensor*)
   {
      ::TMVA::Experimental::SOFIE::InitializedTensor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::InitializedTensor));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::InitializedTensor", "TMVA/SOFIE_common.hxx", 247,
                  typeid(::TMVA::Experimental::SOFIE::InitializedTensor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::InitializedTensor) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::InitializedTensor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::InitializedTensor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::InitializedTensor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::InitializedTensor*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::GNN_Data*)
   {
      ::TMVA::Experimental::SOFIE::GNN_Data *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::GNN_Data));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::GNN_Data", "TMVA/SOFIE_common.hxx", 703,
                  typeid(::TMVA::Experimental::SOFIE::GNN_Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::GNN_Data) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::GNN_Data*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::GNN_Data*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::GNN_Data*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::GNN_Data*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLROperator_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLROperator_TClassManip(TClass*);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::ROperator*)
   {
      ::TMVA::Experimental::SOFIE::ROperator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::ROperator));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::ROperator", "TMVA/ROperator.hxx", 18,
                  typeid(::TMVA::Experimental::SOFIE::ROperator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLROperator_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::ROperator) );
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::ROperator*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::ROperator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::ROperator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLROperator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::ROperator*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLROperator_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLROperator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::RModel_Base*)
   {
      ::TMVA::Experimental::SOFIE::RModel_Base *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::RModel_Base));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::RModel_Base", "TMVA/RModel_Base.hxx", 45,
                  typeid(::TMVA::Experimental::SOFIE::RModel_Base), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::RModel_Base) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::RModel_Base*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::RModel_Base*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::RModel_Base*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::RModel_Base*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p);
   static void streamer_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::RModel*)
   {
      ::TMVA::Experimental::SOFIE::RModel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMVA::Experimental::SOFIE::RModel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::RModel", ::TMVA::Experimental::SOFIE::RModel::Class_Version(), "TMVA/RModel.hxx", 12,
                  typeid(::TMVA::Experimental::SOFIE::RModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMVA::Experimental::SOFIE::RModel::Dictionary, isa_proxy, 17,
                  sizeof(::TMVA::Experimental::SOFIE::RModel) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel);
      instance.SetStreamerFunc(&streamer_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::RModel*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::RModel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::RModel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace TMVA {
   namespace Experimental {
      namespace SOFIE {
//______________________________________________________________________________
atomic_TClass_ptr RModel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RModel::Class_Name()
{
   return "TMVA::Experimental::SOFIE::RModel";
}

//______________________________________________________________________________
const char *RModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::SOFIE::RModel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::SOFIE::RModel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::SOFIE::RModel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMVA::Experimental::SOFIE::RModel*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TMVA::Experimental::SOFIE
} // namespace TMVA::Experimental::SOFIE
} // namespace TMVA::Experimental::SOFIE
namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::Dim : new ::TMVA::Experimental::SOFIE::Dim;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::Dim[nElements] : new ::TMVA::Experimental::SOFIE::Dim[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::Dim*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::Dim*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLDim(void *p) {
      typedef ::TMVA::Experimental::SOFIE::Dim current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::Dim

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::InputTensorInfo : new ::TMVA::Experimental::SOFIE::InputTensorInfo;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::InputTensorInfo[nElements] : new ::TMVA::Experimental::SOFIE::InputTensorInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::InputTensorInfo*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::InputTensorInfo*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfo(void *p) {
      typedef ::TMVA::Experimental::SOFIE::InputTensorInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::InputTensorInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::TensorInfo : new ::TMVA::Experimental::SOFIE::TensorInfo;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::TensorInfo[nElements] : new ::TMVA::Experimental::SOFIE::TensorInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::TensorInfo*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::TensorInfo*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfo(void *p) {
      typedef ::TMVA::Experimental::SOFIE::TensorInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::TensorInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::InitializedTensor : new ::TMVA::Experimental::SOFIE::InitializedTensor;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::InitializedTensor[nElements] : new ::TMVA::Experimental::SOFIE::InitializedTensor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::InitializedTensor*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::InitializedTensor*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensor(void *p) {
      typedef ::TMVA::Experimental::SOFIE::InitializedTensor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::InitializedTensor

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::GNN_Data : new ::TMVA::Experimental::SOFIE::GNN_Data;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::GNN_Data[nElements] : new ::TMVA::Experimental::SOFIE::GNN_Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::GNN_Data*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::GNN_Data*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLGNN_Data(void *p) {
      typedef ::TMVA::Experimental::SOFIE::GNN_Data current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::GNN_Data

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::ROperator*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::ROperator*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLROperator(void *p) {
      typedef ::TMVA::Experimental::SOFIE::ROperator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::ROperator

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::RModel_Base : new ::TMVA::Experimental::SOFIE::RModel_Base;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::RModel_Base[nElements] : new ::TMVA::Experimental::SOFIE::RModel_Base[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::RModel_Base*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::RModel_Base*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel_Base(void *p) {
      typedef ::TMVA::Experimental::SOFIE::RModel_Base current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::RModel_Base

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::RModel : new ::TMVA::Experimental::SOFIE::RModel;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::RModel[nElements] : new ::TMVA::Experimental::SOFIE::RModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::RModel*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::RModel*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(void *p) {
      typedef ::TMVA::Experimental::SOFIE::RModel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMVAcLcLExperimentalcLcLSOFIEcLcLRModel(TBuffer &buf, void *obj) {
      ((::TMVA::Experimental::SOFIE::RModel*)obj)->::TMVA::Experimental::SOFIE::RModel::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::RModel

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "functional", 86,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned long>","std::__1::vector<unsigned long, std::__1::allocator<unsigned long>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned long>*>(nullptr))->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete (static_cast<vector<unsigned long>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] (static_cast<vector<unsigned long>*>(p));
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

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
   static TClass *vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR_Dictionary();
   static void vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p);
   static void deleteArray_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p);
   static void destruct_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<basic_string_view<char,char_traits<char> > >*)
   {
      vector<basic_string_view<char,char_traits<char> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<basic_string_view<char,char_traits<char> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<basic_string_view<char,char_traits<char> > >", -2, "functional", 86,
                  typeid(vector<basic_string_view<char,char_traits<char> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<basic_string_view<char,char_traits<char> > >) );
      instance.SetNew(&new_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<basic_string_view<char,char_traits<char> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<basic_string_view<char,char_traits<char> > >","std::__1::vector<std::__1::basic_string_view<char, std::__1::char_traits<char>>, std::__1::allocator<std::__1::basic_string_view<char, std::__1::char_traits<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<basic_string_view<char,char_traits<char> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<basic_string_view<char,char_traits<char> > >*>(nullptr))->GetClass();
      vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<basic_string_view<char,char_traits<char> > > : new vector<basic_string_view<char,char_traits<char> > >;
   }
   static void *newArray_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<basic_string_view<char,char_traits<char> > >[nElements] : new vector<basic_string_view<char,char_traits<char> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p) {
      delete (static_cast<vector<basic_string_view<char,char_traits<char> > >*>(p));
   }
   static void deleteArray_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<basic_string_view<char,char_traits<char> > >*>(p));
   }
   static void destruct_vectorlEbasic_string_viewlEcharcOchar_traitslEchargRsPgRsPgR(void *p) {
      typedef vector<basic_string_view<char,char_traits<char> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<basic_string_view<char,char_traits<char> > >

namespace ROOT {
   static TClass *vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR_Dictionary();
   static void vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p = nullptr);
   static void *newArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p);
   static void destruct_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Experimental::SOFIE::ROperator*>*)
   {
      vector<TMVA::Experimental::SOFIE::ROperator*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Experimental::SOFIE::ROperator*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Experimental::SOFIE::ROperator*>", -2, "functional", 86,
                  typeid(vector<TMVA::Experimental::SOFIE::ROperator*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Experimental::SOFIE::ROperator*>) );
      instance.SetNew(&new_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Experimental::SOFIE::ROperator*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TMVA::Experimental::SOFIE::ROperator*>","std::__1::vector<TMVA::Experimental::SOFIE::ROperator*, std::__1::allocator<TMVA::Experimental::SOFIE::ROperator*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TMVA::Experimental::SOFIE::ROperator*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TMVA::Experimental::SOFIE::ROperator*>*>(nullptr))->GetClass();
      vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TMVA::Experimental::SOFIE::ROperator*> : new vector<TMVA::Experimental::SOFIE::ROperator*>;
   }
   static void *newArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TMVA::Experimental::SOFIE::ROperator*>[nElements] : new vector<TMVA::Experimental::SOFIE::ROperator*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p) {
      delete (static_cast<vector<TMVA::Experimental::SOFIE::ROperator*>*>(p));
   }
   static void deleteArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p) {
      delete [] (static_cast<vector<TMVA::Experimental::SOFIE::ROperator*>*>(p));
   }
   static void destruct_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLROperatormUgR(void *p) {
      typedef vector<TMVA::Experimental::SOFIE::ROperator*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Experimental::SOFIE::ROperator*>

namespace ROOT {
   static TClass *vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR_Dictionary();
   static void vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p = nullptr);
   static void *newArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p);
   static void deleteArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p);
   static void destruct_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Experimental::SOFIE::Dim>*)
   {
      vector<TMVA::Experimental::SOFIE::Dim> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Experimental::SOFIE::Dim>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Experimental::SOFIE::Dim>", -2, "functional", 86,
                  typeid(vector<TMVA::Experimental::SOFIE::Dim>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Experimental::SOFIE::Dim>) );
      instance.SetNew(&new_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Experimental::SOFIE::Dim> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TMVA::Experimental::SOFIE::Dim>","std::__1::vector<TMVA::Experimental::SOFIE::Dim, std::__1::allocator<TMVA::Experimental::SOFIE::Dim>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TMVA::Experimental::SOFIE::Dim>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TMVA::Experimental::SOFIE::Dim>*>(nullptr))->GetClass();
      vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TMVA::Experimental::SOFIE::Dim> : new vector<TMVA::Experimental::SOFIE::Dim>;
   }
   static void *newArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TMVA::Experimental::SOFIE::Dim>[nElements] : new vector<TMVA::Experimental::SOFIE::Dim>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p) {
      delete (static_cast<vector<TMVA::Experimental::SOFIE::Dim>*>(p));
   }
   static void deleteArray_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p) {
      delete [] (static_cast<vector<TMVA::Experimental::SOFIE::Dim>*>(p));
   }
   static void destruct_vectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgR(void *p) {
      typedef vector<TMVA::Experimental::SOFIE::Dim> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Experimental::SOFIE::Dim>

namespace ROOT {
   static TClass *unordered_setlEstringgR_Dictionary();
   static void unordered_setlEstringgR_TClassManip(TClass*);
   static void *new_unordered_setlEstringgR(void *p = nullptr);
   static void *newArray_unordered_setlEstringgR(Long_t size, void *p);
   static void delete_unordered_setlEstringgR(void *p);
   static void deleteArray_unordered_setlEstringgR(void *p);
   static void destruct_unordered_setlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_set<string>*)
   {
      unordered_set<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_set<string>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_set<string>", -2, "unordered_set", 597,
                  typeid(unordered_set<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_setlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_set<string>) );
      instance.SetNew(&new_unordered_setlEstringgR);
      instance.SetNewArray(&newArray_unordered_setlEstringgR);
      instance.SetDelete(&delete_unordered_setlEstringgR);
      instance.SetDeleteArray(&deleteArray_unordered_setlEstringgR);
      instance.SetDestructor(&destruct_unordered_setlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< unordered_set<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_set<string>","std::__1::unordered_set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_set<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_setlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_set<string>*>(nullptr))->GetClass();
      unordered_setlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_setlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_setlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_set<string> : new unordered_set<string>;
   }
   static void *newArray_unordered_setlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_set<string>[nElements] : new unordered_set<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_setlEstringgR(void *p) {
      delete (static_cast<unordered_set<string>*>(p));
   }
   static void deleteArray_unordered_setlEstringgR(void *p) {
      delete [] (static_cast<unordered_set<string>*>(p));
   }
   static void destruct_unordered_setlEstringgR(void *p) {
      typedef unordered_set<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_set<string>

namespace ROOT {
   static TClass *unordered_maplEstringcOstringgR_Dictionary();
   static void unordered_maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOstringgR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOstringgR(void *p);
   static void deleteArray_unordered_maplEstringcOstringgR(void *p);
   static void destruct_unordered_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,string>*)
   {
      unordered_map<string,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,string>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,string>) );
      instance.SetNew(&new_unordered_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOstringgR);
      instance.SetDelete(&delete_unordered_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,string>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,string>*>(nullptr))->GetClass();
      unordered_maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,string> : new unordered_map<string,string>;
   }
   static void *newArray_unordered_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,string>[nElements] : new unordered_map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOstringgR(void *p) {
      delete (static_cast<unordered_map<string,string>*>(p));
   }
   static void deleteArray_unordered_maplEstringcOstringgR(void *p) {
      delete [] (static_cast<unordered_map<string,string>*>(p));
   }
   static void destruct_unordered_maplEstringcOstringgR(void *p) {
      typedef unordered_map<string,string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,string>

namespace ROOT {
   static TClass *unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR_Dictionary();
   static void unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p);
   static void deleteArray_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p);
   static void destruct_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >*)
   {
      unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >) );
      instance.SetNew(&new_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR);
      instance.SetDelete(&delete_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::pair<std::__1::vector<TMVA::Experimental::SOFIE::Dim, std::__1::allocator<TMVA::Experimental::SOFIE::Dim>>, bool>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, std::__1::pair<std::__1::vector<TMVA::Experimental::SOFIE::Dim, std::__1::allocator<TMVA::Experimental::SOFIE::Dim>>, bool>>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >*>(nullptr))->GetClass();
      unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> > : new unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >;
   }
   static void *newArray_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >[nElements] : new unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p) {
      delete (static_cast<unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >*>(p));
   }
   static void deleteArray_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p) {
      delete [] (static_cast<unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >*>(p));
   }
   static void destruct_unordered_maplEstringcOpairlEvectorlETMVAcLcLExperimentalcLcLSOFIEcLcLDimgRcOboolgRsPgR(void *p) {
      typedef unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,pair<vector<TMVA::Experimental::SOFIE::Dim>,bool> >

namespace ROOT {
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR_Dictionary();
   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p);
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p);
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>*)
   {
      unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>) );
      instance.SetNew(&new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR);
      instance.SetDelete(&delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, TMVA::Experimental::SOFIE::TensorInfo, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, TMVA::Experimental::SOFIE::TensorInfo>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>*>(nullptr))->GetClass();
      unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo> : new unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>;
   }
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>[nElements] : new unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p) {
      delete (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>*>(p));
   }
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p) {
      delete [] (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>*>(p));
   }
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLTensorInfogR(void *p) {
      typedef unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,TMVA::Experimental::SOFIE::TensorInfo>

namespace ROOT {
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR_Dictionary();
   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p);
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p);
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>*)
   {
      unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>) );
      instance.SetNew(&new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR);
      instance.SetDelete(&delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, TMVA::Experimental::SOFIE::InputTensorInfo, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, TMVA::Experimental::SOFIE::InputTensorInfo>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>*>(nullptr))->GetClass();
      unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo> : new unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>;
   }
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>[nElements] : new unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p) {
      delete (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>*>(p));
   }
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p) {
      delete [] (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>*>(p));
   }
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInputTensorInfogR(void *p) {
      typedef unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,TMVA::Experimental::SOFIE::InputTensorInfo>

namespace ROOT {
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR_Dictionary();
   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p);
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p);
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>*)
   {
      unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>) );
      instance.SetNew(&new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR);
      instance.SetDelete(&delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, TMVA::Experimental::SOFIE::InitializedTensor, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, TMVA::Experimental::SOFIE::InitializedTensor>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>*>(nullptr))->GetClass();
      unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor> : new unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>;
   }
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>[nElements] : new unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p) {
      delete (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>*>(p));
   }
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p) {
      delete [] (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>*>(p));
   }
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLInitializedTensorgR(void *p) {
      typedef unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,TMVA::Experimental::SOFIE::InitializedTensor>

namespace ROOT {
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR_Dictionary();
   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p);
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p);
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>*)
   {
      unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>) );
      instance.SetNew(&new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR);
      instance.SetDelete(&delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, TMVA::Experimental::SOFIE::DynamicTensorInfo, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, TMVA::Experimental::SOFIE::DynamicTensorInfo>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>*>(nullptr))->GetClass();
      unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo> : new unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>;
   }
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>[nElements] : new unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p) {
      delete (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>*>(p));
   }
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p) {
      delete [] (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>*>(p));
   }
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLDynamicTensorInfogR(void *p) {
      typedef unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,TMVA::Experimental::SOFIE::DynamicTensorInfo>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTTMVASofie() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTTMVASofie) = RecordReadRules_libROOTTMVASofie();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTTMVASofie));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTTMVASofie_Impl() {
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
      TROOT::RegisterModule("libROOTTMVASofie",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTTMVASofie_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTTMVASofie_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTTMVASofie() {
  TriggerDictionaryInitialization_libROOTTMVASofie_Impl();
}
