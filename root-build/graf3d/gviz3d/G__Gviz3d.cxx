// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Gviz3d
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
#include "TStructNode.h"
#include "TStructNodeEditor.h"
#include "TStructNodeProperty.h"
#include "TStructViewer.h"
#include "TStructViewerGUI.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TStructNode(void *p);
   static void deleteArray_TStructNode(void *p);
   static void destruct_TStructNode(void *p);
   static void streamer_TStructNode(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStructNode*)
   {
      ::TStructNode *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStructNode >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStructNode", ::TStructNode::Class_Version(), "TStructNode.h", 34,
                  typeid(::TStructNode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStructNode::Dictionary, isa_proxy, 16,
                  sizeof(::TStructNode) );
      instance.SetDelete(&delete_TStructNode);
      instance.SetDeleteArray(&deleteArray_TStructNode);
      instance.SetDestructor(&destruct_TStructNode);
      instance.SetStreamerFunc(&streamer_TStructNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStructNode*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStructNode*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStructNode*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStructNodeEditor(void *p);
   static void deleteArray_TStructNodeEditor(void *p);
   static void destruct_TStructNodeEditor(void *p);
   static void streamer_TStructNodeEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStructNodeEditor*)
   {
      ::TStructNodeEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStructNodeEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStructNodeEditor", ::TStructNodeEditor::Class_Version(), "TStructNodeEditor.h", 26,
                  typeid(::TStructNodeEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStructNodeEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TStructNodeEditor) );
      instance.SetDelete(&delete_TStructNodeEditor);
      instance.SetDeleteArray(&deleteArray_TStructNodeEditor);
      instance.SetDestructor(&destruct_TStructNodeEditor);
      instance.SetStreamerFunc(&streamer_TStructNodeEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStructNodeEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStructNodeEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStructNodeEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStructNodeProperty(void *p);
   static void deleteArray_TStructNodeProperty(void *p);
   static void destruct_TStructNodeProperty(void *p);
   static void streamer_TStructNodeProperty(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStructNodeProperty*)
   {
      ::TStructNodeProperty *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStructNodeProperty >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStructNodeProperty", ::TStructNodeProperty::Class_Version(), "TStructNodeProperty.h", 19,
                  typeid(::TStructNodeProperty), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStructNodeProperty::Dictionary, isa_proxy, 16,
                  sizeof(::TStructNodeProperty) );
      instance.SetDelete(&delete_TStructNodeProperty);
      instance.SetDeleteArray(&deleteArray_TStructNodeProperty);
      instance.SetDestructor(&destruct_TStructNodeProperty);
      instance.SetStreamerFunc(&streamer_TStructNodeProperty);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStructNodeProperty*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStructNodeProperty*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStructNodeProperty*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TStructViewer(void *p = nullptr);
   static void *newArray_TStructViewer(Long_t size, void *p);
   static void delete_TStructViewer(void *p);
   static void deleteArray_TStructViewer(void *p);
   static void destruct_TStructViewer(void *p);
   static void streamer_TStructViewer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStructViewer*)
   {
      ::TStructViewer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStructViewer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStructViewer", ::TStructViewer::Class_Version(), "TStructViewer.h", 26,
                  typeid(::TStructViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStructViewer::Dictionary, isa_proxy, 16,
                  sizeof(::TStructViewer) );
      instance.SetNew(&new_TStructViewer);
      instance.SetNewArray(&newArray_TStructViewer);
      instance.SetDelete(&delete_TStructViewer);
      instance.SetDeleteArray(&deleteArray_TStructViewer);
      instance.SetDestructor(&destruct_TStructViewer);
      instance.SetStreamerFunc(&streamer_TStructViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStructViewer*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStructViewer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStructViewer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStructViewerGUI(void *p);
   static void deleteArray_TStructViewerGUI(void *p);
   static void destruct_TStructViewerGUI(void *p);
   static void streamer_TStructViewerGUI(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStructViewerGUI*)
   {
      ::TStructViewerGUI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStructViewerGUI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStructViewerGUI", ::TStructViewerGUI::Class_Version(), "TStructViewerGUI.h", 37,
                  typeid(::TStructViewerGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStructViewerGUI::Dictionary, isa_proxy, 16,
                  sizeof(::TStructViewerGUI) );
      instance.SetDelete(&delete_TStructViewerGUI);
      instance.SetDeleteArray(&deleteArray_TStructViewerGUI);
      instance.SetDestructor(&destruct_TStructViewerGUI);
      instance.SetStreamerFunc(&streamer_TStructViewerGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStructViewerGUI*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStructViewerGUI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStructViewerGUI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TStructNode::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStructNode::Class_Name()
{
   return "TStructNode";
}

//______________________________________________________________________________
const char *TStructNode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructNode*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStructNode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructNode*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStructNode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructNode*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStructNode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructNode*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStructNodeEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStructNodeEditor::Class_Name()
{
   return "TStructNodeEditor";
}

//______________________________________________________________________________
const char *TStructNodeEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStructNodeEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStructNodeEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStructNodeEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStructNodeProperty::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStructNodeProperty::Class_Name()
{
   return "TStructNodeProperty";
}

//______________________________________________________________________________
const char *TStructNodeProperty::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeProperty*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStructNodeProperty::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeProperty*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStructNodeProperty::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeProperty*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStructNodeProperty::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructNodeProperty*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStructViewer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStructViewer::Class_Name()
{
   return "TStructViewer";
}

//______________________________________________________________________________
const char *TStructViewer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructViewer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStructViewer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructViewer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStructViewer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructViewer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStructViewer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructViewer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStructViewerGUI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStructViewerGUI::Class_Name()
{
   return "TStructViewerGUI";
}

//______________________________________________________________________________
const char *TStructViewerGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructViewerGUI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStructViewerGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStructViewerGUI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStructViewerGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructViewerGUI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStructViewerGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStructViewerGUI*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TStructNode::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStructNode.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStructNode(void *p) {
      delete (static_cast<::TStructNode*>(p));
   }
   static void deleteArray_TStructNode(void *p) {
      delete [] (static_cast<::TStructNode*>(p));
   }
   static void destruct_TStructNode(void *p) {
      typedef ::TStructNode current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStructNode(TBuffer &buf, void *obj) {
      ((::TStructNode*)obj)->::TStructNode::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStructNode

//______________________________________________________________________________
void TStructNodeEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStructNodeEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStructNodeEditor(void *p) {
      delete (static_cast<::TStructNodeEditor*>(p));
   }
   static void deleteArray_TStructNodeEditor(void *p) {
      delete [] (static_cast<::TStructNodeEditor*>(p));
   }
   static void destruct_TStructNodeEditor(void *p) {
      typedef ::TStructNodeEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStructNodeEditor(TBuffer &buf, void *obj) {
      ((::TStructNodeEditor*)obj)->::TStructNodeEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStructNodeEditor

//______________________________________________________________________________
void TStructNodeProperty::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStructNodeProperty.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      fColor.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TStructNodeProperty::IsA());
   } else {
      R__c = R__b.WriteVersion(TStructNodeProperty::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      fColor.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStructNodeProperty(void *p) {
      delete (static_cast<::TStructNodeProperty*>(p));
   }
   static void deleteArray_TStructNodeProperty(void *p) {
      delete [] (static_cast<::TStructNodeProperty*>(p));
   }
   static void destruct_TStructNodeProperty(void *p) {
      typedef ::TStructNodeProperty current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStructNodeProperty(TBuffer &buf, void *obj) {
      ((::TStructNodeProperty*)obj)->::TStructNodeProperty::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStructNodeProperty

//______________________________________________________________________________
void TStructViewer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStructViewer.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TStructViewer(void *p) {
      return  p ? new(p) ::TStructViewer : new ::TStructViewer;
   }
   static void *newArray_TStructViewer(Long_t nElements, void *p) {
      return p ? new(p) ::TStructViewer[nElements] : new ::TStructViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_TStructViewer(void *p) {
      delete (static_cast<::TStructViewer*>(p));
   }
   static void deleteArray_TStructViewer(void *p) {
      delete [] (static_cast<::TStructViewer*>(p));
   }
   static void destruct_TStructViewer(void *p) {
      typedef ::TStructViewer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStructViewer(TBuffer &buf, void *obj) {
      ((::TStructViewer*)obj)->::TStructViewer::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStructViewer

//______________________________________________________________________________
void TStructViewerGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStructViewerGUI.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStructViewerGUI(void *p) {
      delete (static_cast<::TStructViewerGUI*>(p));
   }
   static void deleteArray_TStructViewerGUI(void *p) {
      delete [] (static_cast<::TStructViewerGUI*>(p));
   }
   static void destruct_TStructViewerGUI(void *p) {
      typedef ::TStructViewerGUI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStructViewerGUI(TBuffer &buf, void *obj) {
      ((::TStructViewerGUI*)obj)->::TStructViewerGUI::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStructViewerGUI

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGviz3d() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGviz3d) = RecordReadRules_libGviz3d();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGviz3d));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGviz3d_Impl() {
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
      TROOT::RegisterModule("libGviz3d",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGviz3d_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGviz3d_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGviz3d() {
  TriggerDictionaryInitialization_libGviz3d_Impl();
}
