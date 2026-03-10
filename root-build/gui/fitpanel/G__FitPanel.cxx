// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__FitPanel
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
#include "TAdvancedGraphicsDialog.h"
#include "TFitEditor.h"
#include "TFitParametersDialog.h"
#include "TTreeInput.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TAdvancedGraphicsDialog(void *p);
   static void deleteArray_TAdvancedGraphicsDialog(void *p);
   static void destruct_TAdvancedGraphicsDialog(void *p);
   static void streamer_TAdvancedGraphicsDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAdvancedGraphicsDialog*)
   {
      ::TAdvancedGraphicsDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAdvancedGraphicsDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAdvancedGraphicsDialog", ::TAdvancedGraphicsDialog::Class_Version(), "TAdvancedGraphicsDialog.h", 38,
                  typeid(::TAdvancedGraphicsDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAdvancedGraphicsDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TAdvancedGraphicsDialog) );
      instance.SetDelete(&delete_TAdvancedGraphicsDialog);
      instance.SetDeleteArray(&deleteArray_TAdvancedGraphicsDialog);
      instance.SetDestructor(&destruct_TAdvancedGraphicsDialog);
      instance.SetStreamerFunc(&streamer_TAdvancedGraphicsDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAdvancedGraphicsDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAdvancedGraphicsDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAdvancedGraphicsDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFitEditor(void *p);
   static void deleteArray_TFitEditor(void *p);
   static void destruct_TFitEditor(void *p);
   static void streamer_TFitEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitEditor*)
   {
      ::TFitEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitEditor", ::TFitEditor::Class_Version(), "TFitEditor.h", 54,
                  typeid(::TFitEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TFitEditor) );
      instance.SetDelete(&delete_TFitEditor);
      instance.SetDeleteArray(&deleteArray_TFitEditor);
      instance.SetDestructor(&destruct_TFitEditor);
      instance.SetStreamerFunc(&streamer_TFitEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFitEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFitEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFitParametersDialog(void *p);
   static void deleteArray_TFitParametersDialog(void *p);
   static void destruct_TFitParametersDialog(void *p);
   static void streamer_TFitParametersDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFitParametersDialog*)
   {
      ::TFitParametersDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFitParametersDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFitParametersDialog", ::TFitParametersDialog::Class_Version(), "TFitParametersDialog.h", 41,
                  typeid(::TFitParametersDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFitParametersDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TFitParametersDialog) );
      instance.SetDelete(&delete_TFitParametersDialog);
      instance.SetDeleteArray(&deleteArray_TFitParametersDialog);
      instance.SetDestructor(&destruct_TFitParametersDialog);
      instance.SetStreamerFunc(&streamer_TFitParametersDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFitParametersDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFitParametersDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFitParametersDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TTreeInput(void *p);
   static void deleteArray_TTreeInput(void *p);
   static void destruct_TTreeInput(void *p);
   static void streamer_TTreeInput(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTreeInput*)
   {
      ::TTreeInput *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTreeInput >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTreeInput", ::TTreeInput::Class_Version(), "TTreeInput.h", 22,
                  typeid(::TTreeInput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTreeInput::Dictionary, isa_proxy, 16,
                  sizeof(::TTreeInput) );
      instance.SetDelete(&delete_TTreeInput);
      instance.SetDeleteArray(&deleteArray_TTreeInput);
      instance.SetDestructor(&destruct_TTreeInput);
      instance.SetStreamerFunc(&streamer_TTreeInput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTreeInput*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTreeInput*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTreeInput*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TAdvancedGraphicsDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAdvancedGraphicsDialog::Class_Name()
{
   return "TAdvancedGraphicsDialog";
}

//______________________________________________________________________________
const char *TAdvancedGraphicsDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAdvancedGraphicsDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAdvancedGraphicsDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAdvancedGraphicsDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAdvancedGraphicsDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitEditor::Class_Name()
{
   return "TFitEditor";
}

//______________________________________________________________________________
const char *TFitEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFitParametersDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFitParametersDialog::Class_Name()
{
   return "TFitParametersDialog";
}

//______________________________________________________________________________
const char *TFitParametersDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFitParametersDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFitParametersDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFitParametersDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFitParametersDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTreeInput::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTreeInput::Class_Name()
{
   return "TTreeInput";
}

//______________________________________________________________________________
const char *TTreeInput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTreeInput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTreeInput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTreeInput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTreeInput*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TAdvancedGraphicsDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAdvancedGraphicsDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TAdvancedGraphicsDialog(void *p) {
      delete (static_cast<::TAdvancedGraphicsDialog*>(p));
   }
   static void deleteArray_TAdvancedGraphicsDialog(void *p) {
      delete [] (static_cast<::TAdvancedGraphicsDialog*>(p));
   }
   static void destruct_TAdvancedGraphicsDialog(void *p) {
      typedef ::TAdvancedGraphicsDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAdvancedGraphicsDialog(TBuffer &buf, void *obj) {
      ((::TAdvancedGraphicsDialog*)obj)->::TAdvancedGraphicsDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAdvancedGraphicsDialog

//______________________________________________________________________________
void TFitEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitEditor.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFitEditor(void *p) {
      delete (static_cast<::TFitEditor*>(p));
   }
   static void deleteArray_TFitEditor(void *p) {
      delete [] (static_cast<::TFitEditor*>(p));
   }
   static void destruct_TFitEditor(void *p) {
      typedef ::TFitEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitEditor(TBuffer &buf, void *obj) {
      ((::TFitEditor*)obj)->::TFitEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitEditor

//______________________________________________________________________________
void TFitParametersDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFitParametersDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFitParametersDialog(void *p) {
      delete (static_cast<::TFitParametersDialog*>(p));
   }
   static void deleteArray_TFitParametersDialog(void *p) {
      delete [] (static_cast<::TFitParametersDialog*>(p));
   }
   static void destruct_TFitParametersDialog(void *p) {
      typedef ::TFitParametersDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFitParametersDialog(TBuffer &buf, void *obj) {
      ((::TFitParametersDialog*)obj)->::TFitParametersDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFitParametersDialog

//______________________________________________________________________________
void TTreeInput::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTreeInput.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TTreeInput(void *p) {
      delete (static_cast<::TTreeInput*>(p));
   }
   static void deleteArray_TTreeInput(void *p) {
      delete [] (static_cast<::TTreeInput*>(p));
   }
   static void destruct_TTreeInput(void *p) {
      typedef ::TTreeInput current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTreeInput(TBuffer &buf, void *obj) {
      ((::TTreeInput*)obj)->::TTreeInput::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTreeInput

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libFitPanel() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libFitPanel) = RecordReadRules_libFitPanel();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libFitPanel));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libFitPanel_Impl() {
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
      TROOT::RegisterModule("libFitPanel",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFitPanel_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFitPanel_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFitPanel() {
  TriggerDictionaryInitialization_libFitPanel_Impl();
}
