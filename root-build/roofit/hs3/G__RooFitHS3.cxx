// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RooFitHS3
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
#include "RooFitHS3/JSONIO.h"
#include "RooFitHS3/RooJSONFactoryWSTool.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *RooFitcLcLJSONIOcLcLImporter_Dictionary();
   static void RooFitcLcLJSONIOcLcLImporter_TClassManip(TClass*);
   static void *new_RooFitcLcLJSONIOcLcLImporter(void *p = nullptr);
   static void *newArray_RooFitcLcLJSONIOcLcLImporter(Long_t size, void *p);
   static void delete_RooFitcLcLJSONIOcLcLImporter(void *p);
   static void deleteArray_RooFitcLcLJSONIOcLcLImporter(void *p);
   static void destruct_RooFitcLcLJSONIOcLcLImporter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::JSONIO::Importer*)
   {
      ::RooFit::JSONIO::Importer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooFit::JSONIO::Importer));
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::JSONIO::Importer", "RooFitHS3/JSONIO.h", 34,
                  typeid(::RooFit::JSONIO::Importer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooFitcLcLJSONIOcLcLImporter_Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::JSONIO::Importer) );
      instance.SetNew(&new_RooFitcLcLJSONIOcLcLImporter);
      instance.SetNewArray(&newArray_RooFitcLcLJSONIOcLcLImporter);
      instance.SetDelete(&delete_RooFitcLcLJSONIOcLcLImporter);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLJSONIOcLcLImporter);
      instance.SetDestructor(&destruct_RooFitcLcLJSONIOcLcLImporter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::JSONIO::Importer*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::JSONIO::Importer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::JSONIO::Importer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooFitcLcLJSONIOcLcLImporter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooFit::JSONIO::Importer*>(nullptr))->GetClass();
      RooFitcLcLJSONIOcLcLImporter_TClassManip(theClass);
   return theClass;
   }

   static void RooFitcLcLJSONIOcLcLImporter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooFitcLcLJSONIOcLcLExporter_Dictionary();
   static void RooFitcLcLJSONIOcLcLExporter_TClassManip(TClass*);
   static void delete_RooFitcLcLJSONIOcLcLExporter(void *p);
   static void deleteArray_RooFitcLcLJSONIOcLcLExporter(void *p);
   static void destruct_RooFitcLcLJSONIOcLcLExporter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooFit::JSONIO::Exporter*)
   {
      ::RooFit::JSONIO::Exporter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooFit::JSONIO::Exporter));
      static ::ROOT::TGenericClassInfo 
         instance("RooFit::JSONIO::Exporter", "RooFitHS3/JSONIO.h", 55,
                  typeid(::RooFit::JSONIO::Exporter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooFitcLcLJSONIOcLcLExporter_Dictionary, isa_proxy, 4,
                  sizeof(::RooFit::JSONIO::Exporter) );
      instance.SetDelete(&delete_RooFitcLcLJSONIOcLcLExporter);
      instance.SetDeleteArray(&deleteArray_RooFitcLcLJSONIOcLcLExporter);
      instance.SetDestructor(&destruct_RooFitcLcLJSONIOcLcLExporter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooFit::JSONIO::Exporter*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooFit::JSONIO::Exporter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooFit::JSONIO::Exporter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooFitcLcLJSONIOcLcLExporter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooFit::JSONIO::Exporter*>(nullptr))->GetClass();
      RooFitcLcLJSONIOcLcLExporter_TClassManip(theClass);
   return theClass;
   }

   static void RooFitcLcLJSONIOcLcLExporter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RooJSONFactoryWSTool_Dictionary();
   static void RooJSONFactoryWSTool_TClassManip(TClass*);
   static void delete_RooJSONFactoryWSTool(void *p);
   static void deleteArray_RooJSONFactoryWSTool(void *p);
   static void destruct_RooJSONFactoryWSTool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RooJSONFactoryWSTool*)
   {
      ::RooJSONFactoryWSTool *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RooJSONFactoryWSTool));
      static ::ROOT::TGenericClassInfo 
         instance("RooJSONFactoryWSTool", "RooFitHS3/RooJSONFactoryWSTool.h", 38,
                  typeid(::RooJSONFactoryWSTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RooJSONFactoryWSTool_Dictionary, isa_proxy, 4,
                  sizeof(::RooJSONFactoryWSTool) );
      instance.SetDelete(&delete_RooJSONFactoryWSTool);
      instance.SetDeleteArray(&deleteArray_RooJSONFactoryWSTool);
      instance.SetDestructor(&destruct_RooJSONFactoryWSTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RooJSONFactoryWSTool*)
   {
      return GenerateInitInstanceLocal(static_cast<::RooJSONFactoryWSTool*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RooJSONFactoryWSTool*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RooJSONFactoryWSTool_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RooJSONFactoryWSTool*>(nullptr))->GetClass();
      RooJSONFactoryWSTool_TClassManip(theClass);
   return theClass;
   }

   static void RooJSONFactoryWSTool_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_RooFitcLcLJSONIOcLcLImporter(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooFit::JSONIO::Importer : new ::RooFit::JSONIO::Importer;
   }
   static void *newArray_RooFitcLcLJSONIOcLcLImporter(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::RooFit::JSONIO::Importer[nElements] : new ::RooFit::JSONIO::Importer[nElements];
   }
   // Wrapper around operator delete
   static void delete_RooFitcLcLJSONIOcLcLImporter(void *p) {
      delete (static_cast<::RooFit::JSONIO::Importer*>(p));
   }
   static void deleteArray_RooFitcLcLJSONIOcLcLImporter(void *p) {
      delete [] (static_cast<::RooFit::JSONIO::Importer*>(p));
   }
   static void destruct_RooFitcLcLJSONIOcLcLImporter(void *p) {
      typedef ::RooFit::JSONIO::Importer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::JSONIO::Importer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooFitcLcLJSONIOcLcLExporter(void *p) {
      delete (static_cast<::RooFit::JSONIO::Exporter*>(p));
   }
   static void deleteArray_RooFitcLcLJSONIOcLcLExporter(void *p) {
      delete [] (static_cast<::RooFit::JSONIO::Exporter*>(p));
   }
   static void destruct_RooFitcLcLJSONIOcLcLExporter(void *p) {
      typedef ::RooFit::JSONIO::Exporter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooFit::JSONIO::Exporter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RooJSONFactoryWSTool(void *p) {
      delete (static_cast<::RooJSONFactoryWSTool*>(p));
   }
   static void deleteArray_RooJSONFactoryWSTool(void *p) {
      delete [] (static_cast<::RooJSONFactoryWSTool*>(p));
   }
   static void destruct_RooJSONFactoryWSTool(void *p) {
      typedef ::RooJSONFactoryWSTool current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RooJSONFactoryWSTool

namespace ROOT {
   static TClass *vectorlEconstsPRooAbsArgmUgR_Dictionary();
   static void vectorlEconstsPRooAbsArgmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPRooAbsArgmUgR(void *p = nullptr);
   static void *newArray_vectorlEconstsPRooAbsArgmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPRooAbsArgmUgR(void *p);
   static void deleteArray_vectorlEconstsPRooAbsArgmUgR(void *p);
   static void destruct_vectorlEconstsPRooAbsArgmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const RooAbsArg*>*)
   {
      vector<const RooAbsArg*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const RooAbsArg*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const RooAbsArg*>", -2, "functional", 86,
                  typeid(vector<const RooAbsArg*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPRooAbsArgmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const RooAbsArg*>) );
      instance.SetNew(&new_vectorlEconstsPRooAbsArgmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPRooAbsArgmUgR);
      instance.SetDelete(&delete_vectorlEconstsPRooAbsArgmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPRooAbsArgmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPRooAbsArgmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const RooAbsArg*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<const RooAbsArg*>","std::__1::vector<RooAbsArg const*, std::__1::allocator<RooAbsArg const*>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<const RooAbsArg*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPRooAbsArgmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<const RooAbsArg*>*>(nullptr))->GetClass();
      vectorlEconstsPRooAbsArgmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPRooAbsArgmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPRooAbsArgmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const RooAbsArg*> : new vector<const RooAbsArg*>;
   }
   static void *newArray_vectorlEconstsPRooAbsArgmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const RooAbsArg*>[nElements] : new vector<const RooAbsArg*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPRooAbsArgmUgR(void *p) {
      delete (static_cast<vector<const RooAbsArg*>*>(p));
   }
   static void deleteArray_vectorlEconstsPRooAbsArgmUgR(void *p) {
      delete [] (static_cast<vector<const RooAbsArg*>*>(p));
   }
   static void destruct_vectorlEconstsPRooAbsArgmUgR(void *p) {
      typedef vector<const RooAbsArg*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<const RooAbsArg*>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRooFitHS3() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRooFitHS3) = RecordReadRules_libRooFitHS3();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRooFitHS3));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRooFitHS3_Impl() {
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
      TROOT::RegisterModule("libRooFitHS3",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRooFitHS3_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRooFitHS3_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRooFitHS3() {
  TriggerDictionaryInitialization_libRooFitHS3_Impl();
}
