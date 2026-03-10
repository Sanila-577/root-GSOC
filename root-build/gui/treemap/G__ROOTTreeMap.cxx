// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTTreeMap
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
#include "ROOT/RTreeMapBase.hxx"
#include "ROOT/RTreeMapPainter.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ROOTcLcLExperimentalcLcLRTreeMapBase_Dictionary();
   static void ROOTcLcLExperimentalcLcLRTreeMapBase_TClassManip(TClass*);
   static void delete_ROOTcLcLExperimentalcLcLRTreeMapBase(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRTreeMapBase(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRTreeMapBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RTreeMapBase*)
   {
      ::ROOT::Experimental::RTreeMapBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Experimental::RTreeMapBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RTreeMapBase", "ROOT/RTreeMapBase.hxx", 42,
                  typeid(::ROOT::Experimental::RTreeMapBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLExperimentalcLcLRTreeMapBase_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RTreeMapBase) );
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRTreeMapBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRTreeMapBase);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRTreeMapBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RTreeMapBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RTreeMapBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RTreeMapBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLExperimentalcLcLRTreeMapBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RTreeMapBase*>(nullptr))->GetClass();
      ROOTcLcLExperimentalcLcLRTreeMapBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLExperimentalcLcLRTreeMapBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p = nullptr);
   static void *newArray_ROOTcLcLExperimentalcLcLRTreeMapPainter(Long_t size, void *p);
   static void delete_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p);
   static void deleteArray_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p);
   static void destruct_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Experimental::RTreeMapPainter*)
   {
      ::ROOT::Experimental::RTreeMapPainter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::Experimental::RTreeMapPainter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Experimental::RTreeMapPainter", ::ROOT::Experimental::RTreeMapPainter::Class_Version(), "ROOT/RTreeMapPainter.hxx", 43,
                  typeid(::ROOT::Experimental::RTreeMapPainter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::Experimental::RTreeMapPainter::Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Experimental::RTreeMapPainter) );
      instance.SetNew(&new_ROOTcLcLExperimentalcLcLRTreeMapPainter);
      instance.SetNewArray(&newArray_ROOTcLcLExperimentalcLcLRTreeMapPainter);
      instance.SetDelete(&delete_ROOTcLcLExperimentalcLcLRTreeMapPainter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLExperimentalcLcLRTreeMapPainter);
      instance.SetDestructor(&destruct_ROOTcLcLExperimentalcLcLRTreeMapPainter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Experimental::RTreeMapPainter*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Experimental::RTreeMapPainter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Experimental::RTreeMapPainter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
atomic_TClass_ptr RTreeMapPainter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RTreeMapPainter::Class_Name()
{
   return "ROOT::Experimental::RTreeMapPainter";
}

//______________________________________________________________________________
const char *RTreeMapPainter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RTreeMapPainter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RTreeMapPainter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RTreeMapPainter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RTreeMapPainter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RTreeMapPainter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RTreeMapPainter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::Experimental::RTreeMapPainter*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRTreeMapBase(void *p) {
      delete (static_cast<::ROOT::Experimental::RTreeMapBase*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRTreeMapBase(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RTreeMapBase*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRTreeMapBase(void *p) {
      typedef ::ROOT::Experimental::RTreeMapBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RTreeMapBase

namespace ROOT {
   namespace Experimental {
//______________________________________________________________________________
void RTreeMapPainter::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::Experimental::RTreeMapPainter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ROOT::Experimental::RTreeMapPainter::Class(),this);
   } else {
      R__b.WriteClassBuffer(ROOT::Experimental::RTreeMapPainter::Class(),this);
   }
}

} // namespace ROOT::Experimental
} // namespace ROOT::Experimental
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p) {
      return  p ? new(p) ::ROOT::Experimental::RTreeMapPainter : new ::ROOT::Experimental::RTreeMapPainter;
   }
   static void *newArray_ROOTcLcLExperimentalcLcLRTreeMapPainter(Long_t nElements, void *p) {
      return p ? new(p) ::ROOT::Experimental::RTreeMapPainter[nElements] : new ::ROOT::Experimental::RTreeMapPainter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p) {
      delete (static_cast<::ROOT::Experimental::RTreeMapPainter*>(p));
   }
   static void deleteArray_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p) {
      delete [] (static_cast<::ROOT::Experimental::RTreeMapPainter*>(p));
   }
   static void destruct_ROOTcLcLExperimentalcLcLRTreeMapPainter(void *p) {
      typedef ::ROOT::Experimental::RTreeMapPainter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Experimental::RTreeMapPainter

namespace ROOT {
   static TClass *vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR_Dictionary();
   static void vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR_TClassManip(TClass*);
   static void *new_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p = nullptr);
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(Long_t size, void *p);
   static void delete_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p);
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p);
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ROOT::Experimental::RTreeMapBase::Node>*)
   {
      vector<ROOT::Experimental::RTreeMapBase::Node> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ROOT::Experimental::RTreeMapBase::Node>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ROOT::Experimental::RTreeMapBase::Node>", -2, "functional", 86,
                  typeid(vector<ROOT::Experimental::RTreeMapBase::Node>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ROOT::Experimental::RTreeMapBase::Node>) );
      instance.SetNew(&new_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR);
      instance.SetNewArray(&newArray_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR);
      instance.SetDelete(&delete_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR);
      instance.SetDestructor(&destruct_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ROOT::Experimental::RTreeMapBase::Node> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ROOT::Experimental::RTreeMapBase::Node>","std::__1::vector<ROOT::Experimental::RTreeMapBase::Node, std::__1::allocator<ROOT::Experimental::RTreeMapBase::Node>>"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RTreeMapBase::Node>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ROOT::Experimental::RTreeMapBase::Node>*>(nullptr))->GetClass();
      vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RTreeMapBase::Node> : new vector<ROOT::Experimental::RTreeMapBase::Node>;
   }
   static void *newArray_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ROOT::Experimental::RTreeMapBase::Node>[nElements] : new vector<ROOT::Experimental::RTreeMapBase::Node>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p) {
      delete (static_cast<vector<ROOT::Experimental::RTreeMapBase::Node>*>(p));
   }
   static void deleteArray_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p) {
      delete [] (static_cast<vector<ROOT::Experimental::RTreeMapBase::Node>*>(p));
   }
   static void destruct_vectorlEROOTcLcLExperimentalcLcLRTreeMapBasecLcLNodegR(void *p) {
      typedef vector<ROOT::Experimental::RTreeMapBase::Node> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ROOT::Experimental::RTreeMapBase::Node>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTTreeMap() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTTreeMap) = RecordReadRules_libROOTTreeMap();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTTreeMap));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTTreeMap_Impl() {
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
      TROOT::RegisterModule("libROOTTreeMap",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTTreeMap_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTTreeMap_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTTreeMap() {
  TriggerDictionaryInitialization_libROOTTreeMap_Impl();
}
