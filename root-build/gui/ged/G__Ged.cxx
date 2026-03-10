// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Ged
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
#include "HelpSMText.h"
#include "TArrowEditor.h"
#include "TAttFillEditor.h"
#include "TAttLineEditor.h"
#include "TAttMarkerEditor.h"
#include "TAttTextEditor.h"
#include "TAxisEditor.h"
#include "TCurlyArcEditor.h"
#include "TCurlyLineEditor.h"
#include "TF1Editor.h"
#include "TFrameEditor.h"
#include "TFunctionParametersDialog.h"
#include "TGedEditor.h"
#include "TGedFrame.h"
#include "TGedMarkerSelect.h"
#include "TGedPatternSelect.h"
#include "TGraphEditor.h"
#include "TH1Editor.h"
#include "TH2Editor.h"
#include "TLineEditor.h"
#include "TPadEditor.h"
#include "TPaveStatsEditor.h"
#include "TPieEditor.h"
#include "TPieSliceEditor.h"
#include "TStyleDialog.h"
#include "TStyleManager.h"
#include "TStylePreview.h"
#include "TTextEditor.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_TGedFrame(void *p);
   static void deleteArray_TGedFrame(void *p);
   static void destruct_TGedFrame(void *p);
   static void streamer_TGedFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedFrame*)
   {
      ::TGedFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedFrame", ::TGedFrame::Class_Version(), "TGedFrame.h", 27,
                  typeid(::TGedFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGedFrame) );
      instance.SetDelete(&delete_TGedFrame);
      instance.SetDeleteArray(&deleteArray_TGedFrame);
      instance.SetDestructor(&destruct_TGedFrame);
      instance.SetStreamerFunc(&streamer_TGedFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGedNameFrame(void *p = nullptr);
   static void *newArray_TGedNameFrame(Long_t size, void *p);
   static void delete_TGedNameFrame(void *p);
   static void deleteArray_TGedNameFrame(void *p);
   static void destruct_TGedNameFrame(void *p);
   static void streamer_TGedNameFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedNameFrame*)
   {
      ::TGedNameFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedNameFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedNameFrame", ::TGedNameFrame::Class_Version(), "TGedFrame.h", 86,
                  typeid(::TGedNameFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedNameFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGedNameFrame) );
      instance.SetNew(&new_TGedNameFrame);
      instance.SetNewArray(&newArray_TGedNameFrame);
      instance.SetDelete(&delete_TGedNameFrame);
      instance.SetDeleteArray(&deleteArray_TGedNameFrame);
      instance.SetDestructor(&destruct_TGedNameFrame);
      instance.SetStreamerFunc(&streamer_TGedNameFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedNameFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedNameFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedNameFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TArrowEditor(void *p = nullptr);
   static void *newArray_TArrowEditor(Long_t size, void *p);
   static void delete_TArrowEditor(void *p);
   static void deleteArray_TArrowEditor(void *p);
   static void destruct_TArrowEditor(void *p);
   static void streamer_TArrowEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TArrowEditor*)
   {
      ::TArrowEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TArrowEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TArrowEditor", ::TArrowEditor::Class_Version(), "TArrowEditor.h", 24,
                  typeid(::TArrowEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TArrowEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TArrowEditor) );
      instance.SetNew(&new_TArrowEditor);
      instance.SetNewArray(&newArray_TArrowEditor);
      instance.SetDelete(&delete_TArrowEditor);
      instance.SetDeleteArray(&deleteArray_TArrowEditor);
      instance.SetDestructor(&destruct_TArrowEditor);
      instance.SetStreamerFunc(&streamer_TArrowEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TArrowEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TArrowEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TArrowEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttFillEditor(void *p = nullptr);
   static void *newArray_TAttFillEditor(Long_t size, void *p);
   static void delete_TAttFillEditor(void *p);
   static void deleteArray_TAttFillEditor(void *p);
   static void destruct_TAttFillEditor(void *p);
   static void streamer_TAttFillEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttFillEditor*)
   {
      ::TAttFillEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttFillEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAttFillEditor", ::TAttFillEditor::Class_Version(), "TAttFillEditor.h", 23,
                  typeid(::TAttFillEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttFillEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttFillEditor) );
      instance.SetNew(&new_TAttFillEditor);
      instance.SetNewArray(&newArray_TAttFillEditor);
      instance.SetDelete(&delete_TAttFillEditor);
      instance.SetDeleteArray(&deleteArray_TAttFillEditor);
      instance.SetDestructor(&destruct_TAttFillEditor);
      instance.SetStreamerFunc(&streamer_TAttFillEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttFillEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAttFillEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAttFillEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttLineEditor(void *p = nullptr);
   static void *newArray_TAttLineEditor(Long_t size, void *p);
   static void delete_TAttLineEditor(void *p);
   static void deleteArray_TAttLineEditor(void *p);
   static void destruct_TAttLineEditor(void *p);
   static void streamer_TAttLineEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttLineEditor*)
   {
      ::TAttLineEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttLineEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAttLineEditor", ::TAttLineEditor::Class_Version(), "TAttLineEditor.h", 24,
                  typeid(::TAttLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttLineEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttLineEditor) );
      instance.SetNew(&new_TAttLineEditor);
      instance.SetNewArray(&newArray_TAttLineEditor);
      instance.SetDelete(&delete_TAttLineEditor);
      instance.SetDeleteArray(&deleteArray_TAttLineEditor);
      instance.SetDestructor(&destruct_TAttLineEditor);
      instance.SetStreamerFunc(&streamer_TAttLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttLineEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAttLineEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAttLineEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttMarkerEditor(void *p = nullptr);
   static void *newArray_TAttMarkerEditor(Long_t size, void *p);
   static void delete_TAttMarkerEditor(void *p);
   static void deleteArray_TAttMarkerEditor(void *p);
   static void destruct_TAttMarkerEditor(void *p);
   static void streamer_TAttMarkerEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttMarkerEditor*)
   {
      ::TAttMarkerEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttMarkerEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAttMarkerEditor", ::TAttMarkerEditor::Class_Version(), "TAttMarkerEditor.h", 24,
                  typeid(::TAttMarkerEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttMarkerEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttMarkerEditor) );
      instance.SetNew(&new_TAttMarkerEditor);
      instance.SetNewArray(&newArray_TAttMarkerEditor);
      instance.SetDelete(&delete_TAttMarkerEditor);
      instance.SetDeleteArray(&deleteArray_TAttMarkerEditor);
      instance.SetDestructor(&destruct_TAttMarkerEditor);
      instance.SetStreamerFunc(&streamer_TAttMarkerEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttMarkerEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAttMarkerEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAttMarkerEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAttTextEditor(void *p = nullptr);
   static void *newArray_TAttTextEditor(Long_t size, void *p);
   static void delete_TAttTextEditor(void *p);
   static void deleteArray_TAttTextEditor(void *p);
   static void destruct_TAttTextEditor(void *p);
   static void streamer_TAttTextEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAttTextEditor*)
   {
      ::TAttTextEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAttTextEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAttTextEditor", ::TAttTextEditor::Class_Version(), "TAttTextEditor.h", 24,
                  typeid(::TAttTextEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAttTextEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAttTextEditor) );
      instance.SetNew(&new_TAttTextEditor);
      instance.SetNewArray(&newArray_TAttTextEditor);
      instance.SetDelete(&delete_TAttTextEditor);
      instance.SetDeleteArray(&deleteArray_TAttTextEditor);
      instance.SetDestructor(&destruct_TAttTextEditor);
      instance.SetStreamerFunc(&streamer_TAttTextEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAttTextEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAttTextEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAttTextEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TAxisEditor(void *p = nullptr);
   static void *newArray_TAxisEditor(Long_t size, void *p);
   static void delete_TAxisEditor(void *p);
   static void deleteArray_TAxisEditor(void *p);
   static void destruct_TAxisEditor(void *p);
   static void streamer_TAxisEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TAxisEditor*)
   {
      ::TAxisEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TAxisEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TAxisEditor", ::TAxisEditor::Class_Version(), "TAxisEditor.h", 28,
                  typeid(::TAxisEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TAxisEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TAxisEditor) );
      instance.SetNew(&new_TAxisEditor);
      instance.SetNewArray(&newArray_TAxisEditor);
      instance.SetDelete(&delete_TAxisEditor);
      instance.SetDeleteArray(&deleteArray_TAxisEditor);
      instance.SetDestructor(&destruct_TAxisEditor);
      instance.SetStreamerFunc(&streamer_TAxisEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TAxisEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TAxisEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TAxisEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCurlyArcEditor(void *p = nullptr);
   static void *newArray_TCurlyArcEditor(Long_t size, void *p);
   static void delete_TCurlyArcEditor(void *p);
   static void deleteArray_TCurlyArcEditor(void *p);
   static void destruct_TCurlyArcEditor(void *p);
   static void streamer_TCurlyArcEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlyArcEditor*)
   {
      ::TCurlyArcEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlyArcEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlyArcEditor", ::TCurlyArcEditor::Class_Version(), "TCurlyArcEditor.h", 21,
                  typeid(::TCurlyArcEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlyArcEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TCurlyArcEditor) );
      instance.SetNew(&new_TCurlyArcEditor);
      instance.SetNewArray(&newArray_TCurlyArcEditor);
      instance.SetDelete(&delete_TCurlyArcEditor);
      instance.SetDeleteArray(&deleteArray_TCurlyArcEditor);
      instance.SetDestructor(&destruct_TCurlyArcEditor);
      instance.SetStreamerFunc(&streamer_TCurlyArcEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlyArcEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCurlyArcEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCurlyArcEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCurlyLineEditor(void *p = nullptr);
   static void *newArray_TCurlyLineEditor(Long_t size, void *p);
   static void delete_TCurlyLineEditor(void *p);
   static void deleteArray_TCurlyLineEditor(void *p);
   static void destruct_TCurlyLineEditor(void *p);
   static void streamer_TCurlyLineEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCurlyLineEditor*)
   {
      ::TCurlyLineEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCurlyLineEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCurlyLineEditor", ::TCurlyLineEditor::Class_Version(), "TCurlyLineEditor.h", 22,
                  typeid(::TCurlyLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCurlyLineEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TCurlyLineEditor) );
      instance.SetNew(&new_TCurlyLineEditor);
      instance.SetNewArray(&newArray_TCurlyLineEditor);
      instance.SetDelete(&delete_TCurlyLineEditor);
      instance.SetDeleteArray(&deleteArray_TCurlyLineEditor);
      instance.SetDestructor(&destruct_TCurlyLineEditor);
      instance.SetStreamerFunc(&streamer_TCurlyLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCurlyLineEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCurlyLineEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCurlyLineEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TF1Editor(void *p = nullptr);
   static void *newArray_TF1Editor(Long_t size, void *p);
   static void delete_TF1Editor(void *p);
   static void deleteArray_TF1Editor(void *p);
   static void destruct_TF1Editor(void *p);
   static void streamer_TF1Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TF1Editor*)
   {
      ::TF1Editor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TF1Editor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TF1Editor", ::TF1Editor::Class_Version(), "TF1Editor.h", 27,
                  typeid(::TF1Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TF1Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TF1Editor) );
      instance.SetNew(&new_TF1Editor);
      instance.SetNewArray(&newArray_TF1Editor);
      instance.SetDelete(&delete_TF1Editor);
      instance.SetDeleteArray(&deleteArray_TF1Editor);
      instance.SetDestructor(&destruct_TF1Editor);
      instance.SetStreamerFunc(&streamer_TF1Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TF1Editor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TF1Editor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TF1Editor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFrameEditor(void *p = nullptr);
   static void *newArray_TFrameEditor(Long_t size, void *p);
   static void delete_TFrameEditor(void *p);
   static void deleteArray_TFrameEditor(void *p);
   static void destruct_TFrameEditor(void *p);
   static void streamer_TFrameEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFrameEditor*)
   {
      ::TFrameEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFrameEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFrameEditor", ::TFrameEditor::Class_Version(), "TFrameEditor.h", 23,
                  typeid(::TFrameEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFrameEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TFrameEditor) );
      instance.SetNew(&new_TFrameEditor);
      instance.SetNewArray(&newArray_TFrameEditor);
      instance.SetDelete(&delete_TFrameEditor);
      instance.SetDeleteArray(&deleteArray_TFrameEditor);
      instance.SetDestructor(&destruct_TFrameEditor);
      instance.SetStreamerFunc(&streamer_TFrameEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFrameEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFrameEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFrameEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFunctionParametersDialog(void *p);
   static void deleteArray_TFunctionParametersDialog(void *p);
   static void destruct_TFunctionParametersDialog(void *p);
   static void streamer_TFunctionParametersDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFunctionParametersDialog*)
   {
      ::TFunctionParametersDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFunctionParametersDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFunctionParametersDialog", ::TFunctionParametersDialog::Class_Version(), "TFunctionParametersDialog.h", 29,
                  typeid(::TFunctionParametersDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFunctionParametersDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TFunctionParametersDialog) );
      instance.SetDelete(&delete_TFunctionParametersDialog);
      instance.SetDeleteArray(&deleteArray_TFunctionParametersDialog);
      instance.SetDestructor(&destruct_TFunctionParametersDialog);
      instance.SetStreamerFunc(&streamer_TFunctionParametersDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFunctionParametersDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TFunctionParametersDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TFunctionParametersDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGedEditor(void *p = nullptr);
   static void *newArray_TGedEditor(Long_t size, void *p);
   static void delete_TGedEditor(void *p);
   static void deleteArray_TGedEditor(void *p);
   static void destruct_TGedEditor(void *p);
   static void streamer_TGedEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedEditor*)
   {
      ::TGedEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedEditor", ::TGedEditor::Class_Version(), "TGedEditor.h", 30,
                  typeid(::TGedEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGedEditor) );
      instance.SetNew(&new_TGedEditor);
      instance.SetNewArray(&newArray_TGedEditor);
      instance.SetDelete(&delete_TGedEditor);
      instance.SetDeleteArray(&deleteArray_TGedEditor);
      instance.SetDestructor(&destruct_TGedEditor);
      instance.SetStreamerFunc(&streamer_TGedEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPopup(void *p);
   static void deleteArray_TGedPopup(void *p);
   static void destruct_TGedPopup(void *p);
   static void streamer_TGedPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPopup*)
   {
      ::TGedPopup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPopup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPopup", ::TGedPopup::Class_Version(), "TGedPatternSelect.h", 20,
                  typeid(::TGedPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPopup) );
      instance.SetDelete(&delete_TGedPopup);
      instance.SetDeleteArray(&deleteArray_TGedPopup);
      instance.SetDestructor(&destruct_TGedPopup);
      instance.SetStreamerFunc(&streamer_TGedPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPopup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedPopup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedPopup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternFrame(void *p);
   static void deleteArray_TGedPatternFrame(void *p);
   static void destruct_TGedPatternFrame(void *p);
   static void streamer_TGedPatternFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternFrame*)
   {
      ::TGedPatternFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternFrame", ::TGedPatternFrame::Class_Version(), "TGedPatternSelect.h", 38,
                  typeid(::TGedPatternFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternFrame::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternFrame) );
      instance.SetDelete(&delete_TGedPatternFrame);
      instance.SetDeleteArray(&deleteArray_TGedPatternFrame);
      instance.SetDestructor(&destruct_TGedPatternFrame);
      instance.SetStreamerFunc(&streamer_TGedPatternFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedPatternFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedPatternFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternSelector(void *p);
   static void deleteArray_TGedPatternSelector(void *p);
   static void destruct_TGedPatternSelector(void *p);
   static void streamer_TGedPatternSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternSelector*)
   {
      ::TGedPatternSelector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternSelector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternSelector", ::TGedPatternSelector::Class_Version(), "TGedPatternSelect.h", 66,
                  typeid(::TGedPatternSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternSelector::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternSelector) );
      instance.SetDelete(&delete_TGedPatternSelector);
      instance.SetDeleteArray(&deleteArray_TGedPatternSelector);
      instance.SetDestructor(&destruct_TGedPatternSelector);
      instance.SetStreamerFunc(&streamer_TGedPatternSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternSelector*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedPatternSelector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedPatternSelector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternPopup(void *p);
   static void deleteArray_TGedPatternPopup(void *p);
   static void destruct_TGedPatternPopup(void *p);
   static void streamer_TGedPatternPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternPopup*)
   {
      ::TGedPatternPopup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternPopup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternPopup", ::TGedPatternPopup::Class_Version(), "TGedPatternSelect.h", 84,
                  typeid(::TGedPatternPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternPopup) );
      instance.SetDelete(&delete_TGedPatternPopup);
      instance.SetDeleteArray(&deleteArray_TGedPatternPopup);
      instance.SetDestructor(&destruct_TGedPatternPopup);
      instance.SetStreamerFunc(&streamer_TGedPatternPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternPopup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedPatternPopup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedPatternPopup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedSelect(void *p);
   static void deleteArray_TGedSelect(void *p);
   static void destruct_TGedSelect(void *p);
   static void streamer_TGedSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedSelect*)
   {
      ::TGedSelect *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedSelect >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedSelect", ::TGedSelect::Class_Version(), "TGedPatternSelect.h", 98,
                  typeid(::TGedSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGedSelect) );
      instance.SetDelete(&delete_TGedSelect);
      instance.SetDeleteArray(&deleteArray_TGedSelect);
      instance.SetDestructor(&destruct_TGedSelect);
      instance.SetStreamerFunc(&streamer_TGedSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedSelect*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedSelect*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedSelect*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedPatternSelect(void *p);
   static void deleteArray_TGedPatternSelect(void *p);
   static void destruct_TGedPatternSelect(void *p);
   static void streamer_TGedPatternSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedPatternSelect*)
   {
      ::TGedPatternSelect *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedPatternSelect >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedPatternSelect", ::TGedPatternSelect::Class_Version(), "TGedPatternSelect.h", 120,
                  typeid(::TGedPatternSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedPatternSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGedPatternSelect) );
      instance.SetDelete(&delete_TGedPatternSelect);
      instance.SetDeleteArray(&deleteArray_TGedPatternSelect);
      instance.SetDestructor(&destruct_TGedPatternSelect);
      instance.SetStreamerFunc(&streamer_TGedPatternSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedPatternSelect*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedPatternSelect*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedPatternSelect*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedMarkerPopup(void *p);
   static void deleteArray_TGedMarkerPopup(void *p);
   static void destruct_TGedMarkerPopup(void *p);
   static void streamer_TGedMarkerPopup(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedMarkerPopup*)
   {
      ::TGedMarkerPopup *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedMarkerPopup >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedMarkerPopup", ::TGedMarkerPopup::Class_Version(), "TGedMarkerSelect.h", 22,
                  typeid(::TGedMarkerPopup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedMarkerPopup::Dictionary, isa_proxy, 16,
                  sizeof(::TGedMarkerPopup) );
      instance.SetDelete(&delete_TGedMarkerPopup);
      instance.SetDeleteArray(&deleteArray_TGedMarkerPopup);
      instance.SetDestructor(&destruct_TGedMarkerPopup);
      instance.SetStreamerFunc(&streamer_TGedMarkerPopup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedMarkerPopup*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedMarkerPopup*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedMarkerPopup*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGedMarkerSelect(void *p);
   static void deleteArray_TGedMarkerSelect(void *p);
   static void destruct_TGedMarkerSelect(void *p);
   static void streamer_TGedMarkerSelect(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGedMarkerSelect*)
   {
      ::TGedMarkerSelect *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGedMarkerSelect >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGedMarkerSelect", ::TGedMarkerSelect::Class_Version(), "TGedMarkerSelect.h", 37,
                  typeid(::TGedMarkerSelect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGedMarkerSelect::Dictionary, isa_proxy, 16,
                  sizeof(::TGedMarkerSelect) );
      instance.SetDelete(&delete_TGedMarkerSelect);
      instance.SetDeleteArray(&deleteArray_TGedMarkerSelect);
      instance.SetDestructor(&destruct_TGedMarkerSelect);
      instance.SetStreamerFunc(&streamer_TGedMarkerSelect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGedMarkerSelect*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGedMarkerSelect*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGedMarkerSelect*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGraphEditor(void *p = nullptr);
   static void *newArray_TGraphEditor(Long_t size, void *p);
   static void delete_TGraphEditor(void *p);
   static void deleteArray_TGraphEditor(void *p);
   static void destruct_TGraphEditor(void *p);
   static void streamer_TGraphEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGraphEditor*)
   {
      ::TGraphEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGraphEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TGraphEditor", ::TGraphEditor::Class_Version(), "TGraphEditor.h", 25,
                  typeid(::TGraphEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGraphEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TGraphEditor) );
      instance.SetNew(&new_TGraphEditor);
      instance.SetNewArray(&newArray_TGraphEditor);
      instance.SetDelete(&delete_TGraphEditor);
      instance.SetDeleteArray(&deleteArray_TGraphEditor);
      instance.SetDestructor(&destruct_TGraphEditor);
      instance.SetStreamerFunc(&streamer_TGraphEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGraphEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TGraphEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TGraphEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH1Editor(void *p = nullptr);
   static void *newArray_TH1Editor(Long_t size, void *p);
   static void delete_TH1Editor(void *p);
   static void deleteArray_TH1Editor(void *p);
   static void destruct_TH1Editor(void *p);
   static void streamer_TH1Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH1Editor*)
   {
      ::TH1Editor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH1Editor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH1Editor", ::TH1Editor::Class_Version(), "TH1Editor.h", 33,
                  typeid(::TH1Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH1Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TH1Editor) );
      instance.SetNew(&new_TH1Editor);
      instance.SetNewArray(&newArray_TH1Editor);
      instance.SetDelete(&delete_TH1Editor);
      instance.SetDeleteArray(&deleteArray_TH1Editor);
      instance.SetDestructor(&destruct_TH1Editor);
      instance.SetStreamerFunc(&streamer_TH1Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH1Editor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH1Editor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH1Editor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TH2Editor(void *p = nullptr);
   static void *newArray_TH2Editor(Long_t size, void *p);
   static void delete_TH2Editor(void *p);
   static void deleteArray_TH2Editor(void *p);
   static void destruct_TH2Editor(void *p);
   static void streamer_TH2Editor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TH2Editor*)
   {
      ::TH2Editor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TH2Editor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TH2Editor", ::TH2Editor::Class_Version(), "TH2Editor.h", 34,
                  typeid(::TH2Editor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TH2Editor::Dictionary, isa_proxy, 16,
                  sizeof(::TH2Editor) );
      instance.SetNew(&new_TH2Editor);
      instance.SetNewArray(&newArray_TH2Editor);
      instance.SetDelete(&delete_TH2Editor);
      instance.SetDeleteArray(&deleteArray_TH2Editor);
      instance.SetDestructor(&destruct_TH2Editor);
      instance.SetStreamerFunc(&streamer_TH2Editor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TH2Editor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TH2Editor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TH2Editor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TLineEditor(void *p = nullptr);
   static void *newArray_TLineEditor(Long_t size, void *p);
   static void delete_TLineEditor(void *p);
   static void deleteArray_TLineEditor(void *p);
   static void destruct_TLineEditor(void *p);
   static void streamer_TLineEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TLineEditor*)
   {
      ::TLineEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TLineEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TLineEditor", ::TLineEditor::Class_Version(), "TLineEditor.h", 22,
                  typeid(::TLineEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TLineEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TLineEditor) );
      instance.SetNew(&new_TLineEditor);
      instance.SetNewArray(&newArray_TLineEditor);
      instance.SetDelete(&delete_TLineEditor);
      instance.SetDeleteArray(&deleteArray_TLineEditor);
      instance.SetDestructor(&destruct_TLineEditor);
      instance.SetStreamerFunc(&streamer_TLineEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TLineEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TLineEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TLineEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPadEditor(void *p = nullptr);
   static void *newArray_TPadEditor(Long_t size, void *p);
   static void delete_TPadEditor(void *p);
   static void deleteArray_TPadEditor(void *p);
   static void destruct_TPadEditor(void *p);
   static void streamer_TPadEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPadEditor*)
   {
      ::TPadEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPadEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPadEditor", ::TPadEditor::Class_Version(), "TPadEditor.h", 25,
                  typeid(::TPadEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPadEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPadEditor) );
      instance.SetNew(&new_TPadEditor);
      instance.SetNewArray(&newArray_TPadEditor);
      instance.SetDelete(&delete_TPadEditor);
      instance.SetDeleteArray(&deleteArray_TPadEditor);
      instance.SetDestructor(&destruct_TPadEditor);
      instance.SetStreamerFunc(&streamer_TPadEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPadEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPadEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPadEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPaveStatsEditor(void *p = nullptr);
   static void *newArray_TPaveStatsEditor(Long_t size, void *p);
   static void delete_TPaveStatsEditor(void *p);
   static void deleteArray_TPaveStatsEditor(void *p);
   static void destruct_TPaveStatsEditor(void *p);
   static void streamer_TPaveStatsEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPaveStatsEditor*)
   {
      ::TPaveStatsEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPaveStatsEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPaveStatsEditor", ::TPaveStatsEditor::Class_Version(), "TPaveStatsEditor.h", 21,
                  typeid(::TPaveStatsEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPaveStatsEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPaveStatsEditor) );
      instance.SetNew(&new_TPaveStatsEditor);
      instance.SetNewArray(&newArray_TPaveStatsEditor);
      instance.SetDelete(&delete_TPaveStatsEditor);
      instance.SetDeleteArray(&deleteArray_TPaveStatsEditor);
      instance.SetDestructor(&destruct_TPaveStatsEditor);
      instance.SetStreamerFunc(&streamer_TPaveStatsEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPaveStatsEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPaveStatsEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPaveStatsEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPieEditor(void *p = nullptr);
   static void *newArray_TPieEditor(Long_t size, void *p);
   static void delete_TPieEditor(void *p);
   static void deleteArray_TPieEditor(void *p);
   static void destruct_TPieEditor(void *p);
   static void streamer_TPieEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPieEditor*)
   {
      ::TPieEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPieEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPieEditor", ::TPieEditor::Class_Version(), "TPieEditor.h", 28,
                  typeid(::TPieEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPieEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPieEditor) );
      instance.SetNew(&new_TPieEditor);
      instance.SetNewArray(&newArray_TPieEditor);
      instance.SetDelete(&delete_TPieEditor);
      instance.SetDeleteArray(&deleteArray_TPieEditor);
      instance.SetDestructor(&destruct_TPieEditor);
      instance.SetStreamerFunc(&streamer_TPieEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPieEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPieEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPieEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPieSliceEditor(void *p = nullptr);
   static void *newArray_TPieSliceEditor(Long_t size, void *p);
   static void delete_TPieSliceEditor(void *p);
   static void deleteArray_TPieSliceEditor(void *p);
   static void destruct_TPieSliceEditor(void *p);
   static void streamer_TPieSliceEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPieSliceEditor*)
   {
      ::TPieSliceEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPieSliceEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TPieSliceEditor", ::TPieSliceEditor::Class_Version(), "TPieSliceEditor.h", 20,
                  typeid(::TPieSliceEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPieSliceEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TPieSliceEditor) );
      instance.SetNew(&new_TPieSliceEditor);
      instance.SetNewArray(&newArray_TPieSliceEditor);
      instance.SetDelete(&delete_TPieSliceEditor);
      instance.SetDeleteArray(&deleteArray_TPieSliceEditor);
      instance.SetDestructor(&destruct_TPieSliceEditor);
      instance.SetStreamerFunc(&streamer_TPieSliceEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPieSliceEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TPieSliceEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TPieSliceEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStyleDialog(void *p);
   static void deleteArray_TStyleDialog(void *p);
   static void destruct_TStyleDialog(void *p);
   static void streamer_TStyleDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStyleDialog*)
   {
      ::TStyleDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStyleDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStyleDialog", ::TStyleDialog::Class_Version(), "TStyleDialog.h", 27,
                  typeid(::TStyleDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStyleDialog::Dictionary, isa_proxy, 16,
                  sizeof(::TStyleDialog) );
      instance.SetDelete(&delete_TStyleDialog);
      instance.SetDeleteArray(&deleteArray_TStyleDialog);
      instance.SetDestructor(&destruct_TStyleDialog);
      instance.SetStreamerFunc(&streamer_TStyleDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStyleDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStyleDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStyleDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStyleManager(void *p);
   static void deleteArray_TStyleManager(void *p);
   static void destruct_TStyleManager(void *p);
   static void streamer_TStyleManager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStyleManager*)
   {
      ::TStyleManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStyleManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStyleManager", ::TStyleManager::Class_Version(), "TStyleManager.h", 54,
                  typeid(::TStyleManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStyleManager::Dictionary, isa_proxy, 16,
                  sizeof(::TStyleManager) );
      instance.SetDelete(&delete_TStyleManager);
      instance.SetDeleteArray(&deleteArray_TStyleManager);
      instance.SetDestructor(&destruct_TStyleManager);
      instance.SetStreamerFunc(&streamer_TStyleManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStyleManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStyleManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStyleManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TStylePreview(void *p);
   static void deleteArray_TStylePreview(void *p);
   static void destruct_TStylePreview(void *p);
   static void streamer_TStylePreview(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TStylePreview*)
   {
      ::TStylePreview *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TStylePreview >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TStylePreview", ::TStylePreview::Class_Version(), "TStylePreview.h", 23,
                  typeid(::TStylePreview), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TStylePreview::Dictionary, isa_proxy, 16,
                  sizeof(::TStylePreview) );
      instance.SetDelete(&delete_TStylePreview);
      instance.SetDeleteArray(&deleteArray_TStylePreview);
      instance.SetDestructor(&destruct_TStylePreview);
      instance.SetStreamerFunc(&streamer_TStylePreview);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TStylePreview*)
   {
      return GenerateInitInstanceLocal(static_cast<::TStylePreview*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TStylePreview*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TTextEditor(void *p = nullptr);
   static void *newArray_TTextEditor(Long_t size, void *p);
   static void delete_TTextEditor(void *p);
   static void deleteArray_TTextEditor(void *p);
   static void destruct_TTextEditor(void *p);
   static void streamer_TTextEditor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TTextEditor*)
   {
      ::TTextEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TTextEditor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TTextEditor", ::TTextEditor::Class_Version(), "TTextEditor.h", 21,
                  typeid(::TTextEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TTextEditor::Dictionary, isa_proxy, 16,
                  sizeof(::TTextEditor) );
      instance.SetNew(&new_TTextEditor);
      instance.SetNewArray(&newArray_TTextEditor);
      instance.SetDelete(&delete_TTextEditor);
      instance.SetDeleteArray(&deleteArray_TTextEditor);
      instance.SetDestructor(&destruct_TTextEditor);
      instance.SetStreamerFunc(&streamer_TTextEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TTextEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::TTextEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TTextEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGedFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedFrame::Class_Name()
{
   return "TGedFrame";
}

//______________________________________________________________________________
const char *TGedFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedNameFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedNameFrame::Class_Name()
{
   return "TGedNameFrame";
}

//______________________________________________________________________________
const char *TGedNameFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedNameFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedNameFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedNameFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedNameFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TArrowEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TArrowEditor::Class_Name()
{
   return "TArrowEditor";
}

//______________________________________________________________________________
const char *TArrowEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TArrowEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TArrowEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TArrowEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TArrowEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttFillEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttFillEditor::Class_Name()
{
   return "TAttFillEditor";
}

//______________________________________________________________________________
const char *TAttFillEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAttFillEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttFillEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttFillEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttFillEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttLineEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttLineEditor::Class_Name()
{
   return "TAttLineEditor";
}

//______________________________________________________________________________
const char *TAttLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAttLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttLineEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttMarkerEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttMarkerEditor::Class_Name()
{
   return "TAttMarkerEditor";
}

//______________________________________________________________________________
const char *TAttMarkerEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAttMarkerEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttMarkerEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttMarkerEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttMarkerEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAttTextEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAttTextEditor::Class_Name()
{
   return "TAttTextEditor";
}

//______________________________________________________________________________
const char *TAttTextEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAttTextEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAttTextEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAttTextEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAttTextEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TAxisEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TAxisEditor::Class_Name()
{
   return "TAxisEditor";
}

//______________________________________________________________________________
const char *TAxisEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TAxisEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TAxisEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TAxisEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TAxisEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCurlyArcEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlyArcEditor::Class_Name()
{
   return "TCurlyArcEditor";
}

//______________________________________________________________________________
const char *TCurlyArcEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlyArcEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlyArcEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlyArcEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyArcEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCurlyLineEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCurlyLineEditor::Class_Name()
{
   return "TCurlyLineEditor";
}

//______________________________________________________________________________
const char *TCurlyLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCurlyLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCurlyLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCurlyLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCurlyLineEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TF1Editor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TF1Editor::Class_Name()
{
   return "TF1Editor";
}

//______________________________________________________________________________
const char *TF1Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TF1Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TF1Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TF1Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TF1Editor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFrameEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFrameEditor::Class_Name()
{
   return "TFrameEditor";
}

//______________________________________________________________________________
const char *TFrameEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFrameEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFrameEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFrameEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFrameEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFunctionParametersDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFunctionParametersDialog::Class_Name()
{
   return "TFunctionParametersDialog";
}

//______________________________________________________________________________
const char *TFunctionParametersDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFunctionParametersDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFunctionParametersDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFunctionParametersDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFunctionParametersDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedEditor::Class_Name()
{
   return "TGedEditor";
}

//______________________________________________________________________________
const char *TGedEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPopup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPopup::Class_Name()
{
   return "TGedPopup";
}

//______________________________________________________________________________
const char *TGedPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPopup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternFrame::Class_Name()
{
   return "TGedPatternFrame";
}

//______________________________________________________________________________
const char *TGedPatternFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternSelector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternSelector::Class_Name()
{
   return "TGedPatternSelector";
}

//______________________________________________________________________________
const char *TGedPatternSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternPopup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternPopup::Class_Name()
{
   return "TGedPatternPopup";
}

//______________________________________________________________________________
const char *TGedPatternPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternPopup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedSelect::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedSelect::Class_Name()
{
   return "TGedSelect";
}

//______________________________________________________________________________
const char *TGedSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedSelect*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedPatternSelect::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedPatternSelect::Class_Name()
{
   return "TGedPatternSelect";
}

//______________________________________________________________________________
const char *TGedPatternSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedPatternSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedPatternSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedPatternSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedPatternSelect*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedMarkerPopup::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedMarkerPopup::Class_Name()
{
   return "TGedMarkerPopup";
}

//______________________________________________________________________________
const char *TGedMarkerPopup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedMarkerPopup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedMarkerPopup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedMarkerPopup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerPopup*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGedMarkerSelect::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGedMarkerSelect::Class_Name()
{
   return "TGedMarkerSelect";
}

//______________________________________________________________________________
const char *TGedMarkerSelect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGedMarkerSelect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGedMarkerSelect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGedMarkerSelect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGedMarkerSelect*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGraphEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TGraphEditor::Class_Name()
{
   return "TGraphEditor";
}

//______________________________________________________________________________
const char *TGraphEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TGraphEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGraphEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGraphEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGraphEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH1Editor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH1Editor::Class_Name()
{
   return "TH1Editor";
}

//______________________________________________________________________________
const char *TH1Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH1Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH1Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH1Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH1Editor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TH2Editor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TH2Editor::Class_Name()
{
   return "TH2Editor";
}

//______________________________________________________________________________
const char *TH2Editor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TH2Editor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TH2Editor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TH2Editor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TH2Editor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TLineEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TLineEditor::Class_Name()
{
   return "TLineEditor";
}

//______________________________________________________________________________
const char *TLineEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TLineEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TLineEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TLineEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TLineEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPadEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPadEditor::Class_Name()
{
   return "TPadEditor";
}

//______________________________________________________________________________
const char *TPadEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPadEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPadEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPadEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPadEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPaveStatsEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPaveStatsEditor::Class_Name()
{
   return "TPaveStatsEditor";
}

//______________________________________________________________________________
const char *TPaveStatsEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPaveStatsEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPaveStatsEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPaveStatsEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPaveStatsEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPieEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPieEditor::Class_Name()
{
   return "TPieEditor";
}

//______________________________________________________________________________
const char *TPieEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPieEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPieEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPieEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPieSliceEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TPieSliceEditor::Class_Name()
{
   return "TPieSliceEditor";
}

//______________________________________________________________________________
const char *TPieSliceEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TPieSliceEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPieSliceEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPieSliceEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPieSliceEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStyleDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStyleDialog::Class_Name()
{
   return "TStyleDialog";
}

//______________________________________________________________________________
const char *TStyleDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStyleDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStyleDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStyleDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStyleManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStyleManager::Class_Name()
{
   return "TStyleManager";
}

//______________________________________________________________________________
const char *TStyleManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStyleManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStyleManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStyleManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStyleManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TStylePreview::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TStylePreview::Class_Name()
{
   return "TStylePreview";
}

//______________________________________________________________________________
const char *TStylePreview::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TStylePreview::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TStylePreview::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TStylePreview::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TStylePreview*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TTextEditor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TTextEditor::Class_Name()
{
   return "TTextEditor";
}

//______________________________________________________________________________
const char *TTextEditor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TTextEditor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TTextEditor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TTextEditor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TTextEditor*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGedFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedFrame.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedFrame(void *p) {
      delete (static_cast<::TGedFrame*>(p));
   }
   static void deleteArray_TGedFrame(void *p) {
      delete [] (static_cast<::TGedFrame*>(p));
   }
   static void destruct_TGedFrame(void *p) {
      typedef ::TGedFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedFrame(TBuffer &buf, void *obj) {
      ((::TGedFrame*)obj)->::TGedFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedFrame

//______________________________________________________________________________
void TGedNameFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedNameFrame.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGedNameFrame(void *p) {
      return  p ? new(p) ::TGedNameFrame : new ::TGedNameFrame;
   }
   static void *newArray_TGedNameFrame(Long_t nElements, void *p) {
      return p ? new(p) ::TGedNameFrame[nElements] : new ::TGedNameFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGedNameFrame(void *p) {
      delete (static_cast<::TGedNameFrame*>(p));
   }
   static void deleteArray_TGedNameFrame(void *p) {
      delete [] (static_cast<::TGedNameFrame*>(p));
   }
   static void destruct_TGedNameFrame(void *p) {
      typedef ::TGedNameFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedNameFrame(TBuffer &buf, void *obj) {
      ((::TGedNameFrame*)obj)->::TGedNameFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedNameFrame

//______________________________________________________________________________
void TArrowEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TArrowEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TArrowEditor(void *p) {
      return  p ? new(p) ::TArrowEditor : new ::TArrowEditor;
   }
   static void *newArray_TArrowEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TArrowEditor[nElements] : new ::TArrowEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TArrowEditor(void *p) {
      delete (static_cast<::TArrowEditor*>(p));
   }
   static void deleteArray_TArrowEditor(void *p) {
      delete [] (static_cast<::TArrowEditor*>(p));
   }
   static void destruct_TArrowEditor(void *p) {
      typedef ::TArrowEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TArrowEditor(TBuffer &buf, void *obj) {
      ((::TArrowEditor*)obj)->::TArrowEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TArrowEditor

//______________________________________________________________________________
void TAttFillEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttFillEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttFillEditor(void *p) {
      return  p ? new(p) ::TAttFillEditor : new ::TAttFillEditor;
   }
   static void *newArray_TAttFillEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttFillEditor[nElements] : new ::TAttFillEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttFillEditor(void *p) {
      delete (static_cast<::TAttFillEditor*>(p));
   }
   static void deleteArray_TAttFillEditor(void *p) {
      delete [] (static_cast<::TAttFillEditor*>(p));
   }
   static void destruct_TAttFillEditor(void *p) {
      typedef ::TAttFillEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttFillEditor(TBuffer &buf, void *obj) {
      ((::TAttFillEditor*)obj)->::TAttFillEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttFillEditor

//______________________________________________________________________________
void TAttLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttLineEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttLineEditor(void *p) {
      return  p ? new(p) ::TAttLineEditor : new ::TAttLineEditor;
   }
   static void *newArray_TAttLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttLineEditor[nElements] : new ::TAttLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttLineEditor(void *p) {
      delete (static_cast<::TAttLineEditor*>(p));
   }
   static void deleteArray_TAttLineEditor(void *p) {
      delete [] (static_cast<::TAttLineEditor*>(p));
   }
   static void destruct_TAttLineEditor(void *p) {
      typedef ::TAttLineEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttLineEditor(TBuffer &buf, void *obj) {
      ((::TAttLineEditor*)obj)->::TAttLineEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttLineEditor

//______________________________________________________________________________
void TAttMarkerEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttMarkerEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttMarkerEditor(void *p) {
      return  p ? new(p) ::TAttMarkerEditor : new ::TAttMarkerEditor;
   }
   static void *newArray_TAttMarkerEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttMarkerEditor[nElements] : new ::TAttMarkerEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttMarkerEditor(void *p) {
      delete (static_cast<::TAttMarkerEditor*>(p));
   }
   static void deleteArray_TAttMarkerEditor(void *p) {
      delete [] (static_cast<::TAttMarkerEditor*>(p));
   }
   static void destruct_TAttMarkerEditor(void *p) {
      typedef ::TAttMarkerEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttMarkerEditor(TBuffer &buf, void *obj) {
      ((::TAttMarkerEditor*)obj)->::TAttMarkerEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttMarkerEditor

//______________________________________________________________________________
void TAttTextEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttTextEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAttTextEditor(void *p) {
      return  p ? new(p) ::TAttTextEditor : new ::TAttTextEditor;
   }
   static void *newArray_TAttTextEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAttTextEditor[nElements] : new ::TAttTextEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAttTextEditor(void *p) {
      delete (static_cast<::TAttTextEditor*>(p));
   }
   static void deleteArray_TAttTextEditor(void *p) {
      delete [] (static_cast<::TAttTextEditor*>(p));
   }
   static void destruct_TAttTextEditor(void *p) {
      typedef ::TAttTextEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAttTextEditor(TBuffer &buf, void *obj) {
      ((::TAttTextEditor*)obj)->::TAttTextEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAttTextEditor

//______________________________________________________________________________
void TAxisEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAxisEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TAxisEditor(void *p) {
      return  p ? new(p) ::TAxisEditor : new ::TAxisEditor;
   }
   static void *newArray_TAxisEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TAxisEditor[nElements] : new ::TAxisEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TAxisEditor(void *p) {
      delete (static_cast<::TAxisEditor*>(p));
   }
   static void deleteArray_TAxisEditor(void *p) {
      delete [] (static_cast<::TAxisEditor*>(p));
   }
   static void destruct_TAxisEditor(void *p) {
      typedef ::TAxisEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TAxisEditor(TBuffer &buf, void *obj) {
      ((::TAxisEditor*)obj)->::TAxisEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TAxisEditor

//______________________________________________________________________________
void TCurlyArcEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlyArcEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCurlyArcEditor(void *p) {
      return  p ? new(p) ::TCurlyArcEditor : new ::TCurlyArcEditor;
   }
   static void *newArray_TCurlyArcEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TCurlyArcEditor[nElements] : new ::TCurlyArcEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCurlyArcEditor(void *p) {
      delete (static_cast<::TCurlyArcEditor*>(p));
   }
   static void deleteArray_TCurlyArcEditor(void *p) {
      delete [] (static_cast<::TCurlyArcEditor*>(p));
   }
   static void destruct_TCurlyArcEditor(void *p) {
      typedef ::TCurlyArcEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCurlyArcEditor(TBuffer &buf, void *obj) {
      ((::TCurlyArcEditor*)obj)->::TCurlyArcEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCurlyArcEditor

//______________________________________________________________________________
void TCurlyLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCurlyLineEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCurlyLineEditor(void *p) {
      return  p ? new(p) ::TCurlyLineEditor : new ::TCurlyLineEditor;
   }
   static void *newArray_TCurlyLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TCurlyLineEditor[nElements] : new ::TCurlyLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCurlyLineEditor(void *p) {
      delete (static_cast<::TCurlyLineEditor*>(p));
   }
   static void deleteArray_TCurlyLineEditor(void *p) {
      delete [] (static_cast<::TCurlyLineEditor*>(p));
   }
   static void destruct_TCurlyLineEditor(void *p) {
      typedef ::TCurlyLineEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TCurlyLineEditor(TBuffer &buf, void *obj) {
      ((::TCurlyLineEditor*)obj)->::TCurlyLineEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TCurlyLineEditor

//______________________________________________________________________________
void TF1Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TF1Editor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TF1Editor(void *p) {
      return  p ? new(p) ::TF1Editor : new ::TF1Editor;
   }
   static void *newArray_TF1Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TF1Editor[nElements] : new ::TF1Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TF1Editor(void *p) {
      delete (static_cast<::TF1Editor*>(p));
   }
   static void deleteArray_TF1Editor(void *p) {
      delete [] (static_cast<::TF1Editor*>(p));
   }
   static void destruct_TF1Editor(void *p) {
      typedef ::TF1Editor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TF1Editor(TBuffer &buf, void *obj) {
      ((::TF1Editor*)obj)->::TF1Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TF1Editor

//______________________________________________________________________________
void TFrameEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFrameEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFrameEditor(void *p) {
      return  p ? new(p) ::TFrameEditor : new ::TFrameEditor;
   }
   static void *newArray_TFrameEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TFrameEditor[nElements] : new ::TFrameEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFrameEditor(void *p) {
      delete (static_cast<::TFrameEditor*>(p));
   }
   static void deleteArray_TFrameEditor(void *p) {
      delete [] (static_cast<::TFrameEditor*>(p));
   }
   static void destruct_TFrameEditor(void *p) {
      typedef ::TFrameEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFrameEditor(TBuffer &buf, void *obj) {
      ((::TFrameEditor*)obj)->::TFrameEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFrameEditor

//______________________________________________________________________________
void TFunctionParametersDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFunctionParametersDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFunctionParametersDialog(void *p) {
      delete (static_cast<::TFunctionParametersDialog*>(p));
   }
   static void deleteArray_TFunctionParametersDialog(void *p) {
      delete [] (static_cast<::TFunctionParametersDialog*>(p));
   }
   static void destruct_TFunctionParametersDialog(void *p) {
      typedef ::TFunctionParametersDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFunctionParametersDialog(TBuffer &buf, void *obj) {
      ((::TFunctionParametersDialog*)obj)->::TFunctionParametersDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFunctionParametersDialog

//______________________________________________________________________________
void TGedEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedEditor.

   TVirtualPadEditor::Streamer(R__b);
   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGedEditor(void *p) {
      return  p ? new(p) ::TGedEditor : new ::TGedEditor;
   }
   static void *newArray_TGedEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGedEditor[nElements] : new ::TGedEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGedEditor(void *p) {
      delete (static_cast<::TGedEditor*>(p));
   }
   static void deleteArray_TGedEditor(void *p) {
      delete [] (static_cast<::TGedEditor*>(p));
   }
   static void destruct_TGedEditor(void *p) {
      typedef ::TGedEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedEditor(TBuffer &buf, void *obj) {
      ((::TGedEditor*)obj)->::TGedEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedEditor

//______________________________________________________________________________
void TGedPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPopup.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPopup(void *p) {
      delete (static_cast<::TGedPopup*>(p));
   }
   static void deleteArray_TGedPopup(void *p) {
      delete [] (static_cast<::TGedPopup*>(p));
   }
   static void destruct_TGedPopup(void *p) {
      typedef ::TGedPopup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPopup(TBuffer &buf, void *obj) {
      ((::TGedPopup*)obj)->::TGedPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPopup

//______________________________________________________________________________
void TGedPatternFrame::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternFrame.

   TGFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternFrame(void *p) {
      delete (static_cast<::TGedPatternFrame*>(p));
   }
   static void deleteArray_TGedPatternFrame(void *p) {
      delete [] (static_cast<::TGedPatternFrame*>(p));
   }
   static void destruct_TGedPatternFrame(void *p) {
      typedef ::TGedPatternFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternFrame(TBuffer &buf, void *obj) {
      ((::TGedPatternFrame*)obj)->::TGedPatternFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternFrame

//______________________________________________________________________________
void TGedPatternSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternSelector.

   TGCompositeFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternSelector(void *p) {
      delete (static_cast<::TGedPatternSelector*>(p));
   }
   static void deleteArray_TGedPatternSelector(void *p) {
      delete [] (static_cast<::TGedPatternSelector*>(p));
   }
   static void destruct_TGedPatternSelector(void *p) {
      typedef ::TGedPatternSelector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternSelector(TBuffer &buf, void *obj) {
      ((::TGedPatternSelector*)obj)->::TGedPatternSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternSelector

//______________________________________________________________________________
void TGedPatternPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternPopup.

   TGedPopup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternPopup(void *p) {
      delete (static_cast<::TGedPatternPopup*>(p));
   }
   static void deleteArray_TGedPatternPopup(void *p) {
      delete [] (static_cast<::TGedPatternPopup*>(p));
   }
   static void destruct_TGedPatternPopup(void *p) {
      typedef ::TGedPatternPopup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternPopup(TBuffer &buf, void *obj) {
      ((::TGedPatternPopup*)obj)->::TGedPatternPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternPopup

//______________________________________________________________________________
void TGedSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedSelect.

   TGCheckButton::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedSelect(void *p) {
      delete (static_cast<::TGedSelect*>(p));
   }
   static void deleteArray_TGedSelect(void *p) {
      delete [] (static_cast<::TGedSelect*>(p));
   }
   static void destruct_TGedSelect(void *p) {
      typedef ::TGedSelect current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedSelect(TBuffer &buf, void *obj) {
      ((::TGedSelect*)obj)->::TGedSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedSelect

//______________________________________________________________________________
void TGedPatternSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedPatternSelect.

   TGedSelect::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedPatternSelect(void *p) {
      delete (static_cast<::TGedPatternSelect*>(p));
   }
   static void deleteArray_TGedPatternSelect(void *p) {
      delete [] (static_cast<::TGedPatternSelect*>(p));
   }
   static void destruct_TGedPatternSelect(void *p) {
      typedef ::TGedPatternSelect current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedPatternSelect(TBuffer &buf, void *obj) {
      ((::TGedPatternSelect*)obj)->::TGedPatternSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedPatternSelect

//______________________________________________________________________________
void TGedMarkerPopup::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedMarkerPopup.

   TGedPopup::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedMarkerPopup(void *p) {
      delete (static_cast<::TGedMarkerPopup*>(p));
   }
   static void deleteArray_TGedMarkerPopup(void *p) {
      delete [] (static_cast<::TGedMarkerPopup*>(p));
   }
   static void destruct_TGedMarkerPopup(void *p) {
      typedef ::TGedMarkerPopup current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedMarkerPopup(TBuffer &buf, void *obj) {
      ((::TGedMarkerPopup*)obj)->::TGedMarkerPopup::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedMarkerPopup

//______________________________________________________________________________
void TGedMarkerSelect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGedMarkerSelect.

   TGedSelect::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGedMarkerSelect(void *p) {
      delete (static_cast<::TGedMarkerSelect*>(p));
   }
   static void deleteArray_TGedMarkerSelect(void *p) {
      delete [] (static_cast<::TGedMarkerSelect*>(p));
   }
   static void destruct_TGedMarkerSelect(void *p) {
      typedef ::TGedMarkerSelect current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGedMarkerSelect(TBuffer &buf, void *obj) {
      ((::TGedMarkerSelect*)obj)->::TGedMarkerSelect::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGedMarkerSelect

//______________________________________________________________________________
void TGraphEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGraphEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGraphEditor(void *p) {
      return  p ? new(p) ::TGraphEditor : new ::TGraphEditor;
   }
   static void *newArray_TGraphEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TGraphEditor[nElements] : new ::TGraphEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGraphEditor(void *p) {
      delete (static_cast<::TGraphEditor*>(p));
   }
   static void deleteArray_TGraphEditor(void *p) {
      delete [] (static_cast<::TGraphEditor*>(p));
   }
   static void destruct_TGraphEditor(void *p) {
      typedef ::TGraphEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TGraphEditor(TBuffer &buf, void *obj) {
      ((::TGraphEditor*)obj)->::TGraphEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TGraphEditor

//______________________________________________________________________________
void TH1Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH1Editor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH1Editor(void *p) {
      return  p ? new(p) ::TH1Editor : new ::TH1Editor;
   }
   static void *newArray_TH1Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TH1Editor[nElements] : new ::TH1Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH1Editor(void *p) {
      delete (static_cast<::TH1Editor*>(p));
   }
   static void deleteArray_TH1Editor(void *p) {
      delete [] (static_cast<::TH1Editor*>(p));
   }
   static void destruct_TH1Editor(void *p) {
      typedef ::TH1Editor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH1Editor(TBuffer &buf, void *obj) {
      ((::TH1Editor*)obj)->::TH1Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TH1Editor

//______________________________________________________________________________
void TH2Editor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TH2Editor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TH2Editor(void *p) {
      return  p ? new(p) ::TH2Editor : new ::TH2Editor;
   }
   static void *newArray_TH2Editor(Long_t nElements, void *p) {
      return p ? new(p) ::TH2Editor[nElements] : new ::TH2Editor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TH2Editor(void *p) {
      delete (static_cast<::TH2Editor*>(p));
   }
   static void deleteArray_TH2Editor(void *p) {
      delete [] (static_cast<::TH2Editor*>(p));
   }
   static void destruct_TH2Editor(void *p) {
      typedef ::TH2Editor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TH2Editor(TBuffer &buf, void *obj) {
      ((::TH2Editor*)obj)->::TH2Editor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TH2Editor

//______________________________________________________________________________
void TLineEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TLineEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TLineEditor(void *p) {
      return  p ? new(p) ::TLineEditor : new ::TLineEditor;
   }
   static void *newArray_TLineEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TLineEditor[nElements] : new ::TLineEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TLineEditor(void *p) {
      delete (static_cast<::TLineEditor*>(p));
   }
   static void deleteArray_TLineEditor(void *p) {
      delete [] (static_cast<::TLineEditor*>(p));
   }
   static void destruct_TLineEditor(void *p) {
      typedef ::TLineEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TLineEditor(TBuffer &buf, void *obj) {
      ((::TLineEditor*)obj)->::TLineEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TLineEditor

//______________________________________________________________________________
void TPadEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPadEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPadEditor(void *p) {
      return  p ? new(p) ::TPadEditor : new ::TPadEditor;
   }
   static void *newArray_TPadEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPadEditor[nElements] : new ::TPadEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPadEditor(void *p) {
      delete (static_cast<::TPadEditor*>(p));
   }
   static void deleteArray_TPadEditor(void *p) {
      delete [] (static_cast<::TPadEditor*>(p));
   }
   static void destruct_TPadEditor(void *p) {
      typedef ::TPadEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPadEditor(TBuffer &buf, void *obj) {
      ((::TPadEditor*)obj)->::TPadEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPadEditor

//______________________________________________________________________________
void TPaveStatsEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPaveStatsEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPaveStatsEditor(void *p) {
      return  p ? new(p) ::TPaveStatsEditor : new ::TPaveStatsEditor;
   }
   static void *newArray_TPaveStatsEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPaveStatsEditor[nElements] : new ::TPaveStatsEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPaveStatsEditor(void *p) {
      delete (static_cast<::TPaveStatsEditor*>(p));
   }
   static void deleteArray_TPaveStatsEditor(void *p) {
      delete [] (static_cast<::TPaveStatsEditor*>(p));
   }
   static void destruct_TPaveStatsEditor(void *p) {
      typedef ::TPaveStatsEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPaveStatsEditor(TBuffer &buf, void *obj) {
      ((::TPaveStatsEditor*)obj)->::TPaveStatsEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPaveStatsEditor

//______________________________________________________________________________
void TPieEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPieEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPieEditor(void *p) {
      return  p ? new(p) ::TPieEditor : new ::TPieEditor;
   }
   static void *newArray_TPieEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPieEditor[nElements] : new ::TPieEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPieEditor(void *p) {
      delete (static_cast<::TPieEditor*>(p));
   }
   static void deleteArray_TPieEditor(void *p) {
      delete [] (static_cast<::TPieEditor*>(p));
   }
   static void destruct_TPieEditor(void *p) {
      typedef ::TPieEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPieEditor(TBuffer &buf, void *obj) {
      ((::TPieEditor*)obj)->::TPieEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPieEditor

//______________________________________________________________________________
void TPieSliceEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPieSliceEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPieSliceEditor(void *p) {
      return  p ? new(p) ::TPieSliceEditor : new ::TPieSliceEditor;
   }
   static void *newArray_TPieSliceEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TPieSliceEditor[nElements] : new ::TPieSliceEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPieSliceEditor(void *p) {
      delete (static_cast<::TPieSliceEditor*>(p));
   }
   static void deleteArray_TPieSliceEditor(void *p) {
      delete [] (static_cast<::TPieSliceEditor*>(p));
   }
   static void destruct_TPieSliceEditor(void *p) {
      typedef ::TPieSliceEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPieSliceEditor(TBuffer &buf, void *obj) {
      ((::TPieSliceEditor*)obj)->::TPieSliceEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPieSliceEditor

//______________________________________________________________________________
void TStyleDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStyleDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStyleDialog(void *p) {
      delete (static_cast<::TStyleDialog*>(p));
   }
   static void deleteArray_TStyleDialog(void *p) {
      delete [] (static_cast<::TStyleDialog*>(p));
   }
   static void destruct_TStyleDialog(void *p) {
      typedef ::TStyleDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStyleDialog(TBuffer &buf, void *obj) {
      ((::TStyleDialog*)obj)->::TStyleDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStyleDialog

//______________________________________________________________________________
void TStyleManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStyleManager.

   TGMainFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStyleManager(void *p) {
      delete (static_cast<::TStyleManager*>(p));
   }
   static void deleteArray_TStyleManager(void *p) {
      delete [] (static_cast<::TStyleManager*>(p));
   }
   static void destruct_TStyleManager(void *p) {
      typedef ::TStyleManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStyleManager(TBuffer &buf, void *obj) {
      ((::TStyleManager*)obj)->::TStyleManager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStyleManager

//______________________________________________________________________________
void TStylePreview::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStylePreview.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TStylePreview(void *p) {
      delete (static_cast<::TStylePreview*>(p));
   }
   static void deleteArray_TStylePreview(void *p) {
      delete [] (static_cast<::TStylePreview*>(p));
   }
   static void destruct_TStylePreview(void *p) {
      typedef ::TStylePreview current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TStylePreview(TBuffer &buf, void *obj) {
      ((::TStylePreview*)obj)->::TStylePreview::Streamer(buf);
   }
} // end of namespace ROOT for class ::TStylePreview

//______________________________________________________________________________
void TTextEditor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTextEditor.

   TGedFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TTextEditor(void *p) {
      return  p ? new(p) ::TTextEditor : new ::TTextEditor;
   }
   static void *newArray_TTextEditor(Long_t nElements, void *p) {
      return p ? new(p) ::TTextEditor[nElements] : new ::TTextEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_TTextEditor(void *p) {
      delete (static_cast<::TTextEditor*>(p));
   }
   static void deleteArray_TTextEditor(void *p) {
      delete [] (static_cast<::TTextEditor*>(p));
   }
   static void destruct_TTextEditor(void *p) {
      typedef ::TTextEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TTextEditor(TBuffer &buf, void *obj) {
      ((::TTextEditor*)obj)->::TTextEditor::Streamer(buf);
   }
} // end of namespace ROOT for class ::TTextEditor

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_libGed() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_libGed) = RecordReadRules_libGed();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_libGed));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_libGed_Impl() {
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
      TROOT::RegisterModule("libGed",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGed_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGed_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGed() {
  TriggerDictionaryInitialization_libGed_Impl();
}
