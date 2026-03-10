// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Thread
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
#include "TPosixCondition.h"
#include "TPosixMutex.h"
#include "TPosixThread.h"
#include "TPosixThreadFactory.h"
#include "PosixThreadInc.h"
#include "TAtomicCount.h"
#include "TCondition.h"
#include "TConditionImp.h"
#include "TMutex.h"
#include "TMutexImp.h"
#include "TRWLock.h"
#include "TSemaphore.h"
#include "TThreadFactory.h"
#include "TThread.h"
#include "TThreadImp.h"
#include "TThreadPool.h"
#include "ROOT/TRWSpinLock.hxx"
#include "ROOT/TSpinMutex.hxx"
#include "ROOT/TThreadedObject.hxx"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TConditionImp(void *p);
   static void deleteArray_TConditionImp(void *p);
   static void destruct_TConditionImp(void *p);
   static void streamer_TConditionImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TConditionImp*)
   {
      ::TConditionImp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TConditionImp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TConditionImp", ::TConditionImp::Class_Version(), "TConditionImp.h", 26,
                  typeid(::TConditionImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TConditionImp::Dictionary, isa_proxy, 16,
                  sizeof(::TConditionImp) );
      instance.SetDelete(&delete_TConditionImp);
      instance.SetDeleteArray(&deleteArray_TConditionImp);
      instance.SetDestructor(&destruct_TConditionImp);
      instance.SetStreamerFunc(&streamer_TConditionImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TConditionImp*)
   {
      return GenerateInitInstanceLocal(static_cast<::TConditionImp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TConditionImp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TPosixCondition(void *p);
   static void deleteArray_TPosixCondition(void *p);
   static void destruct_TPosixCondition(void *p);
   static void streamer_TPosixCondition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixCondition*)
   {
      ::TPosixCondition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixCondition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixCondition", ::TPosixCondition::Class_Version(), "TPosixCondition.h", 33,
                  typeid(::TPosixCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixCondition::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixCondition) );
      instance.SetDelete(&delete_TPosixCondition);
      instance.SetDeleteArray(&deleteArray_TPosixCondition);
      instance.SetDestructor(&destruct_TPosixCondition);
      instance.SetStreamerFunc(&streamer_TPosixCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixCondition*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPosixCondition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPosixCondition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMutexImp(void *p);
   static void deleteArray_TMutexImp(void *p);
   static void destruct_TMutexImp(void *p);
   static void streamer_TMutexImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMutexImp*)
   {
      ::TMutexImp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMutexImp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMutexImp", ::TMutexImp::Class_Version(), "TMutexImp.h", 27,
                  typeid(::TMutexImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMutexImp::Dictionary, isa_proxy, 16,
                  sizeof(::TMutexImp) );
      instance.SetDelete(&delete_TMutexImp);
      instance.SetDeleteArray(&deleteArray_TMutexImp);
      instance.SetDestructor(&destruct_TMutexImp);
      instance.SetStreamerFunc(&streamer_TMutexImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMutexImp*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMutexImp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMutexImp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPosixMutex(void *p = nullptr);
   static void *newArray_TPosixMutex(Long_t size, void *p);
   static void delete_TPosixMutex(void *p);
   static void deleteArray_TPosixMutex(void *p);
   static void destruct_TPosixMutex(void *p);
   static void streamer_TPosixMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixMutex*)
   {
      ::TPosixMutex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixMutex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixMutex", ::TPosixMutex::Class_Version(), "TPosixMutex.h", 28,
                  typeid(::TPosixMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixMutex::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixMutex) );
      instance.SetNew(&new_TPosixMutex);
      instance.SetNewArray(&newArray_TPosixMutex);
      instance.SetDelete(&delete_TPosixMutex);
      instance.SetDeleteArray(&deleteArray_TPosixMutex);
      instance.SetDestructor(&destruct_TPosixMutex);
      instance.SetStreamerFunc(&streamer_TPosixMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixMutex*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPosixMutex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPosixMutex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TThreadImp(void *p);
   static void deleteArray_TThreadImp(void *p);
   static void destruct_TThreadImp(void *p);
   static void streamer_TThreadImp(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TThreadImp*)
   {
      ::TThreadImp *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TThreadImp >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TThreadImp", ::TThreadImp::Class_Version(), "TThreadImp.h", 31,
                  typeid(::TThreadImp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TThreadImp::Dictionary, isa_proxy, 16,
                  sizeof(::TThreadImp) );
      instance.SetDelete(&delete_TThreadImp);
      instance.SetDeleteArray(&deleteArray_TThreadImp);
      instance.SetDestructor(&destruct_TThreadImp);
      instance.SetStreamerFunc(&streamer_TThreadImp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TThreadImp*)
   {
      return GenerateInitInstanceLocal(static_cast<::TThreadImp*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TThreadImp*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPosixThread(void *p = nullptr);
   static void *newArray_TPosixThread(Long_t size, void *p);
   static void delete_TPosixThread(void *p);
   static void deleteArray_TPosixThread(void *p);
   static void destruct_TPosixThread(void *p);
   static void streamer_TPosixThread(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixThread*)
   {
      ::TPosixThread *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixThread >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixThread", ::TPosixThread::Class_Version(), "TPosixThread.h", 33,
                  typeid(::TPosixThread), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixThread::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixThread) );
      instance.SetNew(&new_TPosixThread);
      instance.SetNewArray(&newArray_TPosixThread);
      instance.SetDelete(&delete_TPosixThread);
      instance.SetDeleteArray(&deleteArray_TPosixThread);
      instance.SetDestructor(&destruct_TPosixThread);
      instance.SetStreamerFunc(&streamer_TPosixThread);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixThread*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPosixThread*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPosixThread*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TThreadFactory(void *p);
   static void deleteArray_TThreadFactory(void *p);
   static void destruct_TThreadFactory(void *p);
   static void streamer_TThreadFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TThreadFactory*)
   {
      ::TThreadFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TThreadFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TThreadFactory", ::TThreadFactory::Class_Version(), "TThreadFactory.h", 32,
                  typeid(::TThreadFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TThreadFactory::Dictionary, isa_proxy, 16,
                  sizeof(::TThreadFactory) );
      instance.SetDelete(&delete_TThreadFactory);
      instance.SetDeleteArray(&deleteArray_TThreadFactory);
      instance.SetDestructor(&destruct_TThreadFactory);
      instance.SetStreamerFunc(&streamer_TThreadFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TThreadFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TThreadFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TThreadFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPosixThreadFactory(void *p = nullptr);
   static void *newArray_TPosixThreadFactory(Long_t size, void *p);
   static void delete_TPosixThreadFactory(void *p);
   static void deleteArray_TPosixThreadFactory(void *p);
   static void destruct_TPosixThreadFactory(void *p);
   static void streamer_TPosixThreadFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPosixThreadFactory*)
   {
      ::TPosixThreadFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPosixThreadFactory >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPosixThreadFactory", ::TPosixThreadFactory::Class_Version(), "TPosixThreadFactory.h", 31,
                  typeid(::TPosixThreadFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPosixThreadFactory::Dictionary, isa_proxy, 16,
                  sizeof(::TPosixThreadFactory) );
      instance.SetNew(&new_TPosixThreadFactory);
      instance.SetNewArray(&newArray_TPosixThreadFactory);
      instance.SetDelete(&delete_TPosixThreadFactory);
      instance.SetDeleteArray(&deleteArray_TPosixThreadFactory);
      instance.SetDestructor(&destruct_TPosixThreadFactory);
      instance.SetStreamerFunc(&streamer_TPosixThreadFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPosixThreadFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPosixThreadFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPosixThreadFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TAtomicCount_Dictionary();
   static void TAtomicCount_TClassManip(TClass*);
   static void delete_TAtomicCount(void *p);
   static void deleteArray_TAtomicCount(void *p);
   static void destruct_TAtomicCount(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAtomicCount*)
   {
      ::TAtomicCount *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TAtomicCount));
      static ::ROOT::TGenericClassInfo 
         instance("TAtomicCount", "TAtomicCountPthread.h", 37,
                  typeid(::TAtomicCount), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TAtomicCount_Dictionary, isa_proxy, 0,
                  sizeof(::TAtomicCount) );
      instance.SetDelete(&delete_TAtomicCount);
      instance.SetDeleteArray(&deleteArray_TAtomicCount);
      instance.SetDestructor(&destruct_TAtomicCount);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAtomicCount*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAtomicCount*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAtomicCount*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TAtomicCount_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TAtomicCount*>(nullptr))->GetClass();
      TAtomicCount_TClassManip(theClass);
   return theClass;
   }

   static void TAtomicCount_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TCondition(void *p = nullptr);
   static void *newArray_TCondition(Long_t size, void *p);
   static void delete_TCondition(void *p);
   static void deleteArray_TCondition(void *p);
   static void destruct_TCondition(void *p);
   static void streamer_TCondition(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCondition*)
   {
      ::TCondition *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCondition >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCondition", ::TCondition::Class_Version(), "TCondition.h", 32,
                  typeid(::TCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCondition::Dictionary, isa_proxy, 16,
                  sizeof(::TCondition) );
      instance.SetNew(&new_TCondition);
      instance.SetNewArray(&newArray_TCondition);
      instance.SetDelete(&delete_TCondition);
      instance.SetDeleteArray(&deleteArray_TCondition);
      instance.SetDestructor(&destruct_TCondition);
      instance.SetStreamerFunc(&streamer_TCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCondition*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCondition*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCondition*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TMutex(void *p = nullptr);
   static void *newArray_TMutex(Long_t size, void *p);
   static void delete_TMutex(void *p);
   static void deleteArray_TMutex(void *p);
   static void destruct_TMutex(void *p);
   static void streamer_TMutex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMutex*)
   {
      ::TMutex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMutex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMutex", ::TMutex::Class_Version(), "TMutex.h", 30,
                  typeid(::TMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMutex::Dictionary, isa_proxy, 16,
                  sizeof(::TMutex) );
      instance.SetNew(&new_TMutex);
      instance.SetNewArray(&newArray_TMutex);
      instance.SetDelete(&delete_TMutex);
      instance.SetDeleteArray(&deleteArray_TMutex);
      instance.SetDestructor(&destruct_TMutex);
      instance.SetStreamerFunc(&streamer_TMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMutex*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMutex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMutex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TRWLock(void *p = nullptr);
   static void *newArray_TRWLock(Long_t size, void *p);
   static void delete_TRWLock(void *p);
   static void deleteArray_TRWLock(void *p);
   static void destruct_TRWLock(void *p);
   static void streamer_TRWLock(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRWLock*)
   {
      ::TRWLock *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRWLock >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TRWLock", ::TRWLock::Class_Version(), "TRWLock.h", 31,
                  typeid(::TRWLock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRWLock::Dictionary, isa_proxy, 16,
                  sizeof(::TRWLock) );
      instance.SetNew(&new_TRWLock);
      instance.SetNewArray(&newArray_TRWLock);
      instance.SetDelete(&delete_TRWLock);
      instance.SetDeleteArray(&deleteArray_TRWLock);
      instance.SetDestructor(&destruct_TRWLock);
      instance.SetStreamerFunc(&streamer_TRWLock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRWLock*)
   {
      return GenerateInitInstanceLocal(static_cast<::TRWLock*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TRWLock*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSemaphore(void *p = nullptr);
   static void *newArray_TSemaphore(Long_t size, void *p);
   static void delete_TSemaphore(void *p);
   static void deleteArray_TSemaphore(void *p);
   static void destruct_TSemaphore(void *p);
   static void streamer_TSemaphore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSemaphore*)
   {
      ::TSemaphore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSemaphore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSemaphore", ::TSemaphore::Class_Version(), "TSemaphore.h", 29,
                  typeid(::TSemaphore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSemaphore::Dictionary, isa_proxy, 16,
                  sizeof(::TSemaphore) );
      instance.SetNew(&new_TSemaphore);
      instance.SetNewArray(&newArray_TSemaphore);
      instance.SetDelete(&delete_TSemaphore);
      instance.SetDeleteArray(&deleteArray_TSemaphore);
      instance.SetDestructor(&destruct_TSemaphore);
      instance.SetStreamerFunc(&streamer_TSemaphore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSemaphore*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSemaphore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSemaphore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TThread(void *p = nullptr);
   static void *newArray_TThread(Long_t size, void *p);
   static void delete_TThread(void *p);
   static void deleteArray_TThread(void *p);
   static void destruct_TThread(void *p);
   static void streamer_TThread(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TThread*)
   {
      ::TThread *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TThread >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TThread", ::TThread::Class_Version(), "TThread.h", 40,
                  typeid(::TThread), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TThread::Dictionary, isa_proxy, 16,
                  sizeof(::TThread) );
      instance.SetNew(&new_TThread);
      instance.SetNewArray(&newArray_TThread);
      instance.SetDelete(&delete_TThread);
      instance.SetDeleteArray(&deleteArray_TThread);
      instance.SetDestructor(&destruct_TThread);
      instance.SetStreamerFunc(&streamer_TThread);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TThread*)
   {
      return GenerateInitInstanceLocal(static_cast<::TThread*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TThread*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLTSpinMutex_Dictionary();
   static void ROOTcLcLTSpinMutex_TClassManip(TClass*);
   static void *new_ROOTcLcLTSpinMutex(void *p = nullptr);
   static void *newArray_ROOTcLcLTSpinMutex(Long_t size, void *p);
   static void delete_ROOTcLcLTSpinMutex(void *p);
   static void deleteArray_ROOTcLcLTSpinMutex(void *p);
   static void destruct_ROOTcLcLTSpinMutex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TSpinMutex*)
   {
      ::ROOT::TSpinMutex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TSpinMutex));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TSpinMutex", "ROOT/TSpinMutex.hxx", 42,
                  typeid(::ROOT::TSpinMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTSpinMutex_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::TSpinMutex) );
      instance.SetNew(&new_ROOTcLcLTSpinMutex);
      instance.SetNewArray(&newArray_ROOTcLcLTSpinMutex);
      instance.SetDelete(&delete_ROOTcLcLTSpinMutex);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTSpinMutex);
      instance.SetDestructor(&destruct_ROOTcLcLTSpinMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TSpinMutex*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::TSpinMutex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::TSpinMutex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTSpinMutex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::TSpinMutex*>(nullptr))->GetClass();
      ROOTcLcLTSpinMutex_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTSpinMutex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TConditionImp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TConditionImp::Class_Name()
{
   return "TConditionImp";
}

//______________________________________________________________________________
const char *TConditionImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TConditionImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConditionImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConditionImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TConditionImp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixCondition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixCondition::Class_Name()
{
   return "TPosixCondition";
}

//______________________________________________________________________________
const char *TPosixCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixCondition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMutexImp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMutexImp::Class_Name()
{
   return "TMutexImp";
}

//______________________________________________________________________________
const char *TMutexImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMutexImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMutexImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMutexImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutexImp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixMutex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixMutex::Class_Name()
{
   return "TPosixMutex";
}

//______________________________________________________________________________
const char *TPosixMutex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixMutex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixMutex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixMutex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TThreadImp::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TThreadImp::Class_Name()
{
   return "TThreadImp";
}

//______________________________________________________________________________
const char *TThreadImp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TThreadImp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThreadImp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThreadImp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadImp*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixThread::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixThread::Class_Name()
{
   return "TPosixThread";
}

//______________________________________________________________________________
const char *TPosixThread::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixThread::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixThread::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixThread::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThread*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TThreadFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TThreadFactory::Class_Name()
{
   return "TThreadFactory";
}

//______________________________________________________________________________
const char *TThreadFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TThreadFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThreadFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThreadFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThreadFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPosixThreadFactory::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPosixThreadFactory::Class_Name()
{
   return "TPosixThreadFactory";
}

//______________________________________________________________________________
const char *TPosixThreadFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPosixThreadFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPosixThreadFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPosixThreadFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPosixThreadFactory*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCondition::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCondition::Class_Name()
{
   return "TCondition";
}

//______________________________________________________________________________
const char *TCondition::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCondition::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCondition::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCondition::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCondition*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMutex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMutex::Class_Name()
{
   return "TMutex";
}

//______________________________________________________________________________
const char *TMutex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMutex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMutex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMutex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMutex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TRWLock::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRWLock::Class_Name()
{
   return "TRWLock";
}

//______________________________________________________________________________
const char *TRWLock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRWLock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRWLock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRWLock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRWLock*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSemaphore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSemaphore::Class_Name()
{
   return "TSemaphore";
}

//______________________________________________________________________________
const char *TSemaphore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSemaphore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSemaphore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSemaphore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSemaphore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TThread::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TThread::Class_Name()
{
   return "TThread";
}

//______________________________________________________________________________
const char *TThread::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThread*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TThread::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TThread*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TThread::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThread*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TThread::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TThread*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TConditionImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TConditionImp.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TConditionImp(void *p) {
      delete (static_cast<::TConditionImp*>(p));
   }
   static void deleteArray_TConditionImp(void *p) {
      delete [] (static_cast<::TConditionImp*>(p));
   }
   static void destruct_TConditionImp(void *p) {
      typedef ::TConditionImp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TConditionImp(TBuffer &buf, void *obj) {
      ((::TConditionImp*)obj)->::TConditionImp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TConditionImp

//______________________________________________________________________________
void TPosixCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixCondition.

   TConditionImp::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPosixCondition(void *p) {
      delete (static_cast<::TPosixCondition*>(p));
   }
   static void deleteArray_TPosixCondition(void *p) {
      delete [] (static_cast<::TPosixCondition*>(p));
   }
   static void destruct_TPosixCondition(void *p) {
      typedef ::TPosixCondition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixCondition(TBuffer &buf, void *obj) {
      ((::TPosixCondition*)obj)->::TPosixCondition::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixCondition

//______________________________________________________________________________
void TMutexImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMutexImp.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMutexImp(void *p) {
      delete (static_cast<::TMutexImp*>(p));
   }
   static void deleteArray_TMutexImp(void *p) {
      delete [] (static_cast<::TMutexImp*>(p));
   }
   static void destruct_TMutexImp(void *p) {
      typedef ::TMutexImp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMutexImp(TBuffer &buf, void *obj) {
      ((::TMutexImp*)obj)->::TMutexImp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMutexImp

//______________________________________________________________________________
void TPosixMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixMutex.

   TMutexImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPosixMutex(void *p) {
      return  p ? new(p) ::TPosixMutex : new ::TPosixMutex;
   }
   static void *newArray_TPosixMutex(Long_t nElements, void *p) {
      return p ? new(p) ::TPosixMutex[nElements] : new ::TPosixMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPosixMutex(void *p) {
      delete (static_cast<::TPosixMutex*>(p));
   }
   static void deleteArray_TPosixMutex(void *p) {
      delete [] (static_cast<::TPosixMutex*>(p));
   }
   static void destruct_TPosixMutex(void *p) {
      typedef ::TPosixMutex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixMutex(TBuffer &buf, void *obj) {
      ((::TPosixMutex*)obj)->::TPosixMutex::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixMutex

//______________________________________________________________________________
void TThreadImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TThreadImp.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TThreadImp(void *p) {
      delete (static_cast<::TThreadImp*>(p));
   }
   static void deleteArray_TThreadImp(void *p) {
      delete [] (static_cast<::TThreadImp*>(p));
   }
   static void destruct_TThreadImp(void *p) {
      typedef ::TThreadImp current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TThreadImp(TBuffer &buf, void *obj) {
      ((::TThreadImp*)obj)->::TThreadImp::Streamer(buf);
   }
} // end of namespace ROOT for class ::TThreadImp

//______________________________________________________________________________
void TPosixThread::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixThread.

   TThreadImp::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPosixThread(void *p) {
      return  p ? new(p) ::TPosixThread : new ::TPosixThread;
   }
   static void *newArray_TPosixThread(Long_t nElements, void *p) {
      return p ? new(p) ::TPosixThread[nElements] : new ::TPosixThread[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPosixThread(void *p) {
      delete (static_cast<::TPosixThread*>(p));
   }
   static void deleteArray_TPosixThread(void *p) {
      delete [] (static_cast<::TPosixThread*>(p));
   }
   static void destruct_TPosixThread(void *p) {
      typedef ::TPosixThread current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixThread(TBuffer &buf, void *obj) {
      ((::TPosixThread*)obj)->::TPosixThread::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixThread

//______________________________________________________________________________
void TThreadFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TThreadFactory.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TThreadFactory(void *p) {
      delete (static_cast<::TThreadFactory*>(p));
   }
   static void deleteArray_TThreadFactory(void *p) {
      delete [] (static_cast<::TThreadFactory*>(p));
   }
   static void destruct_TThreadFactory(void *p) {
      typedef ::TThreadFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TThreadFactory(TBuffer &buf, void *obj) {
      ((::TThreadFactory*)obj)->::TThreadFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TThreadFactory

//______________________________________________________________________________
void TPosixThreadFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPosixThreadFactory.

   TThreadFactory::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPosixThreadFactory(void *p) {
      return  p ? new(p) ::TPosixThreadFactory : new ::TPosixThreadFactory;
   }
   static void *newArray_TPosixThreadFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TPosixThreadFactory[nElements] : new ::TPosixThreadFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPosixThreadFactory(void *p) {
      delete (static_cast<::TPosixThreadFactory*>(p));
   }
   static void deleteArray_TPosixThreadFactory(void *p) {
      delete [] (static_cast<::TPosixThreadFactory*>(p));
   }
   static void destruct_TPosixThreadFactory(void *p) {
      typedef ::TPosixThreadFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPosixThreadFactory(TBuffer &buf, void *obj) {
      ((::TPosixThreadFactory*)obj)->::TPosixThreadFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPosixThreadFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAtomicCount(void *p) {
      delete (static_cast<::TAtomicCount*>(p));
   }
   static void deleteArray_TAtomicCount(void *p) {
      delete [] (static_cast<::TAtomicCount*>(p));
   }
   static void destruct_TAtomicCount(void *p) {
      typedef ::TAtomicCount current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TAtomicCount

//______________________________________________________________________________
void TCondition::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCondition.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCondition(void *p) {
      return  p ? new(p) ::TCondition : new ::TCondition;
   }
   static void *newArray_TCondition(Long_t nElements, void *p) {
      return p ? new(p) ::TCondition[nElements] : new ::TCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCondition(void *p) {
      delete (static_cast<::TCondition*>(p));
   }
   static void deleteArray_TCondition(void *p) {
      delete [] (static_cast<::TCondition*>(p));
   }
   static void destruct_TCondition(void *p) {
      typedef ::TCondition current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCondition(TBuffer &buf, void *obj) {
      ((::TCondition*)obj)->::TCondition::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCondition

//______________________________________________________________________________
void TMutex::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMutex.

   TVirtualMutex::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TMutex(void *p) {
      return  p ? new(p) ::TMutex : new ::TMutex;
   }
   static void *newArray_TMutex(Long_t nElements, void *p) {
      return p ? new(p) ::TMutex[nElements] : new ::TMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_TMutex(void *p) {
      delete (static_cast<::TMutex*>(p));
   }
   static void deleteArray_TMutex(void *p) {
      delete [] (static_cast<::TMutex*>(p));
   }
   static void destruct_TMutex(void *p) {
      typedef ::TMutex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMutex(TBuffer &buf, void *obj) {
      ((::TMutex*)obj)->::TMutex::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMutex

//______________________________________________________________________________
void TRWLock::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRWLock.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRWLock(void *p) {
      return  p ? new(p) ::TRWLock : new ::TRWLock;
   }
   static void *newArray_TRWLock(Long_t nElements, void *p) {
      return p ? new(p) ::TRWLock[nElements] : new ::TRWLock[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRWLock(void *p) {
      delete (static_cast<::TRWLock*>(p));
   }
   static void deleteArray_TRWLock(void *p) {
      delete [] (static_cast<::TRWLock*>(p));
   }
   static void destruct_TRWLock(void *p) {
      typedef ::TRWLock current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRWLock(TBuffer &buf, void *obj) {
      ((::TRWLock*)obj)->::TRWLock::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRWLock

//______________________________________________________________________________
void TSemaphore::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSemaphore.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSemaphore(void *p) {
      return  p ? new(p) ::TSemaphore : new ::TSemaphore;
   }
   static void *newArray_TSemaphore(Long_t nElements, void *p) {
      return p ? new(p) ::TSemaphore[nElements] : new ::TSemaphore[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSemaphore(void *p) {
      delete (static_cast<::TSemaphore*>(p));
   }
   static void deleteArray_TSemaphore(void *p) {
      delete [] (static_cast<::TSemaphore*>(p));
   }
   static void destruct_TSemaphore(void *p) {
      typedef ::TSemaphore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSemaphore(TBuffer &buf, void *obj) {
      ((::TSemaphore*)obj)->::TSemaphore::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSemaphore

//______________________________________________________________________________
void TThread::Streamer(TBuffer &R__b)
{
   // Stream an object of class TThread.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TThread(void *p) {
      return  p ? new(p) ::TThread : new ::TThread;
   }
   static void *newArray_TThread(Long_t nElements, void *p) {
      return p ? new(p) ::TThread[nElements] : new ::TThread[nElements];
   }
   // Wrapper around operator delete
   static void delete_TThread(void *p) {
      delete (static_cast<::TThread*>(p));
   }
   static void deleteArray_TThread(void *p) {
      delete [] (static_cast<::TThread*>(p));
   }
   static void destruct_TThread(void *p) {
      typedef ::TThread current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TThread(TBuffer &buf, void *obj) {
      ((::TThread*)obj)->::TThread::Streamer(buf);
   }
} // end of namespace ROOT for class ::TThread

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLTSpinMutex(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::TSpinMutex : new ::ROOT::TSpinMutex;
   }
   static void *newArray_ROOTcLcLTSpinMutex(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ROOT::TSpinMutex[nElements] : new ::ROOT::TSpinMutex[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLTSpinMutex(void *p) {
      delete (static_cast<::ROOT::TSpinMutex*>(p));
   }
   static void deleteArray_ROOTcLcLTSpinMutex(void *p) {
      delete [] (static_cast<::ROOT::TSpinMutex*>(p));
   }
   static void destruct_ROOTcLcLTSpinMutex(void *p) {
      typedef ::ROOT::TSpinMutex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TSpinMutex

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libThread() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libThread) = RecordReadRules_libThread();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libThread));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libThread_Impl() {
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
      TROOT::RegisterModule("libThread",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libThread_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libThread_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libThread() {
  TriggerDictionaryInitialization_libThread_Impl();
}
