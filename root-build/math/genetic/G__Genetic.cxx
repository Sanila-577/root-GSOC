// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Genetic
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
#include "Math/GeneticMinimizer.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGeneticMinimizerParameters_Dictionary();
   static void ROOTcLcLMathcLcLGeneticMinimizerParameters_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p = nullptr);
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p);
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GeneticMinimizerParameters*)
   {
      ::ROOT::Math::GeneticMinimizerParameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GeneticMinimizerParameters));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GeneticMinimizerParameters", "Math/GeneticMinimizer.h", 35,
                  typeid(::ROOT::Math::GeneticMinimizerParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGeneticMinimizerParameters_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GeneticMinimizerParameters) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGeneticMinimizerParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GeneticMinimizerParameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Math::GeneticMinimizerParameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::GeneticMinimizerParameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGeneticMinimizerParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::GeneticMinimizerParameters*>(nullptr))->GetClass();
      ROOTcLcLMathcLcLGeneticMinimizerParameters_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGeneticMinimizerParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLMathcLcLGeneticMinimizer_Dictionary();
   static void ROOTcLcLMathcLcLGeneticMinimizer_TClassManip(TClass*);
   static void *new_ROOTcLcLMathcLcLGeneticMinimizer(void *p = nullptr);
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizer(Long_t size, void *p);
   static void delete_ROOTcLcLMathcLcLGeneticMinimizer(void *p);
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizer(void *p);
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Math::GeneticMinimizer*)
   {
      ::ROOT::Math::GeneticMinimizer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Math::GeneticMinimizer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Math::GeneticMinimizer", "Math/GeneticMinimizer.h", 61,
                  typeid(::ROOT::Math::GeneticMinimizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLMathcLcLGeneticMinimizer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Math::GeneticMinimizer) );
      instance.SetNew(&new_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetNewArray(&newArray_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetDelete(&delete_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLMathcLcLGeneticMinimizer);
      instance.SetDestructor(&destruct_ROOTcLcLMathcLcLGeneticMinimizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Math::GeneticMinimizer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Math::GeneticMinimizer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::GeneticMinimizer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLMathcLcLGeneticMinimizer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Math::GeneticMinimizer*>(nullptr))->GetClass();
      ROOTcLcLMathcLcLGeneticMinimizer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLMathcLcLGeneticMinimizer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Math::GeneticMinimizerParameters : new ::ROOT::Math::GeneticMinimizerParameters;
   }
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Math::GeneticMinimizerParameters[nElements] : new ::ROOT::Math::GeneticMinimizerParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      delete (static_cast<::ROOT::Math::GeneticMinimizerParameters*>(p));
   }
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      delete [] (static_cast<::ROOT::Math::GeneticMinimizerParameters*>(p));
   }
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizerParameters(void *p) {
      typedef ::ROOT::Math::GeneticMinimizerParameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GeneticMinimizerParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Math::GeneticMinimizer : new ::ROOT::Math::GeneticMinimizer;
   }
   static void *newArray_ROOTcLcLMathcLcLGeneticMinimizer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::Math::GeneticMinimizer[nElements] : new ::ROOT::Math::GeneticMinimizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      delete (static_cast<::ROOT::Math::GeneticMinimizer*>(p));
   }
   static void deleteArray_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      delete [] (static_cast<::ROOT::Math::GeneticMinimizer*>(p));
   }
   static void destruct_ROOTcLcLMathcLcLGeneticMinimizer(void *p) {
      typedef ::ROOT::Math::GeneticMinimizer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Math::GeneticMinimizer

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
   static TClass *vectorlETMVAcLcLIntervalmUgR_Dictionary();
   static void vectorlETMVAcLcLIntervalmUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLIntervalmUgR(void *p = nullptr);
   static void *newArray_vectorlETMVAcLcLIntervalmUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLIntervalmUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLIntervalmUgR(void *p);
   static void destruct_vectorlETMVAcLcLIntervalmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Interval*>*)
   {
      vector<TMVA::Interval*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Interval*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Interval*>", -2, "functional", 86,
                  typeid(vector<TMVA::Interval*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLIntervalmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Interval*>) );
      instance.SetNew(&new_vectorlETMVAcLcLIntervalmUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLIntervalmUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLIntervalmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLIntervalmUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLIntervalmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Interval*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<TMVA::Interval*>","std::__1::vector<TMVA::Interval*, std::__1::allocator<TMVA::Interval*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<TMVA::Interval*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLIntervalmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<TMVA::Interval*>*>(nullptr))->GetClass();
      vectorlETMVAcLcLIntervalmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLIntervalmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLIntervalmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TMVA::Interval*> : new vector<TMVA::Interval*>;
   }
   static void *newArray_vectorlETMVAcLcLIntervalmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<TMVA::Interval*>[nElements] : new vector<TMVA::Interval*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLIntervalmUgR(void *p) {
      delete (static_cast<vector<TMVA::Interval*>*>(p));
   }
   static void deleteArray_vectorlETMVAcLcLIntervalmUgR(void *p) {
      delete [] (static_cast<vector<TMVA::Interval*>*>(p));
   }
   static void destruct_vectorlETMVAcLcLIntervalmUgR(void *p) {
      typedef vector<TMVA::Interval*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Interval*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGenetic() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGenetic) = RecordReadRules_libGenetic();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGenetic));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGenetic_Impl() {
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
      TROOT::RegisterModule("libGenetic",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGenetic_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGenetic_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGenetic() {
  TriggerDictionaryInitialization_libGenetic_Impl();
}
