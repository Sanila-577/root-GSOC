// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RCsg
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
#include "CsgOps.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace RootCsg {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RootCsg_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RootCsg", 0 /*version*/, "CsgOps.h", 11,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &RootCsg_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RootCsg_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *RootCsgcLcLTBaseMesh_Dictionary();
   static void RootCsgcLcLTBaseMesh_TClassManip(TClass*);
   static void delete_RootCsgcLcLTBaseMesh(void *p);
   static void deleteArray_RootCsgcLcLTBaseMesh(void *p);
   static void destruct_RootCsgcLcLTBaseMesh(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootCsg::TBaseMesh*)
   {
      ::RootCsg::TBaseMesh *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootCsg::TBaseMesh));
      static ::ROOT::TGenericClassInfo 
         instance("RootCsg::TBaseMesh", "CsgOps.h", 16,
                  typeid(::RootCsg::TBaseMesh), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootCsgcLcLTBaseMesh_Dictionary, isa_proxy, 4,
                  sizeof(::RootCsg::TBaseMesh) );
      instance.SetDelete(&delete_RootCsgcLcLTBaseMesh);
      instance.SetDeleteArray(&deleteArray_RootCsgcLcLTBaseMesh);
      instance.SetDestructor(&destruct_RootCsgcLcLTBaseMesh);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootCsg::TBaseMesh*)
   {
      return GenerateInitInstanceLocal(static_cast<::RootCsg::TBaseMesh*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RootCsg::TBaseMesh*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootCsgcLcLTBaseMesh_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::RootCsg::TBaseMesh*>(nullptr))->GetClass();
      RootCsgcLcLTBaseMesh_TClassManip(theClass);
   return theClass;
   }

   static void RootCsgcLcLTBaseMesh_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootCsgcLcLTBaseMesh(void *p) {
      delete (static_cast<::RootCsg::TBaseMesh*>(p));
   }
   static void deleteArray_RootCsgcLcLTBaseMesh(void *p) {
      delete [] (static_cast<::RootCsg::TBaseMesh*>(p));
   }
   static void destruct_RootCsgcLcLTBaseMesh(void *p) {
      typedef ::RootCsg::TBaseMesh current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::RootCsg::TBaseMesh

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRCsg() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRCsg) = RecordReadRules_libRCsg();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRCsg));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRCsg_Impl() {
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
      TROOT::RegisterModule("libRCsg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRCsg_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRCsg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRCsg() {
  TriggerDictionaryInitialization_libRCsg_Impl();
}
