// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RIO
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
#include "ROOT/RConcurrentHashColl.hxx"
#include "ROOT/RFile.hxx"
#include "ROOT/RRawFile.hxx"
#include "ROOT/RRawFileTFile.hxx"
#include "ROOT/RRawFileUnix.hxx"
#include "ROOT/TBufferMerger.hxx"
#include "TArchiveFile.h"
#include "TBufferFile.h"
#include "TBufferText.h"
#include "TBufferIO.h"
#include "TBufferJSON.h"
#include "TCollectionProxyFactory.h"
#include "TContainerConverters.h"
#include "TEmulatedMapProxy.h"
#include "TEmulatedCollectionProxy.h"
#include "TDirectoryFile.h"
#include "TFileCacheRead.h"
#include "TFileMerger.h"
#include "TFree.h"
#include "TFileCacheWrite.h"
#include "TFilePrefetch.h"
#include "TFile.h"
#include "TFPBlock.h"
#include "TGenCollectionStreamer.h"
#include "TGenCollectionProxy.h"
#include "TKey.h"
#include "TKeyMapFile.h"
#include "TLockFile.h"
#include "TMemFile.h"
#include "TMapFile.h"
#include "TMakeProject.h"
#include "TStreamerInfoActions.h"
#include "TVirtualCollectionIterators.h"
#include "TStreamerInfo.h"
#include "TZIPFile.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace TStreamerInfoActions {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *TStreamerInfoActions_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("TStreamerInfoActions", 0 /*version*/, "TBuffer.h", 39,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &TStreamerInfoActions_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *TStreamerInfoActions_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRRawFile_Dictionary();
   static void ROOTcLcLInternalcLcLRRawFile_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRRawFile(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRRawFile(void *p);
   static void destruct_ROOTcLcLInternalcLcLRRawFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RRawFile*)
   {
      ::ROOT::Internal::RRawFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RRawFile));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RRawFile", "ROOT/RRawFile.hxx", 43,
                  typeid(::ROOT::Internal::RRawFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRRawFile_Dictionary, isa_proxy, 4,
                  sizeof(::ROOT::Internal::RRawFile) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRRawFile);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRRawFile);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRRawFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RRawFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::Internal::RRawFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RRawFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRRawFile_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::Internal::RRawFile*>(nullptr))->GetClass();
      ROOTcLcLInternalcLcLRRawFile_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRRawFile_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TDirectoryFile(void *p = nullptr);
   static void *newArray_TDirectoryFile(Long_t size, void *p);
   static void delete_TDirectoryFile(void *p);
   static void deleteArray_TDirectoryFile(void *p);
   static void destruct_TDirectoryFile(void *p);
   static void streamer_TDirectoryFile(TBuffer &buf, void *obj);
   static void reset_TDirectoryFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TDirectoryFile*)
   {
      ::TDirectoryFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TDirectoryFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TDirectoryFile", ::TDirectoryFile::Class_Version(), "TDirectoryFile.h", 32,
                  typeid(::TDirectoryFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TDirectoryFile::Dictionary, isa_proxy, 17,
                  sizeof(::TDirectoryFile) );
      instance.SetNew(&new_TDirectoryFile);
      instance.SetNewArray(&newArray_TDirectoryFile);
      instance.SetDelete(&delete_TDirectoryFile);
      instance.SetDeleteArray(&deleteArray_TDirectoryFile);
      instance.SetDestructor(&destruct_TDirectoryFile);
      instance.SetStreamerFunc(&streamer_TDirectoryFile);
      instance.SetResetAfterMerge(&reset_TDirectoryFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TDirectoryFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TDirectoryFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TDirectoryFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFile(void *p = nullptr);
   static void *newArray_TFile(Long_t size, void *p);
   static void delete_TFile(void *p);
   static void deleteArray_TFile(void *p);
   static void destruct_TFile(void *p);
   static void streamer_TFile(TBuffer &buf, void *obj);
   static void reset_TFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFile*)
   {
      ::TFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFile", ::TFile::Class_Version(), "TFile.h", 130,
                  typeid(::TFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFile::Dictionary, isa_proxy, 17,
                  sizeof(::TFile) );
      instance.SetNew(&new_TFile);
      instance.SetNewArray(&newArray_TFile);
      instance.SetDelete(&delete_TFile);
      instance.SetDeleteArray(&deleteArray_TFile);
      instance.SetDestructor(&destruct_TFile);
      instance.SetStreamerFunc(&streamer_TFile);
      instance.SetResetAfterMerge(&reset_TFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileMerger(void *p = nullptr);
   static void *newArray_TFileMerger(Long_t size, void *p);
   static void delete_TFileMerger(void *p);
   static void deleteArray_TFileMerger(void *p);
   static void destruct_TFileMerger(void *p);
   static Long64_t merge_TFileMerger(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileMerger*)
   {
      ::TFileMerger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileMerger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFileMerger", ::TFileMerger::Class_Version(), "TFileMerger.h", 30,
                  typeid(::TFileMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileMerger::Dictionary, isa_proxy, 4,
                  sizeof(::TFileMerger) );
      instance.SetNew(&new_TFileMerger);
      instance.SetNewArray(&newArray_TFileMerger);
      instance.SetDelete(&delete_TFileMerger);
      instance.SetDeleteArray(&deleteArray_TFileMerger);
      instance.SetDestructor(&destruct_TFileMerger);
      instance.SetMerge(&merge_TFileMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileMerger*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFileMerger*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFileMerger*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TMemFile(void *p);
   static void deleteArray_TMemFile(void *p);
   static void destruct_TMemFile(void *p);
   static void streamer_TMemFile(TBuffer &buf, void *obj);
   static void reset_TMemFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMemFile*)
   {
      ::TMemFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMemFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMemFile", ::TMemFile::Class_Version(), "TMemFile.h", 27,
                  typeid(::TMemFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMemFile::Dictionary, isa_proxy, 16,
                  sizeof(::TMemFile) );
      instance.SetDelete(&delete_TMemFile);
      instance.SetDeleteArray(&deleteArray_TMemFile);
      instance.SetDestructor(&destruct_TMemFile);
      instance.SetStreamerFunc(&streamer_TMemFile);
      instance.SetResetAfterMerge(&reset_TMemFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMemFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMemFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMemFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLTBufferMerger_Dictionary();
   static void ROOTcLcLTBufferMerger_TClassManip(TClass*);
   static void delete_ROOTcLcLTBufferMerger(void *p);
   static void deleteArray_ROOTcLcLTBufferMerger(void *p);
   static void destruct_ROOTcLcLTBufferMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TBufferMerger*)
   {
      ::ROOT::TBufferMerger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::TBufferMerger));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TBufferMerger", "ROOT/TBufferMerger.hxx", 41,
                  typeid(::ROOT::TBufferMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLTBufferMerger_Dictionary, isa_proxy, 0,
                  sizeof(::ROOT::TBufferMerger) );
      instance.SetDelete(&delete_ROOTcLcLTBufferMerger);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTBufferMerger);
      instance.SetDestructor(&destruct_ROOTcLcLTBufferMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TBufferMerger*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::TBufferMerger*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::TBufferMerger*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLTBufferMerger_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ROOT::TBufferMerger*>(nullptr))->GetClass();
      ROOTcLcLTBufferMerger_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLTBufferMerger_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ROOTcLcLTBufferMergerFile(void *p);
   static void deleteArray_ROOTcLcLTBufferMergerFile(void *p);
   static void destruct_ROOTcLcLTBufferMergerFile(void *p);
   static void streamer_ROOTcLcLTBufferMergerFile(TBuffer &buf, void *obj);
   static void reset_ROOTcLcLTBufferMergerFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::TBufferMergerFile*)
   {
      ::ROOT::TBufferMergerFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ROOT::TBufferMergerFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::TBufferMergerFile", ::ROOT::TBufferMergerFile::Class_Version(), "ROOT/TBufferMerger.hxx", 143,
                  typeid(::ROOT::TBufferMergerFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ROOT::TBufferMergerFile::Dictionary, isa_proxy, 16,
                  sizeof(::ROOT::TBufferMergerFile) );
      instance.SetDelete(&delete_ROOTcLcLTBufferMergerFile);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLTBufferMergerFile);
      instance.SetDestructor(&destruct_ROOTcLcLTBufferMergerFile);
      instance.SetStreamerFunc(&streamer_ROOTcLcLTBufferMergerFile);
      instance.SetResetAfterMerge(&reset_ROOTcLcLTBufferMergerFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::TBufferMergerFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::ROOT::TBufferMergerFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ROOT::TBufferMergerFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TArchiveFile(void *p);
   static void deleteArray_TArchiveFile(void *p);
   static void destruct_TArchiveFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArchiveFile*)
   {
      ::TArchiveFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArchiveFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArchiveFile", ::TArchiveFile::Class_Version(), "TArchiveFile.h", 24,
                  typeid(::TArchiveFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArchiveFile::Dictionary, isa_proxy, 4,
                  sizeof(::TArchiveFile) );
      instance.SetDelete(&delete_TArchiveFile);
      instance.SetDeleteArray(&deleteArray_TArchiveFile);
      instance.SetDestructor(&destruct_TArchiveFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArchiveFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArchiveFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArchiveFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArchiveMember(void *p = nullptr);
   static void *newArray_TArchiveMember(Long_t size, void *p);
   static void delete_TArchiveMember(void *p);
   static void deleteArray_TArchiveMember(void *p);
   static void destruct_TArchiveMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArchiveMember*)
   {
      ::TArchiveMember *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArchiveMember >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArchiveMember", ::TArchiveMember::Class_Version(), "TArchiveFile.h", 65,
                  typeid(::TArchiveMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArchiveMember::Dictionary, isa_proxy, 4,
                  sizeof(::TArchiveMember) );
      instance.SetNew(&new_TArchiveMember);
      instance.SetNewArray(&newArray_TArchiveMember);
      instance.SetDelete(&delete_TArchiveMember);
      instance.SetDeleteArray(&deleteArray_TArchiveMember);
      instance.SetDestructor(&destruct_TArchiveMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArchiveMember*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArchiveMember*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArchiveMember*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TBufferIO(void *p);
   static void deleteArray_TBufferIO(void *p);
   static void destruct_TBufferIO(void *p);
   static void streamer_TBufferIO(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferIO*)
   {
      ::TBufferIO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferIO >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferIO", ::TBufferIO::Class_Version(), "TBufferIO.h", 30,
                  typeid(::TBufferIO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferIO::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferIO) );
      instance.SetDelete(&delete_TBufferIO);
      instance.SetDeleteArray(&deleteArray_TBufferIO);
      instance.SetDestructor(&destruct_TBufferIO);
      instance.SetStreamerFunc(&streamer_TBufferIO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferIO*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBufferIO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBufferIO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TBufferFile(void *p);
   static void deleteArray_TBufferFile(void *p);
   static void destruct_TBufferFile(void *p);
   static void streamer_TBufferFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferFile*)
   {
      ::TBufferFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferFile", ::TBufferFile::Class_Version(), "TBufferFile.h", 47,
                  typeid(::TBufferFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferFile::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferFile) );
      instance.SetDelete(&delete_TBufferFile);
      instance.SetDeleteArray(&deleteArray_TBufferFile);
      instance.SetDestructor(&destruct_TBufferFile);
      instance.SetStreamerFunc(&streamer_TBufferFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBufferFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBufferFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TBufferText(void *p);
   static void deleteArray_TBufferText(void *p);
   static void destruct_TBufferText(void *p);
   static void streamer_TBufferText(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferText*)
   {
      ::TBufferText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferText >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferText", ::TBufferText::Class_Version(), "TBufferText.h", 20,
                  typeid(::TBufferText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferText::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferText) );
      instance.SetDelete(&delete_TBufferText);
      instance.SetDeleteArray(&deleteArray_TBufferText);
      instance.SetDestructor(&destruct_TBufferText);
      instance.SetStreamerFunc(&streamer_TBufferText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferText*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBufferText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBufferText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TBufferJSON(void *p = nullptr);
   static void *newArray_TBufferJSON(Long_t size, void *p);
   static void delete_TBufferJSON(void *p);
   static void deleteArray_TBufferJSON(void *p);
   static void destruct_TBufferJSON(void *p);
   static void streamer_TBufferJSON(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TBufferJSON*)
   {
      ::TBufferJSON *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TBufferJSON >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TBufferJSON", ::TBufferJSON::Class_Version(), "TBufferJSON.h", 30,
                  typeid(::TBufferJSON), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TBufferJSON::Dictionary, isa_proxy, 16,
                  sizeof(::TBufferJSON) );
      instance.SetNew(&new_TBufferJSON);
      instance.SetNewArray(&newArray_TBufferJSON);
      instance.SetDelete(&delete_TBufferJSON);
      instance.SetDeleteArray(&deleteArray_TBufferJSON);
      instance.SetDestructor(&destruct_TBufferJSON);
      instance.SetStreamerFunc(&streamer_TBufferJSON);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TBufferJSON*)
   {
      return GenerateInitInstanceLocal(static_cast<::TBufferJSON*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TBufferJSON*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenCollectionProxy_Dictionary();
   static void TGenCollectionProxy_TClassManip(TClass*);
   static void delete_TGenCollectionProxy(void *p);
   static void deleteArray_TGenCollectionProxy(void *p);
   static void destruct_TGenCollectionProxy(void *p);
   static void streamer_TGenCollectionProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenCollectionProxy*)
   {
      ::TGenCollectionProxy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenCollectionProxy));
      static ::ROOT::TGenericClassInfo 
         instance("TGenCollectionProxy", "TGenCollectionProxy.h", 29,
                  typeid(::TGenCollectionProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenCollectionProxy_Dictionary, isa_proxy, 17,
                  sizeof(::TGenCollectionProxy) );
      instance.SetDelete(&delete_TGenCollectionProxy);
      instance.SetDeleteArray(&deleteArray_TGenCollectionProxy);
      instance.SetDestructor(&destruct_TGenCollectionProxy);
      instance.SetStreamerFunc(&streamer_TGenCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenCollectionProxy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGenCollectionProxy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGenCollectionProxy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenCollectionProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGenCollectionProxy*>(nullptr))->GetClass();
      TGenCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void TGenCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenCollectionProxycLcLValue_Dictionary();
   static void TGenCollectionProxycLcLValue_TClassManip(TClass*);
   static void delete_TGenCollectionProxycLcLValue(void *p);
   static void deleteArray_TGenCollectionProxycLcLValue(void *p);
   static void destruct_TGenCollectionProxycLcLValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenCollectionProxy::Value*)
   {
      ::TGenCollectionProxy::Value *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenCollectionProxy::Value));
      static ::ROOT::TGenericClassInfo 
         instance("TGenCollectionProxy::Value", "TGenCollectionProxy.h", 60,
                  typeid(::TGenCollectionProxy::Value), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenCollectionProxycLcLValue_Dictionary, isa_proxy, 1,
                  sizeof(::TGenCollectionProxy::Value) );
      instance.SetDelete(&delete_TGenCollectionProxycLcLValue);
      instance.SetDeleteArray(&deleteArray_TGenCollectionProxycLcLValue);
      instance.SetDestructor(&destruct_TGenCollectionProxycLcLValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenCollectionProxy::Value*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGenCollectionProxy::Value*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGenCollectionProxy::Value*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenCollectionProxycLcLValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGenCollectionProxy::Value*>(nullptr))->GetClass();
      TGenCollectionProxycLcLValue_TClassManip(theClass);
   return theClass;
   }

   static void TGenCollectionProxycLcLValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TGenCollectionProxycLcLMethod_Dictionary();
   static void TGenCollectionProxycLcLMethod_TClassManip(TClass*);
   static void *new_TGenCollectionProxycLcLMethod(void *p = nullptr);
   static void *newArray_TGenCollectionProxycLcLMethod(Long_t size, void *p);
   static void delete_TGenCollectionProxycLcLMethod(void *p);
   static void deleteArray_TGenCollectionProxycLcLMethod(void *p);
   static void destruct_TGenCollectionProxycLcLMethod(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGenCollectionProxy::Method*)
   {
      ::TGenCollectionProxy::Method *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TGenCollectionProxy::Method));
      static ::ROOT::TGenericClassInfo 
         instance("TGenCollectionProxy::Method", "TGenCollectionProxy.h", 193,
                  typeid(::TGenCollectionProxy::Method), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TGenCollectionProxycLcLMethod_Dictionary, isa_proxy, 1,
                  sizeof(::TGenCollectionProxy::Method) );
      instance.SetNew(&new_TGenCollectionProxycLcLMethod);
      instance.SetNewArray(&newArray_TGenCollectionProxycLcLMethod);
      instance.SetDelete(&delete_TGenCollectionProxycLcLMethod);
      instance.SetDeleteArray(&deleteArray_TGenCollectionProxycLcLMethod);
      instance.SetDestructor(&destruct_TGenCollectionProxycLcLMethod);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGenCollectionProxy::Method*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGenCollectionProxy::Method*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGenCollectionProxy::Method*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TGenCollectionProxycLcLMethod_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TGenCollectionProxy::Method*>(nullptr))->GetClass();
      TGenCollectionProxycLcLMethod_TClassManip(theClass);
   return theClass;
   }

   static void TGenCollectionProxycLcLMethod_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionProxyFactory_Dictionary();
   static void TCollectionProxyFactory_TClassManip(TClass*);
   static void *new_TCollectionProxyFactory(void *p = nullptr);
   static void *newArray_TCollectionProxyFactory(Long_t size, void *p);
   static void delete_TCollectionProxyFactory(void *p);
   static void deleteArray_TCollectionProxyFactory(void *p);
   static void destruct_TCollectionProxyFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionProxyFactory*)
   {
      ::TCollectionProxyFactory *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionProxyFactory));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionProxyFactory", "TCollectionProxyFactory.h", 65,
                  typeid(::TCollectionProxyFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionProxyFactory_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionProxyFactory) );
      instance.SetNew(&new_TCollectionProxyFactory);
      instance.SetNewArray(&newArray_TCollectionProxyFactory);
      instance.SetDelete(&delete_TCollectionProxyFactory);
      instance.SetDeleteArray(&deleteArray_TCollectionProxyFactory);
      instance.SetDestructor(&destruct_TCollectionProxyFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionProxyFactory*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCollectionProxyFactory*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCollectionProxyFactory*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionProxyFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TCollectionProxyFactory*>(nullptr))->GetClass();
      TCollectionProxyFactory_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionProxyFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionStreamer_Dictionary();
   static void TCollectionStreamer_TClassManip(TClass*);
   static void *new_TCollectionStreamer(void *p = nullptr);
   static void *newArray_TCollectionStreamer(Long_t size, void *p);
   static void delete_TCollectionStreamer(void *p);
   static void deleteArray_TCollectionStreamer(void *p);
   static void destruct_TCollectionStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionStreamer*)
   {
      ::TCollectionStreamer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionStreamer));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionStreamer", "TCollectionProxyFactory.h", 125,
                  typeid(::TCollectionStreamer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionStreamer) );
      instance.SetNew(&new_TCollectionStreamer);
      instance.SetNewArray(&newArray_TCollectionStreamer);
      instance.SetDelete(&delete_TCollectionStreamer);
      instance.SetDeleteArray(&deleteArray_TCollectionStreamer);
      instance.SetDestructor(&destruct_TCollectionStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionStreamer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCollectionStreamer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCollectionStreamer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionStreamer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TCollectionStreamer*>(nullptr))->GetClass();
      TCollectionStreamer_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionStreamer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionClassStreamer_Dictionary();
   static void TCollectionClassStreamer_TClassManip(TClass*);
   static void *new_TCollectionClassStreamer(void *p = nullptr);
   static void *newArray_TCollectionClassStreamer(Long_t size, void *p);
   static void delete_TCollectionClassStreamer(void *p);
   static void deleteArray_TCollectionClassStreamer(void *p);
   static void destruct_TCollectionClassStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionClassStreamer*)
   {
      ::TCollectionClassStreamer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionClassStreamer));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionClassStreamer", "TCollectionProxyFactory.h", 157,
                  typeid(::TCollectionClassStreamer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionClassStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionClassStreamer) );
      instance.SetNew(&new_TCollectionClassStreamer);
      instance.SetNewArray(&newArray_TCollectionClassStreamer);
      instance.SetDelete(&delete_TCollectionClassStreamer);
      instance.SetDeleteArray(&deleteArray_TCollectionClassStreamer);
      instance.SetDestructor(&destruct_TCollectionClassStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionClassStreamer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCollectionClassStreamer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCollectionClassStreamer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionClassStreamer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TCollectionClassStreamer*>(nullptr))->GetClass();
      TCollectionClassStreamer_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionClassStreamer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TCollectionMemberStreamer_Dictionary();
   static void TCollectionMemberStreamer_TClassManip(TClass*);
   static void *new_TCollectionMemberStreamer(void *p = nullptr);
   static void *newArray_TCollectionMemberStreamer(Long_t size, void *p);
   static void delete_TCollectionMemberStreamer(void *p);
   static void deleteArray_TCollectionMemberStreamer(void *p);
   static void destruct_TCollectionMemberStreamer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCollectionMemberStreamer*)
   {
      ::TCollectionMemberStreamer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TCollectionMemberStreamer));
      static ::ROOT::TGenericClassInfo 
         instance("TCollectionMemberStreamer", "TCollectionProxyFactory.h", 205,
                  typeid(::TCollectionMemberStreamer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TCollectionMemberStreamer_Dictionary, isa_proxy, 1,
                  sizeof(::TCollectionMemberStreamer) );
      instance.SetNew(&new_TCollectionMemberStreamer);
      instance.SetNewArray(&newArray_TCollectionMemberStreamer);
      instance.SetDelete(&delete_TCollectionMemberStreamer);
      instance.SetDeleteArray(&deleteArray_TCollectionMemberStreamer);
      instance.SetDestructor(&destruct_TCollectionMemberStreamer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCollectionMemberStreamer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCollectionMemberStreamer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCollectionMemberStreamer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TCollectionMemberStreamer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TCollectionMemberStreamer*>(nullptr))->GetClass();
      TCollectionMemberStreamer_TClassManip(theClass);
   return theClass;
   }

   static void TCollectionMemberStreamer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEmulatedCollectionProxy_Dictionary();
   static void TEmulatedCollectionProxy_TClassManip(TClass*);
   static void delete_TEmulatedCollectionProxy(void *p);
   static void deleteArray_TEmulatedCollectionProxy(void *p);
   static void destruct_TEmulatedCollectionProxy(void *p);
   static void streamer_TEmulatedCollectionProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEmulatedCollectionProxy*)
   {
      ::TEmulatedCollectionProxy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEmulatedCollectionProxy));
      static ::ROOT::TGenericClassInfo 
         instance("TEmulatedCollectionProxy", "TEmulatedCollectionProxy.h", 18,
                  typeid(::TEmulatedCollectionProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEmulatedCollectionProxy_Dictionary, isa_proxy, 17,
                  sizeof(::TEmulatedCollectionProxy) );
      instance.SetDelete(&delete_TEmulatedCollectionProxy);
      instance.SetDeleteArray(&deleteArray_TEmulatedCollectionProxy);
      instance.SetDestructor(&destruct_TEmulatedCollectionProxy);
      instance.SetStreamerFunc(&streamer_TEmulatedCollectionProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEmulatedCollectionProxy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEmulatedCollectionProxy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEmulatedCollectionProxy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEmulatedCollectionProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEmulatedCollectionProxy*>(nullptr))->GetClass();
      TEmulatedCollectionProxy_TClassManip(theClass);
   return theClass;
   }

   static void TEmulatedCollectionProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *TEmulatedMapProxy_Dictionary();
   static void TEmulatedMapProxy_TClassManip(TClass*);
   static void delete_TEmulatedMapProxy(void *p);
   static void deleteArray_TEmulatedMapProxy(void *p);
   static void destruct_TEmulatedMapProxy(void *p);
   static void streamer_TEmulatedMapProxy(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TEmulatedMapProxy*)
   {
      ::TEmulatedMapProxy *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TEmulatedMapProxy));
      static ::ROOT::TGenericClassInfo 
         instance("TEmulatedMapProxy", "TEmulatedMapProxy.h", 16,
                  typeid(::TEmulatedMapProxy), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TEmulatedMapProxy_Dictionary, isa_proxy, 17,
                  sizeof(::TEmulatedMapProxy) );
      instance.SetDelete(&delete_TEmulatedMapProxy);
      instance.SetDeleteArray(&deleteArray_TEmulatedMapProxy);
      instance.SetDestructor(&destruct_TEmulatedMapProxy);
      instance.SetStreamerFunc(&streamer_TEmulatedMapProxy);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TEmulatedMapProxy*)
   {
      return GenerateInitInstanceLocal(static_cast<::TEmulatedMapProxy*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TEmulatedMapProxy*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TEmulatedMapProxy_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TEmulatedMapProxy*>(nullptr))->GetClass();
      TEmulatedMapProxy_TClassManip(theClass);
   return theClass;
   }

   static void TEmulatedMapProxy_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileCacheRead(void *p = nullptr);
   static void *newArray_TFileCacheRead(Long_t size, void *p);
   static void delete_TFileCacheRead(void *p);
   static void deleteArray_TFileCacheRead(void *p);
   static void destruct_TFileCacheRead(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileCacheRead*)
   {
      ::TFileCacheRead *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileCacheRead >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFileCacheRead", ::TFileCacheRead::Class_Version(), "TFileCacheRead.h", 22,
                  typeid(::TFileCacheRead), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileCacheRead::Dictionary, isa_proxy, 4,
                  sizeof(::TFileCacheRead) );
      instance.SetNew(&new_TFileCacheRead);
      instance.SetNewArray(&newArray_TFileCacheRead);
      instance.SetDelete(&delete_TFileCacheRead);
      instance.SetDeleteArray(&deleteArray_TFileCacheRead);
      instance.SetDestructor(&destruct_TFileCacheRead);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileCacheRead*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFileCacheRead*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFileCacheRead*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFree(void *p = nullptr);
   static void *newArray_TFree(Long_t size, void *p);
   static void delete_TFree(void *p);
   static void deleteArray_TFree(void *p);
   static void destruct_TFree(void *p);
   static void streamer_TFree(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFree*)
   {
      ::TFree *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFree >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFree", ::TFree::Class_Version(), "TFree.h", 27,
                  typeid(::TFree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFree::Dictionary, isa_proxy, 16,
                  sizeof(::TFree) );
      instance.SetNew(&new_TFree);
      instance.SetNewArray(&newArray_TFree);
      instance.SetDelete(&delete_TFree);
      instance.SetDeleteArray(&deleteArray_TFree);
      instance.SetDestructor(&destruct_TFree);
      instance.SetStreamerFunc(&streamer_TFree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFree*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFree*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFree*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFileCacheWrite(void *p = nullptr);
   static void *newArray_TFileCacheWrite(Long_t size, void *p);
   static void delete_TFileCacheWrite(void *p);
   static void deleteArray_TFileCacheWrite(void *p);
   static void destruct_TFileCacheWrite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFileCacheWrite*)
   {
      ::TFileCacheWrite *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFileCacheWrite >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFileCacheWrite", ::TFileCacheWrite::Class_Version(), "TFileCacheWrite.h", 19,
                  typeid(::TFileCacheWrite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFileCacheWrite::Dictionary, isa_proxy, 4,
                  sizeof(::TFileCacheWrite) );
      instance.SetNew(&new_TFileCacheWrite);
      instance.SetNewArray(&newArray_TFileCacheWrite);
      instance.SetDelete(&delete_TFileCacheWrite);
      instance.SetDeleteArray(&deleteArray_TFileCacheWrite);
      instance.SetDestructor(&destruct_TFileCacheWrite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFileCacheWrite*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFileCacheWrite*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFileCacheWrite*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFPBlock(void *p);
   static void deleteArray_TFPBlock(void *p);
   static void destruct_TFPBlock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFPBlock*)
   {
      ::TFPBlock *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFPBlock >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFPBlock", ::TFPBlock::Class_Version(), "TFPBlock.h", 22,
                  typeid(::TFPBlock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFPBlock::Dictionary, isa_proxy, 4,
                  sizeof(::TFPBlock) );
      instance.SetDelete(&delete_TFPBlock);
      instance.SetDeleteArray(&deleteArray_TFPBlock);
      instance.SetDestructor(&destruct_TFPBlock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFPBlock*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFPBlock*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFPBlock*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFilePrefetch(void *p);
   static void deleteArray_TFilePrefetch(void *p);
   static void destruct_TFilePrefetch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFilePrefetch*)
   {
      ::TFilePrefetch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFilePrefetch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFilePrefetch", ::TFilePrefetch::Class_Version(), "TFilePrefetch.h", 33,
                  typeid(::TFilePrefetch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFilePrefetch::Dictionary, isa_proxy, 4,
                  sizeof(::TFilePrefetch) );
      instance.SetDelete(&delete_TFilePrefetch);
      instance.SetDeleteArray(&deleteArray_TFilePrefetch);
      instance.SetDestructor(&destruct_TFilePrefetch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFilePrefetch*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFilePrefetch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFilePrefetch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TKey(void *p = nullptr);
   static void *newArray_TKey(Long_t size, void *p);
   static void delete_TKey(void *p);
   static void deleteArray_TKey(void *p);
   static void destruct_TKey(void *p);
   static void streamer_TKey(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKey*)
   {
      ::TKey *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKey >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TKey", ::TKey::Class_Version(), "TKey.h", 28,
                  typeid(::TKey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKey::Dictionary, isa_proxy, 17,
                  sizeof(::TKey) );
      instance.SetNew(&new_TKey);
      instance.SetNewArray(&newArray_TKey);
      instance.SetDelete(&delete_TKey);
      instance.SetDeleteArray(&deleteArray_TKey);
      instance.SetDestructor(&destruct_TKey);
      instance.SetStreamerFunc(&streamer_TKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKey*)
   {
      return GenerateInitInstanceLocal(static_cast<::TKey*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TKey*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TKeyMapFile(void *p = nullptr);
   static void *newArray_TKeyMapFile(Long_t size, void *p);
   static void delete_TKeyMapFile(void *p);
   static void deleteArray_TKeyMapFile(void *p);
   static void destruct_TKeyMapFile(void *p);
   static void streamer_TKeyMapFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TKeyMapFile*)
   {
      ::TKeyMapFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TKeyMapFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TKeyMapFile", ::TKeyMapFile::Class_Version(), "TKeyMapFile.h", 20,
                  typeid(::TKeyMapFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TKeyMapFile::Dictionary, isa_proxy, 16,
                  sizeof(::TKeyMapFile) );
      instance.SetNew(&new_TKeyMapFile);
      instance.SetNewArray(&newArray_TKeyMapFile);
      instance.SetDelete(&delete_TKeyMapFile);
      instance.SetDeleteArray(&deleteArray_TKeyMapFile);
      instance.SetDestructor(&destruct_TKeyMapFile);
      instance.SetStreamerFunc(&streamer_TKeyMapFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TKeyMapFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TKeyMapFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TKeyMapFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TLockFile(void *p);
   static void deleteArray_TLockFile(void *p);
   static void destruct_TLockFile(void *p);
   static void streamer_TLockFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLockFile*)
   {
      ::TLockFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLockFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLockFile", ::TLockFile::Class_Version(), "TLockFile.h", 19,
                  typeid(::TLockFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLockFile::Dictionary, isa_proxy, 16,
                  sizeof(::TLockFile) );
      instance.SetDelete(&delete_TLockFile);
      instance.SetDeleteArray(&deleteArray_TLockFile);
      instance.SetDestructor(&destruct_TLockFile);
      instance.SetStreamerFunc(&streamer_TLockFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLockFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLockFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLockFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_TMapFile(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMapFile*)
   {
      ::TMapFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TMapFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TMapFile", ::TMapFile::Class_Version(), "TMapFile.h", 26,
                  typeid(::TMapFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TMapFile::Dictionary, isa_proxy, 16,
                  sizeof(::TMapFile) );
      instance.SetStreamerFunc(&streamer_TMapFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMapFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMapFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMapFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TMapRec_Dictionary();
   static void TMapRec_TClassManip(TClass*);
   static void delete_TMapRec(void *p);
   static void deleteArray_TMapRec(void *p);
   static void destruct_TMapRec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TMapRec*)
   {
      ::TMapRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TMapRec));
      static ::ROOT::TGenericClassInfo 
         instance("TMapRec", "TMapFile.h", 132,
                  typeid(::TMapRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TMapRec_Dictionary, isa_proxy, 0,
                  sizeof(::TMapRec) );
      instance.SetDelete(&delete_TMapRec);
      instance.SetDeleteArray(&deleteArray_TMapRec);
      instance.SetDestructor(&destruct_TMapRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TMapRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::TMapRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TMapRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TMapRec_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TMapRec*>(nullptr))->GetClass();
      TMapRec_TClassManip(theClass);
   return theClass;
   }

   static void TMapRec_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TStreamerInfo(void *p = nullptr);
   static void *newArray_TStreamerInfo(Long_t size, void *p);
   static void delete_TStreamerInfo(void *p);
   static void deleteArray_TStreamerInfo(void *p);
   static void destruct_TStreamerInfo(void *p);
   static void streamer_TStreamerInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfo*)
   {
      ::TStreamerInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStreamerInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfo", ::TStreamerInfo::Class_Version(), "TStreamerInfo.h", 39,
                  typeid(::TStreamerInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStreamerInfo::Dictionary, isa_proxy, 17,
                  sizeof(::TStreamerInfo) );
      instance.SetNew(&new_TStreamerInfo);
      instance.SetNewArray(&newArray_TStreamerInfo);
      instance.SetDelete(&delete_TStreamerInfo);
      instance.SetDeleteArray(&deleteArray_TStreamerInfo);
      instance.SetDestructor(&destruct_TStreamerInfo);
      instance.SetStreamerFunc(&streamer_TStreamerInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStreamerInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStreamerInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TStreamerInfoActionscLcLTConfiguration_Dictionary();
   static void TStreamerInfoActionscLcLTConfiguration_TClassManip(TClass*);
   static void delete_TStreamerInfoActionscLcLTConfiguration(void *p);
   static void deleteArray_TStreamerInfoActionscLcLTConfiguration(void *p);
   static void destruct_TStreamerInfoActionscLcLTConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfoActions::TConfiguration*)
   {
      ::TStreamerInfoActions::TConfiguration *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TStreamerInfoActions::TConfiguration));
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfoActions::TConfiguration", "TStreamerInfoActions.h", 29,
                  typeid(::TStreamerInfoActions::TConfiguration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TStreamerInfoActionscLcLTConfiguration_Dictionary, isa_proxy, 1,
                  sizeof(::TStreamerInfoActions::TConfiguration) );
      instance.SetDelete(&delete_TStreamerInfoActionscLcLTConfiguration);
      instance.SetDeleteArray(&deleteArray_TStreamerInfoActionscLcLTConfiguration);
      instance.SetDestructor(&destruct_TStreamerInfoActionscLcLTConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfoActions::TConfiguration*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStreamerInfoActions::TConfiguration*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStreamerInfoActions::TConfiguration*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TStreamerInfoActionscLcLTConfiguration_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::TStreamerInfoActions::TConfiguration*>(nullptr))->GetClass();
      TStreamerInfoActionscLcLTConfiguration_TClassManip(theClass);
   return theClass;
   }

   static void TStreamerInfoActionscLcLTConfiguration_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TStreamerInfoActionscLcLTConfiguredAction(void *p = nullptr);
   static void *newArray_TStreamerInfoActionscLcLTConfiguredAction(Long_t size, void *p);
   static void delete_TStreamerInfoActionscLcLTConfiguredAction(void *p);
   static void deleteArray_TStreamerInfoActionscLcLTConfiguredAction(void *p);
   static void destruct_TStreamerInfoActionscLcLTConfiguredAction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfoActions::TConfiguredAction*)
   {
      ::TStreamerInfoActions::TConfiguredAction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStreamerInfoActions::TConfiguredAction >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfoActions::TConfiguredAction", ::TStreamerInfoActions::TConfiguredAction::Class_Version(), "TStreamerInfoActions.h", 74,
                  typeid(::TStreamerInfoActions::TConfiguredAction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStreamerInfoActions::TConfiguredAction::Dictionary, isa_proxy, 4,
                  sizeof(::TStreamerInfoActions::TConfiguredAction) );
      instance.SetNew(&new_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetNewArray(&newArray_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDelete(&delete_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDeleteArray(&deleteArray_TStreamerInfoActionscLcLTConfiguredAction);
      instance.SetDestructor(&destruct_TStreamerInfoActionscLcLTConfiguredAction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfoActions::TConfiguredAction*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStreamerInfoActions::TConfiguredAction*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStreamerInfoActions::TConfiguredAction*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStreamerInfoActionscLcLTActionSequence(void *p);
   static void deleteArray_TStreamerInfoActionscLcLTActionSequence(void *p);
   static void destruct_TStreamerInfoActionscLcLTActionSequence(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStreamerInfoActions::TActionSequence*)
   {
      ::TStreamerInfoActions::TActionSequence *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStreamerInfoActions::TActionSequence >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStreamerInfoActions::TActionSequence", ::TStreamerInfoActions::TActionSequence::Class_Version(), "TStreamerInfoActions.h", 177,
                  typeid(::TStreamerInfoActions::TActionSequence), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStreamerInfoActions::TActionSequence::Dictionary, isa_proxy, 4,
                  sizeof(::TStreamerInfoActions::TActionSequence) );
      instance.SetDelete(&delete_TStreamerInfoActionscLcLTActionSequence);
      instance.SetDeleteArray(&deleteArray_TStreamerInfoActionscLcLTActionSequence);
      instance.SetDestructor(&destruct_TStreamerInfoActionscLcLTActionSequence);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStreamerInfoActions::TActionSequence*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStreamerInfoActions::TActionSequence*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStreamerInfoActions::TActionSequence*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TZIPFile(void *p = nullptr);
   static void *newArray_TZIPFile(Long_t size, void *p);
   static void delete_TZIPFile(void *p);
   static void deleteArray_TZIPFile(void *p);
   static void destruct_TZIPFile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TZIPFile*)
   {
      ::TZIPFile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TZIPFile >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TZIPFile", ::TZIPFile::Class_Version(), "TZIPFile.h", 20,
                  typeid(::TZIPFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TZIPFile::Dictionary, isa_proxy, 4,
                  sizeof(::TZIPFile) );
      instance.SetNew(&new_TZIPFile);
      instance.SetNewArray(&newArray_TZIPFile);
      instance.SetDelete(&delete_TZIPFile);
      instance.SetDeleteArray(&deleteArray_TZIPFile);
      instance.SetDestructor(&destruct_TZIPFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TZIPFile*)
   {
      return GenerateInitInstanceLocal(static_cast<::TZIPFile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TZIPFile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TZIPMember(void *p = nullptr);
   static void *newArray_TZIPMember(Long_t size, void *p);
   static void delete_TZIPMember(void *p);
   static void deleteArray_TZIPMember(void *p);
   static void destruct_TZIPMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TZIPMember*)
   {
      ::TZIPMember *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TZIPMember >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TZIPMember", ::TZIPMember::Class_Version(), "TZIPFile.h", 156,
                  typeid(::TZIPMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TZIPMember::Dictionary, isa_proxy, 4,
                  sizeof(::TZIPMember) );
      instance.SetNew(&new_TZIPMember);
      instance.SetNewArray(&newArray_TZIPMember);
      instance.SetDelete(&delete_TZIPMember);
      instance.SetDeleteArray(&deleteArray_TZIPMember);
      instance.SetDestructor(&destruct_TZIPMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TZIPMember*)
   {
      return GenerateInitInstanceLocal(static_cast<::TZIPMember*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TZIPMember*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TDirectoryFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TDirectoryFile::Class_Name()
{
   return "TDirectoryFile";
}

//______________________________________________________________________________
const char *TDirectoryFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TDirectoryFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TDirectoryFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TDirectoryFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TDirectoryFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFile::Class_Name()
{
   return "TFile";
}

//______________________________________________________________________________
const char *TFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileMerger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileMerger::Class_Name()
{
   return "TFileMerger";
}

//______________________________________________________________________________
const char *TFileMerger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFileMerger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileMerger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileMerger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileMerger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMemFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMemFile::Class_Name()
{
   return "TMemFile";
}

//______________________________________________________________________________
const char *TMemFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMemFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMemFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMemFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMemFile*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
//______________________________________________________________________________
atomic_TClass_ptr TBufferMergerFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferMergerFile::Class_Name()
{
   return "ROOT::TBufferMergerFile";
}

//______________________________________________________________________________
const char *TBufferMergerFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::TBufferMergerFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferMergerFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ROOT::TBufferMergerFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferMergerFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::TBufferMergerFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferMergerFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ROOT::TBufferMergerFile*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace ROOT
//______________________________________________________________________________
atomic_TClass_ptr TArchiveFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArchiveFile::Class_Name()
{
   return "TArchiveFile";
}

//______________________________________________________________________________
const char *TArchiveFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArchiveFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArchiveFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArchiveFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArchiveMember::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArchiveMember::Class_Name()
{
   return "TArchiveMember";
}

//______________________________________________________________________________
const char *TArchiveMember::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArchiveMember::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArchiveMember::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArchiveMember::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArchiveMember*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferIO::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferIO::Class_Name()
{
   return "TBufferIO";
}

//______________________________________________________________________________
const char *TBufferIO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferIO*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferIO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferIO*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferIO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferIO*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferIO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferIO*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferFile::Class_Name()
{
   return "TBufferFile";
}

//______________________________________________________________________________
const char *TBufferFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferText::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferText::Class_Name()
{
   return "TBufferText";
}

//______________________________________________________________________________
const char *TBufferText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferText*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferText*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferText*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferText*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TBufferJSON::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TBufferJSON::Class_Name()
{
   return "TBufferJSON";
}

//______________________________________________________________________________
const char *TBufferJSON::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TBufferJSON::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TBufferJSON::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TBufferJSON::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TBufferJSON*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileCacheRead::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileCacheRead::Class_Name()
{
   return "TFileCacheRead";
}

//______________________________________________________________________________
const char *TFileCacheRead::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFileCacheRead::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileCacheRead::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileCacheRead::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheRead*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFree::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFree::Class_Name()
{
   return "TFree";
}

//______________________________________________________________________________
const char *TFree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFree*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFree*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFree*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFree*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFileCacheWrite::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFileCacheWrite::Class_Name()
{
   return "TFileCacheWrite";
}

//______________________________________________________________________________
const char *TFileCacheWrite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFileCacheWrite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFileCacheWrite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFileCacheWrite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFileCacheWrite*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFPBlock::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFPBlock::Class_Name()
{
   return "TFPBlock";
}

//______________________________________________________________________________
const char *TFPBlock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFPBlock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFPBlock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFPBlock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFPBlock*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFilePrefetch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFilePrefetch::Class_Name()
{
   return "TFilePrefetch";
}

//______________________________________________________________________________
const char *TFilePrefetch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFilePrefetch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFilePrefetch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFilePrefetch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFilePrefetch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKey::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TKey::Class_Name()
{
   return "TKey";
}

//______________________________________________________________________________
const char *TKey::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKey*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TKey::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKey*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKey::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKey*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKey::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKey*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TKeyMapFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TKeyMapFile::Class_Name()
{
   return "TKeyMapFile";
}

//______________________________________________________________________________
const char *TKeyMapFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TKeyMapFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TKeyMapFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TKeyMapFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TKeyMapFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLockFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLockFile::Class_Name()
{
   return "TLockFile";
}

//______________________________________________________________________________
const char *TLockFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLockFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLockFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLockFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLockFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TMapFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TMapFile::Class_Name()
{
   return "TMapFile";
}

//______________________________________________________________________________
const char *TMapFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TMapFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TMapFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TMapFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TMapFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStreamerInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStreamerInfo::Class_Name()
{
   return "TStreamerInfo";
}

//______________________________________________________________________________
const char *TStreamerInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStreamerInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStreamerInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStreamerInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace TStreamerInfoActions {
//______________________________________________________________________________
atomic_TClass_ptr TConfiguredAction::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TConfiguredAction::Class_Name()
{
   return "TStreamerInfoActions::TConfiguredAction";
}

//______________________________________________________________________________
const char *TConfiguredAction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TConfiguredAction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TConfiguredAction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TConfiguredAction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TConfiguredAction*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TStreamerInfoActions
namespace TStreamerInfoActions {
//______________________________________________________________________________
atomic_TClass_ptr TActionSequence::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TActionSequence::Class_Name()
{
   return "TStreamerInfoActions::TActionSequence";
}

//______________________________________________________________________________
const char *TActionSequence::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TActionSequence::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TActionSequence::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TActionSequence::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStreamerInfoActions::TActionSequence*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace TStreamerInfoActions
//______________________________________________________________________________
atomic_TClass_ptr TZIPFile::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TZIPFile::Class_Name()
{
   return "TZIPFile";
}

//______________________________________________________________________________
const char *TZIPFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TZIPFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TZIPFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TZIPFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPFile*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TZIPMember::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TZIPMember::Class_Name()
{
   return "TZIPMember";
}

//______________________________________________________________________________
const char *TZIPMember::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TZIPMember::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TZIPMember::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TZIPMember::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TZIPMember*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRRawFile(void *p) {
      delete (static_cast<::ROOT::Internal::RRawFile*>(p));
   }
   static void deleteArray_ROOTcLcLInternalcLcLRRawFile(void *p) {
      delete [] (static_cast<::ROOT::Internal::RRawFile*>(p));
   }
   static void destruct_ROOTcLcLInternalcLcLRRawFile(void *p) {
      typedef ::ROOT::Internal::RRawFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RRawFile

namespace ROOT {
   // Wrappers around operator new
   static void *new_TDirectoryFile(void *p) {
      return  p ? new(p) ::TDirectoryFile : new ::TDirectoryFile;
   }
   static void *newArray_TDirectoryFile(Long_t nElements, void *p) {
      return p ? new(p) ::TDirectoryFile[nElements] : new ::TDirectoryFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TDirectoryFile(void *p) {
      delete (static_cast<::TDirectoryFile*>(p));
   }
   static void deleteArray_TDirectoryFile(void *p) {
      delete [] (static_cast<::TDirectoryFile*>(p));
   }
   static void destruct_TDirectoryFile(void *p) {
      typedef ::TDirectoryFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TDirectoryFile(TBuffer &buf, void *obj) {
      ((::TDirectoryFile*)obj)->::TDirectoryFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TDirectoryFile(void *obj,TFileMergeInfo *info) {
      ((::TDirectoryFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TDirectoryFile

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFile(void *p) {
      return  p ? new(p) ::TFile : new ::TFile;
   }
   static void *newArray_TFile(Long_t nElements, void *p) {
      return p ? new(p) ::TFile[nElements] : new ::TFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFile(void *p) {
      delete (static_cast<::TFile*>(p));
   }
   static void deleteArray_TFile(void *p) {
      delete [] (static_cast<::TFile*>(p));
   }
   static void destruct_TFile(void *p) {
      typedef ::TFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFile(TBuffer &buf, void *obj) {
      ((::TFile*)obj)->::TFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TFile(void *obj,TFileMergeInfo *info) {
      ((::TFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TFile

//______________________________________________________________________________
void TFileMerger::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileMerger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileMerger::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileMerger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileMerger(void *p) {
      return  p ? new(p) ::TFileMerger : new ::TFileMerger;
   }
   static void *newArray_TFileMerger(Long_t nElements, void *p) {
      return p ? new(p) ::TFileMerger[nElements] : new ::TFileMerger[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileMerger(void *p) {
      delete (static_cast<::TFileMerger*>(p));
   }
   static void deleteArray_TFileMerger(void *p) {
      delete [] (static_cast<::TFileMerger*>(p));
   }
   static void destruct_TFileMerger(void *p) {
      typedef ::TFileMerger current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TFileMerger(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TFileMerger*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TFileMerger

//______________________________________________________________________________
void TMemFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMemFile.

   TFile::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMemFile(void *p) {
      delete (static_cast<::TMemFile*>(p));
   }
   static void deleteArray_TMemFile(void *p) {
      delete [] (static_cast<::TMemFile*>(p));
   }
   static void destruct_TMemFile(void *p) {
      typedef ::TMemFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TMemFile(TBuffer &buf, void *obj) {
      ((::TMemFile*)obj)->::TMemFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TMemFile(void *obj,TFileMergeInfo *info) {
      ((::TMemFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TMemFile

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLTBufferMerger(void *p) {
      delete (static_cast<::ROOT::TBufferMerger*>(p));
   }
   static void deleteArray_ROOTcLcLTBufferMerger(void *p) {
      delete [] (static_cast<::ROOT::TBufferMerger*>(p));
   }
   static void destruct_ROOTcLcLTBufferMerger(void *p) {
      typedef ::ROOT::TBufferMerger current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::TBufferMerger

namespace ROOT {
//______________________________________________________________________________
void TBufferMergerFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class ROOT::TBufferMergerFile.

   TMemFile::Streamer(R__b);
}

} // namespace ROOT
namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLTBufferMergerFile(void *p) {
      delete (static_cast<::ROOT::TBufferMergerFile*>(p));
   }
   static void deleteArray_ROOTcLcLTBufferMergerFile(void *p) {
      delete [] (static_cast<::ROOT::TBufferMergerFile*>(p));
   }
   static void destruct_ROOTcLcLTBufferMergerFile(void *p) {
      typedef ::ROOT::TBufferMergerFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ROOTcLcLTBufferMergerFile(TBuffer &buf, void *obj) {
      ((::ROOT::TBufferMergerFile*)obj)->::ROOT::TBufferMergerFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_ROOTcLcLTBufferMergerFile(void *obj,TFileMergeInfo *info) {
      ((::ROOT::TBufferMergerFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::ROOT::TBufferMergerFile

//______________________________________________________________________________
void TArchiveFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArchiveFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArchiveFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArchiveFile::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TArchiveFile(void *p) {
      delete (static_cast<::TArchiveFile*>(p));
   }
   static void deleteArray_TArchiveFile(void *p) {
      delete [] (static_cast<::TArchiveFile*>(p));
   }
   static void destruct_TArchiveFile(void *p) {
      typedef ::TArchiveFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArchiveFile

//______________________________________________________________________________
void TArchiveMember::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArchiveMember.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TArchiveMember::Class(),this);
   } else {
      R__b.WriteClassBuffer(TArchiveMember::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArchiveMember(void *p) {
      return  p ? new(p) ::TArchiveMember : new ::TArchiveMember;
   }
   static void *newArray_TArchiveMember(Long_t nElements, void *p) {
      return p ? new(p) ::TArchiveMember[nElements] : new ::TArchiveMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArchiveMember(void *p) {
      delete (static_cast<::TArchiveMember*>(p));
   }
   static void deleteArray_TArchiveMember(void *p) {
      delete [] (static_cast<::TArchiveMember*>(p));
   }
   static void destruct_TArchiveMember(void *p) {
      typedef ::TArchiveMember current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TArchiveMember

//______________________________________________________________________________
void TBufferIO::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferIO.

   TBuffer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBufferIO(void *p) {
      delete (static_cast<::TBufferIO*>(p));
   }
   static void deleteArray_TBufferIO(void *p) {
      delete [] (static_cast<::TBufferIO*>(p));
   }
   static void destruct_TBufferIO(void *p) {
      typedef ::TBufferIO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferIO(TBuffer &buf, void *obj) {
      ((::TBufferIO*)obj)->::TBufferIO::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferIO

//______________________________________________________________________________
void TBufferFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferFile.

   TBufferIO::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBufferFile(void *p) {
      delete (static_cast<::TBufferFile*>(p));
   }
   static void deleteArray_TBufferFile(void *p) {
      delete [] (static_cast<::TBufferFile*>(p));
   }
   static void destruct_TBufferFile(void *p) {
      typedef ::TBufferFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferFile(TBuffer &buf, void *obj) {
      ((::TBufferFile*)obj)->::TBufferFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferFile

//______________________________________________________________________________
void TBufferText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferText.

   TBufferIO::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TBufferText(void *p) {
      delete (static_cast<::TBufferText*>(p));
   }
   static void deleteArray_TBufferText(void *p) {
      delete [] (static_cast<::TBufferText*>(p));
   }
   static void destruct_TBufferText(void *p) {
      typedef ::TBufferText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferText(TBuffer &buf, void *obj) {
      ((::TBufferText*)obj)->::TBufferText::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferText

//______________________________________________________________________________
void TBufferJSON::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBufferJSON.

   TBufferText::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TBufferJSON(void *p) {
      return  p ? new(p) ::TBufferJSON : new ::TBufferJSON;
   }
   static void *newArray_TBufferJSON(Long_t nElements, void *p) {
      return p ? new(p) ::TBufferJSON[nElements] : new ::TBufferJSON[nElements];
   }
   // Wrapper around operator delete
   static void delete_TBufferJSON(void *p) {
      delete (static_cast<::TBufferJSON*>(p));
   }
   static void deleteArray_TBufferJSON(void *p) {
      delete [] (static_cast<::TBufferJSON*>(p));
   }
   static void destruct_TBufferJSON(void *p) {
      typedef ::TBufferJSON current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TBufferJSON(TBuffer &buf, void *obj) {
      ((::TBufferJSON*)obj)->::TBufferJSON::Streamer(buf);
   }
} // end of namespace ROOT for class ::TBufferJSON

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGenCollectionProxy(void *p) {
      delete (static_cast<::TGenCollectionProxy*>(p));
   }
   static void deleteArray_TGenCollectionProxy(void *p) {
      delete [] (static_cast<::TGenCollectionProxy*>(p));
   }
   static void destruct_TGenCollectionProxy(void *p) {
      typedef ::TGenCollectionProxy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGenCollectionProxy(TBuffer &buf, void *obj) {
      ((::TGenCollectionProxy*)obj)->::TGenCollectionProxy::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGenCollectionProxy

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGenCollectionProxycLcLValue(void *p) {
      delete (static_cast<::TGenCollectionProxy::Value*>(p));
   }
   static void deleteArray_TGenCollectionProxycLcLValue(void *p) {
      delete [] (static_cast<::TGenCollectionProxy::Value*>(p));
   }
   static void destruct_TGenCollectionProxycLcLValue(void *p) {
      typedef ::TGenCollectionProxy::Value current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGenCollectionProxy::Value

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGenCollectionProxycLcLMethod(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TGenCollectionProxy::Method : new ::TGenCollectionProxy::Method;
   }
   static void *newArray_TGenCollectionProxycLcLMethod(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::TGenCollectionProxy::Method[nElements] : new ::TGenCollectionProxy::Method[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGenCollectionProxycLcLMethod(void *p) {
      delete (static_cast<::TGenCollectionProxy::Method*>(p));
   }
   static void deleteArray_TGenCollectionProxycLcLMethod(void *p) {
      delete [] (static_cast<::TGenCollectionProxy::Method*>(p));
   }
   static void destruct_TGenCollectionProxycLcLMethod(void *p) {
      typedef ::TGenCollectionProxy::Method current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGenCollectionProxy::Method

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionProxyFactory(void *p) {
      return  p ? new(p) ::TCollectionProxyFactory : new ::TCollectionProxyFactory;
   }
   static void *newArray_TCollectionProxyFactory(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionProxyFactory[nElements] : new ::TCollectionProxyFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionProxyFactory(void *p) {
      delete (static_cast<::TCollectionProxyFactory*>(p));
   }
   static void deleteArray_TCollectionProxyFactory(void *p) {
      delete [] (static_cast<::TCollectionProxyFactory*>(p));
   }
   static void destruct_TCollectionProxyFactory(void *p) {
      typedef ::TCollectionProxyFactory current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionProxyFactory

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionStreamer(void *p) {
      return  p ? new(p) ::TCollectionStreamer : new ::TCollectionStreamer;
   }
   static void *newArray_TCollectionStreamer(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionStreamer[nElements] : new ::TCollectionStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionStreamer(void *p) {
      delete (static_cast<::TCollectionStreamer*>(p));
   }
   static void deleteArray_TCollectionStreamer(void *p) {
      delete [] (static_cast<::TCollectionStreamer*>(p));
   }
   static void destruct_TCollectionStreamer(void *p) {
      typedef ::TCollectionStreamer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionStreamer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionClassStreamer(void *p) {
      return  p ? new(p) ::TCollectionClassStreamer : new ::TCollectionClassStreamer;
   }
   static void *newArray_TCollectionClassStreamer(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionClassStreamer[nElements] : new ::TCollectionClassStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionClassStreamer(void *p) {
      delete (static_cast<::TCollectionClassStreamer*>(p));
   }
   static void deleteArray_TCollectionClassStreamer(void *p) {
      delete [] (static_cast<::TCollectionClassStreamer*>(p));
   }
   static void destruct_TCollectionClassStreamer(void *p) {
      typedef ::TCollectionClassStreamer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionClassStreamer

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCollectionMemberStreamer(void *p) {
      return  p ? new(p) ::TCollectionMemberStreamer : new ::TCollectionMemberStreamer;
   }
   static void *newArray_TCollectionMemberStreamer(Long_t nElements, void *p) {
      return p ? new(p) ::TCollectionMemberStreamer[nElements] : new ::TCollectionMemberStreamer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCollectionMemberStreamer(void *p) {
      delete (static_cast<::TCollectionMemberStreamer*>(p));
   }
   static void deleteArray_TCollectionMemberStreamer(void *p) {
      delete [] (static_cast<::TCollectionMemberStreamer*>(p));
   }
   static void destruct_TCollectionMemberStreamer(void *p) {
      typedef ::TCollectionMemberStreamer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCollectionMemberStreamer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEmulatedCollectionProxy(void *p) {
      delete (static_cast<::TEmulatedCollectionProxy*>(p));
   }
   static void deleteArray_TEmulatedCollectionProxy(void *p) {
      delete [] (static_cast<::TEmulatedCollectionProxy*>(p));
   }
   static void destruct_TEmulatedCollectionProxy(void *p) {
      typedef ::TEmulatedCollectionProxy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEmulatedCollectionProxy(TBuffer &buf, void *obj) {
      ((::TEmulatedCollectionProxy*)obj)->::TEmulatedCollectionProxy::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEmulatedCollectionProxy

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TEmulatedMapProxy(void *p) {
      delete (static_cast<::TEmulatedMapProxy*>(p));
   }
   static void deleteArray_TEmulatedMapProxy(void *p) {
      delete [] (static_cast<::TEmulatedMapProxy*>(p));
   }
   static void destruct_TEmulatedMapProxy(void *p) {
      typedef ::TEmulatedMapProxy current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TEmulatedMapProxy(TBuffer &buf, void *obj) {
      ((::TEmulatedMapProxy*)obj)->::TEmulatedMapProxy::Streamer(buf);
   }
} // end of namespace ROOT for class ::TEmulatedMapProxy

//______________________________________________________________________________
void TFileCacheRead::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileCacheRead.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileCacheRead::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileCacheRead::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileCacheRead(void *p) {
      return  p ? new(p) ::TFileCacheRead : new ::TFileCacheRead;
   }
   static void *newArray_TFileCacheRead(Long_t nElements, void *p) {
      return p ? new(p) ::TFileCacheRead[nElements] : new ::TFileCacheRead[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileCacheRead(void *p) {
      delete (static_cast<::TFileCacheRead*>(p));
   }
   static void deleteArray_TFileCacheRead(void *p) {
      delete [] (static_cast<::TFileCacheRead*>(p));
   }
   static void destruct_TFileCacheRead(void *p) {
      typedef ::TFileCacheRead current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFileCacheRead

//______________________________________________________________________________
void TFree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFree.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fFirst;
      R__b >> fLast;
      R__b.CheckByteCount(R__s, R__c, TFree::IsA());
   } else {
      R__c = R__b.WriteVersion(TFree::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fFirst;
      R__b << fLast;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFree(void *p) {
      return  p ? new(p) ::TFree : new ::TFree;
   }
   static void *newArray_TFree(Long_t nElements, void *p) {
      return p ? new(p) ::TFree[nElements] : new ::TFree[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFree(void *p) {
      delete (static_cast<::TFree*>(p));
   }
   static void deleteArray_TFree(void *p) {
      delete [] (static_cast<::TFree*>(p));
   }
   static void destruct_TFree(void *p) {
      typedef ::TFree current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFree(TBuffer &buf, void *obj) {
      ((::TFree*)obj)->::TFree::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFree

//______________________________________________________________________________
void TFileCacheWrite::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileCacheWrite.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFileCacheWrite::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFileCacheWrite::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFileCacheWrite(void *p) {
      return  p ? new(p) ::TFileCacheWrite : new ::TFileCacheWrite;
   }
   static void *newArray_TFileCacheWrite(Long_t nElements, void *p) {
      return p ? new(p) ::TFileCacheWrite[nElements] : new ::TFileCacheWrite[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFileCacheWrite(void *p) {
      delete (static_cast<::TFileCacheWrite*>(p));
   }
   static void deleteArray_TFileCacheWrite(void *p) {
      delete [] (static_cast<::TFileCacheWrite*>(p));
   }
   static void destruct_TFileCacheWrite(void *p) {
      typedef ::TFileCacheWrite current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFileCacheWrite

//______________________________________________________________________________
void TFPBlock::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFPBlock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFPBlock::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFPBlock::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFPBlock(void *p) {
      delete (static_cast<::TFPBlock*>(p));
   }
   static void deleteArray_TFPBlock(void *p) {
      delete [] (static_cast<::TFPBlock*>(p));
   }
   static void destruct_TFPBlock(void *p) {
      typedef ::TFPBlock current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFPBlock

//______________________________________________________________________________
void TFilePrefetch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFilePrefetch.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFilePrefetch::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFilePrefetch::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFilePrefetch(void *p) {
      delete (static_cast<::TFilePrefetch*>(p));
   }
   static void deleteArray_TFilePrefetch(void *p) {
      delete [] (static_cast<::TFilePrefetch*>(p));
   }
   static void destruct_TFilePrefetch(void *p) {
      typedef ::TFilePrefetch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TFilePrefetch

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKey(void *p) {
      return  p ? new(p) ::TKey : new ::TKey;
   }
   static void *newArray_TKey(Long_t nElements, void *p) {
      return p ? new(p) ::TKey[nElements] : new ::TKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKey(void *p) {
      delete (static_cast<::TKey*>(p));
   }
   static void deleteArray_TKey(void *p) {
      delete [] (static_cast<::TKey*>(p));
   }
   static void destruct_TKey(void *p) {
      typedef ::TKey current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKey(TBuffer &buf, void *obj) {
      ((::TKey*)obj)->::TKey::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKey

//______________________________________________________________________________
void TKeyMapFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKeyMapFile.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TKeyMapFile(void *p) {
      return  p ? new(p) ::TKeyMapFile : new ::TKeyMapFile;
   }
   static void *newArray_TKeyMapFile(Long_t nElements, void *p) {
      return p ? new(p) ::TKeyMapFile[nElements] : new ::TKeyMapFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TKeyMapFile(void *p) {
      delete (static_cast<::TKeyMapFile*>(p));
   }
   static void deleteArray_TKeyMapFile(void *p) {
      delete [] (static_cast<::TKeyMapFile*>(p));
   }
   static void destruct_TKeyMapFile(void *p) {
      typedef ::TKeyMapFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TKeyMapFile(TBuffer &buf, void *obj) {
      ((::TKeyMapFile*)obj)->::TKeyMapFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TKeyMapFile

//______________________________________________________________________________
void TLockFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLockFile.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TLockFile(void *p) {
      delete (static_cast<::TLockFile*>(p));
   }
   static void deleteArray_TLockFile(void *p) {
      delete [] (static_cast<::TLockFile*>(p));
   }
   static void destruct_TLockFile(void *p) {
      typedef ::TLockFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLockFile(TBuffer &buf, void *obj) {
      ((::TLockFile*)obj)->::TLockFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLockFile

//______________________________________________________________________________
void TMapFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMapFile.

   TVirtualMapFile::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_TMapFile(TBuffer &buf, void *obj) {
      ((::TMapFile*)obj)->::TMapFile::Streamer(buf);
   }
} // end of namespace ROOT for class ::TMapFile

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TMapRec(void *p) {
      delete (static_cast<::TMapRec*>(p));
   }
   static void deleteArray_TMapRec(void *p) {
      delete [] (static_cast<::TMapRec*>(p));
   }
   static void destruct_TMapRec(void *p) {
      typedef ::TMapRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TMapRec

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStreamerInfo(void *p) {
      return  p ? new(p) ::TStreamerInfo : new ::TStreamerInfo;
   }
   static void *newArray_TStreamerInfo(Long_t nElements, void *p) {
      return p ? new(p) ::TStreamerInfo[nElements] : new ::TStreamerInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStreamerInfo(void *p) {
      delete (static_cast<::TStreamerInfo*>(p));
   }
   static void deleteArray_TStreamerInfo(void *p) {
      delete [] (static_cast<::TStreamerInfo*>(p));
   }
   static void destruct_TStreamerInfo(void *p) {
      typedef ::TStreamerInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStreamerInfo(TBuffer &buf, void *obj) {
      ((::TStreamerInfo*)obj)->::TStreamerInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStreamerInfo

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStreamerInfoActionscLcLTConfiguration(void *p) {
      delete (static_cast<::TStreamerInfoActions::TConfiguration*>(p));
   }
   static void deleteArray_TStreamerInfoActionscLcLTConfiguration(void *p) {
      delete [] (static_cast<::TStreamerInfoActions::TConfiguration*>(p));
   }
   static void destruct_TStreamerInfoActionscLcLTConfiguration(void *p) {
      typedef ::TStreamerInfoActions::TConfiguration current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TStreamerInfoActions::TConfiguration

namespace TStreamerInfoActions {
//______________________________________________________________________________
void TConfiguredAction::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStreamerInfoActions::TConfiguredAction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStreamerInfoActions::TConfiguredAction::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStreamerInfoActions::TConfiguredAction::Class(),this);
   }
}

} // namespace TStreamerInfoActions
namespace ROOT {
   // Wrappers around operator new
   static void *new_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      return  p ? new(p) ::TStreamerInfoActions::TConfiguredAction : new ::TStreamerInfoActions::TConfiguredAction;
   }
   static void *newArray_TStreamerInfoActionscLcLTConfiguredAction(Long_t nElements, void *p) {
      return p ? new(p) ::TStreamerInfoActions::TConfiguredAction[nElements] : new ::TStreamerInfoActions::TConfiguredAction[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      delete (static_cast<::TStreamerInfoActions::TConfiguredAction*>(p));
   }
   static void deleteArray_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      delete [] (static_cast<::TStreamerInfoActions::TConfiguredAction*>(p));
   }
   static void destruct_TStreamerInfoActionscLcLTConfiguredAction(void *p) {
      typedef ::TStreamerInfoActions::TConfiguredAction current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TStreamerInfoActions::TConfiguredAction

namespace TStreamerInfoActions {
//______________________________________________________________________________
void TActionSequence::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStreamerInfoActions::TActionSequence.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TStreamerInfoActions::TActionSequence::Class(),this);
   } else {
      R__b.WriteClassBuffer(TStreamerInfoActions::TActionSequence::Class(),this);
   }
}

} // namespace TStreamerInfoActions
namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStreamerInfoActionscLcLTActionSequence(void *p) {
      delete (static_cast<::TStreamerInfoActions::TActionSequence*>(p));
   }
   static void deleteArray_TStreamerInfoActionscLcLTActionSequence(void *p) {
      delete [] (static_cast<::TStreamerInfoActions::TActionSequence*>(p));
   }
   static void destruct_TStreamerInfoActionscLcLTActionSequence(void *p) {
      typedef ::TStreamerInfoActions::TActionSequence current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TStreamerInfoActions::TActionSequence

//______________________________________________________________________________
void TZIPFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TZIPFile.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TZIPFile::Class(),this);
   } else {
      R__b.WriteClassBuffer(TZIPFile::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TZIPFile(void *p) {
      return  p ? new(p) ::TZIPFile : new ::TZIPFile;
   }
   static void *newArray_TZIPFile(Long_t nElements, void *p) {
      return p ? new(p) ::TZIPFile[nElements] : new ::TZIPFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TZIPFile(void *p) {
      delete (static_cast<::TZIPFile*>(p));
   }
   static void deleteArray_TZIPFile(void *p) {
      delete [] (static_cast<::TZIPFile*>(p));
   }
   static void destruct_TZIPFile(void *p) {
      typedef ::TZIPFile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TZIPFile

//______________________________________________________________________________
void TZIPMember::Streamer(TBuffer &R__b)
{
   // Stream an object of class TZIPMember.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TZIPMember::Class(),this);
   } else {
      R__b.WriteClassBuffer(TZIPMember::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TZIPMember(void *p) {
      return  p ? new(p) ::TZIPMember : new ::TZIPMember;
   }
   static void *newArray_TZIPMember(Long_t nElements, void *p) {
      return p ? new(p) ::TZIPMember[nElements] : new ::TZIPMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_TZIPMember(void *p) {
      delete (static_cast<::TZIPMember*>(p));
   }
   static void deleteArray_TZIPMember(void *p) {
      delete [] (static_cast<::TZIPMember*>(p));
   }
   static void destruct_TZIPMember(void *p) {
      typedef ::TZIPMember current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TZIPMember

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libRIO() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libRIO) = RecordReadRules_libRIO();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libRIO));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libRIO_Impl() {
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
      TROOT::RegisterModule("libRIO",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRIO_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRIO_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRIO() {
  TriggerDictionaryInitialization_libRIO_Impl();
}
