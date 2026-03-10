// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTTreeViewer
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
#include "ROOT/RTreeViewer.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLRTreeViewer_Dictionary();
   static void ROOTcLcLRTreeViewer_TClassManip(TClass*);
   static void *new_ROOTcLcLRTreeViewer(void *p = nullptr);
   static void *newArray_ROOTcLcLRTreeViewer(Long_t size, void *p);
   static void delete_ROOTcLcLRTreeViewer(void *p);
   static void deleteArray_ROOTcLcLRTreeViewer(void *p);
   static void destruct_ROOTcLcLRTreeViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RTreeViewer*)
   {
      ::ROOT::RTreeViewer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RTreeViewer));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RTreeViewer", "ROOT/RTreeViewer.hxx", 34,
                  typeid(::ROOT::RTreeViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRTreeViewer_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RTreeViewer) );
      instance.SetNew(&new_ROOTcLcLRTreeViewer);
      instance.SetNewArray(&newArray_ROOTcLcLRTreeViewer);
      instance.SetDelete(&delete_ROOTcLcLRTreeViewer);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRTreeViewer);
      instance.SetDestructor(&destruct_ROOTcLcLRTreeViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RTreeViewer*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RTreeViewer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RTreeViewer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRTreeViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RTreeViewer*>(nullptr))->GetClass();
      ROOTcLcLRTreeViewer_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRTreeViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRTreeViewercLcLRBranchInfo_Dictionary();
   static void ROOTcLcLRTreeViewercLcLRBranchInfo_TClassManip(TClass*);
   static void *new_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p = nullptr);
   static void *newArray_ROOTcLcLRTreeViewercLcLRBranchInfo(Long_t size, void *p);
   static void delete_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p);
   static void deleteArray_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p);
   static void destruct_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RTreeViewer::RBranchInfo*)
   {
      ::ROOT::RTreeViewer::RBranchInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RTreeViewer::RBranchInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RTreeViewer::RBranchInfo", "ROOT/RTreeViewer.hxx", 43,
                  typeid(::ROOT::RTreeViewer::RBranchInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRTreeViewercLcLRBranchInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RTreeViewer::RBranchInfo) );
      instance.SetNew(&new_ROOTcLcLRTreeViewercLcLRBranchInfo);
      instance.SetNewArray(&newArray_ROOTcLcLRTreeViewercLcLRBranchInfo);
      instance.SetDelete(&delete_ROOTcLcLRTreeViewercLcLRBranchInfo);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRTreeViewercLcLRBranchInfo);
      instance.SetDestructor(&destruct_ROOTcLcLRTreeViewercLcLRBranchInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RTreeViewer::RBranchInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RTreeViewer::RBranchInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RTreeViewer::RBranchInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRTreeViewercLcLRBranchInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RTreeViewer::RBranchInfo*>(nullptr))->GetClass();
      ROOTcLcLRTreeViewercLcLRBranchInfo_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRTreeViewercLcLRBranchInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRTreeViewercLcLRConfig_Dictionary();
   static void ROOTcLcLRTreeViewercLcLRConfig_TClassManip(TClass*);
   static void *new_ROOTcLcLRTreeViewercLcLRConfig(void *p = nullptr);
   static void *newArray_ROOTcLcLRTreeViewercLcLRConfig(Long_t size, void *p);
   static void delete_ROOTcLcLRTreeViewercLcLRConfig(void *p);
   static void deleteArray_ROOTcLcLRTreeViewercLcLRConfig(void *p);
   static void destruct_ROOTcLcLRTreeViewercLcLRConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RTreeViewer::RConfig*)
   {
      ::ROOT::RTreeViewer::RConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RTreeViewer::RConfig));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RTreeViewer::RConfig", "ROOT/RTreeViewer.hxx", 49,
                  typeid(::ROOT::RTreeViewer::RConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRTreeViewercLcLRConfig_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::RTreeViewer::RConfig) );
      instance.SetNew(&new_ROOTcLcLRTreeViewercLcLRConfig);
      instance.SetNewArray(&newArray_ROOTcLcLRTreeViewercLcLRConfig);
      instance.SetDelete(&delete_ROOTcLcLRTreeViewercLcLRConfig);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRTreeViewercLcLRConfig);
      instance.SetDestructor(&destruct_ROOTcLcLRTreeViewercLcLRConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RTreeViewer::RConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RTreeViewer::RConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RTreeViewer::RConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRTreeViewercLcLRConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::RTreeViewer::RConfig*>(nullptr))->GetClass();
      ROOTcLcLRTreeViewercLcLRConfig_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRTreeViewercLcLRConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRTreeViewer(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RTreeViewer : new ::ROOT::RTreeViewer;
   }
   static void *newArray_ROOTcLcLRTreeViewer(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RTreeViewer[nElements] : new ::ROOT::RTreeViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRTreeViewer(void *p) {
      delete (static_cast<::ROOT::RTreeViewer*>(p));
   }
   static void deleteArray_ROOTcLcLRTreeViewer(void *p) {
      delete [] (static_cast<::ROOT::RTreeViewer*>(p));
   }
   static void destruct_ROOTcLcLRTreeViewer(void *p) {
      typedef ::ROOT::RTreeViewer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RTreeViewer

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RTreeViewer::RBranchInfo : new ::ROOT::RTreeViewer::RBranchInfo;
   }
   static void *newArray_ROOTcLcLRTreeViewercLcLRBranchInfo(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RTreeViewer::RBranchInfo[nElements] : new ::ROOT::RTreeViewer::RBranchInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p) {
      delete (static_cast<::ROOT::RTreeViewer::RBranchInfo*>(p));
   }
   static void deleteArray_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p) {
      delete [] (static_cast<::ROOT::RTreeViewer::RBranchInfo*>(p));
   }
   static void destruct_ROOTcLcLRTreeViewercLcLRBranchInfo(void *p) {
      typedef ::ROOT::RTreeViewer::RBranchInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RTreeViewer::RBranchInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRTreeViewercLcLRConfig(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RTreeViewer::RConfig : new ::ROOT::RTreeViewer::RConfig;
   }
   static void *newArray_ROOTcLcLRTreeViewercLcLRConfig(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RTreeViewer::RConfig[nElements] : new ::ROOT::RTreeViewer::RConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRTreeViewercLcLRConfig(void *p) {
      delete (static_cast<::ROOT::RTreeViewer::RConfig*>(p));
   }
   static void deleteArray_ROOTcLcLRTreeViewercLcLRConfig(void *p) {
      delete [] (static_cast<::ROOT::RTreeViewer::RConfig*>(p));
   }
   static void destruct_ROOTcLcLRTreeViewercLcLRConfig(void *p) {
      typedef ::ROOT::RTreeViewer::RConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RTreeViewer::RConfig

namespace ROOT {
   static TClass *vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR_Dictionary();
   static void vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p);
   static void deleteArray_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p);
   static void destruct_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::RTreeViewer::RBranchInfo>*)
   {
      vector<ROOT::RTreeViewer::RBranchInfo> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::RTreeViewer::RBranchInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::RTreeViewer::RBranchInfo>", -2, "functional", 86,
                  typeid(vector<ROOT::RTreeViewer::RBranchInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::RTreeViewer::RBranchInfo>) );
      instance.SetNew(&new_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR);
      instance.SetDelete(&delete_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::RTreeViewer::RBranchInfo> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::RTreeViewer::RBranchInfo>","std::__1::vector<ROOT::RTreeViewer::RBranchInfo, std::__1::allocator<ROOT::RTreeViewer::RBranchInfo>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::RTreeViewer::RBranchInfo>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::RTreeViewer::RBranchInfo>*>(nullptr))->GetClass();
      vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::RTreeViewer::RBranchInfo> : new vector<ROOT::RTreeViewer::RBranchInfo>;
   }
   static void *newArray_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::RTreeViewer::RBranchInfo>[nElements] : new vector<ROOT::RTreeViewer::RBranchInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p) {
      delete (static_cast<vector<ROOT::RTreeViewer::RBranchInfo>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p) {
      delete [] (static_cast<vector<ROOT::RTreeViewer::RBranchInfo>*>(p));
   }
   static void destruct_vectorlEROOTcLcLRTreeViewercLcLRBranchInfogR(void *p) {
      typedef vector<ROOT::RTreeViewer::RBranchInfo> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::RTreeViewer::RBranchInfo>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTTreeViewer() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTTreeViewer) = RecordReadRules_libROOTTreeViewer();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTTreeViewer));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTTreeViewer_Impl() {
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
      TROOT::RegisterModule("libROOTTreeViewer",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTTreeViewer_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTTreeViewer_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTTreeViewer() {
  TriggerDictionaryInitialization_libROOTTreeViewer_Impl();
}
