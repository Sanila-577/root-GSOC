// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__TreeViewer
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
#include "HelpTextTV.h"
#include "TGTreeTable.h"
#include "TParallelCoordEditor.h"
#include "TParallelCoord.h"
#include "TParallelCoordRange.h"
#include "TParallelCoordVar.h"
#include "TSpiderEditor.h"
#include "TSpider.h"
#include "TTreeViewer.h"
#include "TTVLVContainer.h"
#include "TTVSession.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TGTreeTable(void *p = nullptr);
   static void *newArray_TGTreeTable(Long_t size, void *p);
   static void delete_TGTreeTable(void *p);
   static void deleteArray_TGTreeTable(void *p);
   static void destruct_TGTreeTable(void *p);
   static void streamer_TGTreeTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGTreeTable*)
   {
      ::TGTreeTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGTreeTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGTreeTable", ::TGTreeTable::Class_Version(), "TGTreeTable.h", 18,
                  typeid(::TGTreeTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGTreeTable::Dictionary, isa_proxy, 16,
                  sizeof(::TGTreeTable) );
      instance.SetNew(&new_TGTreeTable);
      instance.SetNewArray(&newArray_TGTreeTable);
      instance.SetDelete(&delete_TGTreeTable);
      instance.SetDeleteArray(&deleteArray_TGTreeTable);
      instance.SetDestructor(&destruct_TGTreeTable);
      instance.SetStreamerFunc(&streamer_TGTreeTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGTreeTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGTreeTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGTreeTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParallelCoordEditor(void *p = nullptr);
   static void *newArray_TParallelCoordEditor(Long_t size, void *p);
   static void delete_TParallelCoordEditor(void *p);
   static void deleteArray_TParallelCoordEditor(void *p);
   static void destruct_TParallelCoordEditor(void *p);
   static void streamer_TParallelCoordEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParallelCoordEditor*)
   {
      ::TParallelCoordEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParallelCoordEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParallelCoordEditor", ::TParallelCoordEditor::Class_Version(), "TParallelCoordEditor.h", 30,
                  typeid(::TParallelCoordEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParallelCoordEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TParallelCoordEditor) );
      instance.SetNew(&new_TParallelCoordEditor);
      instance.SetNewArray(&newArray_TParallelCoordEditor);
      instance.SetDelete(&delete_TParallelCoordEditor);
      instance.SetDeleteArray(&deleteArray_TParallelCoordEditor);
      instance.SetDestructor(&destruct_TParallelCoordEditor);
      instance.SetStreamerFunc(&streamer_TParallelCoordEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParallelCoordEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParallelCoordEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParallelCoordEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParallelCoord(void *p = nullptr);
   static void *newArray_TParallelCoord(Long_t size, void *p);
   static void delete_TParallelCoord(void *p);
   static void deleteArray_TParallelCoord(void *p);
   static void destruct_TParallelCoord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParallelCoord*)
   {
      ::TParallelCoord *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParallelCoord >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParallelCoord", ::TParallelCoord::Class_Version(), "TParallelCoord.h", 28,
                  typeid(::TParallelCoord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParallelCoord::Dictionary, isa_proxy, 4,
                  sizeof(::TParallelCoord) );
      instance.SetNew(&new_TParallelCoord);
      instance.SetNewArray(&newArray_TParallelCoord);
      instance.SetDelete(&delete_TParallelCoord);
      instance.SetDeleteArray(&deleteArray_TParallelCoord);
      instance.SetDestructor(&destruct_TParallelCoord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParallelCoord*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParallelCoord*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParallelCoord*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParallelCoordRange(void *p = nullptr);
   static void *newArray_TParallelCoordRange(Long_t size, void *p);
   static void delete_TParallelCoordRange(void *p);
   static void deleteArray_TParallelCoordRange(void *p);
   static void destruct_TParallelCoordRange(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParallelCoordRange*)
   {
      ::TParallelCoordRange *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParallelCoordRange >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParallelCoordRange", ::TParallelCoordRange::Class_Version(), "TParallelCoordRange.h", 25,
                  typeid(::TParallelCoordRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParallelCoordRange::Dictionary, isa_proxy, 4,
                  sizeof(::TParallelCoordRange) );
      instance.SetNew(&new_TParallelCoordRange);
      instance.SetNewArray(&newArray_TParallelCoordRange);
      instance.SetDelete(&delete_TParallelCoordRange);
      instance.SetDeleteArray(&deleteArray_TParallelCoordRange);
      instance.SetDestructor(&destruct_TParallelCoordRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParallelCoordRange*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParallelCoordRange*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParallelCoordRange*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParallelCoordSelect(void *p = nullptr);
   static void *newArray_TParallelCoordSelect(Long_t size, void *p);
   static void delete_TParallelCoordSelect(void *p);
   static void deleteArray_TParallelCoordSelect(void *p);
   static void destruct_TParallelCoordSelect(void *p);
   static Long64_t merge_TParallelCoordSelect(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParallelCoordSelect*)
   {
      ::TParallelCoordSelect *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParallelCoordSelect >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParallelCoordSelect", ::TParallelCoordSelect::Class_Version(), "TParallelCoordRange.h", 69,
                  typeid(::TParallelCoordSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParallelCoordSelect::Dictionary, isa_proxy, 4,
                  sizeof(::TParallelCoordSelect) );
      instance.SetNew(&new_TParallelCoordSelect);
      instance.SetNewArray(&newArray_TParallelCoordSelect);
      instance.SetDelete(&delete_TParallelCoordSelect);
      instance.SetDeleteArray(&deleteArray_TParallelCoordSelect);
      instance.SetDestructor(&destruct_TParallelCoordSelect);
      instance.SetMerge(&merge_TParallelCoordSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParallelCoordSelect*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParallelCoordSelect*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParallelCoordSelect*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TParallelCoordVar(void *p = nullptr);
   static void *newArray_TParallelCoordVar(Long_t size, void *p);
   static void delete_TParallelCoordVar(void *p);
   static void deleteArray_TParallelCoordVar(void *p);
   static void destruct_TParallelCoordVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TParallelCoordVar*)
   {
      ::TParallelCoordVar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TParallelCoordVar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TParallelCoordVar", ::TParallelCoordVar::Class_Version(), "TParallelCoordVar.h", 24,
                  typeid(::TParallelCoordVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TParallelCoordVar::Dictionary, isa_proxy, 4,
                  sizeof(::TParallelCoordVar) );
      instance.SetNew(&new_TParallelCoordVar);
      instance.SetNewArray(&newArray_TParallelCoordVar);
      instance.SetDelete(&delete_TParallelCoordVar);
      instance.SetDeleteArray(&deleteArray_TParallelCoordVar);
      instance.SetDestructor(&destruct_TParallelCoordVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TParallelCoordVar*)
   {
      return GenerateInitInstanceLocal(static_cast<::TParallelCoordVar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TParallelCoordVar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpiderEditor(void *p = nullptr);
   static void *newArray_TSpiderEditor(Long_t size, void *p);
   static void delete_TSpiderEditor(void *p);
   static void deleteArray_TSpiderEditor(void *p);
   static void destruct_TSpiderEditor(void *p);
   static void streamer_TSpiderEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpiderEditor*)
   {
      ::TSpiderEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpiderEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSpiderEditor", ::TSpiderEditor::Class_Version(), "TSpiderEditor.h", 39,
                  typeid(::TSpiderEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpiderEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TSpiderEditor) );
      instance.SetNew(&new_TSpiderEditor);
      instance.SetNewArray(&newArray_TSpiderEditor);
      instance.SetDelete(&delete_TSpiderEditor);
      instance.SetDeleteArray(&deleteArray_TSpiderEditor);
      instance.SetDestructor(&destruct_TSpiderEditor);
      instance.SetStreamerFunc(&streamer_TSpiderEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpiderEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSpiderEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSpiderEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TSpider(void *p = nullptr);
   static void *newArray_TSpider(Long_t size, void *p);
   static void delete_TSpider(void *p);
   static void deleteArray_TSpider(void *p);
   static void destruct_TSpider(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TSpider*)
   {
      ::TSpider *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TSpider >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TSpider", ::TSpider::Class_Version(), "TSpider.h", 40,
                  typeid(::TSpider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TSpider::Dictionary, isa_proxy, 4,
                  sizeof(::TSpider) );
      instance.SetNew(&new_TSpider);
      instance.SetNewArray(&newArray_TSpider);
      instance.SetDelete(&delete_TSpider);
      instance.SetDeleteArray(&deleteArray_TSpider);
      instance.SetDestructor(&destruct_TSpider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TSpider*)
   {
      return GenerateInitInstanceLocal(static_cast<::TSpider*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TSpider*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTreeViewer(void *p = nullptr);
   static void *newArray_TTreeViewer(Long_t size, void *p);
   static void delete_TTreeViewer(void *p);
   static void deleteArray_TTreeViewer(void *p);
   static void destruct_TTreeViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeViewer*)
   {
      ::TTreeViewer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeViewer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeViewer", ::TTreeViewer::Class_Version(), "TTreeViewer.h", 54,
                  typeid(::TTreeViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeViewer::Dictionary, isa_proxy, 4,
                  sizeof(::TTreeViewer) );
      instance.SetNew(&new_TTreeViewer);
      instance.SetNewArray(&newArray_TTreeViewer);
      instance.SetDelete(&delete_TTreeViewer);
      instance.SetDeleteArray(&deleteArray_TTreeViewer);
      instance.SetDestructor(&destruct_TTreeViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeViewer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTreeViewer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTreeViewer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGItemContext(void *p = nullptr);
   static void *newArray_TGItemContext(Long_t size, void *p);
   static void delete_TGItemContext(void *p);
   static void deleteArray_TGItemContext(void *p);
   static void destruct_TGItemContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGItemContext*)
   {
      ::TGItemContext *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGItemContext >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGItemContext", ::TGItemContext::Class_Version(), "TTVLVContainer.h", 36,
                  typeid(::TGItemContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGItemContext::Dictionary, isa_proxy, 4,
                  sizeof(::TGItemContext) );
      instance.SetNew(&new_TGItemContext);
      instance.SetNewArray(&newArray_TGItemContext);
      instance.SetDelete(&delete_TGItemContext);
      instance.SetDeleteArray(&deleteArray_TGItemContext);
      instance.SetDestructor(&destruct_TGItemContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGItemContext*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGItemContext*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGItemContext*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTVLVEntry(void *p);
   static void deleteArray_TTVLVEntry(void *p);
   static void destruct_TTVLVEntry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTVLVEntry*)
   {
      ::TTVLVEntry *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTVLVEntry >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTVLVEntry", ::TTVLVEntry::Class_Version(), "TTVLVContainer.h", 56,
                  typeid(::TTVLVEntry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTVLVEntry::Dictionary, isa_proxy, 4,
                  sizeof(::TTVLVEntry) );
      instance.SetDelete(&delete_TTVLVEntry);
      instance.SetDeleteArray(&deleteArray_TTVLVEntry);
      instance.SetDestructor(&destruct_TTVLVEntry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTVLVEntry*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTVLVEntry*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTVLVEntry*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTVLVContainer(void *p);
   static void deleteArray_TTVLVContainer(void *p);
   static void destruct_TTVLVContainer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTVLVContainer*)
   {
      ::TTVLVContainer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTVLVContainer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTVLVContainer", ::TTVLVContainer::Class_Version(), "TTVLVContainer.h", 110,
                  typeid(::TTVLVContainer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTVLVContainer::Dictionary, isa_proxy, 4,
                  sizeof(::TTVLVContainer) );
      instance.SetDelete(&delete_TTVLVContainer);
      instance.SetDeleteArray(&deleteArray_TTVLVContainer);
      instance.SetDestructor(&destruct_TTVLVContainer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTVLVContainer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTVLVContainer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTVLVContainer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGSelectBox(void *p);
   static void deleteArray_TGSelectBox(void *p);
   static void destruct_TGSelectBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGSelectBox*)
   {
      ::TGSelectBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGSelectBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGSelectBox", ::TGSelectBox::Class_Version(), "TTVLVContainer.h", 157,
                  typeid(::TGSelectBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGSelectBox::Dictionary, isa_proxy, 4,
                  sizeof(::TGSelectBox) );
      instance.SetDelete(&delete_TGSelectBox);
      instance.SetDeleteArray(&deleteArray_TGSelectBox);
      instance.SetDestructor(&destruct_TGSelectBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGSelectBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGSelectBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGSelectBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTVRecord(void *p = nullptr);
   static void *newArray_TTVRecord(Long_t size, void *p);
   static void delete_TTVRecord(void *p);
   static void deleteArray_TTVRecord(void *p);
   static void destruct_TTVRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTVRecord*)
   {
      ::TTVRecord *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTVRecord >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTVRecord", ::TTVRecord::Class_Version(), "TTVSession.h", 25,
                  typeid(::TTVRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTVRecord::Dictionary, isa_proxy, 4,
                  sizeof(::TTVRecord) );
      instance.SetNew(&new_TTVRecord);
      instance.SetNewArray(&newArray_TTVRecord);
      instance.SetDelete(&delete_TTVRecord);
      instance.SetDeleteArray(&deleteArray_TTVRecord);
      instance.SetDestructor(&destruct_TTVRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTVRecord*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTVRecord*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTVRecord*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTVSession(void *p);
   static void deleteArray_TTVSession(void *p);
   static void destruct_TTVSession(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTVSession*)
   {
      ::TTVSession *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTVSession >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTVSession", ::TTVSession::Class_Version(), "TTVSession.h", 71,
                  typeid(::TTVSession), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTVSession::Dictionary, isa_proxy, 4,
                  sizeof(::TTVSession) );
      instance.SetDelete(&delete_TTVSession);
      instance.SetDeleteArray(&deleteArray_TTVSession);
      instance.SetDestructor(&destruct_TTVSession);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTVSession*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTVSession*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTVSession*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGTreeTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGTreeTable::Class_Name()
{
   return "TGTreeTable";
}

//______________________________________________________________________________
const char *TGTreeTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTreeTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGTreeTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGTreeTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGTreeTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTreeTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGTreeTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGTreeTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParallelCoordEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParallelCoordEditor::Class_Name()
{
   return "TParallelCoordEditor";
}

//______________________________________________________________________________
const char *TParallelCoordEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParallelCoordEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParallelCoordEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParallelCoordEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParallelCoord::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParallelCoord::Class_Name()
{
   return "TParallelCoord";
}

//______________________________________________________________________________
const char *TParallelCoord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoord*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParallelCoord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoord*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParallelCoord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoord*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParallelCoord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoord*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParallelCoordRange::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParallelCoordRange::Class_Name()
{
   return "TParallelCoordRange";
}

//______________________________________________________________________________
const char *TParallelCoordRange::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordRange*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParallelCoordRange::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordRange*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParallelCoordRange::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordRange*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParallelCoordRange::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordRange*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParallelCoordSelect::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParallelCoordSelect::Class_Name()
{
   return "TParallelCoordSelect";
}

//______________________________________________________________________________
const char *TParallelCoordSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordSelect*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParallelCoordSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordSelect*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParallelCoordSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordSelect*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParallelCoordSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordSelect*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TParallelCoordVar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TParallelCoordVar::Class_Name()
{
   return "TParallelCoordVar";
}

//______________________________________________________________________________
const char *TParallelCoordVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordVar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TParallelCoordVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordVar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TParallelCoordVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordVar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TParallelCoordVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TParallelCoordVar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpiderEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpiderEditor::Class_Name()
{
   return "TSpiderEditor";
}

//______________________________________________________________________________
const char *TSpiderEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpiderEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSpiderEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpiderEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpiderEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpiderEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpiderEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpiderEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TSpider::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TSpider::Class_Name()
{
   return "TSpider";
}

//______________________________________________________________________________
const char *TSpider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpider*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TSpider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TSpider*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TSpider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpider*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TSpider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TSpider*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeViewer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeViewer::Class_Name()
{
   return "TTreeViewer";
}

//______________________________________________________________________________
const char *TTreeViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeViewer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeViewer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeViewer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeViewer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGItemContext::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGItemContext::Class_Name()
{
   return "TGItemContext";
}

//______________________________________________________________________________
const char *TGItemContext::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGItemContext*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGItemContext::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGItemContext*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGItemContext::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGItemContext*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGItemContext::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGItemContext*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTVLVEntry::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTVLVEntry::Class_Name()
{
   return "TTVLVEntry";
}

//______________________________________________________________________________
const char *TTVLVEntry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVLVEntry*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTVLVEntry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVLVEntry*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTVLVEntry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVLVEntry*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTVLVEntry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVLVEntry*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTVLVContainer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTVLVContainer::Class_Name()
{
   return "TTVLVContainer";
}

//______________________________________________________________________________
const char *TTVLVContainer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVLVContainer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTVLVContainer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVLVContainer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTVLVContainer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVLVContainer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTVLVContainer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVLVContainer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGSelectBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGSelectBox::Class_Name()
{
   return "TGSelectBox";
}

//______________________________________________________________________________
const char *TGSelectBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSelectBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGSelectBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGSelectBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGSelectBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSelectBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGSelectBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGSelectBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTVRecord::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTVRecord::Class_Name()
{
   return "TTVRecord";
}

//______________________________________________________________________________
const char *TTVRecord::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVRecord*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTVRecord::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVRecord*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTVRecord::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVRecord*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTVRecord::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVRecord*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTVSession::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTVSession::Class_Name()
{
   return "TTVSession";
}

//______________________________________________________________________________
const char *TTVSession::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVSession*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTVSession::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTVSession*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTVSession::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVSession*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTVSession::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTVSession*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGTreeTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGTreeTable.

   TGTable::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGTreeTable(void *p) {
      return  p ? new(p) ::TGTreeTable : new ::TGTreeTable;
   }
   static void *newArray_TGTreeTable(Long_t nElements, void *p) {
      return p ? new(p) ::TGTreeTable[nElements] : new ::TGTreeTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGTreeTable(void *p) {
      delete (static_cast<::TGTreeTable*>(p));
   }
   static void deleteArray_TGTreeTable(void *p) {
      delete [] (static_cast<::TGTreeTable*>(p));
   }
   static void destruct_TGTreeTable(void *p) {
      typedef ::TGTreeTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGTreeTable(TBuffer &buf, void *obj) {
      ((::TGTreeTable*)obj)->::TGTreeTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGTreeTable

//______________________________________________________________________________
void TParallelCoordEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParallelCoordEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParallelCoordEditor(void *p) {
      return  p ? new(p) ::TParallelCoordEditor : new ::TParallelCoordEditor;
   }
   static void *newArray_TParallelCoordEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TParallelCoordEditor[nElements] : new ::TParallelCoordEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParallelCoordEditor(void *p) {
      delete (static_cast<::TParallelCoordEditor*>(p));
   }
   static void deleteArray_TParallelCoordEditor(void *p) {
      delete [] (static_cast<::TParallelCoordEditor*>(p));
   }
   static void destruct_TParallelCoordEditor(void *p) {
      typedef ::TParallelCoordEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TParallelCoordEditor(TBuffer &buf, void *obj) {
      ((::TParallelCoordEditor*)obj)->::TParallelCoordEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TParallelCoordEditor

//______________________________________________________________________________
void TParallelCoord::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParallelCoord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParallelCoord::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParallelCoord::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParallelCoord(void *p) {
      return  p ? new(p) ::TParallelCoord : new ::TParallelCoord;
   }
   static void *newArray_TParallelCoord(Long_t nElements, void *p) {
      return p ? new(p) ::TParallelCoord[nElements] : new ::TParallelCoord[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParallelCoord(void *p) {
      delete (static_cast<::TParallelCoord*>(p));
   }
   static void deleteArray_TParallelCoord(void *p) {
      delete [] (static_cast<::TParallelCoord*>(p));
   }
   static void destruct_TParallelCoord(void *p) {
      typedef ::TParallelCoord current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TParallelCoord

//______________________________________________________________________________
void TParallelCoordRange::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParallelCoordRange.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParallelCoordRange::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParallelCoordRange::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParallelCoordRange(void *p) {
      return  p ? new(p) ::TParallelCoordRange : new ::TParallelCoordRange;
   }
   static void *newArray_TParallelCoordRange(Long_t nElements, void *p) {
      return p ? new(p) ::TParallelCoordRange[nElements] : new ::TParallelCoordRange[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParallelCoordRange(void *p) {
      delete (static_cast<::TParallelCoordRange*>(p));
   }
   static void deleteArray_TParallelCoordRange(void *p) {
      delete [] (static_cast<::TParallelCoordRange*>(p));
   }
   static void destruct_TParallelCoordRange(void *p) {
      typedef ::TParallelCoordRange current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TParallelCoordRange

//______________________________________________________________________________
void TParallelCoordSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParallelCoordSelect.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParallelCoordSelect::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParallelCoordSelect::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParallelCoordSelect(void *p) {
      return  p ? new(p) ::TParallelCoordSelect : new ::TParallelCoordSelect;
   }
   static void *newArray_TParallelCoordSelect(Long_t nElements, void *p) {
      return p ? new(p) ::TParallelCoordSelect[nElements] : new ::TParallelCoordSelect[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParallelCoordSelect(void *p) {
      delete (static_cast<::TParallelCoordSelect*>(p));
   }
   static void deleteArray_TParallelCoordSelect(void *p) {
      delete [] (static_cast<::TParallelCoordSelect*>(p));
   }
   static void destruct_TParallelCoordSelect(void *p) {
      typedef ::TParallelCoordSelect current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_TParallelCoordSelect(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::TParallelCoordSelect*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::TParallelCoordSelect

//______________________________________________________________________________
void TParallelCoordVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class TParallelCoordVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TParallelCoordVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(TParallelCoordVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TParallelCoordVar(void *p) {
      return  p ? new(p) ::TParallelCoordVar : new ::TParallelCoordVar;
   }
   static void *newArray_TParallelCoordVar(Long_t nElements, void *p) {
      return p ? new(p) ::TParallelCoordVar[nElements] : new ::TParallelCoordVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_TParallelCoordVar(void *p) {
      delete (static_cast<::TParallelCoordVar*>(p));
   }
   static void deleteArray_TParallelCoordVar(void *p) {
      delete [] (static_cast<::TParallelCoordVar*>(p));
   }
   static void destruct_TParallelCoordVar(void *p) {
      typedef ::TParallelCoordVar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TParallelCoordVar

//______________________________________________________________________________
void TSpiderEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpiderEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpiderEditor(void *p) {
      return  p ? new(p) ::TSpiderEditor : new ::TSpiderEditor;
   }
   static void *newArray_TSpiderEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TSpiderEditor[nElements] : new ::TSpiderEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpiderEditor(void *p) {
      delete (static_cast<::TSpiderEditor*>(p));
   }
   static void deleteArray_TSpiderEditor(void *p) {
      delete [] (static_cast<::TSpiderEditor*>(p));
   }
   static void destruct_TSpiderEditor(void *p) {
      typedef ::TSpiderEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TSpiderEditor(TBuffer &buf, void *obj) {
      ((::TSpiderEditor*)obj)->::TSpiderEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TSpiderEditor

//______________________________________________________________________________
void TSpider::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSpider.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TSpider::Class(),this);
   } else {
      R__b.WriteClassBuffer(TSpider::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TSpider(void *p) {
      return  p ? new(p) ::TSpider : new ::TSpider;
   }
   static void *newArray_TSpider(Long_t nElements, void *p) {
      return p ? new(p) ::TSpider[nElements] : new ::TSpider[nElements];
   }
   // Wrapper around operator delete
   static void delete_TSpider(void *p) {
      delete (static_cast<::TSpider*>(p));
   }
   static void deleteArray_TSpider(void *p) {
      delete [] (static_cast<::TSpider*>(p));
   }
   static void destruct_TSpider(void *p) {
      typedef ::TSpider current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TSpider

//______________________________________________________________________________
void TTreeViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeViewer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTreeViewer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTreeViewer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTreeViewer(void *p) {
      return  p ? new(p) ::TTreeViewer : new ::TTreeViewer;
   }
   static void *newArray_TTreeViewer(Long_t nElements, void *p) {
      return p ? new(p) ::TTreeViewer[nElements] : new ::TTreeViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTreeViewer(void *p) {
      delete (static_cast<::TTreeViewer*>(p));
   }
   static void deleteArray_TTreeViewer(void *p) {
      delete [] (static_cast<::TTreeViewer*>(p));
   }
   static void destruct_TTreeViewer(void *p) {
      typedef ::TTreeViewer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTreeViewer

//______________________________________________________________________________
void TGItemContext::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGItemContext.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGItemContext::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGItemContext::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGItemContext(void *p) {
      return  p ? new(p) ::TGItemContext : new ::TGItemContext;
   }
   static void *newArray_TGItemContext(Long_t nElements, void *p) {
      return p ? new(p) ::TGItemContext[nElements] : new ::TGItemContext[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGItemContext(void *p) {
      delete (static_cast<::TGItemContext*>(p));
   }
   static void deleteArray_TGItemContext(void *p) {
      delete [] (static_cast<::TGItemContext*>(p));
   }
   static void destruct_TGItemContext(void *p) {
      typedef ::TGItemContext current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGItemContext

//______________________________________________________________________________
void TTVLVEntry::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTVLVEntry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTVLVEntry::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTVLVEntry::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTVLVEntry(void *p) {
      delete (static_cast<::TTVLVEntry*>(p));
   }
   static void deleteArray_TTVLVEntry(void *p) {
      delete [] (static_cast<::TTVLVEntry*>(p));
   }
   static void destruct_TTVLVEntry(void *p) {
      typedef ::TTVLVEntry current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTVLVEntry

//______________________________________________________________________________
void TTVLVContainer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTVLVContainer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTVLVContainer::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTVLVContainer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTVLVContainer(void *p) {
      delete (static_cast<::TTVLVContainer*>(p));
   }
   static void deleteArray_TTVLVContainer(void *p) {
      delete [] (static_cast<::TTVLVContainer*>(p));
   }
   static void destruct_TTVLVContainer(void *p) {
      typedef ::TTVLVContainer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTVLVContainer

//______________________________________________________________________________
void TGSelectBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGSelectBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGSelectBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGSelectBox::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGSelectBox(void *p) {
      delete (static_cast<::TGSelectBox*>(p));
   }
   static void deleteArray_TGSelectBox(void *p) {
      delete [] (static_cast<::TGSelectBox*>(p));
   }
   static void destruct_TGSelectBox(void *p) {
      typedef ::TGSelectBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TGSelectBox

//______________________________________________________________________________
void TTVRecord::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTVRecord.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTVRecord::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTVRecord::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTVRecord(void *p) {
      return  p ? new(p) ::TTVRecord : new ::TTVRecord;
   }
   static void *newArray_TTVRecord(Long_t nElements, void *p) {
      return p ? new(p) ::TTVRecord[nElements] : new ::TTVRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTVRecord(void *p) {
      delete (static_cast<::TTVRecord*>(p));
   }
   static void deleteArray_TTVRecord(void *p) {
      delete [] (static_cast<::TTVRecord*>(p));
   }
   static void destruct_TTVRecord(void *p) {
      typedef ::TTVRecord current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTVRecord

//______________________________________________________________________________
void TTVSession::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTVSession.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TTVSession::Class(),this);
   } else {
      R__b.WriteClassBuffer(TTVSession::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTVSession(void *p) {
      delete (static_cast<::TTVSession*>(p));
   }
   static void deleteArray_TTVSession(void *p) {
      delete [] (static_cast<::TTVSession*>(p));
   }
   static void destruct_TTVSession(void *p) {
      typedef ::TTVSession current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TTVSession

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libTreeViewer() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libTreeViewer) = RecordReadRules_libTreeViewer();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libTreeViewer));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libTreeViewer_Impl() {
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
      TROOT::RegisterModule("libTreeViewer",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTreeViewer_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTreeViewer_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTreeViewer() {
  TriggerDictionaryInitialization_libTreeViewer_Impl();
}
