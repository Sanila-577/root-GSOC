// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ASImageGui
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
#include "TASPaletteEditor.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TASPaletteEditor(void *p);
   static void deleteArray_TASPaletteEditor(void *p);
   static void destruct_TASPaletteEditor(void *p);
   static void streamer_TASPaletteEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TASPaletteEditor*)
   {
      ::TASPaletteEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TASPaletteEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TASPaletteEditor", ::TASPaletteEditor::Class_Version(), "TASPaletteEditor.h", 39,
                  typeid(::TASPaletteEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TASPaletteEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TASPaletteEditor) );
      instance.SetDelete(&delete_TASPaletteEditor);
      instance.SetDeleteArray(&deleteArray_TASPaletteEditor);
      instance.SetDestructor(&destruct_TASPaletteEditor);
      instance.SetStreamerFunc(&streamer_TASPaletteEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TASPaletteEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TASPaletteEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TASPaletteEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TASPaletteEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TASPaletteEditor::Class_Name()
{
   return "TASPaletteEditor";
}

//______________________________________________________________________________
const char *TASPaletteEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TASPaletteEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TASPaletteEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TASPaletteEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TASPaletteEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TASPaletteEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TASPaletteEditor.

   TPaletteEditor::Streamer(R__b);
   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TASPaletteEditor(void *p) {
      delete (static_cast<::TASPaletteEditor*>(p));
   }
   static void deleteArray_TASPaletteEditor(void *p) {
      delete [] (static_cast<::TASPaletteEditor*>(p));
   }
   static void destruct_TASPaletteEditor(void *p) {
      typedef ::TASPaletteEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TASPaletteEditor(TBuffer &buf, void *obj) {
      ((::TASPaletteEditor*)obj)->::TASPaletteEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TASPaletteEditor

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libASImageGui() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libASImageGui) = RecordReadRules_libASImageGui();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libASImageGui));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libASImageGui_Impl() {
    static const char* headers[] = {
nullptr
    };
    static const char* includePaths[] = {
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include",
nullptr
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libASImageGui",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libASImageGui_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libASImageGui_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libASImageGui() {
  TriggerDictionaryInitialization_libASImageGui_Impl();
}
