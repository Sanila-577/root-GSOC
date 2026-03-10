// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTTMVASofieParser
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
#include "TMVA/RModelParser_ONNX.hxx"
#include "TMVA/RModelParser_Keras.h"
#include "TMVA/RModelParser_PyTorch.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX_Dictionary();
   static void TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX_TClassManip(TClass*);
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p = nullptr);
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(Long_t size, void *p);
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p);
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p);
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMVA::Experimental::SOFIE::RModelParser_ONNX*)
   {
      ::TMVA::Experimental::SOFIE::RModelParser_ONNX *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMVA::Experimental::SOFIE::RModelParser_ONNX));
      static ::ROOT::TGenericClassInfo 
         instance("TMVA::Experimental::SOFIE::RModelParser_ONNX", "TMVA/RModelParser_ONNX.hxx", 28,
                  typeid(::TMVA::Experimental::SOFIE::RModelParser_ONNX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX_Dictionary, isa_proxy, 4,
                  sizeof(::TMVA::Experimental::SOFIE::RModelParser_ONNX) );
      instance.SetNew(&new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX);
      instance.SetNewArray(&newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX);
      instance.SetDelete(&delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX);
      instance.SetDeleteArray(&deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX);
      instance.SetDestructor(&destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMVA::Experimental::SOFIE::RModelParser_ONNX*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMVA::Experimental::SOFIE::RModelParser_ONNX*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::RModelParser_ONNX*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMVA::Experimental::SOFIE::RModelParser_ONNX*>(nullptr))->GetClass();
      TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX_TClassManip(theClass);
   return theClass;
   }

   static void TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::RModelParser_ONNX : new ::TMVA::Experimental::SOFIE::RModelParser_ONNX;
   }
   static void *newArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TMVA::Experimental::SOFIE::RModelParser_ONNX[nElements] : new ::TMVA::Experimental::SOFIE::RModelParser_ONNX[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p) {
      delete (static_cast<::TMVA::Experimental::SOFIE::RModelParser_ONNX*>(p));
   }
   static void deleteArray_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p) {
      delete [] (static_cast<::TMVA::Experimental::SOFIE::RModelParser_ONNX*>(p));
   }
   static void destruct_TMVAcLcLExperimentalcLcLSOFIEcLcLRModelParser_ONNX(void *p) {
      typedef ::TMVA::Experimental::SOFIE::RModelParser_ONNX current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMVA::Experimental::SOFIE::RModelParser_ONNX

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 76,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bool>","std::__1::vector<bool, std::__1::allocator<bool>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr))->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete (static_cast<vector<bool>*>(p));
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] (static_cast<vector<bool>*>(p));
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR_Dictionary();
   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR_TClassManip(TClass*);
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p = nullptr);
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(Long_t size, void *p);
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p);
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p);
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>*)
   {
      unordered_map<string,TMVA::Experimental::SOFIE::ETensorType> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>));
      static ::ROOT::TGenericClassInfo 
         instance("unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>", -2, "unordered_map", 1040,
                  typeid(unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR_Dictionary, isa_proxy, 0,
                  sizeof(unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>) );
      instance.SetNew(&new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR);
      instance.SetNewArray(&newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR);
      instance.SetDelete(&delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR);
      instance.SetDeleteArray(&deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR);
      instance.SetDestructor(&destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< unordered_map<string,TMVA::Experimental::SOFIE::ETensorType> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>","std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, TMVA::Experimental::SOFIE::ETensorType, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const, TMVA::Experimental::SOFIE::ETensorType>>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>*>(nullptr))->GetClass();
      unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR_TClassManip(theClass);
   return theClass;
   }

   static void unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::ETensorType> : new unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>;
   }
   static void *newArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>[nElements] : new unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>[nElements];
   }
   // Wrapper around operator delete
   static void delete_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p) {
      delete (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>*>(p));
   }
   static void deleteArray_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p) {
      delete [] (static_cast<unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>*>(p));
   }
   static void destruct_unordered_maplEstringcOTMVAcLcLExperimentalcLcLSOFIEcLcLETensorTypegR(void *p) {
      typedef unordered_map<string,TMVA::Experimental::SOFIE::ETensorType> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class unordered_map<string,TMVA::Experimental::SOFIE::ETensorType>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTTMVASofieParser() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTTMVASofieParser) = RecordReadRules_libROOTTMVASofieParser();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTTMVASofieParser));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTTMVASofieParser_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/opt/homebrew/include",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libROOTTMVASofieParser",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTTMVASofieParser_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTTMVASofieParser_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTTMVASofieParser() {
  TriggerDictionaryInitialization_libROOTTMVASofieParser_Impl();
}
