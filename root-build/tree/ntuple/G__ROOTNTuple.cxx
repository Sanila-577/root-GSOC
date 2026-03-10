// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTNTuple
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
#include "ROOT/RCluster.hxx"
#include "ROOT/RClusterPool.hxx"
#include "ROOT/RColumn.hxx"
#include "ROOT/RColumnElementBase.hxx"
#include "ROOT/REntry.hxx"
#include "ROOT/RField.hxx"
#include "ROOT/RFieldBase.hxx"
#include "ROOT/RFieldToken.hxx"
#include "ROOT/RFieldUtils.hxx"
#include "ROOT/RFieldVisitor.hxx"
#include "ROOT/RMiniFile.hxx"
#include "ROOT/RNTuple.hxx"
#include "ROOT/RNTupleDescriptor.hxx"
#include "ROOT/RNTupleFillContext.hxx"
#include "ROOT/RNTupleFillStatus.hxx"
#include "ROOT/RNTupleImtTaskScheduler.hxx"
#include "ROOT/RNTupleJoinTable.hxx"
#include "ROOT/RNTupleMerger.hxx"
#include "ROOT/RNTupleMetrics.hxx"
#include "ROOT/RNTupleModel.hxx"
#include "ROOT/RNTupleParallelWriter.hxx"
#include "ROOT/RNTupleProcessor.hxx"
#include "ROOT/RNTupleRange.hxx"
#include "ROOT/RNTupleReadOptions.hxx"
#include "ROOT/RNTupleReader.hxx"
#include "ROOT/RNTupleSerialize.hxx"
#include "ROOT/RNTupleTypes.hxx"
#include "ROOT/RNTupleUtil.hxx"
#include "ROOT/RNTupleUtils.hxx"
#include "ROOT/RNTupleView.hxx"
#include "ROOT/RNTupleWriteOptions.hxx"
#include "ROOT/RNTupleWriteOptionsDaos.hxx"
#include "ROOT/RNTupleWriter.hxx"
#include "ROOT/RNTupleZip.hxx"
#include "ROOT/RPage.hxx"
#include "ROOT/RPageAllocator.hxx"
#include "ROOT/RPageNullSink.hxx"
#include "ROOT/RPagePool.hxx"
#include "ROOT/RPageSinkBuf.hxx"
#include "ROOT/RPageStorage.hxx"
#include "ROOT/RPageStorageFile.hxx"
#include "ROOT/RRawPtrWriteEntry.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_ROOTcLcLRNTuple(void *p = nullptr);
   static void *newArray_ROOTcLcLRNTuple(Long_t size, void *p);
   static void delete_ROOTcLcLRNTuple(void *p);
   static void deleteArray_ROOTcLcLRNTuple(void *p);
   static void destruct_ROOTcLcLRNTuple(void *p);
   static void streamer_ROOTcLcLRNTuple(TBuffer &buf, void *obj);
   static Long64_t merge_ROOTcLcLRNTuple(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RNTuple*)
   {
      ::ROOT::RNTuple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::RNTuple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RNTuple", ::ROOT::RNTuple::Class_Version(), "ROOT/RNTuple.hxx", 67,
                  typeid(::ROOT::RNTuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::RNTuple::Dictionary, isa_proxy, 17,
                  sizeof(::ROOT::RNTuple) );
      instance.SetNew(&new_ROOTcLcLRNTuple);
      instance.SetNewArray(&newArray_ROOTcLcLRNTuple);
      instance.SetDelete(&delete_ROOTcLcLRNTuple);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRNTuple);
      instance.SetDestructor(&destruct_ROOTcLcLRNTuple);
      instance.SetStreamerFunc(&streamer_ROOTcLcLRNTuple);
      instance.SetMerge(&merge_ROOTcLcLRNTuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RNTuple*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::RNTuple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::RNTuple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
//______________________________________________________________________________
atomic_TClass_ptr RNTuple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RNTuple::Class_Name()
{
   return "ROOT::RNTuple";
}

//______________________________________________________________________________
const char *RNTuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RNTuple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RNTuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RNTuple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RNTuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RNTuple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RNTuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::RNTuple*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT
namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRNTuple(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RNTuple : new ::ROOT::RNTuple;
   }
   static void *newArray_ROOTcLcLRNTuple(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::RNTuple[nElements] : new ::ROOT::RNTuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRNTuple(void *p) {
      delete (static_cast<::ROOT::RNTuple*>(p));
   }
   static void deleteArray_ROOTcLcLRNTuple(void *p) {
      delete [] (static_cast<::ROOT::RNTuple*>(p));
   }
   static void destruct_ROOTcLcLRNTuple(void *p) {
      typedef ::ROOT::RNTuple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLRNTuple(TBuffer &buf, void *obj) {
      ((::ROOT::RNTuple*)obj)->::ROOT::RNTuple::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t merge_ROOTcLcLRNTuple(void *obj,TCollection *coll,TFileMergeInfo *info) {
      return ((::ROOT::RNTuple*)obj)->Merge(coll,info);
   }
} // end of namespace ROOT for class ::ROOT::RNTuple

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libROOTNTuple() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libROOTNTuple) = RecordReadRules_libROOTNTuple();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libROOTNTuple));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libROOTNTuple_Impl() {
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
      TROOT::RegisterModule("libROOTNTuple",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTNTuple_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTNTuple_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTNTuple() {
  TriggerDictionaryInitialization_libROOTNTuple_Impl();
}
